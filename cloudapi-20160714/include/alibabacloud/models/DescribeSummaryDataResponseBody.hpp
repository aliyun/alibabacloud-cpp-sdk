// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUMMARYDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUMMARYDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeSummaryDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSummaryDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireInstanceNum, expireInstanceNum_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UsageApiNum, usageApiNum_);
      DARABONBA_PTR_TO_JSON(UsageGroupNum, usageGroupNum_);
      DARABONBA_PTR_TO_JSON(UsageInstanceNum, usageInstanceNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSummaryDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireInstanceNum, expireInstanceNum_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UsageApiNum, usageApiNum_);
      DARABONBA_PTR_FROM_JSON(UsageGroupNum, usageGroupNum_);
      DARABONBA_PTR_FROM_JSON(UsageInstanceNum, usageInstanceNum_);
    };
    DescribeSummaryDataResponseBody() = default ;
    DescribeSummaryDataResponseBody(const DescribeSummaryDataResponseBody &) = default ;
    DescribeSummaryDataResponseBody(DescribeSummaryDataResponseBody &&) = default ;
    DescribeSummaryDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSummaryDataResponseBody() = default ;
    DescribeSummaryDataResponseBody& operator=(const DescribeSummaryDataResponseBody &) = default ;
    DescribeSummaryDataResponseBody& operator=(DescribeSummaryDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireInstanceNum_ == nullptr
        && this->region_ == nullptr && this->requestId_ == nullptr && this->usageApiNum_ == nullptr && this->usageGroupNum_ == nullptr && this->usageInstanceNum_ == nullptr; };
    // expireInstanceNum Field Functions 
    bool hasExpireInstanceNum() const { return this->expireInstanceNum_ != nullptr;};
    void deleteExpireInstanceNum() { this->expireInstanceNum_ = nullptr;};
    inline int32_t getExpireInstanceNum() const { DARABONBA_PTR_GET_DEFAULT(expireInstanceNum_, 0) };
    inline DescribeSummaryDataResponseBody& setExpireInstanceNum(int32_t expireInstanceNum) { DARABONBA_PTR_SET_VALUE(expireInstanceNum_, expireInstanceNum) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeSummaryDataResponseBody& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSummaryDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usageApiNum Field Functions 
    bool hasUsageApiNum() const { return this->usageApiNum_ != nullptr;};
    void deleteUsageApiNum() { this->usageApiNum_ = nullptr;};
    inline int32_t getUsageApiNum() const { DARABONBA_PTR_GET_DEFAULT(usageApiNum_, 0) };
    inline DescribeSummaryDataResponseBody& setUsageApiNum(int32_t usageApiNum) { DARABONBA_PTR_SET_VALUE(usageApiNum_, usageApiNum) };


    // usageGroupNum Field Functions 
    bool hasUsageGroupNum() const { return this->usageGroupNum_ != nullptr;};
    void deleteUsageGroupNum() { this->usageGroupNum_ = nullptr;};
    inline int32_t getUsageGroupNum() const { DARABONBA_PTR_GET_DEFAULT(usageGroupNum_, 0) };
    inline DescribeSummaryDataResponseBody& setUsageGroupNum(int32_t usageGroupNum) { DARABONBA_PTR_SET_VALUE(usageGroupNum_, usageGroupNum) };


    // usageInstanceNum Field Functions 
    bool hasUsageInstanceNum() const { return this->usageInstanceNum_ != nullptr;};
    void deleteUsageInstanceNum() { this->usageInstanceNum_ = nullptr;};
    inline int32_t getUsageInstanceNum() const { DARABONBA_PTR_GET_DEFAULT(usageInstanceNum_, 0) };
    inline DescribeSummaryDataResponseBody& setUsageInstanceNum(int32_t usageInstanceNum) { DARABONBA_PTR_SET_VALUE(usageInstanceNum_, usageInstanceNum) };


  protected:
    // The number of subscription dedicated instances that expire in 14 days or less.
    shared_ptr<int32_t> expireInstanceNum_ {};
    // The region ID.
    shared_ptr<string> region_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of APIs.
    shared_ptr<int32_t> usageApiNum_ {};
    // The number of API groups.
    shared_ptr<int32_t> usageGroupNum_ {};
    // The number of running dedicated instances.
    shared_ptr<int32_t> usageInstanceNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
