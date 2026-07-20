// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYSUGGESTIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYSUGGESTIONLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class GetSecuritySuggestionListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecuritySuggestionListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecuritySuggestionListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSecuritySuggestionListResponseBody() = default ;
    GetSecuritySuggestionListResponseBody(const GetSecuritySuggestionListResponseBody &) = default ;
    GetSecuritySuggestionListResponseBody(GetSecuritySuggestionListResponseBody &&) = default ;
    GetSecuritySuggestionListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecuritySuggestionListResponseBody() = default ;
    GetSecuritySuggestionListResponseBody& operator=(const GetSecuritySuggestionListResponseBody &) = default ;
    GetSecuritySuggestionListResponseBody& operator=(GetSecuritySuggestionListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigRuleList, configRuleList_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigRuleList, configRuleList_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class ConfigRuleList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigRuleList& obj) { 
          DARABONBA_PTR_TO_JSON(AccountId, accountId_);
          DARABONBA_PTR_TO_JSON(AutomationType, automationType_);
          DARABONBA_PTR_TO_JSON(Compliance, compliance_);
          DARABONBA_PTR_TO_JSON(ComplianceObject, complianceObject_);
          DARABONBA_PTR_TO_JSON(ConfigRuleArn, configRuleArn_);
          DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
          DARABONBA_PTR_TO_JSON(ConfigRuleName, configRuleName_);
          DARABONBA_PTR_TO_JSON(ConfigRuleState, configRuleState_);
          DARABONBA_PTR_TO_JSON(CreateBy, createBy_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ResourceTypesScope, resourceTypesScope_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_TO_JSON(SourceIdentifier, sourceIdentifier_);
          DARABONBA_PTR_TO_JSON(SourceOwner, sourceOwner_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigRuleList& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
          DARABONBA_PTR_FROM_JSON(AutomationType, automationType_);
          DARABONBA_PTR_FROM_JSON(Compliance, compliance_);
          DARABONBA_PTR_FROM_JSON(ComplianceObject, complianceObject_);
          DARABONBA_PTR_FROM_JSON(ConfigRuleArn, configRuleArn_);
          DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
          DARABONBA_PTR_FROM_JSON(ConfigRuleName, configRuleName_);
          DARABONBA_PTR_FROM_JSON(ConfigRuleState, configRuleState_);
          DARABONBA_PTR_FROM_JSON(CreateBy, createBy_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ResourceTypesScope, resourceTypesScope_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_FROM_JSON(SourceIdentifier, sourceIdentifier_);
          DARABONBA_PTR_FROM_JSON(SourceOwner, sourceOwner_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        ConfigRuleList() = default ;
        ConfigRuleList(const ConfigRuleList &) = default ;
        ConfigRuleList(ConfigRuleList &&) = default ;
        ConfigRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConfigRuleList() = default ;
        ConfigRuleList& operator=(const ConfigRuleList &) = default ;
        ConfigRuleList& operator=(ConfigRuleList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> key_ {};
          shared_ptr<string> value_ {};
        };

        class CreateBy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CreateBy& obj) { 
            DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
            DARABONBA_PTR_TO_JSON(CompliancePackName, compliancePackName_);
          };
          friend void from_json(const Darabonba::Json& j, CreateBy& obj) { 
            DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
            DARABONBA_PTR_FROM_JSON(CompliancePackName, compliancePackName_);
          };
          CreateBy() = default ;
          CreateBy(const CreateBy &) = default ;
          CreateBy(CreateBy &&) = default ;
          CreateBy(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CreateBy() = default ;
          CreateBy& operator=(const CreateBy &) = default ;
          CreateBy& operator=(CreateBy &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->compliancePackId_ == nullptr
        && this->compliancePackName_ == nullptr; };
          // compliancePackId Field Functions 
          bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
          void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
          inline string getCompliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
          inline CreateBy& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


          // compliancePackName Field Functions 
          bool hasCompliancePackName() const { return this->compliancePackName_ != nullptr;};
          void deleteCompliancePackName() { this->compliancePackName_ = nullptr;};
          inline string getCompliancePackName() const { DARABONBA_PTR_GET_DEFAULT(compliancePackName_, "") };
          inline CreateBy& setCompliancePackName(string compliancePackName) { DARABONBA_PTR_SET_VALUE(compliancePackName_, compliancePackName) };


        protected:
          shared_ptr<string> compliancePackId_ {};
          shared_ptr<string> compliancePackName_ {};
        };

        class ComplianceObject : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ComplianceObject& obj) { 
            DARABONBA_PTR_TO_JSON(ComplianceType, complianceType_);
            DARABONBA_PTR_TO_JSON(Count, count_);
          };
          friend void from_json(const Darabonba::Json& j, ComplianceObject& obj) { 
            DARABONBA_PTR_FROM_JSON(ComplianceType, complianceType_);
            DARABONBA_PTR_FROM_JSON(Count, count_);
          };
          ComplianceObject() = default ;
          ComplianceObject(const ComplianceObject &) = default ;
          ComplianceObject(ComplianceObject &&) = default ;
          ComplianceObject(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ComplianceObject() = default ;
          ComplianceObject& operator=(const ComplianceObject &) = default ;
          ComplianceObject& operator=(ComplianceObject &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->complianceType_ == nullptr
        && this->count_ == nullptr; };
          // complianceType Field Functions 
          bool hasComplianceType() const { return this->complianceType_ != nullptr;};
          void deleteComplianceType() { this->complianceType_ = nullptr;};
          inline string getComplianceType() const { DARABONBA_PTR_GET_DEFAULT(complianceType_, "") };
          inline ComplianceObject& setComplianceType(string complianceType) { DARABONBA_PTR_SET_VALUE(complianceType_, complianceType) };


          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
          inline ComplianceObject& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        protected:
          shared_ptr<string> complianceType_ {};
          shared_ptr<int32_t> count_ {};
        };

        virtual bool empty() const override { return this->accountId_ == nullptr
        && this->automationType_ == nullptr && this->compliance_ == nullptr && this->complianceObject_ == nullptr && this->configRuleArn_ == nullptr && this->configRuleId_ == nullptr
        && this->configRuleName_ == nullptr && this->configRuleState_ == nullptr && this->createBy_ == nullptr && this->description_ == nullptr && this->resourceTypesScope_ == nullptr
        && this->riskLevel_ == nullptr && this->sourceIdentifier_ == nullptr && this->sourceOwner_ == nullptr && this->tags_ == nullptr; };
        // accountId Field Functions 
        bool hasAccountId() const { return this->accountId_ != nullptr;};
        void deleteAccountId() { this->accountId_ = nullptr;};
        inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
        inline ConfigRuleList& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


        // automationType Field Functions 
        bool hasAutomationType() const { return this->automationType_ != nullptr;};
        void deleteAutomationType() { this->automationType_ = nullptr;};
        inline string getAutomationType() const { DARABONBA_PTR_GET_DEFAULT(automationType_, "") };
        inline ConfigRuleList& setAutomationType(string automationType) { DARABONBA_PTR_SET_VALUE(automationType_, automationType) };


        // compliance Field Functions 
        bool hasCompliance() const { return this->compliance_ != nullptr;};
        void deleteCompliance() { this->compliance_ = nullptr;};
        inline string getCompliance() const { DARABONBA_PTR_GET_DEFAULT(compliance_, "") };
        inline ConfigRuleList& setCompliance(string compliance) { DARABONBA_PTR_SET_VALUE(compliance_, compliance) };


        // complianceObject Field Functions 
        bool hasComplianceObject() const { return this->complianceObject_ != nullptr;};
        void deleteComplianceObject() { this->complianceObject_ = nullptr;};
        inline const ConfigRuleList::ComplianceObject & getComplianceObject() const { DARABONBA_PTR_GET_CONST(complianceObject_, ConfigRuleList::ComplianceObject) };
        inline ConfigRuleList::ComplianceObject getComplianceObject() { DARABONBA_PTR_GET(complianceObject_, ConfigRuleList::ComplianceObject) };
        inline ConfigRuleList& setComplianceObject(const ConfigRuleList::ComplianceObject & complianceObject) { DARABONBA_PTR_SET_VALUE(complianceObject_, complianceObject) };
        inline ConfigRuleList& setComplianceObject(ConfigRuleList::ComplianceObject && complianceObject) { DARABONBA_PTR_SET_RVALUE(complianceObject_, complianceObject) };


        // configRuleArn Field Functions 
        bool hasConfigRuleArn() const { return this->configRuleArn_ != nullptr;};
        void deleteConfigRuleArn() { this->configRuleArn_ = nullptr;};
        inline string getConfigRuleArn() const { DARABONBA_PTR_GET_DEFAULT(configRuleArn_, "") };
        inline ConfigRuleList& setConfigRuleArn(string configRuleArn) { DARABONBA_PTR_SET_VALUE(configRuleArn_, configRuleArn) };


        // configRuleId Field Functions 
        bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
        void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
        inline string getConfigRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
        inline ConfigRuleList& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


        // configRuleName Field Functions 
        bool hasConfigRuleName() const { return this->configRuleName_ != nullptr;};
        void deleteConfigRuleName() { this->configRuleName_ = nullptr;};
        inline string getConfigRuleName() const { DARABONBA_PTR_GET_DEFAULT(configRuleName_, "") };
        inline ConfigRuleList& setConfigRuleName(string configRuleName) { DARABONBA_PTR_SET_VALUE(configRuleName_, configRuleName) };


        // configRuleState Field Functions 
        bool hasConfigRuleState() const { return this->configRuleState_ != nullptr;};
        void deleteConfigRuleState() { this->configRuleState_ = nullptr;};
        inline string getConfigRuleState() const { DARABONBA_PTR_GET_DEFAULT(configRuleState_, "") };
        inline ConfigRuleList& setConfigRuleState(string configRuleState) { DARABONBA_PTR_SET_VALUE(configRuleState_, configRuleState) };


        // createBy Field Functions 
        bool hasCreateBy() const { return this->createBy_ != nullptr;};
        void deleteCreateBy() { this->createBy_ = nullptr;};
        inline const ConfigRuleList::CreateBy & getCreateBy() const { DARABONBA_PTR_GET_CONST(createBy_, ConfigRuleList::CreateBy) };
        inline ConfigRuleList::CreateBy getCreateBy() { DARABONBA_PTR_GET(createBy_, ConfigRuleList::CreateBy) };
        inline ConfigRuleList& setCreateBy(const ConfigRuleList::CreateBy & createBy) { DARABONBA_PTR_SET_VALUE(createBy_, createBy) };
        inline ConfigRuleList& setCreateBy(ConfigRuleList::CreateBy && createBy) { DARABONBA_PTR_SET_RVALUE(createBy_, createBy) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ConfigRuleList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // resourceTypesScope Field Functions 
        bool hasResourceTypesScope() const { return this->resourceTypesScope_ != nullptr;};
        void deleteResourceTypesScope() { this->resourceTypesScope_ = nullptr;};
        inline string getResourceTypesScope() const { DARABONBA_PTR_GET_DEFAULT(resourceTypesScope_, "") };
        inline ConfigRuleList& setResourceTypesScope(string resourceTypesScope) { DARABONBA_PTR_SET_VALUE(resourceTypesScope_, resourceTypesScope) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
        inline ConfigRuleList& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


        // sourceIdentifier Field Functions 
        bool hasSourceIdentifier() const { return this->sourceIdentifier_ != nullptr;};
        void deleteSourceIdentifier() { this->sourceIdentifier_ = nullptr;};
        inline string getSourceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(sourceIdentifier_, "") };
        inline ConfigRuleList& setSourceIdentifier(string sourceIdentifier) { DARABONBA_PTR_SET_VALUE(sourceIdentifier_, sourceIdentifier) };


        // sourceOwner Field Functions 
        bool hasSourceOwner() const { return this->sourceOwner_ != nullptr;};
        void deleteSourceOwner() { this->sourceOwner_ = nullptr;};
        inline string getSourceOwner() const { DARABONBA_PTR_GET_DEFAULT(sourceOwner_, "") };
        inline ConfigRuleList& setSourceOwner(string sourceOwner) { DARABONBA_PTR_SET_VALUE(sourceOwner_, sourceOwner) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<ConfigRuleList::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ConfigRuleList::Tags>) };
        inline vector<ConfigRuleList::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ConfigRuleList::Tags>) };
        inline ConfigRuleList& setTags(const vector<ConfigRuleList::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline ConfigRuleList& setTags(vector<ConfigRuleList::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        shared_ptr<int64_t> accountId_ {};
        shared_ptr<string> automationType_ {};
        shared_ptr<string> compliance_ {};
        shared_ptr<ConfigRuleList::ComplianceObject> complianceObject_ {};
        shared_ptr<string> configRuleArn_ {};
        shared_ptr<string> configRuleId_ {};
        shared_ptr<string> configRuleName_ {};
        shared_ptr<string> configRuleState_ {};
        shared_ptr<ConfigRuleList::CreateBy> createBy_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> resourceTypesScope_ {};
        shared_ptr<int32_t> riskLevel_ {};
        shared_ptr<string> sourceIdentifier_ {};
        shared_ptr<string> sourceOwner_ {};
        shared_ptr<vector<ConfigRuleList::Tags>> tags_ {};
      };

      virtual bool empty() const override { return this->configRuleList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // configRuleList Field Functions 
      bool hasConfigRuleList() const { return this->configRuleList_ != nullptr;};
      void deleteConfigRuleList() { this->configRuleList_ = nullptr;};
      inline const vector<Data::ConfigRuleList> & getConfigRuleList() const { DARABONBA_PTR_GET_CONST(configRuleList_, vector<Data::ConfigRuleList>) };
      inline vector<Data::ConfigRuleList> getConfigRuleList() { DARABONBA_PTR_GET(configRuleList_, vector<Data::ConfigRuleList>) };
      inline Data& setConfigRuleList(const vector<Data::ConfigRuleList> & configRuleList) { DARABONBA_PTR_SET_VALUE(configRuleList_, configRuleList) };
      inline Data& setConfigRuleList(vector<Data::ConfigRuleList> && configRuleList) { DARABONBA_PTR_SET_RVALUE(configRuleList_, configRuleList) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::ConfigRuleList>> configRuleList_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSecuritySuggestionListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSecuritySuggestionListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSecuritySuggestionListResponseBody::Data) };
    inline GetSecuritySuggestionListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSecuritySuggestionListResponseBody::Data) };
    inline GetSecuritySuggestionListResponseBody& setData(const GetSecuritySuggestionListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSecuritySuggestionListResponseBody& setData(GetSecuritySuggestionListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSecuritySuggestionListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSecuritySuggestionListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSecuritySuggestionListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetSecuritySuggestionListResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
