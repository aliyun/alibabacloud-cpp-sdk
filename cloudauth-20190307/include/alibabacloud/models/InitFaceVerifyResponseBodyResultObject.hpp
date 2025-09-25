// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITFACEVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_INITFACEVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class InitFaceVerifyResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitFaceVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_TO_JSON(CertifyUrl, certifyUrl_);
    };
    friend void from_json(const Darabonba::Json& j, InitFaceVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_FROM_JSON(CertifyUrl, certifyUrl_);
    };
    InitFaceVerifyResponseBodyResultObject() = default ;
    InitFaceVerifyResponseBodyResultObject(const InitFaceVerifyResponseBodyResultObject &) = default ;
    InitFaceVerifyResponseBodyResultObject(InitFaceVerifyResponseBodyResultObject &&) = default ;
    InitFaceVerifyResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitFaceVerifyResponseBodyResultObject() = default ;
    InitFaceVerifyResponseBodyResultObject& operator=(const InitFaceVerifyResponseBodyResultObject &) = default ;
    InitFaceVerifyResponseBodyResultObject& operator=(InitFaceVerifyResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certifyId_ != nullptr
        && this->certifyUrl_ != nullptr; };
    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string certifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline InitFaceVerifyResponseBodyResultObject& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    // certifyUrl Field Functions 
    bool hasCertifyUrl() const { return this->certifyUrl_ != nullptr;};
    void deleteCertifyUrl() { this->certifyUrl_ = nullptr;};
    inline string certifyUrl() const { DARABONBA_PTR_GET_DEFAULT(certifyUrl_, "") };
    inline InitFaceVerifyResponseBodyResultObject& setCertifyUrl(string certifyUrl) { DARABONBA_PTR_SET_VALUE(certifyUrl_, certifyUrl) };


  protected:
    // Unique identifier for real-person authentication.
    std::shared_ptr<string> certifyId_ = nullptr;
    // URL for real-person authentication in a Web browser, which will redirect according to the ReturnUrl parameter after authentication.
    // 
    // >Notice: 
    // 
    // - The CertifyUrl returned by the initialization interface is valid for **30 minutes and can only be used once**. Please use it within the validity period to avoid reuse.
    // - This parameter requires the correct input of **MetaInfo** to return a CertifyUrl that matches the client. If you cannot obtain it, please check whether **MetaInfo** and other input parameters are correct.
    // 
    // - The domain name of this URL may change with service updates. To ensure normal service availability, it is recommended not to apply access control to this domain name.
    // 
    // - When redirecting in the browser, try not to use incognito mode or modify the URL, as this may result in a **signature error**.
    std::shared_ptr<string> certifyUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
