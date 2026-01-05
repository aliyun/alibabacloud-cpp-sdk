// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeBackupPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedDataPolicies, advancedDataPolicies_);
      DARABONBA_PTR_TO_JSON(AdvancedPolicyOption, advancedPolicyOption_);
      DARABONBA_PTR_TO_JSON(BackupFrequency, backupFrequency_);
      DARABONBA_PTR_TO_JSON(BackupPolicyLevel, backupPolicyLevel_);
      DARABONBA_PTR_TO_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
      DARABONBA_PTR_TO_JSON(DataLevel1BackupFrequency, dataLevel1BackupFrequency_);
      DARABONBA_PTR_TO_JSON(DataLevel1BackupPeriod, dataLevel1BackupPeriod_);
      DARABONBA_PTR_TO_JSON(DataLevel1BackupRetentionPeriod, dataLevel1BackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(DataLevel1BackupTime, dataLevel1BackupTime_);
      DARABONBA_PTR_TO_JSON(DataLevel2BackupAnotherRegionRegion, dataLevel2BackupAnotherRegionRegion_);
      DARABONBA_PTR_TO_JSON(DataLevel2BackupAnotherRegionRetentionPeriod, dataLevel2BackupAnotherRegionRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(DataLevel2BackupPeriod, dataLevel2BackupPeriod_);
      DARABONBA_PTR_TO_JSON(DataLevel2BackupRetentionPeriod, dataLevel2BackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_TO_JSON(PreferredNextBackupTime, preferredNextBackupTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedDataPolicies, advancedDataPolicies_);
      DARABONBA_PTR_FROM_JSON(AdvancedPolicyOption, advancedPolicyOption_);
      DARABONBA_PTR_FROM_JSON(BackupFrequency, backupFrequency_);
      DARABONBA_PTR_FROM_JSON(BackupPolicyLevel, backupPolicyLevel_);
      DARABONBA_PTR_FROM_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
      DARABONBA_PTR_FROM_JSON(DataLevel1BackupFrequency, dataLevel1BackupFrequency_);
      DARABONBA_PTR_FROM_JSON(DataLevel1BackupPeriod, dataLevel1BackupPeriod_);
      DARABONBA_PTR_FROM_JSON(DataLevel1BackupRetentionPeriod, dataLevel1BackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(DataLevel1BackupTime, dataLevel1BackupTime_);
      DARABONBA_PTR_FROM_JSON(DataLevel2BackupAnotherRegionRegion, dataLevel2BackupAnotherRegionRegion_);
      DARABONBA_PTR_FROM_JSON(DataLevel2BackupAnotherRegionRetentionPeriod, dataLevel2BackupAnotherRegionRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(DataLevel2BackupPeriod, dataLevel2BackupPeriod_);
      DARABONBA_PTR_FROM_JSON(DataLevel2BackupRetentionPeriod, dataLevel2BackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_FROM_JSON(PreferredNextBackupTime, preferredNextBackupTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBackupPolicyResponseBody() = default ;
    DescribeBackupPolicyResponseBody(const DescribeBackupPolicyResponseBody &) = default ;
    DescribeBackupPolicyResponseBody(DescribeBackupPolicyResponseBody &&) = default ;
    DescribeBackupPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPolicyResponseBody() = default ;
    DescribeBackupPolicyResponseBody& operator=(const DescribeBackupPolicyResponseBody &) = default ;
    DescribeBackupPolicyResponseBody& operator=(DescribeBackupPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AdvancedDataPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdvancedDataPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(AdvancedDataPolicy, advancedDataPolicy_);
      };
      friend void from_json(const Darabonba::Json& j, AdvancedDataPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(AdvancedDataPolicy, advancedDataPolicy_);
      };
      AdvancedDataPolicies() = default ;
      AdvancedDataPolicies(const AdvancedDataPolicies &) = default ;
      AdvancedDataPolicies(AdvancedDataPolicies &&) = default ;
      AdvancedDataPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdvancedDataPolicies() = default ;
      AdvancedDataPolicies& operator=(const AdvancedDataPolicies &) = default ;
      AdvancedDataPolicies& operator=(AdvancedDataPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AdvancedDataPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdvancedDataPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(AutoCreated, autoCreated_);
          DARABONBA_PTR_TO_JSON(BakType, bakType_);
          DARABONBA_PTR_TO_JSON(DestRegion, destRegion_);
          DARABONBA_PTR_TO_JSON(DestType, destType_);
          DARABONBA_PTR_TO_JSON(DumpAction, dumpAction_);
          DARABONBA_PTR_TO_JSON(FilterKey, filterKey_);
          DARABONBA_PTR_TO_JSON(FilterType, filterType_);
          DARABONBA_PTR_TO_JSON(FilterValue, filterValue_);
          DARABONBA_PTR_TO_JSON(OnlyPreserveOneEachDay, onlyPreserveOneEachDay_);
          DARABONBA_PTR_TO_JSON(OnlyPreserveOneEachHour, onlyPreserveOneEachHour_);
          DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
          DARABONBA_PTR_TO_JSON(RetentionType, retentionType_);
          DARABONBA_PTR_TO_JSON(RetentionValue, retentionValue_);
          DARABONBA_PTR_TO_JSON(SrcRegion, srcRegion_);
          DARABONBA_PTR_TO_JSON(SrcType, srcType_);
        };
        friend void from_json(const Darabonba::Json& j, AdvancedDataPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoCreated, autoCreated_);
          DARABONBA_PTR_FROM_JSON(BakType, bakType_);
          DARABONBA_PTR_FROM_JSON(DestRegion, destRegion_);
          DARABONBA_PTR_FROM_JSON(DestType, destType_);
          DARABONBA_PTR_FROM_JSON(DumpAction, dumpAction_);
          DARABONBA_PTR_FROM_JSON(FilterKey, filterKey_);
          DARABONBA_PTR_FROM_JSON(FilterType, filterType_);
          DARABONBA_PTR_FROM_JSON(FilterValue, filterValue_);
          DARABONBA_PTR_FROM_JSON(OnlyPreserveOneEachDay, onlyPreserveOneEachDay_);
          DARABONBA_PTR_FROM_JSON(OnlyPreserveOneEachHour, onlyPreserveOneEachHour_);
          DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
          DARABONBA_PTR_FROM_JSON(RetentionType, retentionType_);
          DARABONBA_PTR_FROM_JSON(RetentionValue, retentionValue_);
          DARABONBA_PTR_FROM_JSON(SrcRegion, srcRegion_);
          DARABONBA_PTR_FROM_JSON(SrcType, srcType_);
        };
        AdvancedDataPolicy() = default ;
        AdvancedDataPolicy(const AdvancedDataPolicy &) = default ;
        AdvancedDataPolicy(AdvancedDataPolicy &&) = default ;
        AdvancedDataPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdvancedDataPolicy() = default ;
        AdvancedDataPolicy& operator=(const AdvancedDataPolicy &) = default ;
        AdvancedDataPolicy& operator=(AdvancedDataPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoCreated_ == nullptr
        && this->bakType_ == nullptr && this->destRegion_ == nullptr && this->destType_ == nullptr && this->dumpAction_ == nullptr && this->filterKey_ == nullptr
        && this->filterType_ == nullptr && this->filterValue_ == nullptr && this->onlyPreserveOneEachDay_ == nullptr && this->onlyPreserveOneEachHour_ == nullptr && this->policyId_ == nullptr
        && this->retentionType_ == nullptr && this->retentionValue_ == nullptr && this->srcRegion_ == nullptr && this->srcType_ == nullptr; };
        // autoCreated Field Functions 
        bool hasAutoCreated() const { return this->autoCreated_ != nullptr;};
        void deleteAutoCreated() { this->autoCreated_ = nullptr;};
        inline bool getAutoCreated() const { DARABONBA_PTR_GET_DEFAULT(autoCreated_, false) };
        inline AdvancedDataPolicy& setAutoCreated(bool autoCreated) { DARABONBA_PTR_SET_VALUE(autoCreated_, autoCreated) };


        // bakType Field Functions 
        bool hasBakType() const { return this->bakType_ != nullptr;};
        void deleteBakType() { this->bakType_ = nullptr;};
        inline string getBakType() const { DARABONBA_PTR_GET_DEFAULT(bakType_, "") };
        inline AdvancedDataPolicy& setBakType(string bakType) { DARABONBA_PTR_SET_VALUE(bakType_, bakType) };


        // destRegion Field Functions 
        bool hasDestRegion() const { return this->destRegion_ != nullptr;};
        void deleteDestRegion() { this->destRegion_ = nullptr;};
        inline string getDestRegion() const { DARABONBA_PTR_GET_DEFAULT(destRegion_, "") };
        inline AdvancedDataPolicy& setDestRegion(string destRegion) { DARABONBA_PTR_SET_VALUE(destRegion_, destRegion) };


        // destType Field Functions 
        bool hasDestType() const { return this->destType_ != nullptr;};
        void deleteDestType() { this->destType_ = nullptr;};
        inline string getDestType() const { DARABONBA_PTR_GET_DEFAULT(destType_, "") };
        inline AdvancedDataPolicy& setDestType(string destType) { DARABONBA_PTR_SET_VALUE(destType_, destType) };


        // dumpAction Field Functions 
        bool hasDumpAction() const { return this->dumpAction_ != nullptr;};
        void deleteDumpAction() { this->dumpAction_ = nullptr;};
        inline string getDumpAction() const { DARABONBA_PTR_GET_DEFAULT(dumpAction_, "") };
        inline AdvancedDataPolicy& setDumpAction(string dumpAction) { DARABONBA_PTR_SET_VALUE(dumpAction_, dumpAction) };


        // filterKey Field Functions 
        bool hasFilterKey() const { return this->filterKey_ != nullptr;};
        void deleteFilterKey() { this->filterKey_ = nullptr;};
        inline string getFilterKey() const { DARABONBA_PTR_GET_DEFAULT(filterKey_, "") };
        inline AdvancedDataPolicy& setFilterKey(string filterKey) { DARABONBA_PTR_SET_VALUE(filterKey_, filterKey) };


        // filterType Field Functions 
        bool hasFilterType() const { return this->filterType_ != nullptr;};
        void deleteFilterType() { this->filterType_ = nullptr;};
        inline string getFilterType() const { DARABONBA_PTR_GET_DEFAULT(filterType_, "") };
        inline AdvancedDataPolicy& setFilterType(string filterType) { DARABONBA_PTR_SET_VALUE(filterType_, filterType) };


        // filterValue Field Functions 
        bool hasFilterValue() const { return this->filterValue_ != nullptr;};
        void deleteFilterValue() { this->filterValue_ = nullptr;};
        inline string getFilterValue() const { DARABONBA_PTR_GET_DEFAULT(filterValue_, "") };
        inline AdvancedDataPolicy& setFilterValue(string filterValue) { DARABONBA_PTR_SET_VALUE(filterValue_, filterValue) };


        // onlyPreserveOneEachDay Field Functions 
        bool hasOnlyPreserveOneEachDay() const { return this->onlyPreserveOneEachDay_ != nullptr;};
        void deleteOnlyPreserveOneEachDay() { this->onlyPreserveOneEachDay_ = nullptr;};
        inline bool getOnlyPreserveOneEachDay() const { DARABONBA_PTR_GET_DEFAULT(onlyPreserveOneEachDay_, false) };
        inline AdvancedDataPolicy& setOnlyPreserveOneEachDay(bool onlyPreserveOneEachDay) { DARABONBA_PTR_SET_VALUE(onlyPreserveOneEachDay_, onlyPreserveOneEachDay) };


        // onlyPreserveOneEachHour Field Functions 
        bool hasOnlyPreserveOneEachHour() const { return this->onlyPreserveOneEachHour_ != nullptr;};
        void deleteOnlyPreserveOneEachHour() { this->onlyPreserveOneEachHour_ = nullptr;};
        inline bool getOnlyPreserveOneEachHour() const { DARABONBA_PTR_GET_DEFAULT(onlyPreserveOneEachHour_, false) };
        inline AdvancedDataPolicy& setOnlyPreserveOneEachHour(bool onlyPreserveOneEachHour) { DARABONBA_PTR_SET_VALUE(onlyPreserveOneEachHour_, onlyPreserveOneEachHour) };


        // policyId Field Functions 
        bool hasPolicyId() const { return this->policyId_ != nullptr;};
        void deletePolicyId() { this->policyId_ = nullptr;};
        inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
        inline AdvancedDataPolicy& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


        // retentionType Field Functions 
        bool hasRetentionType() const { return this->retentionType_ != nullptr;};
        void deleteRetentionType() { this->retentionType_ = nullptr;};
        inline string getRetentionType() const { DARABONBA_PTR_GET_DEFAULT(retentionType_, "") };
        inline AdvancedDataPolicy& setRetentionType(string retentionType) { DARABONBA_PTR_SET_VALUE(retentionType_, retentionType) };


        // retentionValue Field Functions 
        bool hasRetentionValue() const { return this->retentionValue_ != nullptr;};
        void deleteRetentionValue() { this->retentionValue_ = nullptr;};
        inline string getRetentionValue() const { DARABONBA_PTR_GET_DEFAULT(retentionValue_, "") };
        inline AdvancedDataPolicy& setRetentionValue(string retentionValue) { DARABONBA_PTR_SET_VALUE(retentionValue_, retentionValue) };


        // srcRegion Field Functions 
        bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
        void deleteSrcRegion() { this->srcRegion_ = nullptr;};
        inline string getSrcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
        inline AdvancedDataPolicy& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


        // srcType Field Functions 
        bool hasSrcType() const { return this->srcType_ != nullptr;};
        void deleteSrcType() { this->srcType_ = nullptr;};
        inline string getSrcType() const { DARABONBA_PTR_GET_DEFAULT(srcType_, "") };
        inline AdvancedDataPolicy& setSrcType(string srcType) { DARABONBA_PTR_SET_VALUE(srcType_, srcType) };


      protected:
        shared_ptr<bool> autoCreated_ {};
        shared_ptr<string> bakType_ {};
        shared_ptr<string> destRegion_ {};
        shared_ptr<string> destType_ {};
        shared_ptr<string> dumpAction_ {};
        shared_ptr<string> filterKey_ {};
        shared_ptr<string> filterType_ {};
        shared_ptr<string> filterValue_ {};
        shared_ptr<bool> onlyPreserveOneEachDay_ {};
        shared_ptr<bool> onlyPreserveOneEachHour_ {};
        shared_ptr<string> policyId_ {};
        shared_ptr<string> retentionType_ {};
        shared_ptr<string> retentionValue_ {};
        shared_ptr<string> srcRegion_ {};
        shared_ptr<string> srcType_ {};
      };

      virtual bool empty() const override { return this->advancedDataPolicy_ == nullptr; };
      // advancedDataPolicy Field Functions 
      bool hasAdvancedDataPolicy() const { return this->advancedDataPolicy_ != nullptr;};
      void deleteAdvancedDataPolicy() { this->advancedDataPolicy_ = nullptr;};
      inline const vector<AdvancedDataPolicies::AdvancedDataPolicy> & getAdvancedDataPolicy() const { DARABONBA_PTR_GET_CONST(advancedDataPolicy_, vector<AdvancedDataPolicies::AdvancedDataPolicy>) };
      inline vector<AdvancedDataPolicies::AdvancedDataPolicy> getAdvancedDataPolicy() { DARABONBA_PTR_GET(advancedDataPolicy_, vector<AdvancedDataPolicies::AdvancedDataPolicy>) };
      inline AdvancedDataPolicies& setAdvancedDataPolicy(const vector<AdvancedDataPolicies::AdvancedDataPolicy> & advancedDataPolicy) { DARABONBA_PTR_SET_VALUE(advancedDataPolicy_, advancedDataPolicy) };
      inline AdvancedDataPolicies& setAdvancedDataPolicy(vector<AdvancedDataPolicies::AdvancedDataPolicy> && advancedDataPolicy) { DARABONBA_PTR_SET_RVALUE(advancedDataPolicy_, advancedDataPolicy) };


    protected:
      shared_ptr<vector<AdvancedDataPolicies::AdvancedDataPolicy>> advancedDataPolicy_ {};
    };

    virtual bool empty() const override { return this->advancedDataPolicies_ == nullptr
        && this->advancedPolicyOption_ == nullptr && this->backupFrequency_ == nullptr && this->backupPolicyLevel_ == nullptr && this->backupRetentionPolicyOnClusterDeletion_ == nullptr && this->dataLevel1BackupFrequency_ == nullptr
        && this->dataLevel1BackupPeriod_ == nullptr && this->dataLevel1BackupRetentionPeriod_ == nullptr && this->dataLevel1BackupTime_ == nullptr && this->dataLevel2BackupAnotherRegionRegion_ == nullptr && this->dataLevel2BackupAnotherRegionRetentionPeriod_ == nullptr
        && this->dataLevel2BackupPeriod_ == nullptr && this->dataLevel2BackupRetentionPeriod_ == nullptr && this->preferredBackupPeriod_ == nullptr && this->preferredBackupTime_ == nullptr && this->preferredNextBackupTime_ == nullptr
        && this->requestId_ == nullptr; };
    // advancedDataPolicies Field Functions 
    bool hasAdvancedDataPolicies() const { return this->advancedDataPolicies_ != nullptr;};
    void deleteAdvancedDataPolicies() { this->advancedDataPolicies_ = nullptr;};
    inline const DescribeBackupPolicyResponseBody::AdvancedDataPolicies & getAdvancedDataPolicies() const { DARABONBA_PTR_GET_CONST(advancedDataPolicies_, DescribeBackupPolicyResponseBody::AdvancedDataPolicies) };
    inline DescribeBackupPolicyResponseBody::AdvancedDataPolicies getAdvancedDataPolicies() { DARABONBA_PTR_GET(advancedDataPolicies_, DescribeBackupPolicyResponseBody::AdvancedDataPolicies) };
    inline DescribeBackupPolicyResponseBody& setAdvancedDataPolicies(const DescribeBackupPolicyResponseBody::AdvancedDataPolicies & advancedDataPolicies) { DARABONBA_PTR_SET_VALUE(advancedDataPolicies_, advancedDataPolicies) };
    inline DescribeBackupPolicyResponseBody& setAdvancedDataPolicies(DescribeBackupPolicyResponseBody::AdvancedDataPolicies && advancedDataPolicies) { DARABONBA_PTR_SET_RVALUE(advancedDataPolicies_, advancedDataPolicies) };


    // advancedPolicyOption Field Functions 
    bool hasAdvancedPolicyOption() const { return this->advancedPolicyOption_ != nullptr;};
    void deleteAdvancedPolicyOption() { this->advancedPolicyOption_ = nullptr;};
    inline string getAdvancedPolicyOption() const { DARABONBA_PTR_GET_DEFAULT(advancedPolicyOption_, "") };
    inline DescribeBackupPolicyResponseBody& setAdvancedPolicyOption(string advancedPolicyOption) { DARABONBA_PTR_SET_VALUE(advancedPolicyOption_, advancedPolicyOption) };


    // backupFrequency Field Functions 
    bool hasBackupFrequency() const { return this->backupFrequency_ != nullptr;};
    void deleteBackupFrequency() { this->backupFrequency_ = nullptr;};
    inline string getBackupFrequency() const { DARABONBA_PTR_GET_DEFAULT(backupFrequency_, "") };
    inline DescribeBackupPolicyResponseBody& setBackupFrequency(string backupFrequency) { DARABONBA_PTR_SET_VALUE(backupFrequency_, backupFrequency) };


    // backupPolicyLevel Field Functions 
    bool hasBackupPolicyLevel() const { return this->backupPolicyLevel_ != nullptr;};
    void deleteBackupPolicyLevel() { this->backupPolicyLevel_ = nullptr;};
    inline string getBackupPolicyLevel() const { DARABONBA_PTR_GET_DEFAULT(backupPolicyLevel_, "") };
    inline DescribeBackupPolicyResponseBody& setBackupPolicyLevel(string backupPolicyLevel) { DARABONBA_PTR_SET_VALUE(backupPolicyLevel_, backupPolicyLevel) };


    // backupRetentionPolicyOnClusterDeletion Field Functions 
    bool hasBackupRetentionPolicyOnClusterDeletion() const { return this->backupRetentionPolicyOnClusterDeletion_ != nullptr;};
    void deleteBackupRetentionPolicyOnClusterDeletion() { this->backupRetentionPolicyOnClusterDeletion_ = nullptr;};
    inline string getBackupRetentionPolicyOnClusterDeletion() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPolicyOnClusterDeletion_, "") };
    inline DescribeBackupPolicyResponseBody& setBackupRetentionPolicyOnClusterDeletion(string backupRetentionPolicyOnClusterDeletion) { DARABONBA_PTR_SET_VALUE(backupRetentionPolicyOnClusterDeletion_, backupRetentionPolicyOnClusterDeletion) };


    // dataLevel1BackupFrequency Field Functions 
    bool hasDataLevel1BackupFrequency() const { return this->dataLevel1BackupFrequency_ != nullptr;};
    void deleteDataLevel1BackupFrequency() { this->dataLevel1BackupFrequency_ = nullptr;};
    inline string getDataLevel1BackupFrequency() const { DARABONBA_PTR_GET_DEFAULT(dataLevel1BackupFrequency_, "") };
    inline DescribeBackupPolicyResponseBody& setDataLevel1BackupFrequency(string dataLevel1BackupFrequency) { DARABONBA_PTR_SET_VALUE(dataLevel1BackupFrequency_, dataLevel1BackupFrequency) };


    // dataLevel1BackupPeriod Field Functions 
    bool hasDataLevel1BackupPeriod() const { return this->dataLevel1BackupPeriod_ != nullptr;};
    void deleteDataLevel1BackupPeriod() { this->dataLevel1BackupPeriod_ = nullptr;};
    inline string getDataLevel1BackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataLevel1BackupPeriod_, "") };
    inline DescribeBackupPolicyResponseBody& setDataLevel1BackupPeriod(string dataLevel1BackupPeriod) { DARABONBA_PTR_SET_VALUE(dataLevel1BackupPeriod_, dataLevel1BackupPeriod) };


    // dataLevel1BackupRetentionPeriod Field Functions 
    bool hasDataLevel1BackupRetentionPeriod() const { return this->dataLevel1BackupRetentionPeriod_ != nullptr;};
    void deleteDataLevel1BackupRetentionPeriod() { this->dataLevel1BackupRetentionPeriod_ = nullptr;};
    inline string getDataLevel1BackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataLevel1BackupRetentionPeriod_, "") };
    inline DescribeBackupPolicyResponseBody& setDataLevel1BackupRetentionPeriod(string dataLevel1BackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(dataLevel1BackupRetentionPeriod_, dataLevel1BackupRetentionPeriod) };


    // dataLevel1BackupTime Field Functions 
    bool hasDataLevel1BackupTime() const { return this->dataLevel1BackupTime_ != nullptr;};
    void deleteDataLevel1BackupTime() { this->dataLevel1BackupTime_ = nullptr;};
    inline string getDataLevel1BackupTime() const { DARABONBA_PTR_GET_DEFAULT(dataLevel1BackupTime_, "") };
    inline DescribeBackupPolicyResponseBody& setDataLevel1BackupTime(string dataLevel1BackupTime) { DARABONBA_PTR_SET_VALUE(dataLevel1BackupTime_, dataLevel1BackupTime) };


    // dataLevel2BackupAnotherRegionRegion Field Functions 
    bool hasDataLevel2BackupAnotherRegionRegion() const { return this->dataLevel2BackupAnotherRegionRegion_ != nullptr;};
    void deleteDataLevel2BackupAnotherRegionRegion() { this->dataLevel2BackupAnotherRegionRegion_ = nullptr;};
    inline string getDataLevel2BackupAnotherRegionRegion() const { DARABONBA_PTR_GET_DEFAULT(dataLevel2BackupAnotherRegionRegion_, "") };
    inline DescribeBackupPolicyResponseBody& setDataLevel2BackupAnotherRegionRegion(string dataLevel2BackupAnotherRegionRegion) { DARABONBA_PTR_SET_VALUE(dataLevel2BackupAnotherRegionRegion_, dataLevel2BackupAnotherRegionRegion) };


    // dataLevel2BackupAnotherRegionRetentionPeriod Field Functions 
    bool hasDataLevel2BackupAnotherRegionRetentionPeriod() const { return this->dataLevel2BackupAnotherRegionRetentionPeriod_ != nullptr;};
    void deleteDataLevel2BackupAnotherRegionRetentionPeriod() { this->dataLevel2BackupAnotherRegionRetentionPeriod_ = nullptr;};
    inline string getDataLevel2BackupAnotherRegionRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataLevel2BackupAnotherRegionRetentionPeriod_, "") };
    inline DescribeBackupPolicyResponseBody& setDataLevel2BackupAnotherRegionRetentionPeriod(string dataLevel2BackupAnotherRegionRetentionPeriod) { DARABONBA_PTR_SET_VALUE(dataLevel2BackupAnotherRegionRetentionPeriod_, dataLevel2BackupAnotherRegionRetentionPeriod) };


    // dataLevel2BackupPeriod Field Functions 
    bool hasDataLevel2BackupPeriod() const { return this->dataLevel2BackupPeriod_ != nullptr;};
    void deleteDataLevel2BackupPeriod() { this->dataLevel2BackupPeriod_ = nullptr;};
    inline string getDataLevel2BackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataLevel2BackupPeriod_, "") };
    inline DescribeBackupPolicyResponseBody& setDataLevel2BackupPeriod(string dataLevel2BackupPeriod) { DARABONBA_PTR_SET_VALUE(dataLevel2BackupPeriod_, dataLevel2BackupPeriod) };


    // dataLevel2BackupRetentionPeriod Field Functions 
    bool hasDataLevel2BackupRetentionPeriod() const { return this->dataLevel2BackupRetentionPeriod_ != nullptr;};
    void deleteDataLevel2BackupRetentionPeriod() { this->dataLevel2BackupRetentionPeriod_ = nullptr;};
    inline string getDataLevel2BackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(dataLevel2BackupRetentionPeriod_, "") };
    inline DescribeBackupPolicyResponseBody& setDataLevel2BackupRetentionPeriod(string dataLevel2BackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(dataLevel2BackupRetentionPeriod_, dataLevel2BackupRetentionPeriod) };


    // preferredBackupPeriod Field Functions 
    bool hasPreferredBackupPeriod() const { return this->preferredBackupPeriod_ != nullptr;};
    void deletePreferredBackupPeriod() { this->preferredBackupPeriod_ = nullptr;};
    inline string getPreferredBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupPeriod_, "") };
    inline DescribeBackupPolicyResponseBody& setPreferredBackupPeriod(string preferredBackupPeriod) { DARABONBA_PTR_SET_VALUE(preferredBackupPeriod_, preferredBackupPeriod) };


    // preferredBackupTime Field Functions 
    bool hasPreferredBackupTime() const { return this->preferredBackupTime_ != nullptr;};
    void deletePreferredBackupTime() { this->preferredBackupTime_ = nullptr;};
    inline string getPreferredBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupTime_, "") };
    inline DescribeBackupPolicyResponseBody& setPreferredBackupTime(string preferredBackupTime) { DARABONBA_PTR_SET_VALUE(preferredBackupTime_, preferredBackupTime) };


    // preferredNextBackupTime Field Functions 
    bool hasPreferredNextBackupTime() const { return this->preferredNextBackupTime_ != nullptr;};
    void deletePreferredNextBackupTime() { this->preferredNextBackupTime_ = nullptr;};
    inline string getPreferredNextBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredNextBackupTime_, "") };
    inline DescribeBackupPolicyResponseBody& setPreferredNextBackupTime(string preferredNextBackupTime) { DARABONBA_PTR_SET_VALUE(preferredNextBackupTime_, preferredNextBackupTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeBackupPolicyResponseBody::AdvancedDataPolicies> advancedDataPolicies_ {};
    shared_ptr<string> advancedPolicyOption_ {};
    // The backup frequency. Default value: Normal. Valid values:
    // 
    // *   **Normal**: standard backup. The system backs up data once a day.
    // *   **2/24H**: enhanced backup. The system backs up data every 2 hours.
    // *   **3/24H**: enhanced backup. The system backs up data every 3 hours.
    // *   **4/24H**: enhanced backup. The system backs up data every 4 hours.
    // 
    // > - If enhanced backup is enabled, all backups are retained for 24 hours. Backups are automatically deleted when the retention period ends. However, the system permanently retains the first backup that is created after 00:00 every day.
    // >-  If enhanced backup is enabled, **PreferredBackupPeriod** is automatically set to all days in a week (from Monday to Sunday).
    shared_ptr<string> backupFrequency_ {};
    shared_ptr<string> backupPolicyLevel_ {};
    // Indicates whether backups are retained when you delete a cluster. Valid values:
    // 
    // *   **ALL**: permanently retains all backups.
    // *   **LATEST**: permanently retains the most recent backup.
    // *   **NONE**: does not retain backups.
    shared_ptr<string> backupRetentionPolicyOnClusterDeletion_ {};
    // The backup frequency of level-1 backups. Default value: Normal. Valid values:
    // 
    // *   **Normal**: standard backup. The system backs up data once a day.
    // *   **2/24H**: frequent backup. The system backs up data every 2 hours.
    // *   **3/24H**: frequent backup. The system backs up data every 3 hours.
    // *   **4/24H**: frequent backup. The system backs up data every 4 hours.
    // 
    // >- This parameter is not supported for PolarDB for PostgreSQL (Compatible with Oracle) clusters or PolarDB for PostgreSQL clusters.
    // >- This parameter is unavailable if the region where your PolarDB for MySQL cluster is deployed does not support the cross-region backup feature. For information about regions that support the cross-region backup feature, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    shared_ptr<string> dataLevel1BackupFrequency_ {};
    // The backup cycle of level-1 backups. Valid values:
    // 
    // *   **Monday**
    // *   **Tuesday**
    // *   **Wednesday**
    // *   **Thursday**
    // *   **Friday**
    // *   **Saturday**
    // *   **Sunday**
    // 
    // >- You need to specify at least two values. Separate multiple values with commas (,).
    // >- This parameter is not supported for PolarDB for PostgreSQL (Compatible with Oracle) clusters or PolarDB for PostgreSQL clusters.
    // >- This parameter is unavailable if the region where your PolarDB for MySQL cluster is deployed does not support the cross-region backup feature. For information about regions that support the cross-region backup feature, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    shared_ptr<string> dataLevel1BackupPeriod_ {};
    // The retention period of level-1 backups. Valid values: 3 to 14. Unit: day.
    shared_ptr<string> dataLevel1BackupRetentionPeriod_ {};
    // The period of time during which automatic backup is performed. The value must be in the `hh:mmZ-hh:mmZ` format. The time must be in UTC. The start time and the end time must be on the hour and must have an interval of 1 hour. Example: `14:00Z-15:00Z`.
    // 
    // >- This parameter is not supported for PolarDB for PostgreSQL (Compatible with Oracle) clusters or PolarDB for PostgreSQL clusters.
    // >- This parameter is unavailable if the region where your PolarDB for MySQL cluster is deployed does not support the cross-region backup feature. For information about regions that support the cross-region backup feature, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    shared_ptr<string> dataLevel1BackupTime_ {};
    // The region where the cross-region level-2 backup is stored. For information about regions that support the cross-region backup feature, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    shared_ptr<string> dataLevel2BackupAnotherRegionRegion_ {};
    // The retention period of cross-region level-2 backups. Valid values:
    // 
    // *   **0**: The cross-region level-2 backup feature is disabled.
    // *   **30 to 7300**: Cross-region level-2 backups are retained for 30 to 7,300 days.
    // *   **1**: Cross-region level-2 backups are retained for a long period of time.
    // 
    // >  The default value of the parameter is **0**.
    shared_ptr<string> dataLevel2BackupAnotherRegionRetentionPeriod_ {};
    // The backup cycle of level-2 backups. Valid values:
    // 
    // *   **Monday**
    // *   **Tuesday**
    // *   **Wednesday**
    // *   **Thursday**
    // *   **Friday**
    // *   **Saturday**
    // *   **Sunday**
    // 
    // >- You need to specify at least two values. Separate multiple values with commas (,).
    // >- This parameter is not supported for PolarDB for PostgreSQL (Compatible with Oracle) clusters or PolarDB for PostgreSQL clusters.
    // >- This parameter is unavailable if the region where your PolarDB for MySQL cluster is deployed does not support the cross-region backup feature. For information about regions that support the cross-region backup feature, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    shared_ptr<string> dataLevel2BackupPeriod_ {};
    // The retention period of level-2 backups. Valid values:
    // 
    // *   0: The level-2 backup feature is disabled.
    // *   30 to 7300: Level-2 backups are retained for 30 to 7,300 days.
    // *   \\-1: Level-2 backups are retained for a long period of time.
    // 
    // >  The default value of this parameter is **0**.
    shared_ptr<string> dataLevel2BackupRetentionPeriod_ {};
    // The backup cycle. Valid values:
    // 
    // *   Monday
    // *   Tuesday
    // *   Wednesday
    // *   Thursday
    // *   Friday
    // *   Saturday
    // *   Sunday
    shared_ptr<string> preferredBackupPeriod_ {};
    // The time period when automatic backups are performed. The format is `HH:mmZ-HH:mmZ`. The time is displayed in UTC.
    shared_ptr<string> preferredBackupTime_ {};
    // The time when the next automatic backup will be performed. The format is `YYYY-MM-DDThh:mmZ`. The time is displayed in UTC.
    shared_ptr<string> preferredNextBackupTime_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
