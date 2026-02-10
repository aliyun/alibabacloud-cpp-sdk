// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYANTIBRUTEFORCERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYANTIBRUTEFORCERULEREQUEST_HPP_
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
  class ModifyAntiBruteForceRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAntiBruteForceRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultRule, defaultRule_);
      DARABONBA_PTR_TO_JSON(FailCount, failCount_);
      DARABONBA_PTR_TO_JSON(ForbiddenTime, forbiddenTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Span, span_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAntiBruteForceRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultRule, defaultRule_);
      DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
      DARABONBA_PTR_FROM_JSON(ForbiddenTime, forbiddenTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Span, span_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    ModifyAntiBruteForceRuleRequest() = default ;
    ModifyAntiBruteForceRuleRequest(const ModifyAntiBruteForceRuleRequest &) = default ;
    ModifyAntiBruteForceRuleRequest(ModifyAntiBruteForceRuleRequest &&) = default ;
    ModifyAntiBruteForceRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAntiBruteForceRuleRequest() = default ;
    ModifyAntiBruteForceRuleRequest& operator=(const ModifyAntiBruteForceRuleRequest &) = default ;
    ModifyAntiBruteForceRuleRequest& operator=(ModifyAntiBruteForceRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProtocolType : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProtocolType& obj) { 
        DARABONBA_PTR_TO_JSON(Rdp, rdp_);
        DARABONBA_PTR_TO_JSON(SqlServer, sqlServer_);
        DARABONBA_PTR_TO_JSON(Ssh, ssh_);
      };
      friend void from_json(const Darabonba::Json& j, ProtocolType& obj) { 
        DARABONBA_PTR_FROM_JSON(Rdp, rdp_);
        DARABONBA_PTR_FROM_JSON(SqlServer, sqlServer_);
        DARABONBA_PTR_FROM_JSON(Ssh, ssh_);
      };
      ProtocolType() = default ;
      ProtocolType(const ProtocolType &) = default ;
      ProtocolType(ProtocolType &&) = default ;
      ProtocolType(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProtocolType() = default ;
      ProtocolType& operator=(const ProtocolType &) = default ;
      ProtocolType& operator=(ProtocolType &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->rdp_ == nullptr
        && this->sqlServer_ == nullptr && this->ssh_ == nullptr; };
      // rdp Field Functions 
      bool hasRdp() const { return this->rdp_ != nullptr;};
      void deleteRdp() { this->rdp_ = nullptr;};
      inline string getRdp() const { DARABONBA_PTR_GET_DEFAULT(rdp_, "") };
      inline ProtocolType& setRdp(string rdp) { DARABONBA_PTR_SET_VALUE(rdp_, rdp) };


      // sqlServer Field Functions 
      bool hasSqlServer() const { return this->sqlServer_ != nullptr;};
      void deleteSqlServer() { this->sqlServer_ = nullptr;};
      inline string getSqlServer() const { DARABONBA_PTR_GET_DEFAULT(sqlServer_, "") };
      inline ProtocolType& setSqlServer(string sqlServer) { DARABONBA_PTR_SET_VALUE(sqlServer_, sqlServer) };


      // ssh Field Functions 
      bool hasSsh() const { return this->ssh_ != nullptr;};
      void deleteSsh() { this->ssh_ = nullptr;};
      inline string getSsh() const { DARABONBA_PTR_GET_DEFAULT(ssh_, "") };
      inline ProtocolType& setSsh(string ssh) { DARABONBA_PTR_SET_VALUE(ssh_, ssh) };


    protected:
      // Whether to modify the RDP interception method, which is enabled by default. Values:
      //   - **on**: Enable
      //   - **off**: Disable
      shared_ptr<string> rdp_ {};
      // Whether to modify the SQL Server interception method, which is disabled by default. Values:
      //   - **on**: Enable
      //   - **off**: Disable
      shared_ptr<string> sqlServer_ {};
      // Whether to modify the SSH interception method, which is enabled by default. Values:
      //   - **on**: Enable
      //   - **off**: Disable
      shared_ptr<string> ssh_ {};
    };

    virtual bool empty() const override { return this->defaultRule_ == nullptr
        && this->failCount_ == nullptr && this->forbiddenTime_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->protocolType_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->sourceIp_ == nullptr && this->span_ == nullptr && this->uuidList_ == nullptr; };
    // defaultRule Field Functions 
    bool hasDefaultRule() const { return this->defaultRule_ != nullptr;};
    void deleteDefaultRule() { this->defaultRule_ = nullptr;};
    inline bool getDefaultRule() const { DARABONBA_PTR_GET_DEFAULT(defaultRule_, false) };
    inline ModifyAntiBruteForceRuleRequest& setDefaultRule(bool defaultRule) { DARABONBA_PTR_SET_VALUE(defaultRule_, defaultRule) };


    // failCount Field Functions 
    bool hasFailCount() const { return this->failCount_ != nullptr;};
    void deleteFailCount() { this->failCount_ = nullptr;};
    inline int32_t getFailCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
    inline ModifyAntiBruteForceRuleRequest& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


    // forbiddenTime Field Functions 
    bool hasForbiddenTime() const { return this->forbiddenTime_ != nullptr;};
    void deleteForbiddenTime() { this->forbiddenTime_ = nullptr;};
    inline int32_t getForbiddenTime() const { DARABONBA_PTR_GET_DEFAULT(forbiddenTime_, 0) };
    inline ModifyAntiBruteForceRuleRequest& setForbiddenTime(int32_t forbiddenTime) { DARABONBA_PTR_SET_VALUE(forbiddenTime_, forbiddenTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ModifyAntiBruteForceRuleRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyAntiBruteForceRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline const ModifyAntiBruteForceRuleRequest::ProtocolType & getProtocolType() const { DARABONBA_PTR_GET_CONST(protocolType_, ModifyAntiBruteForceRuleRequest::ProtocolType) };
    inline ModifyAntiBruteForceRuleRequest::ProtocolType getProtocolType() { DARABONBA_PTR_GET(protocolType_, ModifyAntiBruteForceRuleRequest::ProtocolType) };
    inline ModifyAntiBruteForceRuleRequest& setProtocolType(const ModifyAntiBruteForceRuleRequest::ProtocolType & protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };
    inline ModifyAntiBruteForceRuleRequest& setProtocolType(ModifyAntiBruteForceRuleRequest::ProtocolType && protocolType) { DARABONBA_PTR_SET_RVALUE(protocolType_, protocolType) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyAntiBruteForceRuleRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyAntiBruteForceRuleRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // span Field Functions 
    bool hasSpan() const { return this->span_ != nullptr;};
    void deleteSpan() { this->span_ = nullptr;};
    inline int32_t getSpan() const { DARABONBA_PTR_GET_DEFAULT(span_, 0) };
    inline ModifyAntiBruteForceRuleRequest& setSpan(int32_t span) { DARABONBA_PTR_SET_VALUE(span_, span) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & getUuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> getUuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline ModifyAntiBruteForceRuleRequest& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline ModifyAntiBruteForceRuleRequest& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    // Specifies whether to set the defense rule as the default rule. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    shared_ptr<bool> defaultRule_ {};
    // The threshold of logon failures that you specify. Valid values:
    // 
    // *   **2**
    // *   **3**
    // *   **4**
    // *   **5**
    // *   **10**
    // *   **50**
    // *   **80**
    // *   **100**
    shared_ptr<int32_t> failCount_ {};
    // The period of time during which logons from an account are not allowed. Unit: minutes. Valid values:
    // 
    // *   **5**
    // *   **15**
    // *   **30**
    // *   **60**
    // *   **120**
    // *   **360**
    // *   **720**
    // *   **1440**
    // *   **10080**
    // *   **52560000**: permanent
    shared_ptr<int32_t> forbiddenTime_ {};
    // The ID of the defense rule.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The name of the defense rule.
    shared_ptr<string> name_ {};
    // The protocol types supported by the anti-brute force rule for interception.
    shared_ptr<ModifyAntiBruteForceRuleRequest::ProtocolType> protocolType_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
    // The period of time during which logon failures from an account are measured. Unit: minutes. Valid values:
    // 
    // *   **1**
    // *   **2**
    // *   **5**
    // *   **10**
    // *   **15**
    shared_ptr<int32_t> span_ {};
    // An array consisting of the UUIDs of the servers to which the defense rule is applied.
    shared_ptr<vector<string>> uuidList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
