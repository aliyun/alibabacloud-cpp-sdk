// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEDYNAMICIMAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GENERATEDYNAMICIMAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class GenerateDynamicImageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateDynamicImageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateDynamicImageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GenerateDynamicImageResponseBodyData() = default ;
    GenerateDynamicImageResponseBodyData(const GenerateDynamicImageResponseBodyData &) = default ;
    GenerateDynamicImageResponseBodyData(GenerateDynamicImageResponseBodyData &&) = default ;
    GenerateDynamicImageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateDynamicImageResponseBodyData() = default ;
    GenerateDynamicImageResponseBodyData& operator=(const GenerateDynamicImageResponseBodyData &) = default ;
    GenerateDynamicImageResponseBodyData& operator=(GenerateDynamicImageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->url_ != nullptr; };
    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GenerateDynamicImageResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
