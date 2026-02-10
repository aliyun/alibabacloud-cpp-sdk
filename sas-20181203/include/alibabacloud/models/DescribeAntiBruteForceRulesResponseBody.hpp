// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANTIBRUTEFORCERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANTIBRUTEFORCERULESRESPONSEBODY_HPP_
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
  class DescribeAntiBruteForceRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAntiBruteForceRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAntiBruteForceRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeAntiBruteForceRulesResponseBody() = default ;
    DescribeAntiBruteForceRulesResponseBody(const DescribeAntiBruteForceRulesResponseBody &) = default ;
    DescribeAntiBruteForceRulesResponseBody(DescribeAntiBruteForceRulesResponseBody &&) = default ;
    DescribeAntiBruteForceRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAntiBruteForceRulesResponseBody() = default ;
    DescribeAntiBruteForceRulesResponseBody& operator=(const DescribeAntiBruteForceRulesResponseBody &) = default ;
    DescribeAntiBruteForceRulesResponseBody& operator=(DescribeAntiBruteForceRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_TO_JSON(DefaultRule, defaultRule_);
        DARABONBA_PTR_TO_JSON(EnableSmartRule, enableSmartRule_);
        DARABONBA_PTR_TO_JSON(FailCount, failCount_);
        DARABONBA_PTR_TO_JSON(ForbiddenTime, forbiddenTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MachineCount, machineCount_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_TO_JSON(Span, span_);
        DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_FROM_JSON(DefaultRule, defaultRule_);
        DARABONBA_PTR_FROM_JSON(EnableSmartRule, enableSmartRule_);
        DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
        DARABONBA_PTR_FROM_JSON(ForbiddenTime, forbiddenTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MachineCount, machineCount_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_FROM_JSON(Span, span_);
        DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
      };
      Rules() = default ;
      Rules(const Rules &) = default ;
      Rules(Rules &&) = default ;
      Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rules() = default ;
      Rules& operator=(const Rules &) = default ;
      Rules& operator=(Rules &&) = default ;
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
        // RDP interception method, values: 
        // - **on**: enable 
        // - **off**: disable
        shared_ptr<string> rdp_ {};
        // SqlServer interception mode, with values: 
        // - **on**: enable 
        // - **off**: disable
        shared_ptr<string> sqlServer_ {};
        // SSH interception method, with values: 
        // - **on**: enabled 
        // - **off**: disabled
        shared_ptr<string> ssh_ {};
      };

      virtual bool empty() const override { return this->createTimestamp_ == nullptr
        && this->defaultRule_ == nullptr && this->enableSmartRule_ == nullptr && this->failCount_ == nullptr && this->forbiddenTime_ == nullptr && this->id_ == nullptr
        && this->machineCount_ == nullptr && this->name_ == nullptr && this->protocolType_ == nullptr && this->span_ == nullptr && this->uuidList_ == nullptr; };
      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline Rules& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // defaultRule Field Functions 
      bool hasDefaultRule() const { return this->defaultRule_ != nullptr;};
      void deleteDefaultRule() { this->defaultRule_ = nullptr;};
      inline bool getDefaultRule() const { DARABONBA_PTR_GET_DEFAULT(defaultRule_, false) };
      inline Rules& setDefaultRule(bool defaultRule) { DARABONBA_PTR_SET_VALUE(defaultRule_, defaultRule) };


      // enableSmartRule Field Functions 
      bool hasEnableSmartRule() const { return this->enableSmartRule_ != nullptr;};
      void deleteEnableSmartRule() { this->enableSmartRule_ = nullptr;};
      inline bool getEnableSmartRule() const { DARABONBA_PTR_GET_DEFAULT(enableSmartRule_, false) };
      inline Rules& setEnableSmartRule(bool enableSmartRule) { DARABONBA_PTR_SET_VALUE(enableSmartRule_, enableSmartRule) };


      // failCount Field Functions 
      bool hasFailCount() const { return this->failCount_ != nullptr;};
      void deleteFailCount() { this->failCount_ = nullptr;};
      inline int32_t getFailCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
      inline Rules& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


      // forbiddenTime Field Functions 
      bool hasForbiddenTime() const { return this->forbiddenTime_ != nullptr;};
      void deleteForbiddenTime() { this->forbiddenTime_ = nullptr;};
      inline int32_t getForbiddenTime() const { DARABONBA_PTR_GET_DEFAULT(forbiddenTime_, 0) };
      inline Rules& setForbiddenTime(int32_t forbiddenTime) { DARABONBA_PTR_SET_VALUE(forbiddenTime_, forbiddenTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Rules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // machineCount Field Functions 
      bool hasMachineCount() const { return this->machineCount_ != nullptr;};
      void deleteMachineCount() { this->machineCount_ = nullptr;};
      inline int32_t getMachineCount() const { DARABONBA_PTR_GET_DEFAULT(machineCount_, 0) };
      inline Rules& setMachineCount(int32_t machineCount) { DARABONBA_PTR_SET_VALUE(machineCount_, machineCount) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Rules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline const Rules::ProtocolType & getProtocolType() const { DARABONBA_PTR_GET_CONST(protocolType_, Rules::ProtocolType) };
      inline Rules::ProtocolType getProtocolType() { DARABONBA_PTR_GET(protocolType_, Rules::ProtocolType) };
      inline Rules& setProtocolType(const Rules::ProtocolType & protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };
      inline Rules& setProtocolType(Rules::ProtocolType && protocolType) { DARABONBA_PTR_SET_RVALUE(protocolType_, protocolType) };


      // span Field Functions 
      bool hasSpan() const { return this->span_ != nullptr;};
      void deleteSpan() { this->span_ = nullptr;};
      inline int32_t getSpan() const { DARABONBA_PTR_GET_DEFAULT(span_, 0) };
      inline Rules& setSpan(int32_t span) { DARABONBA_PTR_SET_VALUE(span_, span) };


      // uuidList Field Functions 
      bool hasUuidList() const { return this->uuidList_ != nullptr;};
      void deleteUuidList() { this->uuidList_ = nullptr;};
      inline const vector<string> & getUuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
      inline vector<string> getUuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
      inline Rules& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
      inline Rules& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


    protected:
      // 防暴力破解规则创建时间戳。单位：毫秒。
      shared_ptr<int64_t> createTimestamp_ {};
      // Indicates whether the defense rule is the default rule. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      // 
      // >  The default rule takes effect on all servers that are not protected by defense rules against brute-force attacks.
      shared_ptr<bool> defaultRule_ {};
      // This parameter is deprecated.
      shared_ptr<bool> enableSmartRule_ {};
      // The threshold of logon failures that you specify.
      shared_ptr<int32_t> failCount_ {};
      // The period of time during which logons from an account are not allowed. Unit: minutes.
      shared_ptr<int32_t> forbiddenTime_ {};
      // The ID of the defense rule.
      shared_ptr<int64_t> id_ {};
      // The number of servers to which the defense rule is applied.
      shared_ptr<int32_t> machineCount_ {};
      // The name of the defense rule.
      shared_ptr<string> name_ {};
      // The types of protocols that the brute force cracking rule supports to intercept.
      shared_ptr<Rules::ProtocolType> protocolType_ {};
      // The period of time during which logon failures from an account are measured. Unit: minutes. If **Span** is set to 10, the defense rule takes effect when the logon failures measured within 10 minutes reaches the specified threshold. The IP address of attackers cannot be used to log on to the server in the specified period of time.
      shared_ptr<int32_t> span_ {};
      // An array consisting of the UUIDs of servers to which the defense rule is applied.
      shared_ptr<vector<string>> uuidList_ {};
    };

    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->requestId_ == nullptr && this->rules_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeAntiBruteForceRulesResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeAntiBruteForceRulesResponseBody::PageInfo) };
    inline DescribeAntiBruteForceRulesResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeAntiBruteForceRulesResponseBody::PageInfo) };
    inline DescribeAntiBruteForceRulesResponseBody& setPageInfo(const DescribeAntiBruteForceRulesResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeAntiBruteForceRulesResponseBody& setPageInfo(DescribeAntiBruteForceRulesResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAntiBruteForceRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<DescribeAntiBruteForceRulesResponseBody::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<DescribeAntiBruteForceRulesResponseBody::Rules>) };
    inline vector<DescribeAntiBruteForceRulesResponseBody::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<DescribeAntiBruteForceRulesResponseBody::Rules>) };
    inline DescribeAntiBruteForceRulesResponseBody& setRules(const vector<DescribeAntiBruteForceRulesResponseBody::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeAntiBruteForceRulesResponseBody& setRules(vector<DescribeAntiBruteForceRulesResponseBody::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The pagination information.
    shared_ptr<DescribeAntiBruteForceRulesResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // An array that consists of the defense rules returned.
    shared_ptr<vector<DescribeAntiBruteForceRulesResponseBody::Rules>> rules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
