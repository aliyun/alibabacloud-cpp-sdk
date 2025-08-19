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
    std::shared_ptr<string> certifyId_ = nullptr;
    std::shared_ptr<string> certifyUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
