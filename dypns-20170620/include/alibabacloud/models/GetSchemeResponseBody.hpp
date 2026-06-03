// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypns20170620
{
namespace Models
{
  class GetSchemeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSchemeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSchemeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSchemeResponseBody() = default ;
    GetSchemeResponseBody(const GetSchemeResponseBody &) = default ;
    GetSchemeResponseBody(GetSchemeResponseBody &&) = default ;
    GetSchemeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSchemeResponseBody() = default ;
    GetSchemeResponseBody& operator=(const GetSchemeResponseBody &) = default ;
    GetSchemeResponseBody& operator=(GetSchemeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AuditDesc, auditDesc_);
        DARABONBA_PTR_TO_JSON(AuditTime, auditTime_);
        DARABONBA_PTR_TO_JSON(BusinessTypeList, businessTypeList_);
        DARABONBA_PTR_TO_JSON(CompanyId, companyId_);
        DARABONBA_PTR_TO_JSON(CycleList, cycleList_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(IndustryId, industryId_);
        DARABONBA_PTR_TO_JSON(ScenesList, scenesList_);
        DARABONBA_PTR_TO_JSON(SchemeId, schemeId_);
        DARABONBA_PTR_TO_JSON(SchemeName, schemeName_);
        DARABONBA_PTR_TO_JSON(SchemeType, schemeType_);
        DARABONBA_PTR_TO_JSON(Statement, statement_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AuditDesc, auditDesc_);
        DARABONBA_PTR_FROM_JSON(AuditTime, auditTime_);
        DARABONBA_PTR_FROM_JSON(BusinessTypeList, businessTypeList_);
        DARABONBA_PTR_FROM_JSON(CompanyId, companyId_);
        DARABONBA_PTR_FROM_JSON(CycleList, cycleList_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(IndustryId, industryId_);
        DARABONBA_PTR_FROM_JSON(ScenesList, scenesList_);
        DARABONBA_PTR_FROM_JSON(SchemeId, schemeId_);
        DARABONBA_PTR_FROM_JSON(SchemeName, schemeName_);
        DARABONBA_PTR_FROM_JSON(SchemeType, schemeType_);
        DARABONBA_PTR_FROM_JSON(Statement, statement_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
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
      class ScenesList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScenesList& obj) { 
          DARABONBA_PTR_TO_JSON(ScenesId, scenesId_);
          DARABONBA_PTR_TO_JSON(ScenesName, scenesName_);
        };
        friend void from_json(const Darabonba::Json& j, ScenesList& obj) { 
          DARABONBA_PTR_FROM_JSON(ScenesId, scenesId_);
          DARABONBA_PTR_FROM_JSON(ScenesName, scenesName_);
        };
        ScenesList() = default ;
        ScenesList(const ScenesList &) = default ;
        ScenesList(ScenesList &&) = default ;
        ScenesList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScenesList() = default ;
        ScenesList& operator=(const ScenesList &) = default ;
        ScenesList& operator=(ScenesList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->scenesId_ == nullptr
        && this->scenesName_ == nullptr; };
        // scenesId Field Functions 
        bool hasScenesId() const { return this->scenesId_ != nullptr;};
        void deleteScenesId() { this->scenesId_ = nullptr;};
        inline int64_t getScenesId() const { DARABONBA_PTR_GET_DEFAULT(scenesId_, 0L) };
        inline ScenesList& setScenesId(int64_t scenesId) { DARABONBA_PTR_SET_VALUE(scenesId_, scenesId) };


        // scenesName Field Functions 
        bool hasScenesName() const { return this->scenesName_ != nullptr;};
        void deleteScenesName() { this->scenesName_ = nullptr;};
        inline string getScenesName() const { DARABONBA_PTR_GET_DEFAULT(scenesName_, "") };
        inline ScenesList& setScenesName(string scenesName) { DARABONBA_PTR_SET_VALUE(scenesName_, scenesName) };


      protected:
        shared_ptr<int64_t> scenesId_ {};
        shared_ptr<string> scenesName_ {};
      };

      virtual bool empty() const override { return this->auditDesc_ == nullptr
        && this->auditTime_ == nullptr && this->businessTypeList_ == nullptr && this->companyId_ == nullptr && this->cycleList_ == nullptr && this->description_ == nullptr
        && this->industryId_ == nullptr && this->scenesList_ == nullptr && this->schemeId_ == nullptr && this->schemeName_ == nullptr && this->schemeType_ == nullptr
        && this->statement_ == nullptr && this->status_ == nullptr && this->templateId_ == nullptr; };
      // auditDesc Field Functions 
      bool hasAuditDesc() const { return this->auditDesc_ != nullptr;};
      void deleteAuditDesc() { this->auditDesc_ = nullptr;};
      inline string getAuditDesc() const { DARABONBA_PTR_GET_DEFAULT(auditDesc_, "") };
      inline Data& setAuditDesc(string auditDesc) { DARABONBA_PTR_SET_VALUE(auditDesc_, auditDesc) };


      // auditTime Field Functions 
      bool hasAuditTime() const { return this->auditTime_ != nullptr;};
      void deleteAuditTime() { this->auditTime_ = nullptr;};
      inline int64_t getAuditTime() const { DARABONBA_PTR_GET_DEFAULT(auditTime_, 0L) };
      inline Data& setAuditTime(int64_t auditTime) { DARABONBA_PTR_SET_VALUE(auditTime_, auditTime) };


      // businessTypeList Field Functions 
      bool hasBusinessTypeList() const { return this->businessTypeList_ != nullptr;};
      void deleteBusinessTypeList() { this->businessTypeList_ = nullptr;};
      inline const vector<int32_t> & getBusinessTypeList() const { DARABONBA_PTR_GET_CONST(businessTypeList_, vector<int32_t>) };
      inline vector<int32_t> getBusinessTypeList() { DARABONBA_PTR_GET(businessTypeList_, vector<int32_t>) };
      inline Data& setBusinessTypeList(const vector<int32_t> & businessTypeList) { DARABONBA_PTR_SET_VALUE(businessTypeList_, businessTypeList) };
      inline Data& setBusinessTypeList(vector<int32_t> && businessTypeList) { DARABONBA_PTR_SET_RVALUE(businessTypeList_, businessTypeList) };


      // companyId Field Functions 
      bool hasCompanyId() const { return this->companyId_ != nullptr;};
      void deleteCompanyId() { this->companyId_ = nullptr;};
      inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
      inline Data& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


      // cycleList Field Functions 
      bool hasCycleList() const { return this->cycleList_ != nullptr;};
      void deleteCycleList() { this->cycleList_ = nullptr;};
      inline const vector<string> & getCycleList() const { DARABONBA_PTR_GET_CONST(cycleList_, vector<string>) };
      inline vector<string> getCycleList() { DARABONBA_PTR_GET(cycleList_, vector<string>) };
      inline Data& setCycleList(const vector<string> & cycleList) { DARABONBA_PTR_SET_VALUE(cycleList_, cycleList) };
      inline Data& setCycleList(vector<string> && cycleList) { DARABONBA_PTR_SET_RVALUE(cycleList_, cycleList) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // industryId Field Functions 
      bool hasIndustryId() const { return this->industryId_ != nullptr;};
      void deleteIndustryId() { this->industryId_ = nullptr;};
      inline string getIndustryId() const { DARABONBA_PTR_GET_DEFAULT(industryId_, "") };
      inline Data& setIndustryId(string industryId) { DARABONBA_PTR_SET_VALUE(industryId_, industryId) };


      // scenesList Field Functions 
      bool hasScenesList() const { return this->scenesList_ != nullptr;};
      void deleteScenesList() { this->scenesList_ = nullptr;};
      inline const vector<Data::ScenesList> & getScenesList() const { DARABONBA_PTR_GET_CONST(scenesList_, vector<Data::ScenesList>) };
      inline vector<Data::ScenesList> getScenesList() { DARABONBA_PTR_GET(scenesList_, vector<Data::ScenesList>) };
      inline Data& setScenesList(const vector<Data::ScenesList> & scenesList) { DARABONBA_PTR_SET_VALUE(scenesList_, scenesList) };
      inline Data& setScenesList(vector<Data::ScenesList> && scenesList) { DARABONBA_PTR_SET_RVALUE(scenesList_, scenesList) };


      // schemeId Field Functions 
      bool hasSchemeId() const { return this->schemeId_ != nullptr;};
      void deleteSchemeId() { this->schemeId_ = nullptr;};
      inline int64_t getSchemeId() const { DARABONBA_PTR_GET_DEFAULT(schemeId_, 0L) };
      inline Data& setSchemeId(int64_t schemeId) { DARABONBA_PTR_SET_VALUE(schemeId_, schemeId) };


      // schemeName Field Functions 
      bool hasSchemeName() const { return this->schemeName_ != nullptr;};
      void deleteSchemeName() { this->schemeName_ = nullptr;};
      inline string getSchemeName() const { DARABONBA_PTR_GET_DEFAULT(schemeName_, "") };
      inline Data& setSchemeName(string schemeName) { DARABONBA_PTR_SET_VALUE(schemeName_, schemeName) };


      // schemeType Field Functions 
      bool hasSchemeType() const { return this->schemeType_ != nullptr;};
      void deleteSchemeType() { this->schemeType_ = nullptr;};
      inline int32_t getSchemeType() const { DARABONBA_PTR_GET_DEFAULT(schemeType_, 0) };
      inline Data& setSchemeType(int32_t schemeType) { DARABONBA_PTR_SET_VALUE(schemeType_, schemeType) };


      // statement Field Functions 
      bool hasStatement() const { return this->statement_ != nullptr;};
      void deleteStatement() { this->statement_ = nullptr;};
      inline string getStatement() const { DARABONBA_PTR_GET_DEFAULT(statement_, "") };
      inline Data& setStatement(string statement) { DARABONBA_PTR_SET_VALUE(statement_, statement) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline Data& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      shared_ptr<string> auditDesc_ {};
      shared_ptr<int64_t> auditTime_ {};
      shared_ptr<vector<int32_t>> businessTypeList_ {};
      shared_ptr<int64_t> companyId_ {};
      shared_ptr<vector<string>> cycleList_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> industryId_ {};
      shared_ptr<vector<Data::ScenesList>> scenesList_ {};
      shared_ptr<int64_t> schemeId_ {};
      shared_ptr<string> schemeName_ {};
      shared_ptr<int32_t> schemeType_ {};
      shared_ptr<string> statement_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<int64_t> templateId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSchemeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSchemeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSchemeResponseBody::Data) };
    inline GetSchemeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSchemeResponseBody::Data) };
    inline GetSchemeResponseBody& setData(const GetSchemeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSchemeResponseBody& setData(GetSchemeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSchemeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSchemeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetSchemeResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
