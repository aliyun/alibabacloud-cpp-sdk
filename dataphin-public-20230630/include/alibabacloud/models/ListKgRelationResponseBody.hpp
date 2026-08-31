// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKGRELATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKGRELATIONRESPONSEBODY_HPP_
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
  class ListKgRelationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKgRelationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListKgRelationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListKgRelationResponseBody() = default ;
    ListKgRelationResponseBody(const ListKgRelationResponseBody &) = default ;
    ListKgRelationResponseBody(ListKgRelationResponseBody &&) = default ;
    ListKgRelationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKgRelationResponseBody() = default ;
    ListKgRelationResponseBody& operator=(const ListKgRelationResponseBody &) = default ;
    ListKgRelationResponseBody& operator=(ListKgRelationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(RelationList, relationList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(RelationList, relationList_);
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
      class RelationList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RelationList& obj) { 
          DARABONBA_PTR_TO_JSON(PropertyList, propertyList_);
          DARABONBA_PTR_TO_JSON(RelationId, relationId_);
          DARABONBA_PTR_TO_JSON(RelationType, relationType_);
          DARABONBA_PTR_TO_JSON(SourceEntityId, sourceEntityId_);
          DARABONBA_PTR_TO_JSON(TargetEntityId, targetEntityId_);
        };
        friend void from_json(const Darabonba::Json& j, RelationList& obj) { 
          DARABONBA_PTR_FROM_JSON(PropertyList, propertyList_);
          DARABONBA_PTR_FROM_JSON(RelationId, relationId_);
          DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
          DARABONBA_PTR_FROM_JSON(SourceEntityId, sourceEntityId_);
          DARABONBA_PTR_FROM_JSON(TargetEntityId, targetEntityId_);
        };
        RelationList() = default ;
        RelationList(const RelationList &) = default ;
        RelationList(RelationList &&) = default ;
        RelationList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RelationList() = default ;
        RelationList& operator=(const RelationList &) = default ;
        RelationList& operator=(RelationList &&) = default ;
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
          // The data type of the property. Valid values: STRING (string), INTEGER (integer), FLOAT (floating-point number), BOOLEAN (Boolean), DATE (date), and LIST (list).
          shared_ptr<string> dataType_ {};
          // The property value.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->propertyList_ == nullptr
        && this->relationId_ == nullptr && this->relationType_ == nullptr && this->sourceEntityId_ == nullptr && this->targetEntityId_ == nullptr; };
        // propertyList Field Functions 
        bool hasPropertyList() const { return this->propertyList_ != nullptr;};
        void deletePropertyList() { this->propertyList_ = nullptr;};
        inline const vector<RelationList::PropertyList> & getPropertyList() const { DARABONBA_PTR_GET_CONST(propertyList_, vector<RelationList::PropertyList>) };
        inline vector<RelationList::PropertyList> getPropertyList() { DARABONBA_PTR_GET(propertyList_, vector<RelationList::PropertyList>) };
        inline RelationList& setPropertyList(const vector<RelationList::PropertyList> & propertyList) { DARABONBA_PTR_SET_VALUE(propertyList_, propertyList) };
        inline RelationList& setPropertyList(vector<RelationList::PropertyList> && propertyList) { DARABONBA_PTR_SET_RVALUE(propertyList_, propertyList) };


        // relationId Field Functions 
        bool hasRelationId() const { return this->relationId_ != nullptr;};
        void deleteRelationId() { this->relationId_ = nullptr;};
        inline string getRelationId() const { DARABONBA_PTR_GET_DEFAULT(relationId_, "") };
        inline RelationList& setRelationId(string relationId) { DARABONBA_PTR_SET_VALUE(relationId_, relationId) };


        // relationType Field Functions 
        bool hasRelationType() const { return this->relationType_ != nullptr;};
        void deleteRelationType() { this->relationType_ = nullptr;};
        inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
        inline RelationList& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


        // sourceEntityId Field Functions 
        bool hasSourceEntityId() const { return this->sourceEntityId_ != nullptr;};
        void deleteSourceEntityId() { this->sourceEntityId_ = nullptr;};
        inline string getSourceEntityId() const { DARABONBA_PTR_GET_DEFAULT(sourceEntityId_, "") };
        inline RelationList& setSourceEntityId(string sourceEntityId) { DARABONBA_PTR_SET_VALUE(sourceEntityId_, sourceEntityId) };


        // targetEntityId Field Functions 
        bool hasTargetEntityId() const { return this->targetEntityId_ != nullptr;};
        void deleteTargetEntityId() { this->targetEntityId_ = nullptr;};
        inline string getTargetEntityId() const { DARABONBA_PTR_GET_DEFAULT(targetEntityId_, "") };
        inline RelationList& setTargetEntityId(string targetEntityId) { DARABONBA_PTR_SET_VALUE(targetEntityId_, targetEntityId) };


      protected:
        // The list of properties for the relationship record.
        shared_ptr<vector<RelationList::PropertyList>> propertyList_ {};
        // The relationship record ID.
        shared_ptr<string> relationId_ {};
        // The relationship type code.
        shared_ptr<string> relationType_ {};
        // The source entity ID.
        shared_ptr<string> sourceEntityId_ {};
        // The target entity ID.
        shared_ptr<string> targetEntityId_ {};
      };

      virtual bool empty() const override { return this->relationList_ == nullptr
        && this->totalCount_ == nullptr; };
      // relationList Field Functions 
      bool hasRelationList() const { return this->relationList_ != nullptr;};
      void deleteRelationList() { this->relationList_ = nullptr;};
      inline const vector<PageResult::RelationList> & getRelationList() const { DARABONBA_PTR_GET_CONST(relationList_, vector<PageResult::RelationList>) };
      inline vector<PageResult::RelationList> getRelationList() { DARABONBA_PTR_GET(relationList_, vector<PageResult::RelationList>) };
      inline PageResult& setRelationList(const vector<PageResult::RelationList> & relationList) { DARABONBA_PTR_SET_VALUE(relationList_, relationList) };
      inline PageResult& setRelationList(vector<PageResult::RelationList> && relationList) { DARABONBA_PTR_SET_RVALUE(relationList_, relationList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of paged relationship records.
      shared_ptr<vector<PageResult::RelationList>> relationList_ {};
      // The total number of records.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListKgRelationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListKgRelationResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListKgRelationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListKgRelationResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListKgRelationResponseBody::PageResult) };
    inline ListKgRelationResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListKgRelationResponseBody::PageResult) };
    inline ListKgRelationResponseBody& setPageResult(const ListKgRelationResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListKgRelationResponseBody& setPageResult(ListKgRelationResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKgRelationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListKgRelationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The backend exception details.
    shared_ptr<string> message_ {};
    // The paged query result.
    shared_ptr<ListKgRelationResponseBody::PageResult> pageResult_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
