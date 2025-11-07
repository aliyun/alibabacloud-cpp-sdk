// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTRASTFACEVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_CONTRASTFACEVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class ContrastFaceVerifyResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContrastFaceVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_TO_JSON(IdentityInfo, identityInfo_);
      DARABONBA_PTR_TO_JSON(MaterialInfo, materialInfo_);
      DARABONBA_PTR_TO_JSON(Passed, passed_);
      DARABONBA_PTR_TO_JSON(SubCode, subCode_);
    };
    friend void from_json(const Darabonba::Json& j, ContrastFaceVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_FROM_JSON(IdentityInfo, identityInfo_);
      DARABONBA_PTR_FROM_JSON(MaterialInfo, materialInfo_);
      DARABONBA_PTR_FROM_JSON(Passed, passed_);
      DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
    };
    ContrastFaceVerifyResponseBodyResultObject() = default ;
    ContrastFaceVerifyResponseBodyResultObject(const ContrastFaceVerifyResponseBodyResultObject &) = default ;
    ContrastFaceVerifyResponseBodyResultObject(ContrastFaceVerifyResponseBodyResultObject &&) = default ;
    ContrastFaceVerifyResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContrastFaceVerifyResponseBodyResultObject() = default ;
    ContrastFaceVerifyResponseBodyResultObject& operator=(const ContrastFaceVerifyResponseBodyResultObject &) = default ;
    ContrastFaceVerifyResponseBodyResultObject& operator=(ContrastFaceVerifyResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certifyId_ == nullptr
        && return this->identityInfo_ == nullptr && return this->materialInfo_ == nullptr && return this->passed_ == nullptr && return this->subCode_ == nullptr; };
    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string certifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline ContrastFaceVerifyResponseBodyResultObject& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    // identityInfo Field Functions 
    bool hasIdentityInfo() const { return this->identityInfo_ != nullptr;};
    void deleteIdentityInfo() { this->identityInfo_ = nullptr;};
    inline string identityInfo() const { DARABONBA_PTR_GET_DEFAULT(identityInfo_, "") };
    inline ContrastFaceVerifyResponseBodyResultObject& setIdentityInfo(string identityInfo) { DARABONBA_PTR_SET_VALUE(identityInfo_, identityInfo) };


    // materialInfo Field Functions 
    bool hasMaterialInfo() const { return this->materialInfo_ != nullptr;};
    void deleteMaterialInfo() { this->materialInfo_ = nullptr;};
    inline string materialInfo() const { DARABONBA_PTR_GET_DEFAULT(materialInfo_, "") };
    inline ContrastFaceVerifyResponseBodyResultObject& setMaterialInfo(string materialInfo) { DARABONBA_PTR_SET_VALUE(materialInfo_, materialInfo) };


    // passed Field Functions 
    bool hasPassed() const { return this->passed_ != nullptr;};
    void deletePassed() { this->passed_ = nullptr;};
    inline string passed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
    inline ContrastFaceVerifyResponseBodyResultObject& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


    // subCode Field Functions 
    bool hasSubCode() const { return this->subCode_ != nullptr;};
    void deleteSubCode() { this->subCode_ = nullptr;};
    inline string subCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
    inline ContrastFaceVerifyResponseBodyResultObject& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


  protected:
    // Unique identifier for the real-person verification request.
    std::shared_ptr<string> certifyId_ = nullptr;
    // Information about the authenticated entity, which is usually empty in general authentication scenarios.
    std::shared_ptr<string> identityInfo_ = nullptr;
    // Attachment information of the authenticated entity, mainly image materials, in JSON format, as follows.
    std::shared_ptr<string> materialInfo_ = nullptr;
    // Whether it passed, T for pass, F for fail.
    std::shared_ptr<string> passed_ = nullptr;
    // Description of the authentication result. For details, see the SubCode explanation below.
    std::shared_ptr<string> subCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
