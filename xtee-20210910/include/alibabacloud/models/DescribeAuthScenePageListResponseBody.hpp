// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTHSCENEPAGELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTHSCENEPAGELISTRESPONSEBODY_HPP_
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
  class DescribeAuthScenePageListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuthScenePageListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(totalItem, totalItem_);
      DARABONBA_PTR_TO_JSON(totalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuthScenePageListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(totalItem, totalItem_);
      DARABONBA_PTR_FROM_JSON(totalPage, totalPage_);
    };
    DescribeAuthScenePageListResponseBody() = default ;
    DescribeAuthScenePageListResponseBody(const DescribeAuthScenePageListResponseBody &) = default ;
    DescribeAuthScenePageListResponseBody(DescribeAuthScenePageListResponseBody &&) = default ;
    DescribeAuthScenePageListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuthScenePageListResponseBody() = default ;
    DescribeAuthScenePageListResponseBody& operator=(const DescribeAuthScenePageListResponseBody &) = default ;
    DescribeAuthScenePageListResponseBody& operator=(DescribeAuthScenePageListResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(sceneName, sceneName_);
        DARABONBA_PTR_TO_JSON(serverName, serverName_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(commonRuleCount, commonRuleCount_);
        DARABONBA_PTR_FROM_JSON(customRuleCount, customRuleCount_);
        DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
        DARABONBA_PTR_FROM_JSON(sceneName, sceneName_);
        DARABONBA_PTR_FROM_JSON(serverName, serverName_);
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
        && this->customRuleCount_ == nullptr && this->eventCode_ == nullptr && this->sceneName_ == nullptr && this->serverName_ == nullptr; };
      // commonRuleCount Field Functions 
      bool hasCommonRuleCount() const { return this->commonRuleCount_ != nullptr;};
      void deleteCommonRuleCount() { this->commonRuleCount_ = nullptr;};
      inline int64_t getCommonRuleCount() const { DARABONBA_PTR_GET_DEFAULT(commonRuleCount_, 0L) };
      inline ResultObject& setCommonRuleCount(int64_t commonRuleCount) { DARABONBA_PTR_SET_VALUE(commonRuleCount_, commonRuleCount) };


      // customRuleCount Field Functions 
      bool hasCustomRuleCount() const { return this->customRuleCount_ != nullptr;};
      void deleteCustomRuleCount() { this->customRuleCount_ = nullptr;};
      inline int64_t getCustomRuleCount() const { DARABONBA_PTR_GET_DEFAULT(customRuleCount_, 0L) };
      inline ResultObject& setCustomRuleCount(int64_t customRuleCount) { DARABONBA_PTR_SET_VALUE(customRuleCount_, customRuleCount) };


      // eventCode Field Functions 
      bool hasEventCode() const { return this->eventCode_ != nullptr;};
      void deleteEventCode() { this->eventCode_ = nullptr;};
      inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
      inline ResultObject& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


      // sceneName Field Functions 
      bool hasSceneName() const { return this->sceneName_ != nullptr;};
      void deleteSceneName() { this->sceneName_ = nullptr;};
      inline string getSceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
      inline ResultObject& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


      // serverName Field Functions 
      bool hasServerName() const { return this->serverName_ != nullptr;};
      void deleteServerName() { this->serverName_ = nullptr;};
      inline string getServerName() const { DARABONBA_PTR_GET_DEFAULT(serverName_, "") };
      inline ResultObject& setServerName(string serverName) { DARABONBA_PTR_SET_VALUE(serverName_, serverName) };


    protected:
      // Number of common rules
      shared_ptr<int64_t> commonRuleCount_ {};
      // Number of custom rules
      shared_ptr<int64_t> customRuleCount_ {};
      // Event code
      shared_ptr<string> eventCode_ {};
      // Scene name.
      shared_ptr<string> sceneName_ {};
      // Service name.
      shared_ptr<string> serverName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->resultObject_ == nullptr && this->totalItem_ == nullptr && this->totalPage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAuthScenePageListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline DescribeAuthScenePageListResponseBody& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeAuthScenePageListResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeAuthScenePageListResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeAuthScenePageListResponseBody::ResultObject>) };
    inline vector<DescribeAuthScenePageListResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeAuthScenePageListResponseBody::ResultObject>) };
    inline DescribeAuthScenePageListResponseBody& setResultObject(const vector<DescribeAuthScenePageListResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeAuthScenePageListResponseBody& setResultObject(vector<DescribeAuthScenePageListResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // totalItem Field Functions 
    bool hasTotalItem() const { return this->totalItem_ != nullptr;};
    void deleteTotalItem() { this->totalItem_ = nullptr;};
    inline int64_t getTotalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0L) };
    inline DescribeAuthScenePageListResponseBody& setTotalItem(int64_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int64_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
    inline DescribeAuthScenePageListResponseBody& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Current page number.
    shared_ptr<int64_t> currentPage_ {};
    // Page size, default value is 10
    shared_ptr<int64_t> pageSize_ {};
    // Returned object
    shared_ptr<vector<DescribeAuthScenePageListResponseBody::ResultObject>> resultObject_ {};
    // Total number of items
    shared_ptr<int64_t> totalItem_ {};
    // Total number of pages.
    shared_ptr<int64_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
