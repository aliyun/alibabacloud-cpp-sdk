// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJVSINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJVSINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeJVSInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJVSInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PendingUpgradeCount, pendingUpgradeCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJVSInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PendingUpgradeCount, pendingUpgradeCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeJVSInstanceResponseBody() = default ;
    DescribeJVSInstanceResponseBody(const DescribeJVSInstanceResponseBody &) = default ;
    DescribeJVSInstanceResponseBody(DescribeJVSInstanceResponseBody &&) = default ;
    DescribeJVSInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJVSInstanceResponseBody() = default ;
    DescribeJVSInstanceResponseBody& operator=(const DescribeJVSInstanceResponseBody &) = default ;
    DescribeJVSInstanceResponseBody& operator=(DescribeJVSInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentVersion, agentVersion_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreditConfig, creditConfig_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(InstalledSkills, installedSkills_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(JvsPackageId, jvsPackageId_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UsedCredit, usedCredit_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentVersion, agentVersion_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreditConfig, creditConfig_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(InstalledSkills, installedSkills_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(JvsPackageId, jvsPackageId_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UsedCredit, usedCredit_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UsedCredit : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UsedCredit& obj) { 
          DARABONBA_PTR_TO_JSON(Credit, credit_);
          DARABONBA_PTR_TO_JSON(LimitPeriod, limitPeriod_);
        };
        friend void from_json(const Darabonba::Json& j, UsedCredit& obj) { 
          DARABONBA_PTR_FROM_JSON(Credit, credit_);
          DARABONBA_PTR_FROM_JSON(LimitPeriod, limitPeriod_);
        };
        UsedCredit() = default ;
        UsedCredit(const UsedCredit &) = default ;
        UsedCredit(UsedCredit &&) = default ;
        UsedCredit(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UsedCredit() = default ;
        UsedCredit& operator=(const UsedCredit &) = default ;
        UsedCredit& operator=(UsedCredit &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->credit_ == nullptr
        && this->limitPeriod_ == nullptr; };
        // credit Field Functions 
        bool hasCredit() const { return this->credit_ != nullptr;};
        void deleteCredit() { this->credit_ = nullptr;};
        inline int64_t getCredit() const { DARABONBA_PTR_GET_DEFAULT(credit_, 0L) };
        inline UsedCredit& setCredit(int64_t credit) { DARABONBA_PTR_SET_VALUE(credit_, credit) };


        // limitPeriod Field Functions 
        bool hasLimitPeriod() const { return this->limitPeriod_ != nullptr;};
        void deleteLimitPeriod() { this->limitPeriod_ = nullptr;};
        inline string getLimitPeriod() const { DARABONBA_PTR_GET_DEFAULT(limitPeriod_, "") };
        inline UsedCredit& setLimitPeriod(string limitPeriod) { DARABONBA_PTR_SET_VALUE(limitPeriod_, limitPeriod) };


      protected:
        // The number of credits.
        shared_ptr<int64_t> credit_ {};
        // The dimension of the current credit.
        shared_ptr<string> limitPeriod_ {};
      };

      class InstalledSkills : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstalledSkills& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(IconUrl, iconUrl_);
          DARABONBA_PTR_TO_JSON(InstalledAt, installedAt_);
          DARABONBA_PTR_TO_JSON(SkillId, skillId_);
          DARABONBA_PTR_TO_JSON(SkillName, skillName_);
          DARABONBA_PTR_TO_JSON(SkillType, skillType_);
        };
        friend void from_json(const Darabonba::Json& j, InstalledSkills& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(IconUrl, iconUrl_);
          DARABONBA_PTR_FROM_JSON(InstalledAt, installedAt_);
          DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
          DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
          DARABONBA_PTR_FROM_JSON(SkillType, skillType_);
        };
        InstalledSkills() = default ;
        InstalledSkills(const InstalledSkills &) = default ;
        InstalledSkills(InstalledSkills &&) = default ;
        InstalledSkills(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstalledSkills() = default ;
        InstalledSkills& operator=(const InstalledSkills &) = default ;
        InstalledSkills& operator=(InstalledSkills &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->iconUrl_ == nullptr && this->installedAt_ == nullptr && this->skillId_ == nullptr && this->skillName_ == nullptr && this->skillType_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline InstalledSkills& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // iconUrl Field Functions 
        bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
        void deleteIconUrl() { this->iconUrl_ = nullptr;};
        inline string getIconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
        inline InstalledSkills& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


        // installedAt Field Functions 
        bool hasInstalledAt() const { return this->installedAt_ != nullptr;};
        void deleteInstalledAt() { this->installedAt_ = nullptr;};
        inline string getInstalledAt() const { DARABONBA_PTR_GET_DEFAULT(installedAt_, "") };
        inline InstalledSkills& setInstalledAt(string installedAt) { DARABONBA_PTR_SET_VALUE(installedAt_, installedAt) };


        // skillId Field Functions 
        bool hasSkillId() const { return this->skillId_ != nullptr;};
        void deleteSkillId() { this->skillId_ = nullptr;};
        inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
        inline InstalledSkills& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


        // skillName Field Functions 
        bool hasSkillName() const { return this->skillName_ != nullptr;};
        void deleteSkillName() { this->skillName_ = nullptr;};
        inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
        inline InstalledSkills& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


        // skillType Field Functions 
        bool hasSkillType() const { return this->skillType_ != nullptr;};
        void deleteSkillType() { this->skillType_ = nullptr;};
        inline string getSkillType() const { DARABONBA_PTR_GET_DEFAULT(skillType_, "") };
        inline InstalledSkills& setSkillType(string skillType) { DARABONBA_PTR_SET_VALUE(skillType_, skillType) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> iconUrl_ {};
        shared_ptr<string> installedAt_ {};
        shared_ptr<string> skillId_ {};
        shared_ptr<string> skillName_ {};
        shared_ptr<string> skillType_ {};
      };

      class CreditConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CreditConfig& obj) { 
          DARABONBA_PTR_TO_JSON(CreditLimit, creditLimit_);
          DARABONBA_PTR_TO_JSON(LimitPeriod, limitPeriod_);
        };
        friend void from_json(const Darabonba::Json& j, CreditConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(CreditLimit, creditLimit_);
          DARABONBA_PTR_FROM_JSON(LimitPeriod, limitPeriod_);
        };
        CreditConfig() = default ;
        CreditConfig(const CreditConfig &) = default ;
        CreditConfig(CreditConfig &&) = default ;
        CreditConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CreditConfig() = default ;
        CreditConfig& operator=(const CreditConfig &) = default ;
        CreditConfig& operator=(CreditConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creditLimit_ == nullptr
        && this->limitPeriod_ == nullptr; };
        // creditLimit Field Functions 
        bool hasCreditLimit() const { return this->creditLimit_ != nullptr;};
        void deleteCreditLimit() { this->creditLimit_ = nullptr;};
        inline int64_t getCreditLimit() const { DARABONBA_PTR_GET_DEFAULT(creditLimit_, 0L) };
        inline CreditConfig& setCreditLimit(int64_t creditLimit) { DARABONBA_PTR_SET_VALUE(creditLimit_, creditLimit) };


        // limitPeriod Field Functions 
        bool hasLimitPeriod() const { return this->limitPeriod_ != nullptr;};
        void deleteLimitPeriod() { this->limitPeriod_ = nullptr;};
        inline string getLimitPeriod() const { DARABONBA_PTR_GET_DEFAULT(limitPeriod_, "") };
        inline CreditConfig& setLimitPeriod(string limitPeriod) { DARABONBA_PTR_SET_VALUE(limitPeriod_, limitPeriod) };


      protected:
        // The quota limit. Valid values:
        // - 0: not available for use.
        // - >0: the quota is configured based on the numeric value.
        // - -1: unlimited.
        shared_ptr<int64_t> creditLimit_ {};
        // The quota period. Valid values:
        // - total: The total usage limit.
        // - month: Monthly. The quota resets based on the resource activation time as one cycle.
        // - day: Daily. The quota resets at 00:00.
        shared_ptr<string> limitPeriod_ {};
      };

      class AgentVersion : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AgentVersion& obj) { 
          DARABONBA_PTR_TO_JSON(UpgradeStatus, upgradeStatus_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, AgentVersion& obj) { 
          DARABONBA_PTR_FROM_JSON(UpgradeStatus, upgradeStatus_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        AgentVersion() = default ;
        AgentVersion(const AgentVersion &) = default ;
        AgentVersion(AgentVersion &&) = default ;
        AgentVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AgentVersion() = default ;
        AgentVersion& operator=(const AgentVersion &) = default ;
        AgentVersion& operator=(AgentVersion &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->upgradeStatus_ == nullptr
        && this->version_ == nullptr; };
        // upgradeStatus Field Functions 
        bool hasUpgradeStatus() const { return this->upgradeStatus_ != nullptr;};
        void deleteUpgradeStatus() { this->upgradeStatus_ = nullptr;};
        inline string getUpgradeStatus() const { DARABONBA_PTR_GET_DEFAULT(upgradeStatus_, "") };
        inline AgentVersion& setUpgradeStatus(string upgradeStatus) { DARABONBA_PTR_SET_VALUE(upgradeStatus_, upgradeStatus) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline AgentVersion& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<string> upgradeStatus_ {};
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->agentVersion_ == nullptr
        && this->createTime_ == nullptr && this->creditConfig_ == nullptr && this->expireTime_ == nullptr && this->installedSkills_ == nullptr && this->instanceId_ == nullptr
        && this->jvsPackageId_ == nullptr && this->modifyTime_ == nullptr && this->status_ == nullptr && this->usedCredit_ == nullptr; };
      // agentVersion Field Functions 
      bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
      void deleteAgentVersion() { this->agentVersion_ = nullptr;};
      inline const Data::AgentVersion & getAgentVersion() const { DARABONBA_PTR_GET_CONST(agentVersion_, Data::AgentVersion) };
      inline Data::AgentVersion getAgentVersion() { DARABONBA_PTR_GET(agentVersion_, Data::AgentVersion) };
      inline Data& setAgentVersion(const Data::AgentVersion & agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };
      inline Data& setAgentVersion(Data::AgentVersion && agentVersion) { DARABONBA_PTR_SET_RVALUE(agentVersion_, agentVersion) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creditConfig Field Functions 
      bool hasCreditConfig() const { return this->creditConfig_ != nullptr;};
      void deleteCreditConfig() { this->creditConfig_ = nullptr;};
      inline const vector<Data::CreditConfig> & getCreditConfig() const { DARABONBA_PTR_GET_CONST(creditConfig_, vector<Data::CreditConfig>) };
      inline vector<Data::CreditConfig> getCreditConfig() { DARABONBA_PTR_GET(creditConfig_, vector<Data::CreditConfig>) };
      inline Data& setCreditConfig(const vector<Data::CreditConfig> & creditConfig) { DARABONBA_PTR_SET_VALUE(creditConfig_, creditConfig) };
      inline Data& setCreditConfig(vector<Data::CreditConfig> && creditConfig) { DARABONBA_PTR_SET_RVALUE(creditConfig_, creditConfig) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Data& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // installedSkills Field Functions 
      bool hasInstalledSkills() const { return this->installedSkills_ != nullptr;};
      void deleteInstalledSkills() { this->installedSkills_ = nullptr;};
      inline const vector<Data::InstalledSkills> & getInstalledSkills() const { DARABONBA_PTR_GET_CONST(installedSkills_, vector<Data::InstalledSkills>) };
      inline vector<Data::InstalledSkills> getInstalledSkills() { DARABONBA_PTR_GET(installedSkills_, vector<Data::InstalledSkills>) };
      inline Data& setInstalledSkills(const vector<Data::InstalledSkills> & installedSkills) { DARABONBA_PTR_SET_VALUE(installedSkills_, installedSkills) };
      inline Data& setInstalledSkills(vector<Data::InstalledSkills> && installedSkills) { DARABONBA_PTR_SET_RVALUE(installedSkills_, installedSkills) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // jvsPackageId Field Functions 
      bool hasJvsPackageId() const { return this->jvsPackageId_ != nullptr;};
      void deleteJvsPackageId() { this->jvsPackageId_ = nullptr;};
      inline string getJvsPackageId() const { DARABONBA_PTR_GET_DEFAULT(jvsPackageId_, "") };
      inline Data& setJvsPackageId(string jvsPackageId) { DARABONBA_PTR_SET_VALUE(jvsPackageId_, jvsPackageId) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline Data& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // usedCredit Field Functions 
      bool hasUsedCredit() const { return this->usedCredit_ != nullptr;};
      void deleteUsedCredit() { this->usedCredit_ = nullptr;};
      inline const vector<Data::UsedCredit> & getUsedCredit() const { DARABONBA_PTR_GET_CONST(usedCredit_, vector<Data::UsedCredit>) };
      inline vector<Data::UsedCredit> getUsedCredit() { DARABONBA_PTR_GET(usedCredit_, vector<Data::UsedCredit>) };
      inline Data& setUsedCredit(const vector<Data::UsedCredit> & usedCredit) { DARABONBA_PTR_SET_VALUE(usedCredit_, usedCredit) };
      inline Data& setUsedCredit(vector<Data::UsedCredit> && usedCredit) { DARABONBA_PTR_SET_RVALUE(usedCredit_, usedCredit) };


    protected:
      shared_ptr<Data::AgentVersion> agentVersion_ {};
      // The creation time.
      shared_ptr<string> createTime_ {};
      // The credit quota configuration. Subsequent quota configurations overwrite previous configurations.
      shared_ptr<vector<Data::CreditConfig>> creditConfig_ {};
      // The expiration time.
      shared_ptr<string> expireTime_ {};
      shared_ptr<vector<Data::InstalledSkills>> installedSkills_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // This parameter is not supported.
      shared_ptr<string> jvsPackageId_ {};
      // The modification time.
      shared_ptr<string> modifyTime_ {};
      // The instance status.
      shared_ptr<string> status_ {};
      // The used credits.
      shared_ptr<vector<Data::UsedCredit>> usedCredit_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pendingUpgradeCount_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeJVSInstanceResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeJVSInstanceResponseBody::Data>) };
    inline vector<DescribeJVSInstanceResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeJVSInstanceResponseBody::Data>) };
    inline DescribeJVSInstanceResponseBody& setData(const vector<DescribeJVSInstanceResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeJVSInstanceResponseBody& setData(vector<DescribeJVSInstanceResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeJVSInstanceResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeJVSInstanceResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pendingUpgradeCount Field Functions 
    bool hasPendingUpgradeCount() const { return this->pendingUpgradeCount_ != nullptr;};
    void deletePendingUpgradeCount() { this->pendingUpgradeCount_ = nullptr;};
    inline int32_t getPendingUpgradeCount() const { DARABONBA_PTR_GET_DEFAULT(pendingUpgradeCount_, 0) };
    inline DescribeJVSInstanceResponseBody& setPendingUpgradeCount(int32_t pendingUpgradeCount) { DARABONBA_PTR_SET_VALUE(pendingUpgradeCount_, pendingUpgradeCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeJVSInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeJVSInstanceResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned result object.
    shared_ptr<vector<DescribeJVSInstanceResponseBody::Data>> data_ {};
    // The maximum number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that indicates the current position from which to start reading. An empty value indicates reading from the beginning.
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> pendingUpgradeCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
