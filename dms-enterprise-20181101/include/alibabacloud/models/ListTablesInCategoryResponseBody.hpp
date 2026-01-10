// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLESINCATEGORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLESINCATEGORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MetaCategoryTableEntity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTablesInCategoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTablesInCategoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EntityList, entityList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTablesInCategoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityList, entityList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTablesInCategoryResponseBody() = default ;
    ListTablesInCategoryResponseBody(const ListTablesInCategoryResponseBody &) = default ;
    ListTablesInCategoryResponseBody(ListTablesInCategoryResponseBody &&) = default ;
    ListTablesInCategoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTablesInCategoryResponseBody() = default ;
    ListTablesInCategoryResponseBody& operator=(const ListTablesInCategoryResponseBody &) = default ;
    ListTablesInCategoryResponseBody& operator=(ListTablesInCategoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EntityList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EntityList& obj) { 
        DARABONBA_PTR_TO_JSON(MetaCategoryTableEntity, metaCategoryTableEntity_);
      };
      friend void from_json(const Darabonba::Json& j, EntityList& obj) { 
        DARABONBA_PTR_FROM_JSON(MetaCategoryTableEntity, metaCategoryTableEntity_);
      };
      EntityList() = default ;
      EntityList(const EntityList &) = default ;
      EntityList(EntityList &&) = default ;
      EntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EntityList() = default ;
      EntityList& operator=(const EntityList &) = default ;
      EntityList& operator=(EntityList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->metaCategoryTableEntity_ == nullptr; };
      // metaCategoryTableEntity Field Functions 
      bool hasMetaCategoryTableEntity() const { return this->metaCategoryTableEntity_ != nullptr;};
      void deleteMetaCategoryTableEntity() { this->metaCategoryTableEntity_ = nullptr;};
      inline const vector<MetaCategoryTableEntity> & getMetaCategoryTableEntity() const { DARABONBA_PTR_GET_CONST(metaCategoryTableEntity_, vector<MetaCategoryTableEntity>) };
      inline vector<MetaCategoryTableEntity> getMetaCategoryTableEntity() { DARABONBA_PTR_GET(metaCategoryTableEntity_, vector<MetaCategoryTableEntity>) };
      inline EntityList& setMetaCategoryTableEntity(const vector<MetaCategoryTableEntity> & metaCategoryTableEntity) { DARABONBA_PTR_SET_VALUE(metaCategoryTableEntity_, metaCategoryTableEntity) };
      inline EntityList& setMetaCategoryTableEntity(vector<MetaCategoryTableEntity> && metaCategoryTableEntity) { DARABONBA_PTR_SET_RVALUE(metaCategoryTableEntity_, metaCategoryTableEntity) };


    protected:
      shared_ptr<vector<MetaCategoryTableEntity>> metaCategoryTableEntity_ {};
    };

    virtual bool empty() const override { return this->entityList_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // entityList Field Functions 
    bool hasEntityList() const { return this->entityList_ != nullptr;};
    void deleteEntityList() { this->entityList_ = nullptr;};
    inline const ListTablesInCategoryResponseBody::EntityList & getEntityList() const { DARABONBA_PTR_GET_CONST(entityList_, ListTablesInCategoryResponseBody::EntityList) };
    inline ListTablesInCategoryResponseBody::EntityList getEntityList() { DARABONBA_PTR_GET(entityList_, ListTablesInCategoryResponseBody::EntityList) };
    inline ListTablesInCategoryResponseBody& setEntityList(const ListTablesInCategoryResponseBody::EntityList & entityList) { DARABONBA_PTR_SET_VALUE(entityList_, entityList) };
    inline ListTablesInCategoryResponseBody& setEntityList(ListTablesInCategoryResponseBody::EntityList && entityList) { DARABONBA_PTR_SET_RVALUE(entityList_, entityList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListTablesInCategoryResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListTablesInCategoryResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTablesInCategoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTablesInCategoryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListTablesInCategoryResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // List of table information associated with the asset category.
    shared_ptr<ListTablesInCategoryResponseBody::EntityList> entityList_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request succeeded.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
