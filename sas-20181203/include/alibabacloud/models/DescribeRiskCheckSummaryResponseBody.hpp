// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKCHECKSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKCHECKSUMMARYRESPONSEBODY_HPP_
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
  class DescribeRiskCheckSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskCheckSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskCheckSummary, riskCheckSummary_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskCheckSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskCheckSummary, riskCheckSummary_);
    };
    DescribeRiskCheckSummaryResponseBody() = default ;
    DescribeRiskCheckSummaryResponseBody(const DescribeRiskCheckSummaryResponseBody &) = default ;
    DescribeRiskCheckSummaryResponseBody(DescribeRiskCheckSummaryResponseBody &&) = default ;
    DescribeRiskCheckSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskCheckSummaryResponseBody() = default ;
    DescribeRiskCheckSummaryResponseBody& operator=(const DescribeRiskCheckSummaryResponseBody &) = default ;
    DescribeRiskCheckSummaryResponseBody& operator=(DescribeRiskCheckSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RiskCheckSummary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RiskCheckSummary& obj) { 
        DARABONBA_PTR_TO_JSON(AffectedAssetCount, affectedAssetCount_);
        DARABONBA_PTR_TO_JSON(DisabledRiskCount, disabledRiskCount_);
        DARABONBA_PTR_TO_JSON(EnabledRiskCount, enabledRiskCount_);
        DARABONBA_PTR_TO_JSON(Groups, groups_);
        DARABONBA_PTR_TO_JSON(ItemCount, itemCount_);
        DARABONBA_PTR_TO_JSON(PreviousCount, previousCount_);
        DARABONBA_PTR_TO_JSON(PreviousTime, previousTime_);
        DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
        DARABONBA_PTR_TO_JSON(RiskLevelCount, riskLevelCount_);
        DARABONBA_PTR_TO_JSON(RiskRate, riskRate_);
      };
      friend void from_json(const Darabonba::Json& j, RiskCheckSummary& obj) { 
        DARABONBA_PTR_FROM_JSON(AffectedAssetCount, affectedAssetCount_);
        DARABONBA_PTR_FROM_JSON(DisabledRiskCount, disabledRiskCount_);
        DARABONBA_PTR_FROM_JSON(EnabledRiskCount, enabledRiskCount_);
        DARABONBA_PTR_FROM_JSON(Groups, groups_);
        DARABONBA_PTR_FROM_JSON(ItemCount, itemCount_);
        DARABONBA_PTR_FROM_JSON(PreviousCount, previousCount_);
        DARABONBA_PTR_FROM_JSON(PreviousTime, previousTime_);
        DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
        DARABONBA_PTR_FROM_JSON(RiskLevelCount, riskLevelCount_);
        DARABONBA_PTR_FROM_JSON(RiskRate, riskRate_);
      };
      RiskCheckSummary() = default ;
      RiskCheckSummary(const RiskCheckSummary &) = default ;
      RiskCheckSummary(RiskCheckSummary &&) = default ;
      RiskCheckSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RiskCheckSummary() = default ;
      RiskCheckSummary& operator=(const RiskCheckSummary &) = default ;
      RiskCheckSummary& operator=(RiskCheckSummary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RiskLevelCount : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RiskLevelCount& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Key, key_);
        };
        friend void from_json(const Darabonba::Json& j, RiskLevelCount& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
        };
        RiskLevelCount() = default ;
        RiskLevelCount(const RiskLevelCount &) = default ;
        RiskLevelCount(RiskLevelCount &&) = default ;
        RiskLevelCount(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RiskLevelCount() = default ;
        RiskLevelCount& operator=(const RiskLevelCount &) = default ;
        RiskLevelCount& operator=(RiskLevelCount &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->key_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline RiskLevelCount& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline RiskLevelCount& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      protected:
        // The number of check items at the specified risk level.
        shared_ptr<int32_t> count_ {};
        // The risk level of the check items. Valid values:
        // 
        // *   **high**
        // *   **medium**
        // *   **low**
        shared_ptr<string> key_ {};
      };

      class Groups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Groups& obj) { 
          DARABONBA_PTR_TO_JSON(CountByStatus, countByStatus_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(RemainingTime, remainingTime_);
          DARABONBA_PTR_TO_JSON(Sort, sort_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, Groups& obj) { 
          DARABONBA_PTR_FROM_JSON(CountByStatus, countByStatus_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(RemainingTime, remainingTime_);
          DARABONBA_PTR_FROM_JSON(Sort, sort_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        Groups() = default ;
        Groups(const Groups &) = default ;
        Groups(Groups &&) = default ;
        Groups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Groups() = default ;
        Groups& operator=(const Groups &) = default ;
        Groups& operator=(Groups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CountByStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CountByStatus& obj) { 
            DARABONBA_PTR_TO_JSON(Count, count_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, CountByStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(Count, count_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          CountByStatus() = default ;
          CountByStatus(const CountByStatus &) = default ;
          CountByStatus(CountByStatus &&) = default ;
          CountByStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CountByStatus() = default ;
          CountByStatus& operator=(const CountByStatus &) = default ;
          CountByStatus& operator=(CountByStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->count_ == nullptr
        && this->status_ == nullptr; };
          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
          inline CountByStatus& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline CountByStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The number of detected risk items.
          shared_ptr<int32_t> count_ {};
          // The status of the check item after the check is finished. Valid values:
          // 
          // *   **pass**: The check item passed the check, which indicates that the check item is normal.
          // *   **failed**: The check item failed the check, which indicates that risks are detected based on the check item.
          shared_ptr<string> status_ {};
        };

        virtual bool empty() const override { return this->countByStatus_ == nullptr
        && this->id_ == nullptr && this->remainingTime_ == nullptr && this->sort_ == nullptr && this->status_ == nullptr && this->title_ == nullptr; };
        // countByStatus Field Functions 
        bool hasCountByStatus() const { return this->countByStatus_ != nullptr;};
        void deleteCountByStatus() { this->countByStatus_ = nullptr;};
        inline const vector<Groups::CountByStatus> & getCountByStatus() const { DARABONBA_PTR_GET_CONST(countByStatus_, vector<Groups::CountByStatus>) };
        inline vector<Groups::CountByStatus> getCountByStatus() { DARABONBA_PTR_GET(countByStatus_, vector<Groups::CountByStatus>) };
        inline Groups& setCountByStatus(const vector<Groups::CountByStatus> & countByStatus) { DARABONBA_PTR_SET_VALUE(countByStatus_, countByStatus) };
        inline Groups& setCountByStatus(vector<Groups::CountByStatus> && countByStatus) { DARABONBA_PTR_SET_RVALUE(countByStatus_, countByStatus) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Groups& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // remainingTime Field Functions 
        bool hasRemainingTime() const { return this->remainingTime_ != nullptr;};
        void deleteRemainingTime() { this->remainingTime_ = nullptr;};
        inline int32_t getRemainingTime() const { DARABONBA_PTR_GET_DEFAULT(remainingTime_, 0) };
        inline Groups& setRemainingTime(int32_t remainingTime) { DARABONBA_PTR_SET_VALUE(remainingTime_, remainingTime) };


        // sort Field Functions 
        bool hasSort() const { return this->sort_ != nullptr;};
        void deleteSort() { this->sort_ = nullptr;};
        inline int32_t getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, 0) };
        inline Groups& setSort(int32_t sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Groups& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Groups& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // An array that consists of the statistics about check results.
        shared_ptr<vector<Groups::CountByStatus>> countByStatus_ {};
        // The ID of the check item type.
        shared_ptr<int64_t> id_ {};
        // The remaining time before the check is complete.
        shared_ptr<int32_t> remainingTime_ {};
        // The sequence number of the check item type in the **All Types** drop-down list in the Security Center console.
        shared_ptr<int32_t> sort_ {};
        // The status of the check. Valid values:
        // 
        // *   **finish**: The check is finished.
        // *   **running**: The check is in progress.
        // *   **waiting**: The check is pending.
        // *   **notStart**: The check is not started.
        shared_ptr<string> status_ {};
        // The name of the check item type.
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->affectedAssetCount_ == nullptr
        && this->disabledRiskCount_ == nullptr && this->enabledRiskCount_ == nullptr && this->groups_ == nullptr && this->itemCount_ == nullptr && this->previousCount_ == nullptr
        && this->previousTime_ == nullptr && this->riskCount_ == nullptr && this->riskLevelCount_ == nullptr && this->riskRate_ == nullptr; };
      // affectedAssetCount Field Functions 
      bool hasAffectedAssetCount() const { return this->affectedAssetCount_ != nullptr;};
      void deleteAffectedAssetCount() { this->affectedAssetCount_ = nullptr;};
      inline int32_t getAffectedAssetCount() const { DARABONBA_PTR_GET_DEFAULT(affectedAssetCount_, 0) };
      inline RiskCheckSummary& setAffectedAssetCount(int32_t affectedAssetCount) { DARABONBA_PTR_SET_VALUE(affectedAssetCount_, affectedAssetCount) };


      // disabledRiskCount Field Functions 
      bool hasDisabledRiskCount() const { return this->disabledRiskCount_ != nullptr;};
      void deleteDisabledRiskCount() { this->disabledRiskCount_ = nullptr;};
      inline int32_t getDisabledRiskCount() const { DARABONBA_PTR_GET_DEFAULT(disabledRiskCount_, 0) };
      inline RiskCheckSummary& setDisabledRiskCount(int32_t disabledRiskCount) { DARABONBA_PTR_SET_VALUE(disabledRiskCount_, disabledRiskCount) };


      // enabledRiskCount Field Functions 
      bool hasEnabledRiskCount() const { return this->enabledRiskCount_ != nullptr;};
      void deleteEnabledRiskCount() { this->enabledRiskCount_ = nullptr;};
      inline int32_t getEnabledRiskCount() const { DARABONBA_PTR_GET_DEFAULT(enabledRiskCount_, 0) };
      inline RiskCheckSummary& setEnabledRiskCount(int32_t enabledRiskCount) { DARABONBA_PTR_SET_VALUE(enabledRiskCount_, enabledRiskCount) };


      // groups Field Functions 
      bool hasGroups() const { return this->groups_ != nullptr;};
      void deleteGroups() { this->groups_ = nullptr;};
      inline const vector<RiskCheckSummary::Groups> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<RiskCheckSummary::Groups>) };
      inline vector<RiskCheckSummary::Groups> getGroups() { DARABONBA_PTR_GET(groups_, vector<RiskCheckSummary::Groups>) };
      inline RiskCheckSummary& setGroups(const vector<RiskCheckSummary::Groups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
      inline RiskCheckSummary& setGroups(vector<RiskCheckSummary::Groups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


      // itemCount Field Functions 
      bool hasItemCount() const { return this->itemCount_ != nullptr;};
      void deleteItemCount() { this->itemCount_ = nullptr;};
      inline int32_t getItemCount() const { DARABONBA_PTR_GET_DEFAULT(itemCount_, 0) };
      inline RiskCheckSummary& setItemCount(int32_t itemCount) { DARABONBA_PTR_SET_VALUE(itemCount_, itemCount) };


      // previousCount Field Functions 
      bool hasPreviousCount() const { return this->previousCount_ != nullptr;};
      void deletePreviousCount() { this->previousCount_ = nullptr;};
      inline int32_t getPreviousCount() const { DARABONBA_PTR_GET_DEFAULT(previousCount_, 0) };
      inline RiskCheckSummary& setPreviousCount(int32_t previousCount) { DARABONBA_PTR_SET_VALUE(previousCount_, previousCount) };


      // previousTime Field Functions 
      bool hasPreviousTime() const { return this->previousTime_ != nullptr;};
      void deletePreviousTime() { this->previousTime_ = nullptr;};
      inline int64_t getPreviousTime() const { DARABONBA_PTR_GET_DEFAULT(previousTime_, 0L) };
      inline RiskCheckSummary& setPreviousTime(int64_t previousTime) { DARABONBA_PTR_SET_VALUE(previousTime_, previousTime) };


      // riskCount Field Functions 
      bool hasRiskCount() const { return this->riskCount_ != nullptr;};
      void deleteRiskCount() { this->riskCount_ = nullptr;};
      inline int32_t getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0) };
      inline RiskCheckSummary& setRiskCount(int32_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


      // riskLevelCount Field Functions 
      bool hasRiskLevelCount() const { return this->riskLevelCount_ != nullptr;};
      void deleteRiskLevelCount() { this->riskLevelCount_ = nullptr;};
      inline const vector<RiskCheckSummary::RiskLevelCount> & getRiskLevelCount() const { DARABONBA_PTR_GET_CONST(riskLevelCount_, vector<RiskCheckSummary::RiskLevelCount>) };
      inline vector<RiskCheckSummary::RiskLevelCount> getRiskLevelCount() { DARABONBA_PTR_GET(riskLevelCount_, vector<RiskCheckSummary::RiskLevelCount>) };
      inline RiskCheckSummary& setRiskLevelCount(const vector<RiskCheckSummary::RiskLevelCount> & riskLevelCount) { DARABONBA_PTR_SET_VALUE(riskLevelCount_, riskLevelCount) };
      inline RiskCheckSummary& setRiskLevelCount(vector<RiskCheckSummary::RiskLevelCount> && riskLevelCount) { DARABONBA_PTR_SET_RVALUE(riskLevelCount_, riskLevelCount) };


      // riskRate Field Functions 
      bool hasRiskRate() const { return this->riskRate_ != nullptr;};
      void deleteRiskRate() { this->riskRate_ = nullptr;};
      inline float getRiskRate() const { DARABONBA_PTR_GET_DEFAULT(riskRate_, 0.0) };
      inline RiskCheckSummary& setRiskRate(float riskRate) { DARABONBA_PTR_SET_VALUE(riskRate_, riskRate) };


    protected:
      // The number of affected assets.
      shared_ptr<int32_t> affectedAssetCount_ {};
      // The number of the check items that failed the check.
      shared_ptr<int32_t> disabledRiskCount_ {};
      // The number of the check items that passed the check.
      shared_ptr<int32_t> enabledRiskCount_ {};
      // An array that consists of the statistics for each type of check item.
      shared_ptr<vector<RiskCheckSummary::Groups>> groups_ {};
      // The number of check items.
      shared_ptr<int32_t> itemCount_ {};
      // The number of risk items detected in the last check.
      shared_ptr<int32_t> previousCount_ {};
      // The timestamp of the last check. Unit: milliseconds.
      shared_ptr<int64_t> previousTime_ {};
      // The number of detected risk items.
      shared_ptr<int32_t> riskCount_ {};
      // An array that consists of the number of check items at each risk level.
      shared_ptr<vector<RiskCheckSummary::RiskLevelCount>> riskLevelCount_ {};
      // The proportion of risk items to all check items.
      shared_ptr<float> riskRate_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->riskCheckSummary_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRiskCheckSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskCheckSummary Field Functions 
    bool hasRiskCheckSummary() const { return this->riskCheckSummary_ != nullptr;};
    void deleteRiskCheckSummary() { this->riskCheckSummary_ = nullptr;};
    inline const DescribeRiskCheckSummaryResponseBody::RiskCheckSummary & getRiskCheckSummary() const { DARABONBA_PTR_GET_CONST(riskCheckSummary_, DescribeRiskCheckSummaryResponseBody::RiskCheckSummary) };
    inline DescribeRiskCheckSummaryResponseBody::RiskCheckSummary getRiskCheckSummary() { DARABONBA_PTR_GET(riskCheckSummary_, DescribeRiskCheckSummaryResponseBody::RiskCheckSummary) };
    inline DescribeRiskCheckSummaryResponseBody& setRiskCheckSummary(const DescribeRiskCheckSummaryResponseBody::RiskCheckSummary & riskCheckSummary) { DARABONBA_PTR_SET_VALUE(riskCheckSummary_, riskCheckSummary) };
    inline DescribeRiskCheckSummaryResponseBody& setRiskCheckSummary(DescribeRiskCheckSummaryResponseBody::RiskCheckSummary && riskCheckSummary) { DARABONBA_PTR_SET_RVALUE(riskCheckSummary_, riskCheckSummary) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The summary information about the check results of cloud service configurations.
    shared_ptr<DescribeRiskCheckSummaryResponseBody::RiskCheckSummary> riskCheckSummary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
