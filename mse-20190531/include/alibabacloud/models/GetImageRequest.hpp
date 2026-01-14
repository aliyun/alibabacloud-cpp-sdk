// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
    };
    GetImageRequest() = default ;
    GetImageRequest(const GetImageRequest &) = default ;
    GetImageRequest(GetImageRequest &&) = default ;
    GetImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageRequest() = default ;
    GetImageRequest& operator=(const GetImageRequest &) = default ;
    GetImageRequest& operator=(GetImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->versionCode_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline GetImageRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string getVersionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline GetImageRequest& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The version number of the current instance.
    // 
    // This parameter is required.
    shared_ptr<string> versionCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
