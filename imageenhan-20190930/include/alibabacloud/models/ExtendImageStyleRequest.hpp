// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXTENDIMAGESTYLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXTENDIMAGESTYLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class ExtendImageStyleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExtendImageStyleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MajorUrl, majorUrl_);
      DARABONBA_PTR_TO_JSON(StyleUrl, styleUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ExtendImageStyleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MajorUrl, majorUrl_);
      DARABONBA_PTR_FROM_JSON(StyleUrl, styleUrl_);
    };
    ExtendImageStyleRequest() = default ;
    ExtendImageStyleRequest(const ExtendImageStyleRequest &) = default ;
    ExtendImageStyleRequest(ExtendImageStyleRequest &&) = default ;
    ExtendImageStyleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExtendImageStyleRequest() = default ;
    ExtendImageStyleRequest& operator=(const ExtendImageStyleRequest &) = default ;
    ExtendImageStyleRequest& operator=(ExtendImageStyleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->majorUrl_ != nullptr
        && this->styleUrl_ != nullptr; };
    // majorUrl Field Functions 
    bool hasMajorUrl() const { return this->majorUrl_ != nullptr;};
    void deleteMajorUrl() { this->majorUrl_ = nullptr;};
    inline string majorUrl() const { DARABONBA_PTR_GET_DEFAULT(majorUrl_, "") };
    inline ExtendImageStyleRequest& setMajorUrl(string majorUrl) { DARABONBA_PTR_SET_VALUE(majorUrl_, majorUrl) };


    // styleUrl Field Functions 
    bool hasStyleUrl() const { return this->styleUrl_ != nullptr;};
    void deleteStyleUrl() { this->styleUrl_ = nullptr;};
    inline string styleUrl() const { DARABONBA_PTR_GET_DEFAULT(styleUrl_, "") };
    inline ExtendImageStyleRequest& setStyleUrl(string styleUrl) { DARABONBA_PTR_SET_VALUE(styleUrl_, styleUrl) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> majorUrl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> styleUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
