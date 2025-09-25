// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIVENESSFACEVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_LIVENESSFACEVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class LivenessFaceVerifyResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LivenessFaceVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_TO_JSON(MaterialInfo, materialInfo_);
      DARABONBA_PTR_TO_JSON(Passed, passed_);
      DARABONBA_PTR_TO_JSON(SubCode, subCode_);
    };
    friend void from_json(const Darabonba::Json& j, LivenessFaceVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_FROM_JSON(MaterialInfo, materialInfo_);
      DARABONBA_PTR_FROM_JSON(Passed, passed_);
      DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
    };
    LivenessFaceVerifyResponseBodyResultObject() = default ;
    LivenessFaceVerifyResponseBodyResultObject(const LivenessFaceVerifyResponseBodyResultObject &) = default ;
    LivenessFaceVerifyResponseBodyResultObject(LivenessFaceVerifyResponseBodyResultObject &&) = default ;
    LivenessFaceVerifyResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LivenessFaceVerifyResponseBodyResultObject() = default ;
    LivenessFaceVerifyResponseBodyResultObject& operator=(const LivenessFaceVerifyResponseBodyResultObject &) = default ;
    LivenessFaceVerifyResponseBodyResultObject& operator=(LivenessFaceVerifyResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certifyId_ != nullptr
        && this->materialInfo_ != nullptr && this->passed_ != nullptr && this->subCode_ != nullptr; };
    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string certifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline LivenessFaceVerifyResponseBodyResultObject& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    // materialInfo Field Functions 
    bool hasMaterialInfo() const { return this->materialInfo_ != nullptr;};
    void deleteMaterialInfo() { this->materialInfo_ = nullptr;};
    inline string materialInfo() const { DARABONBA_PTR_GET_DEFAULT(materialInfo_, "") };
    inline LivenessFaceVerifyResponseBodyResultObject& setMaterialInfo(string materialInfo) { DARABONBA_PTR_SET_VALUE(materialInfo_, materialInfo) };


    // passed Field Functions 
    bool hasPassed() const { return this->passed_ != nullptr;};
    void deletePassed() { this->passed_ = nullptr;};
    inline string passed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
    inline LivenessFaceVerifyResponseBodyResultObject& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


    // subCode Field Functions 
    bool hasSubCode() const { return this->subCode_ != nullptr;};
    void deleteSubCode() { this->subCode_ = nullptr;};
    inline string subCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
    inline LivenessFaceVerifyResponseBodyResultObject& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


  protected:
    // Unique identifier for the real-person authentication request.
    std::shared_ptr<string> certifyId_ = nullptr;
    // Attachment information of the face authentication subject, including data such as face quality, face attack, face or OCR image, and intent verification.
    std::shared_ptr<string> materialInfo_ = nullptr;
    // Authentication result, values:
    // 
    // - T: Passed
    // 
    // - F: Not passed
    std::shared_ptr<string> passed_ = nullptr;
    // Authentication result code.
    std::shared_ptr<string> subCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
