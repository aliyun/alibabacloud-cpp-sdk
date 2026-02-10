// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITELISTEFFECTIVEASSETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITELISTEFFECTIVEASSETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWhiteListEffectiveAssetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteListEffectiveAssetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Assets, assets_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteListEffectiveAssetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Assets, assets_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeWhiteListEffectiveAssetsResponseBody() = default ;
    DescribeWhiteListEffectiveAssetsResponseBody(const DescribeWhiteListEffectiveAssetsResponseBody &) = default ;
    DescribeWhiteListEffectiveAssetsResponseBody(DescribeWhiteListEffectiveAssetsResponseBody &&) = default ;
    DescribeWhiteListEffectiveAssetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteListEffectiveAssetsResponseBody() = default ;
    DescribeWhiteListEffectiveAssetsResponseBody& operator=(const DescribeWhiteListEffectiveAssetsResponseBody &) = default ;
    DescribeWhiteListEffectiveAssetsResponseBody& operator=(DescribeWhiteListEffectiveAssetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Assets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Assets& obj) { 
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(MachineName, machineName_);
        DARABONBA_PTR_TO_JSON(ProcessMethod, processMethod_);
        DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
        DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
        DARABONBA_PTR_TO_JSON(SuspiciousEventCount, suspiciousEventCount_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, Assets& obj) { 
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(MachineName, machineName_);
        DARABONBA_PTR_FROM_JSON(ProcessMethod, processMethod_);
        DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
        DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
        DARABONBA_PTR_FROM_JSON(SuspiciousEventCount, suspiciousEventCount_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      Assets() = default ;
      Assets(const Assets &) = default ;
      Assets(Assets &&) = default ;
      Assets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Assets() = default ;
      Assets& operator=(const Assets &) = default ;
      Assets& operator=(Assets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->internetIp_ == nullptr
        && this->intranetIp_ == nullptr && this->machineName_ == nullptr && this->processMethod_ == nullptr && this->strategyId_ == nullptr && this->strategyName_ == nullptr
        && this->suspiciousEventCount_ == nullptr && this->uuid_ == nullptr; };
      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline Assets& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline Assets& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // machineName Field Functions 
      bool hasMachineName() const { return this->machineName_ != nullptr;};
      void deleteMachineName() { this->machineName_ = nullptr;};
      inline string getMachineName() const { DARABONBA_PTR_GET_DEFAULT(machineName_, "") };
      inline Assets& setMachineName(string machineName) { DARABONBA_PTR_SET_VALUE(machineName_, machineName) };


      // processMethod Field Functions 
      bool hasProcessMethod() const { return this->processMethod_ != nullptr;};
      void deleteProcessMethod() { this->processMethod_ = nullptr;};
      inline int32_t getProcessMethod() const { DARABONBA_PTR_GET_DEFAULT(processMethod_, 0) };
      inline Assets& setProcessMethod(int32_t processMethod) { DARABONBA_PTR_SET_VALUE(processMethod_, processMethod) };


      // strategyId Field Functions 
      bool hasStrategyId() const { return this->strategyId_ != nullptr;};
      void deleteStrategyId() { this->strategyId_ = nullptr;};
      inline int64_t getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
      inline Assets& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


      // strategyName Field Functions 
      bool hasStrategyName() const { return this->strategyName_ != nullptr;};
      void deleteStrategyName() { this->strategyName_ = nullptr;};
      inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
      inline Assets& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


      // suspiciousEventCount Field Functions 
      bool hasSuspiciousEventCount() const { return this->suspiciousEventCount_ != nullptr;};
      void deleteSuspiciousEventCount() { this->suspiciousEventCount_ = nullptr;};
      inline int32_t getSuspiciousEventCount() const { DARABONBA_PTR_GET_DEFAULT(suspiciousEventCount_, 0) };
      inline Assets& setSuspiciousEventCount(int32_t suspiciousEventCount) { DARABONBA_PTR_SET_VALUE(suspiciousEventCount_, suspiciousEventCount) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Assets& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The public IP address of the server.
      shared_ptr<string> internetIp_ {};
      // The private IP address.
      shared_ptr<string> intranetIp_ {};
      // The name of the server.
      shared_ptr<string> machineName_ {};
      // The exception handling mode. Valid values:
      // 
      // *   **0**: unhandled
      // *   **1**: alerted
      // *   **2**: blocked
      shared_ptr<int32_t> processMethod_ {};
      // The ID of the policy.
      shared_ptr<int64_t> strategyId_ {};
      // The name of the policy.
      shared_ptr<string> strategyName_ {};
      // The number of **untrusted programs** on the server.
      shared_ptr<int32_t> suspiciousEventCount_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->assets_ == nullptr
        && this->count_ == nullptr && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // assets Field Functions 
    bool hasAssets() const { return this->assets_ != nullptr;};
    void deleteAssets() { this->assets_ = nullptr;};
    inline const vector<DescribeWhiteListEffectiveAssetsResponseBody::Assets> & getAssets() const { DARABONBA_PTR_GET_CONST(assets_, vector<DescribeWhiteListEffectiveAssetsResponseBody::Assets>) };
    inline vector<DescribeWhiteListEffectiveAssetsResponseBody::Assets> getAssets() { DARABONBA_PTR_GET(assets_, vector<DescribeWhiteListEffectiveAssetsResponseBody::Assets>) };
    inline DescribeWhiteListEffectiveAssetsResponseBody& setAssets(const vector<DescribeWhiteListEffectiveAssetsResponseBody::Assets> & assets) { DARABONBA_PTR_SET_VALUE(assets_, assets) };
    inline DescribeWhiteListEffectiveAssetsResponseBody& setAssets(vector<DescribeWhiteListEffectiveAssetsResponseBody::Assets> && assets) { DARABONBA_PTR_SET_RVALUE(assets_, assets) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeWhiteListEffectiveAssetsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeWhiteListEffectiveAssetsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeWhiteListEffectiveAssetsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWhiteListEffectiveAssetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeWhiteListEffectiveAssetsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The servers on which the policy takes effect.
    shared_ptr<vector<DescribeWhiteListEffectiveAssetsResponseBody::Assets>> assets_ {};
    // The number of entries returned on the current page.
    shared_ptr<int32_t> count_ {};
    // The page number.
    shared_ptr<int32_t> currentPage_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of the servers on which the policy takes effect.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
