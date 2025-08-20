// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPOTAGSCANSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREPOTAGSCANSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetRepoTagScanSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRepoTagScanSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HighSeverity, highSeverity_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(LowSeverity, lowSeverity_);
      DARABONBA_PTR_TO_JSON(MediumSeverity, mediumSeverity_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalSeverity, totalSeverity_);
      DARABONBA_PTR_TO_JSON(UnknownSeverity, unknownSeverity_);
    };
    friend void from_json(const Darabonba::Json& j, GetRepoTagScanSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HighSeverity, highSeverity_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(LowSeverity, lowSeverity_);
      DARABONBA_PTR_FROM_JSON(MediumSeverity, mediumSeverity_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalSeverity, totalSeverity_);
      DARABONBA_PTR_FROM_JSON(UnknownSeverity, unknownSeverity_);
    };
    GetRepoTagScanSummaryResponseBody() = default ;
    GetRepoTagScanSummaryResponseBody(const GetRepoTagScanSummaryResponseBody &) = default ;
    GetRepoTagScanSummaryResponseBody(GetRepoTagScanSummaryResponseBody &&) = default ;
    GetRepoTagScanSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRepoTagScanSummaryResponseBody() = default ;
    GetRepoTagScanSummaryResponseBody& operator=(const GetRepoTagScanSummaryResponseBody &) = default ;
    GetRepoTagScanSummaryResponseBody& operator=(GetRepoTagScanSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->highSeverity_ != nullptr && this->isSuccess_ != nullptr && this->lowSeverity_ != nullptr && this->mediumSeverity_ != nullptr && this->requestId_ != nullptr
        && this->totalSeverity_ != nullptr && this->unknownSeverity_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRepoTagScanSummaryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // highSeverity Field Functions 
    bool hasHighSeverity() const { return this->highSeverity_ != nullptr;};
    void deleteHighSeverity() { this->highSeverity_ = nullptr;};
    inline int32_t highSeverity() const { DARABONBA_PTR_GET_DEFAULT(highSeverity_, 0) };
    inline GetRepoTagScanSummaryResponseBody& setHighSeverity(int32_t highSeverity) { DARABONBA_PTR_SET_VALUE(highSeverity_, highSeverity) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetRepoTagScanSummaryResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // lowSeverity Field Functions 
    bool hasLowSeverity() const { return this->lowSeverity_ != nullptr;};
    void deleteLowSeverity() { this->lowSeverity_ = nullptr;};
    inline int32_t lowSeverity() const { DARABONBA_PTR_GET_DEFAULT(lowSeverity_, 0) };
    inline GetRepoTagScanSummaryResponseBody& setLowSeverity(int32_t lowSeverity) { DARABONBA_PTR_SET_VALUE(lowSeverity_, lowSeverity) };


    // mediumSeverity Field Functions 
    bool hasMediumSeverity() const { return this->mediumSeverity_ != nullptr;};
    void deleteMediumSeverity() { this->mediumSeverity_ = nullptr;};
    inline int32_t mediumSeverity() const { DARABONBA_PTR_GET_DEFAULT(mediumSeverity_, 0) };
    inline GetRepoTagScanSummaryResponseBody& setMediumSeverity(int32_t mediumSeverity) { DARABONBA_PTR_SET_VALUE(mediumSeverity_, mediumSeverity) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRepoTagScanSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalSeverity Field Functions 
    bool hasTotalSeverity() const { return this->totalSeverity_ != nullptr;};
    void deleteTotalSeverity() { this->totalSeverity_ = nullptr;};
    inline int32_t totalSeverity() const { DARABONBA_PTR_GET_DEFAULT(totalSeverity_, 0) };
    inline GetRepoTagScanSummaryResponseBody& setTotalSeverity(int32_t totalSeverity) { DARABONBA_PTR_SET_VALUE(totalSeverity_, totalSeverity) };


    // unknownSeverity Field Functions 
    bool hasUnknownSeverity() const { return this->unknownSeverity_ != nullptr;};
    void deleteUnknownSeverity() { this->unknownSeverity_ = nullptr;};
    inline int32_t unknownSeverity() const { DARABONBA_PTR_GET_DEFAULT(unknownSeverity_, 0) };
    inline GetRepoTagScanSummaryResponseBody& setUnknownSeverity(int32_t unknownSeverity) { DARABONBA_PTR_SET_VALUE(unknownSeverity_, unknownSeverity) };


  protected:
    // The number of medium-severity vulnerabilities.
    std::shared_ptr<string> code_ = nullptr;
    // The number of low-severity vulnerabilities.
    std::shared_ptr<int32_t> highSeverity_ = nullptr;
    // The number of high-severity vulnerabilities.
    std::shared_ptr<bool> isSuccess_ = nullptr;
    std::shared_ptr<int32_t> lowSeverity_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   `true`: The request is successful.
    // *   `false`: The request fails.
    std::shared_ptr<int32_t> mediumSeverity_ = nullptr;
    // The total number of vulnerabilities detected on images.
    std::shared_ptr<string> requestId_ = nullptr;
    // The return value.
    std::shared_ptr<int32_t> totalSeverity_ = nullptr;
    // The ID of the request.
    std::shared_ptr<int32_t> unknownSeverity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
