// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMYTENANTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMYTENANTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetMyTenantsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMyTenantsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TenantList, tenantList_);
    };
    friend void from_json(const Darabonba::Json& j, GetMyTenantsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TenantList, tenantList_);
    };
    GetMyTenantsResponseBody() = default ;
    GetMyTenantsResponseBody(const GetMyTenantsResponseBody &) = default ;
    GetMyTenantsResponseBody(GetMyTenantsResponseBody &&) = default ;
    GetMyTenantsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMyTenantsResponseBody() = default ;
    GetMyTenantsResponseBody& operator=(const GetMyTenantsResponseBody &) = default ;
    GetMyTenantsResponseBody& operator=(GetMyTenantsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TenantList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantList& obj) { 
        DARABONBA_PTR_TO_JSON(DeleteTime, deleteTime_);
        DARABONBA_PTR_TO_JSON(Deleted, deleted_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OpsTenant, opsTenant_);
        DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_TO_JSON(ResourceLimited, resourceLimited_);
        DARABONBA_PTR_TO_JSON(TenantTypeList, tenantTypeList_);
        DARABONBA_PTR_TO_JSON(TitleType, titleType_);
        DARABONBA_PTR_TO_JSON(Visible, visible_);
      };
      friend void from_json(const Darabonba::Json& j, TenantList& obj) { 
        DARABONBA_PTR_FROM_JSON(DeleteTime, deleteTime_);
        DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OpsTenant, opsTenant_);
        DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_FROM_JSON(ResourceLimited, resourceLimited_);
        DARABONBA_PTR_FROM_JSON(TenantTypeList, tenantTypeList_);
        DARABONBA_PTR_FROM_JSON(TitleType, titleType_);
        DARABONBA_PTR_FROM_JSON(Visible, visible_);
      };
      TenantList() = default ;
      TenantList(const TenantList &) = default ;
      TenantList(TenantList &&) = default ;
      TenantList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantList() = default ;
      TenantList& operator=(const TenantList &) = default ;
      TenantList& operator=(TenantList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deleteTime_ == nullptr
        && this->deleted_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->opsTenant_ == nullptr
        && this->ownerId_ == nullptr && this->resourceLimited_ == nullptr && this->tenantTypeList_ == nullptr && this->titleType_ == nullptr && this->visible_ == nullptr; };
      // deleteTime Field Functions 
      bool hasDeleteTime() const { return this->deleteTime_ != nullptr;};
      void deleteDeleteTime() { this->deleteTime_ = nullptr;};
      inline int64_t getDeleteTime() const { DARABONBA_PTR_GET_DEFAULT(deleteTime_, 0L) };
      inline TenantList& setDeleteTime(int64_t deleteTime) { DARABONBA_PTR_SET_VALUE(deleteTime_, deleteTime) };


      // deleted Field Functions 
      bool hasDeleted() const { return this->deleted_ != nullptr;};
      void deleteDeleted() { this->deleted_ = nullptr;};
      inline bool getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, false) };
      inline TenantList& setDeleted(bool deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline TenantList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline TenantList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline TenantList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // opsTenant Field Functions 
      bool hasOpsTenant() const { return this->opsTenant_ != nullptr;};
      void deleteOpsTenant() { this->opsTenant_ = nullptr;};
      inline bool getOpsTenant() const { DARABONBA_PTR_GET_DEFAULT(opsTenant_, false) };
      inline TenantList& setOpsTenant(bool opsTenant) { DARABONBA_PTR_SET_VALUE(opsTenant_, opsTenant) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
      inline TenantList& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // resourceLimited Field Functions 
      bool hasResourceLimited() const { return this->resourceLimited_ != nullptr;};
      void deleteResourceLimited() { this->resourceLimited_ = nullptr;};
      inline bool getResourceLimited() const { DARABONBA_PTR_GET_DEFAULT(resourceLimited_, false) };
      inline TenantList& setResourceLimited(bool resourceLimited) { DARABONBA_PTR_SET_VALUE(resourceLimited_, resourceLimited) };


      // tenantTypeList Field Functions 
      bool hasTenantTypeList() const { return this->tenantTypeList_ != nullptr;};
      void deleteTenantTypeList() { this->tenantTypeList_ = nullptr;};
      inline const vector<string> & getTenantTypeList() const { DARABONBA_PTR_GET_CONST(tenantTypeList_, vector<string>) };
      inline vector<string> getTenantTypeList() { DARABONBA_PTR_GET(tenantTypeList_, vector<string>) };
      inline TenantList& setTenantTypeList(const vector<string> & tenantTypeList) { DARABONBA_PTR_SET_VALUE(tenantTypeList_, tenantTypeList) };
      inline TenantList& setTenantTypeList(vector<string> && tenantTypeList) { DARABONBA_PTR_SET_RVALUE(tenantTypeList_, tenantTypeList) };


      // titleType Field Functions 
      bool hasTitleType() const { return this->titleType_ != nullptr;};
      void deleteTitleType() { this->titleType_ = nullptr;};
      inline string getTitleType() const { DARABONBA_PTR_GET_DEFAULT(titleType_, "") };
      inline TenantList& setTitleType(string titleType) { DARABONBA_PTR_SET_VALUE(titleType_, titleType) };


      // visible Field Functions 
      bool hasVisible() const { return this->visible_ != nullptr;};
      void deleteVisible() { this->visible_ = nullptr;};
      inline bool getVisible() const { DARABONBA_PTR_GET_DEFAULT(visible_, false) };
      inline TenantList& setVisible(bool visible) { DARABONBA_PTR_SET_VALUE(visible_, visible) };


    protected:
      shared_ptr<int64_t> deleteTime_ {};
      shared_ptr<bool> deleted_ {};
      shared_ptr<string> description_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<bool> opsTenant_ {};
      shared_ptr<string> ownerId_ {};
      shared_ptr<bool> resourceLimited_ {};
      shared_ptr<vector<string>> tenantTypeList_ {};
      shared_ptr<string> titleType_ {};
      shared_ptr<bool> visible_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->tenantList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetMyTenantsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetMyTenantsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMyTenantsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMyTenantsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMyTenantsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tenantList Field Functions 
    bool hasTenantList() const { return this->tenantList_ != nullptr;};
    void deleteTenantList() { this->tenantList_ = nullptr;};
    inline const vector<GetMyTenantsResponseBody::TenantList> & getTenantList() const { DARABONBA_PTR_GET_CONST(tenantList_, vector<GetMyTenantsResponseBody::TenantList>) };
    inline vector<GetMyTenantsResponseBody::TenantList> getTenantList() { DARABONBA_PTR_GET(tenantList_, vector<GetMyTenantsResponseBody::TenantList>) };
    inline GetMyTenantsResponseBody& setTenantList(const vector<GetMyTenantsResponseBody::TenantList> & tenantList) { DARABONBA_PTR_SET_VALUE(tenantList_, tenantList) };
    inline GetMyTenantsResponseBody& setTenantList(vector<GetMyTenantsResponseBody::TenantList> && tenantList) { DARABONBA_PTR_SET_RVALUE(tenantList_, tenantList) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<vector<GetMyTenantsResponseBody::TenantList>> tenantList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
