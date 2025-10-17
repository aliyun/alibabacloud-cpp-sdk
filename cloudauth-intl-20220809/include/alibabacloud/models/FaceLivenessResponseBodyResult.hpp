// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACELIVENESSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_FACELIVENESSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FaceLivenessResponseBodyResultExtFaceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class FaceLivenessResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceLivenessResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(ExtFaceInfo, extFaceInfo_);
      DARABONBA_PTR_TO_JSON(Passed, passed_);
      DARABONBA_PTR_TO_JSON(SubCode, subCode_);
      DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
    };
    friend void from_json(const Darabonba::Json& j, FaceLivenessResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtFaceInfo, extFaceInfo_);
      DARABONBA_PTR_FROM_JSON(Passed, passed_);
      DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
      DARABONBA_PTR_FROM_JSON(TransactionId, transactionId_);
    };
    FaceLivenessResponseBodyResult() = default ;
    FaceLivenessResponseBodyResult(const FaceLivenessResponseBodyResult &) = default ;
    FaceLivenessResponseBodyResult(FaceLivenessResponseBodyResult &&) = default ;
    FaceLivenessResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceLivenessResponseBodyResult() = default ;
    FaceLivenessResponseBodyResult& operator=(const FaceLivenessResponseBodyResult &) = default ;
    FaceLivenessResponseBodyResult& operator=(FaceLivenessResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extFaceInfo_ == nullptr
        && return this->passed_ == nullptr && return this->subCode_ == nullptr && return this->transactionId_ == nullptr; };
    // extFaceInfo Field Functions 
    bool hasExtFaceInfo() const { return this->extFaceInfo_ != nullptr;};
    void deleteExtFaceInfo() { this->extFaceInfo_ = nullptr;};
    inline const Models::FaceLivenessResponseBodyResultExtFaceInfo & extFaceInfo() const { DARABONBA_PTR_GET_CONST(extFaceInfo_, Models::FaceLivenessResponseBodyResultExtFaceInfo) };
    inline Models::FaceLivenessResponseBodyResultExtFaceInfo extFaceInfo() { DARABONBA_PTR_GET(extFaceInfo_, Models::FaceLivenessResponseBodyResultExtFaceInfo) };
    inline FaceLivenessResponseBodyResult& setExtFaceInfo(const Models::FaceLivenessResponseBodyResultExtFaceInfo & extFaceInfo) { DARABONBA_PTR_SET_VALUE(extFaceInfo_, extFaceInfo) };
    inline FaceLivenessResponseBodyResult& setExtFaceInfo(Models::FaceLivenessResponseBodyResultExtFaceInfo && extFaceInfo) { DARABONBA_PTR_SET_RVALUE(extFaceInfo_, extFaceInfo) };


    // passed Field Functions 
    bool hasPassed() const { return this->passed_ != nullptr;};
    void deletePassed() { this->passed_ = nullptr;};
    inline string passed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
    inline FaceLivenessResponseBodyResult& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


    // subCode Field Functions 
    bool hasSubCode() const { return this->subCode_ != nullptr;};
    void deleteSubCode() { this->subCode_ = nullptr;};
    inline string subCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
    inline FaceLivenessResponseBodyResult& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


    // transactionId Field Functions 
    bool hasTransactionId() const { return this->transactionId_ != nullptr;};
    void deleteTransactionId() { this->transactionId_ = nullptr;};
    inline string transactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
    inline FaceLivenessResponseBodyResult& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


  protected:
    // The results of the passive liveness detection. The value is in the JSON format. For more information, see [ExtFaceInfo](https://www.alibabacloud.com/help/en/ekyc/latest/cadqvlft48igbpdc?spm=a2c63.p38356.0.i54#5ff42f7274agz).
    std::shared_ptr<Models::FaceLivenessResponseBodyResultExtFaceInfo> extFaceInfo_ = nullptr;
    // The authentication result. Valid values:
    // 
    // - Y: The authentication is passed.
    // 
    // - N: The authentication is not passed.
    std::shared_ptr<string> passed_ = nullptr;
    // The code that corresponds to the verification result. For more information, see [ResultObject.SubCode error codes](https://www.alibabacloud.com/help/en/ekyc/latest/cadqvlft48igbpdc?spm=a2c63.p38356.0.i54#5ff3e16174tl2).
    std::shared_ptr<string> subCode_ = nullptr;
    // The transaction ID.
    std::shared_ptr<string> transactionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
