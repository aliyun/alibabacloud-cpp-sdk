// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EKYCVERIFYRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_EKYCVERIFYRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class EkycVerifyResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EkycVerifyResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(ExtFaceInfo, extFaceInfo_);
      DARABONBA_PTR_TO_JSON(ExtIdInfo, extIdInfo_);
      DARABONBA_PTR_TO_JSON(Passed, passed_);
      DARABONBA_PTR_TO_JSON(SubCode, subCode_);
      DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
    };
    friend void from_json(const Darabonba::Json& j, EkycVerifyResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtFaceInfo, extFaceInfo_);
      DARABONBA_PTR_FROM_JSON(ExtIdInfo, extIdInfo_);
      DARABONBA_PTR_FROM_JSON(Passed, passed_);
      DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
      DARABONBA_PTR_FROM_JSON(TransactionId, transactionId_);
    };
    EkycVerifyResponseBodyResult() = default ;
    EkycVerifyResponseBodyResult(const EkycVerifyResponseBodyResult &) = default ;
    EkycVerifyResponseBodyResult(EkycVerifyResponseBodyResult &&) = default ;
    EkycVerifyResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EkycVerifyResponseBodyResult() = default ;
    EkycVerifyResponseBodyResult& operator=(const EkycVerifyResponseBodyResult &) = default ;
    EkycVerifyResponseBodyResult& operator=(EkycVerifyResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extFaceInfo_ == nullptr
        && return this->extIdInfo_ == nullptr && return this->passed_ == nullptr && return this->subCode_ == nullptr && return this->transactionId_ == nullptr; };
    // extFaceInfo Field Functions 
    bool hasExtFaceInfo() const { return this->extFaceInfo_ != nullptr;};
    void deleteExtFaceInfo() { this->extFaceInfo_ = nullptr;};
    inline string extFaceInfo() const { DARABONBA_PTR_GET_DEFAULT(extFaceInfo_, "") };
    inline EkycVerifyResponseBodyResult& setExtFaceInfo(string extFaceInfo) { DARABONBA_PTR_SET_VALUE(extFaceInfo_, extFaceInfo) };


    // extIdInfo Field Functions 
    bool hasExtIdInfo() const { return this->extIdInfo_ != nullptr;};
    void deleteExtIdInfo() { this->extIdInfo_ = nullptr;};
    inline string extIdInfo() const { DARABONBA_PTR_GET_DEFAULT(extIdInfo_, "") };
    inline EkycVerifyResponseBodyResult& setExtIdInfo(string extIdInfo) { DARABONBA_PTR_SET_VALUE(extIdInfo_, extIdInfo) };


    // passed Field Functions 
    bool hasPassed() const { return this->passed_ != nullptr;};
    void deletePassed() { this->passed_ = nullptr;};
    inline string passed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
    inline EkycVerifyResponseBodyResult& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


    // subCode Field Functions 
    bool hasSubCode() const { return this->subCode_ != nullptr;};
    void deleteSubCode() { this->subCode_ = nullptr;};
    inline string subCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
    inline EkycVerifyResponseBodyResult& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


    // transactionId Field Functions 
    bool hasTransactionId() const { return this->transactionId_ != nullptr;};
    void deleteTransactionId() { this->transactionId_ = nullptr;};
    inline string transactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
    inline EkycVerifyResponseBodyResult& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


  protected:
    // Information about the face liveness verification result. For the JSON format, see the example on the right. For more information, see [ExtFaceInfo](https://www.alibabacloud.com/help/en/ekyc/latest/im1u641gyesiqmbg?spm=a2c63.p38356.0.i18#JJ40j).
    std::shared_ptr<string> extFaceInfo_ = nullptr;
    // Information about the certificate detection result.
    // 
    // For the JSON format, see the example on the right. For more information, see [ExtIdInfo](https://www.alibabacloud.com/help/en/ekyc/latest/im1u641gyesiqmbg?spm=a2c63.p38356.0.i18#iWOBY).
    std::shared_ptr<string> extIdInfo_ = nullptr;
    // The final authentication result. Valid values:
    // 
    // - **Y**: The authentication is passed.
    // 
    // - **N**: The authentication fails.
    std::shared_ptr<string> passed_ = nullptr;
    // A description of the authentication result. For more information, see [Error codes for ResultObject.SubCode](https://www.alibabacloud.com/help/en/ekyc/latest/im1u641gyesiqmbg?spm=a2c63.p38356.0.i18#HCGLb).
    std::shared_ptr<string> subCode_ = nullptr;
    // The transaction ID.
    std::shared_ptr<string> transactionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
