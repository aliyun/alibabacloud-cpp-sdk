// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListIntegrationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListIntegrationResponseBody() = default ;
    ListIntegrationResponseBody(const ListIntegrationResponseBody &) = default ;
    ListIntegrationResponseBody(ListIntegrationResponseBody &&) = default ;
    ListIntegrationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationResponseBody() = default ;
    ListIntegrationResponseBody& operator=(const ListIntegrationResponseBody &) = default ;
    ListIntegrationResponseBody& operator=(ListIntegrationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Integrations, integrations_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Integrations, integrations_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class Integrations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Integrations& obj) { 
          DARABONBA_PTR_TO_JSON(ApiEndpoint, apiEndpoint_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(IntegrationDetail, integrationDetail_);
          DARABONBA_PTR_TO_JSON(IntegrationId, integrationId_);
          DARABONBA_PTR_TO_JSON(IntegrationName, integrationName_);
          DARABONBA_PTR_TO_JSON(IntegrationProductType, integrationProductType_);
          DARABONBA_PTR_TO_JSON(Liveness, liveness_);
          DARABONBA_PTR_TO_JSON(ShortToken, shortToken_);
          DARABONBA_PTR_TO_JSON(State, state_);
        };
        friend void from_json(const Darabonba::Json& j, Integrations& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiEndpoint, apiEndpoint_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(IntegrationDetail, integrationDetail_);
          DARABONBA_PTR_FROM_JSON(IntegrationId, integrationId_);
          DARABONBA_PTR_FROM_JSON(IntegrationName, integrationName_);
          DARABONBA_PTR_FROM_JSON(IntegrationProductType, integrationProductType_);
          DARABONBA_PTR_FROM_JSON(Liveness, liveness_);
          DARABONBA_PTR_FROM_JSON(ShortToken, shortToken_);
          DARABONBA_PTR_FROM_JSON(State, state_);
        };
        Integrations() = default ;
        Integrations(const Integrations &) = default ;
        Integrations(Integrations &&) = default ;
        Integrations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Integrations() = default ;
        Integrations& operator=(const Integrations &) = default ;
        Integrations& operator=(Integrations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class IntegrationDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const IntegrationDetail& obj) { 
            DARABONBA_PTR_TO_JSON(AutoRecover, autoRecover_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(DuplicateKey, duplicateKey_);
            DARABONBA_PTR_TO_JSON(ExtendedFieldRedefineRules, extendedFieldRedefineRules_);
            DARABONBA_PTR_TO_JSON(FieldRedefineRules, fieldRedefineRules_);
            DARABONBA_PTR_TO_JSON(InitiativeRecoverField, initiativeRecoverField_);
            DARABONBA_PTR_TO_JSON(InitiativeRecoverValue, initiativeRecoverValue_);
            DARABONBA_PTR_TO_JSON(RecoverTime, recoverTime_);
            DARABONBA_PTR_TO_JSON(Stat, stat_);
          };
          friend void from_json(const Darabonba::Json& j, IntegrationDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(AutoRecover, autoRecover_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(DuplicateKey, duplicateKey_);
            DARABONBA_PTR_FROM_JSON(ExtendedFieldRedefineRules, extendedFieldRedefineRules_);
            DARABONBA_PTR_FROM_JSON(FieldRedefineRules, fieldRedefineRules_);
            DARABONBA_PTR_FROM_JSON(InitiativeRecoverField, initiativeRecoverField_);
            DARABONBA_PTR_FROM_JSON(InitiativeRecoverValue, initiativeRecoverValue_);
            DARABONBA_PTR_FROM_JSON(RecoverTime, recoverTime_);
            DARABONBA_PTR_FROM_JSON(Stat, stat_);
          };
          IntegrationDetail() = default ;
          IntegrationDetail(const IntegrationDetail &) = default ;
          IntegrationDetail(IntegrationDetail &&) = default ;
          IntegrationDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~IntegrationDetail() = default ;
          IntegrationDetail& operator=(const IntegrationDetail &) = default ;
          IntegrationDetail& operator=(IntegrationDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->autoRecover_ == nullptr
        && this->description_ == nullptr && this->duplicateKey_ == nullptr && this->extendedFieldRedefineRules_ == nullptr && this->fieldRedefineRules_ == nullptr && this->initiativeRecoverField_ == nullptr
        && this->initiativeRecoverValue_ == nullptr && this->recoverTime_ == nullptr && this->stat_ == nullptr; };
          // autoRecover Field Functions 
          bool hasAutoRecover() const { return this->autoRecover_ != nullptr;};
          void deleteAutoRecover() { this->autoRecover_ = nullptr;};
          inline bool getAutoRecover() const { DARABONBA_PTR_GET_DEFAULT(autoRecover_, false) };
          inline IntegrationDetail& setAutoRecover(bool autoRecover) { DARABONBA_PTR_SET_VALUE(autoRecover_, autoRecover) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline IntegrationDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // duplicateKey Field Functions 
          bool hasDuplicateKey() const { return this->duplicateKey_ != nullptr;};
          void deleteDuplicateKey() { this->duplicateKey_ = nullptr;};
          inline string getDuplicateKey() const { DARABONBA_PTR_GET_DEFAULT(duplicateKey_, "") };
          inline IntegrationDetail& setDuplicateKey(string duplicateKey) { DARABONBA_PTR_SET_VALUE(duplicateKey_, duplicateKey) };


          // extendedFieldRedefineRules Field Functions 
          bool hasExtendedFieldRedefineRules() const { return this->extendedFieldRedefineRules_ != nullptr;};
          void deleteExtendedFieldRedefineRules() { this->extendedFieldRedefineRules_ = nullptr;};
          inline const vector<Darabonba::Json> & getExtendedFieldRedefineRules() const { DARABONBA_PTR_GET_CONST(extendedFieldRedefineRules_, vector<Darabonba::Json>) };
          inline vector<Darabonba::Json> getExtendedFieldRedefineRules() { DARABONBA_PTR_GET(extendedFieldRedefineRules_, vector<Darabonba::Json>) };
          inline IntegrationDetail& setExtendedFieldRedefineRules(const vector<Darabonba::Json> & extendedFieldRedefineRules) { DARABONBA_PTR_SET_VALUE(extendedFieldRedefineRules_, extendedFieldRedefineRules) };
          inline IntegrationDetail& setExtendedFieldRedefineRules(vector<Darabonba::Json> && extendedFieldRedefineRules) { DARABONBA_PTR_SET_RVALUE(extendedFieldRedefineRules_, extendedFieldRedefineRules) };


          // fieldRedefineRules Field Functions 
          bool hasFieldRedefineRules() const { return this->fieldRedefineRules_ != nullptr;};
          void deleteFieldRedefineRules() { this->fieldRedefineRules_ = nullptr;};
          inline const vector<Darabonba::Json> & getFieldRedefineRules() const { DARABONBA_PTR_GET_CONST(fieldRedefineRules_, vector<Darabonba::Json>) };
          inline vector<Darabonba::Json> getFieldRedefineRules() { DARABONBA_PTR_GET(fieldRedefineRules_, vector<Darabonba::Json>) };
          inline IntegrationDetail& setFieldRedefineRules(const vector<Darabonba::Json> & fieldRedefineRules) { DARABONBA_PTR_SET_VALUE(fieldRedefineRules_, fieldRedefineRules) };
          inline IntegrationDetail& setFieldRedefineRules(vector<Darabonba::Json> && fieldRedefineRules) { DARABONBA_PTR_SET_RVALUE(fieldRedefineRules_, fieldRedefineRules) };


          // initiativeRecoverField Field Functions 
          bool hasInitiativeRecoverField() const { return this->initiativeRecoverField_ != nullptr;};
          void deleteInitiativeRecoverField() { this->initiativeRecoverField_ = nullptr;};
          inline string getInitiativeRecoverField() const { DARABONBA_PTR_GET_DEFAULT(initiativeRecoverField_, "") };
          inline IntegrationDetail& setInitiativeRecoverField(string initiativeRecoverField) { DARABONBA_PTR_SET_VALUE(initiativeRecoverField_, initiativeRecoverField) };


          // initiativeRecoverValue Field Functions 
          bool hasInitiativeRecoverValue() const { return this->initiativeRecoverValue_ != nullptr;};
          void deleteInitiativeRecoverValue() { this->initiativeRecoverValue_ = nullptr;};
          inline string getInitiativeRecoverValue() const { DARABONBA_PTR_GET_DEFAULT(initiativeRecoverValue_, "") };
          inline IntegrationDetail& setInitiativeRecoverValue(string initiativeRecoverValue) { DARABONBA_PTR_SET_VALUE(initiativeRecoverValue_, initiativeRecoverValue) };


          // recoverTime Field Functions 
          bool hasRecoverTime() const { return this->recoverTime_ != nullptr;};
          void deleteRecoverTime() { this->recoverTime_ = nullptr;};
          inline int64_t getRecoverTime() const { DARABONBA_PTR_GET_DEFAULT(recoverTime_, 0L) };
          inline IntegrationDetail& setRecoverTime(int64_t recoverTime) { DARABONBA_PTR_SET_VALUE(recoverTime_, recoverTime) };


          // stat Field Functions 
          bool hasStat() const { return this->stat_ != nullptr;};
          void deleteStat() { this->stat_ = nullptr;};
          inline const vector<int64_t> & getStat() const { DARABONBA_PTR_GET_CONST(stat_, vector<int64_t>) };
          inline vector<int64_t> getStat() { DARABONBA_PTR_GET(stat_, vector<int64_t>) };
          inline IntegrationDetail& setStat(const vector<int64_t> & stat) { DARABONBA_PTR_SET_VALUE(stat_, stat) };
          inline IntegrationDetail& setStat(vector<int64_t> && stat) { DARABONBA_PTR_SET_RVALUE(stat_, stat) };


        protected:
          // Indicates whether alert events are automatically cleared. Valid values:
          // 
          // *   true (default)
          // *   false
          shared_ptr<bool> autoRecover_ {};
          // The description of the alert integration.
          shared_ptr<string> description_ {};
          // The fields whose values are deduplicated.
          shared_ptr<string> duplicateKey_ {};
          // The extended mapped fields of the alert source.
          shared_ptr<vector<Darabonba::Json>> extendedFieldRedefineRules_ {};
          // The predefined mapped fields of the alert source.
          shared_ptr<vector<Darabonba::Json>> fieldRedefineRules_ {};
          // The field for clearing alert events. The system queries alert events based on the field of alert clearing events and clears the alert events.
          // 
          // > Only the Log Service alert integration supports the parameter.
          shared_ptr<string> initiativeRecoverField_ {};
          // The value of the field for clearing alert events. The system queries alert events based on the field of alert clearing events and clears the alert events.
          // 
          // > Only the Log Service alert integration supports the parameter.
          shared_ptr<string> initiativeRecoverValue_ {};
          // The time when alert events are automatically cleared. Unit: seconds. Default value: 300.
          shared_ptr<int64_t> recoverTime_ {};
          // The total number of alert events and the number of abnormal alert events in the last hour.
          shared_ptr<vector<int64_t>> stat_ {};
        };

        virtual bool empty() const override { return this->apiEndpoint_ == nullptr
        && this->createTime_ == nullptr && this->integrationDetail_ == nullptr && this->integrationId_ == nullptr && this->integrationName_ == nullptr && this->integrationProductType_ == nullptr
        && this->liveness_ == nullptr && this->shortToken_ == nullptr && this->state_ == nullptr; };
        // apiEndpoint Field Functions 
        bool hasApiEndpoint() const { return this->apiEndpoint_ != nullptr;};
        void deleteApiEndpoint() { this->apiEndpoint_ = nullptr;};
        inline string getApiEndpoint() const { DARABONBA_PTR_GET_DEFAULT(apiEndpoint_, "") };
        inline Integrations& setApiEndpoint(string apiEndpoint) { DARABONBA_PTR_SET_VALUE(apiEndpoint_, apiEndpoint) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Integrations& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // integrationDetail Field Functions 
        bool hasIntegrationDetail() const { return this->integrationDetail_ != nullptr;};
        void deleteIntegrationDetail() { this->integrationDetail_ = nullptr;};
        inline const Integrations::IntegrationDetail & getIntegrationDetail() const { DARABONBA_PTR_GET_CONST(integrationDetail_, Integrations::IntegrationDetail) };
        inline Integrations::IntegrationDetail getIntegrationDetail() { DARABONBA_PTR_GET(integrationDetail_, Integrations::IntegrationDetail) };
        inline Integrations& setIntegrationDetail(const Integrations::IntegrationDetail & integrationDetail) { DARABONBA_PTR_SET_VALUE(integrationDetail_, integrationDetail) };
        inline Integrations& setIntegrationDetail(Integrations::IntegrationDetail && integrationDetail) { DARABONBA_PTR_SET_RVALUE(integrationDetail_, integrationDetail) };


        // integrationId Field Functions 
        bool hasIntegrationId() const { return this->integrationId_ != nullptr;};
        void deleteIntegrationId() { this->integrationId_ = nullptr;};
        inline int64_t getIntegrationId() const { DARABONBA_PTR_GET_DEFAULT(integrationId_, 0L) };
        inline Integrations& setIntegrationId(int64_t integrationId) { DARABONBA_PTR_SET_VALUE(integrationId_, integrationId) };


        // integrationName Field Functions 
        bool hasIntegrationName() const { return this->integrationName_ != nullptr;};
        void deleteIntegrationName() { this->integrationName_ = nullptr;};
        inline string getIntegrationName() const { DARABONBA_PTR_GET_DEFAULT(integrationName_, "") };
        inline Integrations& setIntegrationName(string integrationName) { DARABONBA_PTR_SET_VALUE(integrationName_, integrationName) };


        // integrationProductType Field Functions 
        bool hasIntegrationProductType() const { return this->integrationProductType_ != nullptr;};
        void deleteIntegrationProductType() { this->integrationProductType_ = nullptr;};
        inline string getIntegrationProductType() const { DARABONBA_PTR_GET_DEFAULT(integrationProductType_, "") };
        inline Integrations& setIntegrationProductType(string integrationProductType) { DARABONBA_PTR_SET_VALUE(integrationProductType_, integrationProductType) };


        // liveness Field Functions 
        bool hasLiveness() const { return this->liveness_ != nullptr;};
        void deleteLiveness() { this->liveness_ = nullptr;};
        inline string getLiveness() const { DARABONBA_PTR_GET_DEFAULT(liveness_, "") };
        inline Integrations& setLiveness(string liveness) { DARABONBA_PTR_SET_VALUE(liveness_, liveness) };


        // shortToken Field Functions 
        bool hasShortToken() const { return this->shortToken_ != nullptr;};
        void deleteShortToken() { this->shortToken_ = nullptr;};
        inline string getShortToken() const { DARABONBA_PTR_GET_DEFAULT(shortToken_, "") };
        inline Integrations& setShortToken(string shortToken) { DARABONBA_PTR_SET_VALUE(shortToken_, shortToken) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline bool getState() const { DARABONBA_PTR_GET_DEFAULT(state_, false) };
        inline Integrations& setState(bool state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      protected:
        // The endpoint of the alert integration.
        shared_ptr<string> apiEndpoint_ {};
        // The time when the alert integration was created.
        shared_ptr<string> createTime_ {};
        // The information about the alert events.
        shared_ptr<Integrations::IntegrationDetail> integrationDetail_ {};
        // The ID of the alert integration.
        shared_ptr<int64_t> integrationId_ {};
        // The name of the alert integration.
        shared_ptr<string> integrationName_ {};
        // The type of the alert integration. Valid values:
        // 
        // *   CLOUD_MONITOR: CloudMonitor
        // *   LOG_SERVICE: Log Service
        shared_ptr<string> integrationProductType_ {};
        // The activity of the alert integration
        shared_ptr<string> liveness_ {};
        // The authentication token of the alert integration.
        shared_ptr<string> shortToken_ {};
        // Indicates whether the alert integration was enabled. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> state_ {};
      };

      virtual bool empty() const override { return this->integrations_ == nullptr
        && this->page_ == nullptr && this->size_ == nullptr && this->total_ == nullptr; };
      // integrations Field Functions 
      bool hasIntegrations() const { return this->integrations_ != nullptr;};
      void deleteIntegrations() { this->integrations_ = nullptr;};
      inline const vector<PageInfo::Integrations> & getIntegrations() const { DARABONBA_PTR_GET_CONST(integrations_, vector<PageInfo::Integrations>) };
      inline vector<PageInfo::Integrations> getIntegrations() { DARABONBA_PTR_GET(integrations_, vector<PageInfo::Integrations>) };
      inline PageInfo& setIntegrations(const vector<PageInfo::Integrations> & integrations) { DARABONBA_PTR_SET_VALUE(integrations_, integrations) };
      inline PageInfo& setIntegrations(vector<PageInfo::Integrations> && integrations) { DARABONBA_PTR_SET_RVALUE(integrations_, integrations) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
      inline PageInfo& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline PageInfo& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline PageInfo& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The information about each alert integration.
      shared_ptr<vector<PageInfo::Integrations>> integrations_ {};
      // The page number of the returned page.
      shared_ptr<int64_t> page_ {};
      // The number of alert integrations returned per page.
      shared_ptr<int64_t> size_ {};
      // The total number of alert integrations.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListIntegrationResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListIntegrationResponseBody::PageInfo) };
    inline ListIntegrationResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListIntegrationResponseBody::PageInfo) };
    inline ListIntegrationResponseBody& setPageInfo(const ListIntegrationResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListIntegrationResponseBody& setPageInfo(ListIntegrationResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIntegrationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListIntegrationResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
