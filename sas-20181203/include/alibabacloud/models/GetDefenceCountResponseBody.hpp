// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEFENCECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEFENCECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetDefenceCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDefenceCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DefenceCount15Days, defenceCount15Days_);
      DARABONBA_PTR_TO_JSON(DefenceCountTotal, defenceCountTotal_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuspiciousDealtCount, suspiciousDealtCount_);
      DARABONBA_PTR_TO_JSON(TamperProof15Days, tamperProof15Days_);
      DARABONBA_PTR_TO_JSON(TamperProofTotal, tamperProofTotal_);
    };
    friend void from_json(const Darabonba::Json& j, GetDefenceCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenceCount15Days, defenceCount15Days_);
      DARABONBA_PTR_FROM_JSON(DefenceCountTotal, defenceCountTotal_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuspiciousDealtCount, suspiciousDealtCount_);
      DARABONBA_PTR_FROM_JSON(TamperProof15Days, tamperProof15Days_);
      DARABONBA_PTR_FROM_JSON(TamperProofTotal, tamperProofTotal_);
    };
    GetDefenceCountResponseBody() = default ;
    GetDefenceCountResponseBody(const GetDefenceCountResponseBody &) = default ;
    GetDefenceCountResponseBody(GetDefenceCountResponseBody &&) = default ;
    GetDefenceCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDefenceCountResponseBody() = default ;
    GetDefenceCountResponseBody& operator=(const GetDefenceCountResponseBody &) = default ;
    GetDefenceCountResponseBody& operator=(GetDefenceCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defenceCount15Days_ != nullptr
        && this->defenceCountTotal_ != nullptr && this->requestId_ != nullptr && this->suspiciousDealtCount_ != nullptr && this->tamperProof15Days_ != nullptr && this->tamperProofTotal_ != nullptr; };
    // defenceCount15Days Field Functions 
    bool hasDefenceCount15Days() const { return this->defenceCount15Days_ != nullptr;};
    void deleteDefenceCount15Days() { this->defenceCount15Days_ = nullptr;};
    inline int32_t defenceCount15Days() const { DARABONBA_PTR_GET_DEFAULT(defenceCount15Days_, 0) };
    inline GetDefenceCountResponseBody& setDefenceCount15Days(int32_t defenceCount15Days) { DARABONBA_PTR_SET_VALUE(defenceCount15Days_, defenceCount15Days) };


    // defenceCountTotal Field Functions 
    bool hasDefenceCountTotal() const { return this->defenceCountTotal_ != nullptr;};
    void deleteDefenceCountTotal() { this->defenceCountTotal_ = nullptr;};
    inline int32_t defenceCountTotal() const { DARABONBA_PTR_GET_DEFAULT(defenceCountTotal_, 0) };
    inline GetDefenceCountResponseBody& setDefenceCountTotal(int32_t defenceCountTotal) { DARABONBA_PTR_SET_VALUE(defenceCountTotal_, defenceCountTotal) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDefenceCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // suspiciousDealtCount Field Functions 
    bool hasSuspiciousDealtCount() const { return this->suspiciousDealtCount_ != nullptr;};
    void deleteSuspiciousDealtCount() { this->suspiciousDealtCount_ = nullptr;};
    inline int32_t suspiciousDealtCount() const { DARABONBA_PTR_GET_DEFAULT(suspiciousDealtCount_, 0) };
    inline GetDefenceCountResponseBody& setSuspiciousDealtCount(int32_t suspiciousDealtCount) { DARABONBA_PTR_SET_VALUE(suspiciousDealtCount_, suspiciousDealtCount) };


    // tamperProof15Days Field Functions 
    bool hasTamperProof15Days() const { return this->tamperProof15Days_ != nullptr;};
    void deleteTamperProof15Days() { this->tamperProof15Days_ = nullptr;};
    inline int32_t tamperProof15Days() const { DARABONBA_PTR_GET_DEFAULT(tamperProof15Days_, 0) };
    inline GetDefenceCountResponseBody& setTamperProof15Days(int32_t tamperProof15Days) { DARABONBA_PTR_SET_VALUE(tamperProof15Days_, tamperProof15Days) };


    // tamperProofTotal Field Functions 
    bool hasTamperProofTotal() const { return this->tamperProofTotal_ != nullptr;};
    void deleteTamperProofTotal() { this->tamperProofTotal_ = nullptr;};
    inline int32_t tamperProofTotal() const { DARABONBA_PTR_GET_DEFAULT(tamperProofTotal_, 0) };
    inline GetDefenceCountResponseBody& setTamperProofTotal(int32_t tamperProofTotal) { DARABONBA_PTR_SET_VALUE(tamperProofTotal_, tamperProofTotal) };


  protected:
    // The number of handled alerts of the precise defense type in the last 15 days.
    std::shared_ptr<int32_t> defenceCount15Days_ = nullptr;
    // The number of handled alerts of the precision defense type.
    std::shared_ptr<int32_t> defenceCountTotal_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of handled security alerts of Cloud Security Center.
    std::shared_ptr<int32_t> suspiciousDealtCount_ = nullptr;
    // The number of handled alerts of the web tamper proofing type in the last 15 days.
    std::shared_ptr<int32_t> tamperProof15Days_ = nullptr;
    // The number of handled alerts of the web tamper proofing type.
    std::shared_ptr<int32_t> tamperProofTotal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
