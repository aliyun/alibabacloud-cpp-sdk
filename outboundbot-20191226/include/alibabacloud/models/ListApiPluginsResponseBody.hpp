// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIPLUGINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIPLUGINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListApiPluginsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiPluginsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiPlugins, apiPlugins_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiPluginsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiPlugins, apiPlugins_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApiPluginsResponseBody() = default ;
    ListApiPluginsResponseBody(const ListApiPluginsResponseBody &) = default ;
    ListApiPluginsResponseBody(ListApiPluginsResponseBody &&) = default ;
    ListApiPluginsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiPluginsResponseBody() = default ;
    ListApiPluginsResponseBody& operator=(const ListApiPluginsResponseBody &) = default ;
    ListApiPluginsResponseBody& operator=(ListApiPluginsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApiPlugins : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiPlugins& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DraftedConfigJson, draftedConfigJson_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PublishedConfigJson, publishedConfigJson_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, ApiPlugins& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DraftedConfigJson, draftedConfigJson_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PublishedConfigJson, publishedConfigJson_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      ApiPlugins() = default ;
      ApiPlugins(const ApiPlugins &) = default ;
      ApiPlugins(ApiPlugins &&) = default ;
      ApiPlugins(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiPlugins() = default ;
      ApiPlugins& operator=(const ApiPlugins &) = default ;
      ApiPlugins& operator=(ApiPlugins &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->draftedConfigJson_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr
        && this->publishedConfigJson_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->uuid_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ApiPlugins& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // draftedConfigJson Field Functions 
      bool hasDraftedConfigJson() const { return this->draftedConfigJson_ != nullptr;};
      void deleteDraftedConfigJson() { this->draftedConfigJson_ = nullptr;};
      inline string getDraftedConfigJson() const { DARABONBA_PTR_GET_DEFAULT(draftedConfigJson_, "") };
      inline ApiPlugins& setDraftedConfigJson(string draftedConfigJson) { DARABONBA_PTR_SET_VALUE(draftedConfigJson_, draftedConfigJson) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline ApiPlugins& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline ApiPlugins& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ApiPlugins& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ApiPlugins& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // publishedConfigJson Field Functions 
      bool hasPublishedConfigJson() const { return this->publishedConfigJson_ != nullptr;};
      void deletePublishedConfigJson() { this->publishedConfigJson_ = nullptr;};
      inline string getPublishedConfigJson() const { DARABONBA_PTR_GET_DEFAULT(publishedConfigJson_, "") };
      inline ApiPlugins& setPublishedConfigJson(string publishedConfigJson) { DARABONBA_PTR_SET_VALUE(publishedConfigJson_, publishedConfigJson) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ApiPlugins& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ApiPlugins& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline ApiPlugins& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> draftedConfigJson_ {};
      shared_ptr<int64_t> gmtCreate_ {};
      shared_ptr<int64_t> gmtModified_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> publishedConfigJson_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->apiPlugins_ == nullptr
        && this->code_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // apiPlugins Field Functions 
    bool hasApiPlugins() const { return this->apiPlugins_ != nullptr;};
    void deleteApiPlugins() { this->apiPlugins_ = nullptr;};
    inline const vector<ListApiPluginsResponseBody::ApiPlugins> & getApiPlugins() const { DARABONBA_PTR_GET_CONST(apiPlugins_, vector<ListApiPluginsResponseBody::ApiPlugins>) };
    inline vector<ListApiPluginsResponseBody::ApiPlugins> getApiPlugins() { DARABONBA_PTR_GET(apiPlugins_, vector<ListApiPluginsResponseBody::ApiPlugins>) };
    inline ListApiPluginsResponseBody& setApiPlugins(const vector<ListApiPluginsResponseBody::ApiPlugins> & apiPlugins) { DARABONBA_PTR_SET_VALUE(apiPlugins_, apiPlugins) };
    inline ListApiPluginsResponseBody& setApiPlugins(vector<ListApiPluginsResponseBody::ApiPlugins> && apiPlugins) { DARABONBA_PTR_SET_RVALUE(apiPlugins_, apiPlugins) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListApiPluginsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListApiPluginsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListApiPluginsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListApiPluginsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListApiPluginsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApiPluginsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListApiPluginsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListApiPluginsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListApiPluginsResponseBody::ApiPlugins>> apiPlugins_ {};
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
