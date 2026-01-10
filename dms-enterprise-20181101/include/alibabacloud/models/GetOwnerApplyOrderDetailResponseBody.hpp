// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOWNERAPPLYORDERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOWNERAPPLYORDERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetOwnerApplyOrderDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOwnerApplyOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(OwnerApplyOrderDetail, ownerApplyOrderDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetOwnerApplyOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(OwnerApplyOrderDetail, ownerApplyOrderDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetOwnerApplyOrderDetailResponseBody() = default ;
    GetOwnerApplyOrderDetailResponseBody(const GetOwnerApplyOrderDetailResponseBody &) = default ;
    GetOwnerApplyOrderDetailResponseBody(GetOwnerApplyOrderDetailResponseBody &&) = default ;
    GetOwnerApplyOrderDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOwnerApplyOrderDetailResponseBody() = default ;
    GetOwnerApplyOrderDetailResponseBody& operator=(const GetOwnerApplyOrderDetailResponseBody &) = default ;
    GetOwnerApplyOrderDetailResponseBody& operator=(GetOwnerApplyOrderDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OwnerApplyOrderDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OwnerApplyOrderDetail& obj) { 
        DARABONBA_PTR_TO_JSON(ApplyType, applyType_);
        DARABONBA_PTR_TO_JSON(Resources, resources_);
      };
      friend void from_json(const Darabonba::Json& j, OwnerApplyOrderDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplyType, applyType_);
        DARABONBA_PTR_FROM_JSON(Resources, resources_);
      };
      OwnerApplyOrderDetail() = default ;
      OwnerApplyOrderDetail(const OwnerApplyOrderDetail &) = default ;
      OwnerApplyOrderDetail(OwnerApplyOrderDetail &&) = default ;
      OwnerApplyOrderDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OwnerApplyOrderDetail() = default ;
      OwnerApplyOrderDetail& operator=(const OwnerApplyOrderDetail &) = default ;
      OwnerApplyOrderDetail& operator=(OwnerApplyOrderDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Resources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Resources& obj) { 
          DARABONBA_PTR_TO_JSON(Logic, logic_);
          DARABONBA_PTR_TO_JSON(ResourceDetail, resourceDetail_);
          DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        };
        friend void from_json(const Darabonba::Json& j, Resources& obj) { 
          DARABONBA_PTR_FROM_JSON(Logic, logic_);
          DARABONBA_PTR_FROM_JSON(ResourceDetail, resourceDetail_);
          DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        };
        Resources() = default ;
        Resources(const Resources &) = default ;
        Resources(Resources &&) = default ;
        Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Resources() = default ;
        Resources& operator=(const Resources &) = default ;
        Resources& operator=(Resources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ResourceDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResourceDetail& obj) { 
            DARABONBA_PTR_TO_JSON(DbType, dbType_);
            DARABONBA_PTR_TO_JSON(EnvType, envType_);
            DARABONBA_PTR_TO_JSON(OwnerIds, ownerIds_);
            DARABONBA_PTR_TO_JSON(OwnerNickNames, ownerNickNames_);
            DARABONBA_PTR_TO_JSON(SearchName, searchName_);
            DARABONBA_PTR_TO_JSON(TableName, tableName_);
          };
          friend void from_json(const Darabonba::Json& j, ResourceDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(DbType, dbType_);
            DARABONBA_PTR_FROM_JSON(EnvType, envType_);
            DARABONBA_PTR_FROM_JSON(OwnerIds, ownerIds_);
            DARABONBA_PTR_FROM_JSON(OwnerNickNames, ownerNickNames_);
            DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
            DARABONBA_PTR_FROM_JSON(TableName, tableName_);
          };
          ResourceDetail() = default ;
          ResourceDetail(const ResourceDetail &) = default ;
          ResourceDetail(ResourceDetail &&) = default ;
          ResourceDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResourceDetail() = default ;
          ResourceDetail& operator=(const ResourceDetail &) = default ;
          ResourceDetail& operator=(ResourceDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dbType_ == nullptr
        && this->envType_ == nullptr && this->ownerIds_ == nullptr && this->ownerNickNames_ == nullptr && this->searchName_ == nullptr && this->tableName_ == nullptr; };
          // dbType Field Functions 
          bool hasDbType() const { return this->dbType_ != nullptr;};
          void deleteDbType() { this->dbType_ = nullptr;};
          inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
          inline ResourceDetail& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


          // envType Field Functions 
          bool hasEnvType() const { return this->envType_ != nullptr;};
          void deleteEnvType() { this->envType_ = nullptr;};
          inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
          inline ResourceDetail& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


          // ownerIds Field Functions 
          bool hasOwnerIds() const { return this->ownerIds_ != nullptr;};
          void deleteOwnerIds() { this->ownerIds_ = nullptr;};
          inline const vector<int64_t> & getOwnerIds() const { DARABONBA_PTR_GET_CONST(ownerIds_, vector<int64_t>) };
          inline vector<int64_t> getOwnerIds() { DARABONBA_PTR_GET(ownerIds_, vector<int64_t>) };
          inline ResourceDetail& setOwnerIds(const vector<int64_t> & ownerIds) { DARABONBA_PTR_SET_VALUE(ownerIds_, ownerIds) };
          inline ResourceDetail& setOwnerIds(vector<int64_t> && ownerIds) { DARABONBA_PTR_SET_RVALUE(ownerIds_, ownerIds) };


          // ownerNickNames Field Functions 
          bool hasOwnerNickNames() const { return this->ownerNickNames_ != nullptr;};
          void deleteOwnerNickNames() { this->ownerNickNames_ = nullptr;};
          inline const vector<string> & getOwnerNickNames() const { DARABONBA_PTR_GET_CONST(ownerNickNames_, vector<string>) };
          inline vector<string> getOwnerNickNames() { DARABONBA_PTR_GET(ownerNickNames_, vector<string>) };
          inline ResourceDetail& setOwnerNickNames(const vector<string> & ownerNickNames) { DARABONBA_PTR_SET_VALUE(ownerNickNames_, ownerNickNames) };
          inline ResourceDetail& setOwnerNickNames(vector<string> && ownerNickNames) { DARABONBA_PTR_SET_RVALUE(ownerNickNames_, ownerNickNames) };


          // searchName Field Functions 
          bool hasSearchName() const { return this->searchName_ != nullptr;};
          void deleteSearchName() { this->searchName_ = nullptr;};
          inline string getSearchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
          inline ResourceDetail& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


          // tableName Field Functions 
          bool hasTableName() const { return this->tableName_ != nullptr;};
          void deleteTableName() { this->tableName_ = nullptr;};
          inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
          inline ResourceDetail& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        protected:
          // The type of the database engine.
          shared_ptr<string> dbType_ {};
          // The type of the environment to which the instance belongs. For more information, see [Change the environment type of an instance](https://help.aliyun.com/document_detail/163309.html).
          shared_ptr<string> envType_ {};
          // The IDs of the original owners.
          shared_ptr<vector<int64_t>> ownerIds_ {};
          // The nicknames of the owners.
          shared_ptr<vector<string>> ownerNickNames_ {};
          // The search name of the resource.
          shared_ptr<string> searchName_ {};
          // The name of the table.
          // 
          // > : This parameter is returned when you submit a Database-OWNER ticket.
          shared_ptr<string> tableName_ {};
        };

        virtual bool empty() const override { return this->logic_ == nullptr
        && this->resourceDetail_ == nullptr && this->targetId_ == nullptr; };
        // logic Field Functions 
        bool hasLogic() const { return this->logic_ != nullptr;};
        void deleteLogic() { this->logic_ = nullptr;};
        inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
        inline Resources& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


        // resourceDetail Field Functions 
        bool hasResourceDetail() const { return this->resourceDetail_ != nullptr;};
        void deleteResourceDetail() { this->resourceDetail_ = nullptr;};
        inline const Resources::ResourceDetail & getResourceDetail() const { DARABONBA_PTR_GET_CONST(resourceDetail_, Resources::ResourceDetail) };
        inline Resources::ResourceDetail getResourceDetail() { DARABONBA_PTR_GET(resourceDetail_, Resources::ResourceDetail) };
        inline Resources& setResourceDetail(const Resources::ResourceDetail & resourceDetail) { DARABONBA_PTR_SET_VALUE(resourceDetail_, resourceDetail) };
        inline Resources& setResourceDetail(Resources::ResourceDetail && resourceDetail) { DARABONBA_PTR_SET_RVALUE(resourceDetail_, resourceDetail) };


        // targetId Field Functions 
        bool hasTargetId() const { return this->targetId_ != nullptr;};
        void deleteTargetId() { this->targetId_ = nullptr;};
        inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
        inline Resources& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      protected:
        // Indicates whether the database is a logical database. Valid values:
        // 
        // *   **true**: The instance is a logical database.
        // *   **false**: The instance is not a logical database.
        shared_ptr<bool> logic_ {};
        // The details of the resource.
        shared_ptr<Resources::ResourceDetail> resourceDetail_ {};
        // The ID of the resource.
        shared_ptr<string> targetId_ {};
      };

      virtual bool empty() const override { return this->applyType_ == nullptr
        && this->resources_ == nullptr; };
      // applyType Field Functions 
      bool hasApplyType() const { return this->applyType_ != nullptr;};
      void deleteApplyType() { this->applyType_ = nullptr;};
      inline string getApplyType() const { DARABONBA_PTR_GET_DEFAULT(applyType_, "") };
      inline OwnerApplyOrderDetail& setApplyType(string applyType) { DARABONBA_PTR_SET_VALUE(applyType_, applyType) };


      // resources Field Functions 
      bool hasResources() const { return this->resources_ != nullptr;};
      void deleteResources() { this->resources_ = nullptr;};
      inline const vector<OwnerApplyOrderDetail::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<OwnerApplyOrderDetail::Resources>) };
      inline vector<OwnerApplyOrderDetail::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<OwnerApplyOrderDetail::Resources>) };
      inline OwnerApplyOrderDetail& setResources(const vector<OwnerApplyOrderDetail::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
      inline OwnerApplyOrderDetail& setResources(vector<OwnerApplyOrderDetail::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    protected:
      // The type of the submitted ticket. Valid values:
      // 
      // *   **INSTANCE**: the ticket that applies for the permissions to be an instance owner
      // *   **DB**: the ticket that applies for the permissions to be a database owner
      // *   **TABLE**: the ticket that applies for the permissions to be a table owner
      shared_ptr<string> applyType_ {};
      // The details of the requested resource.
      shared_ptr<vector<OwnerApplyOrderDetail::Resources>> resources_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->ownerApplyOrderDetail_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetOwnerApplyOrderDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetOwnerApplyOrderDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // ownerApplyOrderDetail Field Functions 
    bool hasOwnerApplyOrderDetail() const { return this->ownerApplyOrderDetail_ != nullptr;};
    void deleteOwnerApplyOrderDetail() { this->ownerApplyOrderDetail_ = nullptr;};
    inline const GetOwnerApplyOrderDetailResponseBody::OwnerApplyOrderDetail & getOwnerApplyOrderDetail() const { DARABONBA_PTR_GET_CONST(ownerApplyOrderDetail_, GetOwnerApplyOrderDetailResponseBody::OwnerApplyOrderDetail) };
    inline GetOwnerApplyOrderDetailResponseBody::OwnerApplyOrderDetail getOwnerApplyOrderDetail() { DARABONBA_PTR_GET(ownerApplyOrderDetail_, GetOwnerApplyOrderDetailResponseBody::OwnerApplyOrderDetail) };
    inline GetOwnerApplyOrderDetailResponseBody& setOwnerApplyOrderDetail(const GetOwnerApplyOrderDetailResponseBody::OwnerApplyOrderDetail & ownerApplyOrderDetail) { DARABONBA_PTR_SET_VALUE(ownerApplyOrderDetail_, ownerApplyOrderDetail) };
    inline GetOwnerApplyOrderDetailResponseBody& setOwnerApplyOrderDetail(GetOwnerApplyOrderDetailResponseBody::OwnerApplyOrderDetail && ownerApplyOrderDetail) { DARABONBA_PTR_SET_RVALUE(ownerApplyOrderDetail_, ownerApplyOrderDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOwnerApplyOrderDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetOwnerApplyOrderDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The details of the ticket.
    shared_ptr<GetOwnerApplyOrderDetailResponseBody::OwnerApplyOrderDetail> ownerApplyOrderDetail_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
