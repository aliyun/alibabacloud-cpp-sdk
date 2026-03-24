// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDSENTITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDSENTITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListDSEntityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDSEntityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Entities, entities_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDSEntityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Entities, entities_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDSEntityResponseBody() = default ;
    ListDSEntityResponseBody(const ListDSEntityResponseBody &) = default ;
    ListDSEntityResponseBody(ListDSEntityResponseBody &&) = default ;
    ListDSEntityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDSEntityResponseBody() = default ;
    ListDSEntityResponseBody& operator=(const ListDSEntityResponseBody &) = default ;
    ListDSEntityResponseBody& operator=(ListDSEntityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Entities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Entities& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
        DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_TO_JSON(EntityId, entityId_);
        DARABONBA_PTR_TO_JSON(EntityName, entityName_);
        DARABONBA_PTR_TO_JSON(EntityType, entityType_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(ModifyUserId, modifyUserId_);
        DARABONBA_PTR_TO_JSON(ModifyUserName, modifyUserName_);
        DARABONBA_PTR_TO_JSON(SysEntityCode, sysEntityCode_);
      };
      friend void from_json(const Darabonba::Json& j, Entities& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
        DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
        DARABONBA_PTR_FROM_JSON(EntityName, entityName_);
        DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(ModifyUserId, modifyUserId_);
        DARABONBA_PTR_FROM_JSON(ModifyUserName, modifyUserName_);
        DARABONBA_PTR_FROM_JSON(SysEntityCode, sysEntityCode_);
      };
      Entities() = default ;
      Entities(const Entities &) = default ;
      Entities(Entities &&) = default ;
      Entities(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Entities() = default ;
      Entities& operator=(const Entities &) = default ;
      Entities& operator=(Entities &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createUserId_ == nullptr && this->createUserName_ == nullptr && this->entityId_ == nullptr && this->entityName_ == nullptr && this->entityType_ == nullptr
        && this->modifyTime_ == nullptr && this->modifyUserId_ == nullptr && this->modifyUserName_ == nullptr && this->sysEntityCode_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Entities& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUserId Field Functions 
      bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
      void deleteCreateUserId() { this->createUserId_ = nullptr;};
      inline string getCreateUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, "") };
      inline Entities& setCreateUserId(string createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


      // createUserName Field Functions 
      bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
      void deleteCreateUserName() { this->createUserName_ = nullptr;};
      inline string getCreateUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
      inline Entities& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


      // entityId Field Functions 
      bool hasEntityId() const { return this->entityId_ != nullptr;};
      void deleteEntityId() { this->entityId_ = nullptr;};
      inline int64_t getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
      inline Entities& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


      // entityName Field Functions 
      bool hasEntityName() const { return this->entityName_ != nullptr;};
      void deleteEntityName() { this->entityName_ = nullptr;};
      inline string getEntityName() const { DARABONBA_PTR_GET_DEFAULT(entityName_, "") };
      inline Entities& setEntityName(string entityName) { DARABONBA_PTR_SET_VALUE(entityName_, entityName) };


      // entityType Field Functions 
      bool hasEntityType() const { return this->entityType_ != nullptr;};
      void deleteEntityType() { this->entityType_ = nullptr;};
      inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
      inline Entities& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline Entities& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // modifyUserId Field Functions 
      bool hasModifyUserId() const { return this->modifyUserId_ != nullptr;};
      void deleteModifyUserId() { this->modifyUserId_ = nullptr;};
      inline string getModifyUserId() const { DARABONBA_PTR_GET_DEFAULT(modifyUserId_, "") };
      inline Entities& setModifyUserId(string modifyUserId) { DARABONBA_PTR_SET_VALUE(modifyUserId_, modifyUserId) };


      // modifyUserName Field Functions 
      bool hasModifyUserName() const { return this->modifyUserName_ != nullptr;};
      void deleteModifyUserName() { this->modifyUserName_ = nullptr;};
      inline string getModifyUserName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserName_, "") };
      inline Entities& setModifyUserName(string modifyUserName) { DARABONBA_PTR_SET_VALUE(modifyUserName_, modifyUserName) };


      // sysEntityCode Field Functions 
      bool hasSysEntityCode() const { return this->sysEntityCode_ != nullptr;};
      void deleteSysEntityCode() { this->sysEntityCode_ = nullptr;};
      inline string getSysEntityCode() const { DARABONBA_PTR_GET_DEFAULT(sysEntityCode_, "") };
      inline Entities& setSysEntityCode(string sysEntityCode) { DARABONBA_PTR_SET_VALUE(sysEntityCode_, sysEntityCode) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> createUserId_ {};
      shared_ptr<string> createUserName_ {};
      shared_ptr<int64_t> entityId_ {};
      shared_ptr<string> entityName_ {};
      shared_ptr<string> entityType_ {};
      shared_ptr<string> modifyTime_ {};
      shared_ptr<string> modifyUserId_ {};
      shared_ptr<string> modifyUserName_ {};
      shared_ptr<string> sysEntityCode_ {};
    };

    virtual bool empty() const override { return this->entities_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // entities Field Functions 
    bool hasEntities() const { return this->entities_ != nullptr;};
    void deleteEntities() { this->entities_ = nullptr;};
    inline const vector<ListDSEntityResponseBody::Entities> & getEntities() const { DARABONBA_PTR_GET_CONST(entities_, vector<ListDSEntityResponseBody::Entities>) };
    inline vector<ListDSEntityResponseBody::Entities> getEntities() { DARABONBA_PTR_GET(entities_, vector<ListDSEntityResponseBody::Entities>) };
    inline ListDSEntityResponseBody& setEntities(const vector<ListDSEntityResponseBody::Entities> & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
    inline ListDSEntityResponseBody& setEntities(vector<ListDSEntityResponseBody::Entities> && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDSEntityResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDSEntityResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDSEntityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDSEntityResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListDSEntityResponseBody::Entities>> entities_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
