// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXTENDIMAGESTYLERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_EXTENDIMAGESTYLERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class ExtendImageStyleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExtendImageStyleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MajorUrl, majorUrl_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ExtendImageStyleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MajorUrl, majorUrl_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    ExtendImageStyleResponseBodyData() = default ;
    ExtendImageStyleResponseBodyData(const ExtendImageStyleResponseBodyData &) = default ;
    ExtendImageStyleResponseBodyData(ExtendImageStyleResponseBodyData &&) = default ;
    ExtendImageStyleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExtendImageStyleResponseBodyData() = default ;
    ExtendImageStyleResponseBodyData& operator=(const ExtendImageStyleResponseBodyData &) = default ;
    ExtendImageStyleResponseBodyData& operator=(ExtendImageStyleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->majorUrl_ != nullptr
        && this->url_ != nullptr; };
    // majorUrl Field Functions 
    bool hasMajorUrl() const { return this->majorUrl_ != nullptr;};
    void deleteMajorUrl() { this->majorUrl_ = nullptr;};
    inline string majorUrl() const { DARABONBA_PTR_GET_DEFAULT(majorUrl_, "") };
    inline ExtendImageStyleResponseBodyData& setMajorUrl(string majorUrl) { DARABONBA_PTR_SET_VALUE(majorUrl_, majorUrl) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ExtendImageStyleResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> majorUrl_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
