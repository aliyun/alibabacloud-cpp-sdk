// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKGENTITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKGENTITYRESPONSEBODY_HPP_
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
  class ListKgEntityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKgEntityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListKgEntityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListKgEntityResponseBody() = default ;
    ListKgEntityResponseBody(const ListKgEntityResponseBody &) = default ;
    ListKgEntityResponseBody(ListKgEntityResponseBody &&) = default ;
    ListKgEntityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKgEntityResponseBody() = default ;
    ListKgEntityResponseBody& operator=(const ListKgEntityResponseBody &) = default ;
    ListKgEntityResponseBody& operator=(ListKgEntityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(EntityList, entityList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(EntityList, entityList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageResult() = default ;
      PageResult(const PageResult &) = default ;
      PageResult(PageResult &&) = default ;
      PageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageResult() = default ;
      PageResult& operator=(const PageResult &) = default ;
      PageResult& operator=(PageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EntityList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EntityList& obj) { 
          DARABONBA_PTR_TO_JSON(EntityId, entityId_);
          DARABONBA_PTR_TO_JSON(EntityType, entityType_);
          DARABONBA_PTR_TO_JSON(PropertyList, propertyList_);
        };
        friend void from_json(const Darabonba::Json& j, EntityList& obj) { 
          DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
          DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
          DARABONBA_PTR_FROM_JSON(PropertyList, propertyList_);
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
        class PropertyList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PropertyList& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(DataType, dataType_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, PropertyList& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(DataType, dataType_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          PropertyList() = default ;
          PropertyList(const PropertyList &) = default ;
          PropertyList(PropertyList &&) = default ;
          PropertyList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PropertyList() = default ;
          PropertyList& operator=(const PropertyList &) = default ;
          PropertyList& operator=(PropertyList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->dataType_ == nullptr && this->value_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline PropertyList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // dataType Field Functions 
          bool hasDataType() const { return this->dataType_ != nullptr;};
          void deleteDataType() { this->dataType_ = nullptr;};
          inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
          inline PropertyList& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline PropertyList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The property code.
          shared_ptr<string> code_ {};
          // The property data type. Valid values:
          // - STRING: string.
          // - INTEGER: integer.
          // - FLOAT: floating-point number.
          // - BOOLEAN: Boolean.
          // - DATE: date.
          // - LIST: list.
          shared_ptr<string> dataType_ {};
          // The property value.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->entityId_ == nullptr
        && this->entityType_ == nullptr && this->propertyList_ == nullptr; };
        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
        inline EntityList& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // entityType Field Functions 
        bool hasEntityType() const { return this->entityType_ != nullptr;};
        void deleteEntityType() { this->entityType_ = nullptr;};
        inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
        inline EntityList& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


        // propertyList Field Functions 
        bool hasPropertyList() const { return this->propertyList_ != nullptr;};
        void deletePropertyList() { this->propertyList_ = nullptr;};
        inline const vector<EntityList::PropertyList> & getPropertyList() const { DARABONBA_PTR_GET_CONST(propertyList_, vector<EntityList::PropertyList>) };
        inline vector<EntityList::PropertyList> getPropertyList() { DARABONBA_PTR_GET(propertyList_, vector<EntityList::PropertyList>) };
        inline EntityList& setPropertyList(const vector<EntityList::PropertyList> & propertyList) { DARABONBA_PTR_SET_VALUE(propertyList_, propertyList) };
        inline EntityList& setPropertyList(vector<EntityList::PropertyList> && propertyList) { DARABONBA_PTR_SET_RVALUE(propertyList_, propertyList) };


      protected:
        // The entity record ID.
        shared_ptr<string> entityId_ {};
        // The entity type code.
        shared_ptr<string> entityType_ {};
        // The entity record property list.
        shared_ptr<vector<EntityList::PropertyList>> propertyList_ {};
      };

      virtual bool empty() const override { return this->entityList_ == nullptr
        && this->totalCount_ == nullptr; };
      // entityList Field Functions 
      bool hasEntityList() const { return this->entityList_ != nullptr;};
      void deleteEntityList() { this->entityList_ = nullptr;};
      inline const vector<PageResult::EntityList> & getEntityList() const { DARABONBA_PTR_GET_CONST(entityList_, vector<PageResult::EntityList>) };
      inline vector<PageResult::EntityList> getEntityList() { DARABONBA_PTR_GET(entityList_, vector<PageResult::EntityList>) };
      inline PageResult& setEntityList(const vector<PageResult::EntityList> & entityList) { DARABONBA_PTR_SET_VALUE(entityList_, entityList) };
      inline PageResult& setEntityList(vector<PageResult::EntityList> && entityList) { DARABONBA_PTR_SET_RVALUE(entityList_, entityList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The paged entity record list.
      shared_ptr<vector<PageResult::EntityList>> entityList_ {};
      // The total number of records.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListKgEntityResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListKgEntityResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListKgEntityResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListKgEntityResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListKgEntityResponseBody::PageResult) };
    inline ListKgEntityResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListKgEntityResponseBody::PageResult) };
    inline ListKgEntityResponseBody& setPageResult(const ListKgEntityResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListKgEntityResponseBody& setPageResult(ListKgEntityResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKgEntityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListKgEntityResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The backend exception details.
    shared_ptr<string> message_ {};
    // The paged query result.
    shared_ptr<ListKgEntityResponseBody::PageResult> pageResult_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
