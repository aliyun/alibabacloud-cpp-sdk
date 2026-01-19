// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTPAGELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTPAGELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventPageListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventPageListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(totalItem, totalItem_);
      DARABONBA_PTR_TO_JSON(totalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventPageListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(totalItem, totalItem_);
      DARABONBA_PTR_FROM_JSON(totalPage, totalPage_);
    };
    DescribeEventPageListResponseBody() = default ;
    DescribeEventPageListResponseBody(const DescribeEventPageListResponseBody &) = default ;
    DescribeEventPageListResponseBody(DescribeEventPageListResponseBody &&) = default ;
    DescribeEventPageListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventPageListResponseBody() = default ;
    DescribeEventPageListResponseBody& operator=(const DescribeEventPageListResponseBody &) = default ;
    DescribeEventPageListResponseBody& operator=(DescribeEventPageListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(children, children_);
        DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
        DARABONBA_PTR_TO_JSON(eventName, eventName_);
        DARABONBA_PTR_TO_JSON(eventStatus, eventStatus_);
        DARABONBA_PTR_TO_JSON(eventType, eventType_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(ruleCount, ruleCount_);
        DARABONBA_PTR_TO_JSON(templateCode, templateCode_);
        DARABONBA_PTR_TO_JSON(templateName, templateName_);
        DARABONBA_PTR_TO_JSON(templateType, templateType_);
        DARABONBA_PTR_TO_JSON(userCount, userCount_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(children, children_);
        DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
        DARABONBA_PTR_FROM_JSON(eventName, eventName_);
        DARABONBA_PTR_FROM_JSON(eventStatus, eventStatus_);
        DARABONBA_PTR_FROM_JSON(eventType, eventType_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(ruleCount, ruleCount_);
        DARABONBA_PTR_FROM_JSON(templateCode, templateCode_);
        DARABONBA_PTR_FROM_JSON(templateName, templateName_);
        DARABONBA_PTR_FROM_JSON(templateType, templateType_);
        DARABONBA_PTR_FROM_JSON(userCount, userCount_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Children : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Children& obj) { 
          DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
          DARABONBA_PTR_TO_JSON(eventName, eventName_);
          DARABONBA_PTR_TO_JSON(eventStatus, eventStatus_);
          DARABONBA_PTR_TO_JSON(eventType, eventType_);
          DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(ruleCount, ruleCount_);
        };
        friend void from_json(const Darabonba::Json& j, Children& obj) { 
          DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
          DARABONBA_PTR_FROM_JSON(eventName, eventName_);
          DARABONBA_PTR_FROM_JSON(eventStatus, eventStatus_);
          DARABONBA_PTR_FROM_JSON(eventType, eventType_);
          DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(ruleCount, ruleCount_);
        };
        Children() = default ;
        Children(const Children &) = default ;
        Children(Children &&) = default ;
        Children(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Children() = default ;
        Children& operator=(const Children &) = default ;
        Children& operator=(Children &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->eventCode_ == nullptr
        && this->eventName_ == nullptr && this->eventStatus_ == nullptr && this->eventType_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->id_ == nullptr && this->ruleCount_ == nullptr; };
        // eventCode Field Functions 
        bool hasEventCode() const { return this->eventCode_ != nullptr;};
        void deleteEventCode() { this->eventCode_ = nullptr;};
        inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
        inline Children& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


        // eventName Field Functions 
        bool hasEventName() const { return this->eventName_ != nullptr;};
        void deleteEventName() { this->eventName_ = nullptr;};
        inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
        inline Children& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


        // eventStatus Field Functions 
        bool hasEventStatus() const { return this->eventStatus_ != nullptr;};
        void deleteEventStatus() { this->eventStatus_ = nullptr;};
        inline string getEventStatus() const { DARABONBA_PTR_GET_DEFAULT(eventStatus_, "") };
        inline Children& setEventStatus(string eventStatus) { DARABONBA_PTR_SET_VALUE(eventStatus_, eventStatus) };


        // eventType Field Functions 
        bool hasEventType() const { return this->eventType_ != nullptr;};
        void deleteEventType() { this->eventType_ = nullptr;};
        inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
        inline Children& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline Children& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
        inline Children& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Children& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // ruleCount Field Functions 
        bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
        void deleteRuleCount() { this->ruleCount_ = nullptr;};
        inline int64_t getRuleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0L) };
        inline Children& setRuleCount(int64_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


      protected:
        // Event code.
        shared_ptr<string> eventCode_ {};
        // Event name.
        shared_ptr<string> eventName_ {};
        // Event status.
        shared_ptr<string> eventStatus_ {};
        // Event type.
        shared_ptr<string> eventType_ {};
        // Creation time.
        shared_ptr<int64_t> gmtCreate_ {};
        // Modification time
        shared_ptr<int64_t> gmtModified_ {};
        // Primary key ID
        shared_ptr<int64_t> id_ {};
        // Total number of rules.
        shared_ptr<int64_t> ruleCount_ {};
      };

      virtual bool empty() const override { return this->children_ == nullptr
        && this->eventCode_ == nullptr && this->eventName_ == nullptr && this->eventStatus_ == nullptr && this->eventType_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->ruleCount_ == nullptr && this->templateCode_ == nullptr && this->templateName_ == nullptr
        && this->templateType_ == nullptr && this->userCount_ == nullptr; };
      // children Field Functions 
      bool hasChildren() const { return this->children_ != nullptr;};
      void deleteChildren() { this->children_ = nullptr;};
      inline const vector<ResultObject::Children> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<ResultObject::Children>) };
      inline vector<ResultObject::Children> getChildren() { DARABONBA_PTR_GET(children_, vector<ResultObject::Children>) };
      inline ResultObject& setChildren(const vector<ResultObject::Children> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
      inline ResultObject& setChildren(vector<ResultObject::Children> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


      // eventCode Field Functions 
      bool hasEventCode() const { return this->eventCode_ != nullptr;};
      void deleteEventCode() { this->eventCode_ = nullptr;};
      inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
      inline ResultObject& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline ResultObject& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // eventStatus Field Functions 
      bool hasEventStatus() const { return this->eventStatus_ != nullptr;};
      void deleteEventStatus() { this->eventStatus_ = nullptr;};
      inline string getEventStatus() const { DARABONBA_PTR_GET_DEFAULT(eventStatus_, "") };
      inline ResultObject& setEventStatus(string eventStatus) { DARABONBA_PTR_SET_VALUE(eventStatus_, eventStatus) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline ResultObject& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline ResultObject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline ResultObject& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // ruleCount Field Functions 
      bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
      void deleteRuleCount() { this->ruleCount_ = nullptr;};
      inline int32_t getRuleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
      inline ResultObject& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


      // templateCode Field Functions 
      bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
      void deleteTemplateCode() { this->templateCode_ = nullptr;};
      inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
      inline ResultObject& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline ResultObject& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline ResultObject& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


      // userCount Field Functions 
      bool hasUserCount() const { return this->userCount_ != nullptr;};
      void deleteUserCount() { this->userCount_ = nullptr;};
      inline int32_t getUserCount() const { DARABONBA_PTR_GET_DEFAULT(userCount_, 0) };
      inline ResultObject& setUserCount(int32_t userCount) { DARABONBA_PTR_SET_VALUE(userCount_, userCount) };


    protected:
      // Object
      shared_ptr<vector<ResultObject::Children>> children_ {};
      // Event code
      shared_ptr<string> eventCode_ {};
      // Event name.
      shared_ptr<string> eventName_ {};
      // Event status.
      shared_ptr<string> eventStatus_ {};
      // Event type.
      shared_ptr<string> eventType_ {};
      // Creation time.
      shared_ptr<int64_t> gmtCreate_ {};
      // Modification time
      shared_ptr<int64_t> gmtModified_ {};
      // Database ID.
      shared_ptr<int64_t> id_ {};
      // Total number of rules.
      shared_ptr<int32_t> ruleCount_ {};
      // Template code
      shared_ptr<string> templateCode_ {};
      // Template name.
      shared_ptr<string> templateName_ {};
      // Template type
      shared_ptr<string> templateType_ {};
      // Number of customer authorizations
      shared_ptr<int32_t> userCount_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->resultObject_ == nullptr && this->totalItem_ == nullptr && this->totalPage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventPageListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeEventPageListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEventPageListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeEventPageListResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeEventPageListResponseBody::ResultObject>) };
    inline vector<DescribeEventPageListResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeEventPageListResponseBody::ResultObject>) };
    inline DescribeEventPageListResponseBody& setResultObject(const vector<DescribeEventPageListResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeEventPageListResponseBody& setResultObject(vector<DescribeEventPageListResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // totalItem Field Functions 
    bool hasTotalItem() const { return this->totalItem_ != nullptr;};
    void deleteTotalItem() { this->totalItem_ = nullptr;};
    inline int32_t getTotalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0) };
    inline DescribeEventPageListResponseBody& setTotalItem(int32_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeEventPageListResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Current page number.
    shared_ptr<int32_t> currentPage_ {};
    // Page size, with a default value of 10
    shared_ptr<int32_t> pageSize_ {};
    // Returned object
    shared_ptr<vector<DescribeEventPageListResponseBody::ResultObject>> resultObject_ {};
    // Total number of items
    shared_ptr<int32_t> totalItem_ {};
    // Total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
