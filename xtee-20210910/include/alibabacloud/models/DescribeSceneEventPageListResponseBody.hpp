// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCENEEVENTPAGELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCENEEVENTPAGELISTRESPONSEBODY_HPP_
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
  class DescribeSceneEventPageListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSceneEventPageListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(totalItem, totalItem_);
      DARABONBA_PTR_TO_JSON(totalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSceneEventPageListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(totalItem, totalItem_);
      DARABONBA_PTR_FROM_JSON(totalPage, totalPage_);
    };
    DescribeSceneEventPageListResponseBody() = default ;
    DescribeSceneEventPageListResponseBody(const DescribeSceneEventPageListResponseBody &) = default ;
    DescribeSceneEventPageListResponseBody(DescribeSceneEventPageListResponseBody &&) = default ;
    DescribeSceneEventPageListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSceneEventPageListResponseBody() = default ;
    DescribeSceneEventPageListResponseBody& operator=(const DescribeSceneEventPageListResponseBody &) = default ;
    DescribeSceneEventPageListResponseBody& operator=(DescribeSceneEventPageListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(commonRuleCount, commonRuleCount_);
        DARABONBA_PTR_TO_JSON(customRuleCount, customRuleCount_);
        DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
        DARABONBA_PTR_TO_JSON(eventName, eventName_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(modifier, modifier_);
        DARABONBA_PTR_TO_JSON(normalRuleCount, normalRuleCount_);
        DARABONBA_PTR_TO_JSON(service, service_);
        DARABONBA_PTR_TO_JSON(useStatus, useStatus_);
        DARABONBA_PTR_TO_JSON(whiteBoxRuleCount, whiteBoxRuleCount_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(commonRuleCount, commonRuleCount_);
        DARABONBA_PTR_FROM_JSON(customRuleCount, customRuleCount_);
        DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
        DARABONBA_PTR_FROM_JSON(eventName, eventName_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(modifier, modifier_);
        DARABONBA_PTR_FROM_JSON(normalRuleCount, normalRuleCount_);
        DARABONBA_PTR_FROM_JSON(service, service_);
        DARABONBA_PTR_FROM_JSON(useStatus, useStatus_);
        DARABONBA_PTR_FROM_JSON(whiteBoxRuleCount, whiteBoxRuleCount_);
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
      virtual bool empty() const override { return this->commonRuleCount_ == nullptr
        && this->customRuleCount_ == nullptr && this->eventCode_ == nullptr && this->eventName_ == nullptr && this->gmtModified_ == nullptr && this->modifier_ == nullptr
        && this->normalRuleCount_ == nullptr && this->service_ == nullptr && this->useStatus_ == nullptr && this->whiteBoxRuleCount_ == nullptr; };
      // commonRuleCount Field Functions 
      bool hasCommonRuleCount() const { return this->commonRuleCount_ != nullptr;};
      void deleteCommonRuleCount() { this->commonRuleCount_ = nullptr;};
      inline string getCommonRuleCount() const { DARABONBA_PTR_GET_DEFAULT(commonRuleCount_, "") };
      inline ResultObject& setCommonRuleCount(string commonRuleCount) { DARABONBA_PTR_SET_VALUE(commonRuleCount_, commonRuleCount) };


      // customRuleCount Field Functions 
      bool hasCustomRuleCount() const { return this->customRuleCount_ != nullptr;};
      void deleteCustomRuleCount() { this->customRuleCount_ = nullptr;};
      inline string getCustomRuleCount() const { DARABONBA_PTR_GET_DEFAULT(customRuleCount_, "") };
      inline ResultObject& setCustomRuleCount(string customRuleCount) { DARABONBA_PTR_SET_VALUE(customRuleCount_, customRuleCount) };


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


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline ResultObject& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // modifier Field Functions 
      bool hasModifier() const { return this->modifier_ != nullptr;};
      void deleteModifier() { this->modifier_ = nullptr;};
      inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
      inline ResultObject& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


      // normalRuleCount Field Functions 
      bool hasNormalRuleCount() const { return this->normalRuleCount_ != nullptr;};
      void deleteNormalRuleCount() { this->normalRuleCount_ = nullptr;};
      inline string getNormalRuleCount() const { DARABONBA_PTR_GET_DEFAULT(normalRuleCount_, "") };
      inline ResultObject& setNormalRuleCount(string normalRuleCount) { DARABONBA_PTR_SET_VALUE(normalRuleCount_, normalRuleCount) };


      // service Field Functions 
      bool hasService() const { return this->service_ != nullptr;};
      void deleteService() { this->service_ = nullptr;};
      inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
      inline ResultObject& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


      // useStatus Field Functions 
      bool hasUseStatus() const { return this->useStatus_ != nullptr;};
      void deleteUseStatus() { this->useStatus_ = nullptr;};
      inline string getUseStatus() const { DARABONBA_PTR_GET_DEFAULT(useStatus_, "") };
      inline ResultObject& setUseStatus(string useStatus) { DARABONBA_PTR_SET_VALUE(useStatus_, useStatus) };


      // whiteBoxRuleCount Field Functions 
      bool hasWhiteBoxRuleCount() const { return this->whiteBoxRuleCount_ != nullptr;};
      void deleteWhiteBoxRuleCount() { this->whiteBoxRuleCount_ = nullptr;};
      inline string getWhiteBoxRuleCount() const { DARABONBA_PTR_GET_DEFAULT(whiteBoxRuleCount_, "") };
      inline ResultObject& setWhiteBoxRuleCount(string whiteBoxRuleCount) { DARABONBA_PTR_SET_VALUE(whiteBoxRuleCount_, whiteBoxRuleCount) };


    protected:
      // Number of common rules
      shared_ptr<string> commonRuleCount_ {};
      // Number of custom rules
      shared_ptr<string> customRuleCount_ {};
      // Event code
      shared_ptr<string> eventCode_ {};
      // Event name.
      shared_ptr<string> eventName_ {};
      // Modification time
      shared_ptr<string> gmtModified_ {};
      // Modifier
      shared_ptr<string> modifier_ {};
      // Number of custom rules
      shared_ptr<string> normalRuleCount_ {};
      // Service code
      shared_ptr<string> service_ {};
      // Usage status
      shared_ptr<string> useStatus_ {};
      // Number of white-box rules
      shared_ptr<string> whiteBoxRuleCount_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr && this->totalItem_ == nullptr && this->totalPage_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeSceneEventPageListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSceneEventPageListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSceneEventPageListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeSceneEventPageListResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeSceneEventPageListResponseBody::ResultObject>) };
    inline vector<DescribeSceneEventPageListResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeSceneEventPageListResponseBody::ResultObject>) };
    inline DescribeSceneEventPageListResponseBody& setResultObject(const vector<DescribeSceneEventPageListResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeSceneEventPageListResponseBody& setResultObject(vector<DescribeSceneEventPageListResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // totalItem Field Functions 
    bool hasTotalItem() const { return this->totalItem_ != nullptr;};
    void deleteTotalItem() { this->totalItem_ = nullptr;};
    inline int32_t getTotalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0) };
    inline DescribeSceneEventPageListResponseBody& setTotalItem(int32_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeSceneEventPageListResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Current page number.
    shared_ptr<int32_t> currentPage_ {};
    // Number of items per page. Default value: 20, minimum value: 1, maximum value: 50.
    shared_ptr<int32_t> pageSize_ {};
    // Request ID, each request has a unique value, which facilitates subsequent troubleshooting
    shared_ptr<string> requestId_ {};
    // Return array
    shared_ptr<vector<DescribeSceneEventPageListResponseBody::ResultObject>> resultObject_ {};
    // Total number of items
    shared_ptr<int32_t> totalItem_ {};
    // Total number of pages
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
