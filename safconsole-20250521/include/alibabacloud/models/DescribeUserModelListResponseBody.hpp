// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERMODELLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERMODELLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class DescribeUserModelListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserModelListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalItem, totalItem_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserModelListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalItem, totalItem_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeUserModelListResponseBody() = default ;
    DescribeUserModelListResponseBody(const DescribeUserModelListResponseBody &) = default ;
    DescribeUserModelListResponseBody(DescribeUserModelListResponseBody &&) = default ;
    DescribeUserModelListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserModelListResponseBody() = default ;
    DescribeUserModelListResponseBody& operator=(const DescribeUserModelListResponseBody &) = default ;
    DescribeUserModelListResponseBody& operator=(DescribeUserModelListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(AuthType, authType_);
        DARABONBA_PTR_TO_JSON(CustomerModuleName, customerModuleName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FeatureTemplate, featureTemplate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InnerDefineStatus, innerDefineStatus_);
        DARABONBA_PTR_TO_JSON(InnerModuleName, innerModuleName_);
        DARABONBA_PTR_TO_JSON(IsAllowIterate, isAllowIterate_);
        DARABONBA_PTR_TO_JSON(IsAllowRollback, isAllowRollback_);
        DARABONBA_PTR_TO_JSON(IterationVersion, iterationVersion_);
        DARABONBA_PTR_TO_JSON(RootModuleId, rootModuleId_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthType, authType_);
        DARABONBA_PTR_FROM_JSON(CustomerModuleName, customerModuleName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FeatureTemplate, featureTemplate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InnerDefineStatus, innerDefineStatus_);
        DARABONBA_PTR_FROM_JSON(InnerModuleName, innerModuleName_);
        DARABONBA_PTR_FROM_JSON(IsAllowIterate, isAllowIterate_);
        DARABONBA_PTR_FROM_JSON(IsAllowRollback, isAllowRollback_);
        DARABONBA_PTR_FROM_JSON(IterationVersion, iterationVersion_);
        DARABONBA_PTR_FROM_JSON(RootModuleId, rootModuleId_);
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
      virtual bool empty() const override { return this->authType_ == nullptr
        && this->customerModuleName_ == nullptr && this->description_ == nullptr && this->featureTemplate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr
        && this->innerDefineStatus_ == nullptr && this->innerModuleName_ == nullptr && this->isAllowIterate_ == nullptr && this->isAllowRollback_ == nullptr && this->iterationVersion_ == nullptr
        && this->rootModuleId_ == nullptr; };
      // authType Field Functions 
      bool hasAuthType() const { return this->authType_ != nullptr;};
      void deleteAuthType() { this->authType_ = nullptr;};
      inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
      inline ResultObject& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


      // customerModuleName Field Functions 
      bool hasCustomerModuleName() const { return this->customerModuleName_ != nullptr;};
      void deleteCustomerModuleName() { this->customerModuleName_ = nullptr;};
      inline string getCustomerModuleName() const { DARABONBA_PTR_GET_DEFAULT(customerModuleName_, "") };
      inline ResultObject& setCustomerModuleName(string customerModuleName) { DARABONBA_PTR_SET_VALUE(customerModuleName_, customerModuleName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // featureTemplate Field Functions 
      bool hasFeatureTemplate() const { return this->featureTemplate_ != nullptr;};
      void deleteFeatureTemplate() { this->featureTemplate_ = nullptr;};
      inline string getFeatureTemplate() const { DARABONBA_PTR_GET_DEFAULT(featureTemplate_, "") };
      inline ResultObject& setFeatureTemplate(string featureTemplate) { DARABONBA_PTR_SET_VALUE(featureTemplate_, featureTemplate) };


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


      // innerDefineStatus Field Functions 
      bool hasInnerDefineStatus() const { return this->innerDefineStatus_ != nullptr;};
      void deleteInnerDefineStatus() { this->innerDefineStatus_ = nullptr;};
      inline string getInnerDefineStatus() const { DARABONBA_PTR_GET_DEFAULT(innerDefineStatus_, "") };
      inline ResultObject& setInnerDefineStatus(string innerDefineStatus) { DARABONBA_PTR_SET_VALUE(innerDefineStatus_, innerDefineStatus) };


      // innerModuleName Field Functions 
      bool hasInnerModuleName() const { return this->innerModuleName_ != nullptr;};
      void deleteInnerModuleName() { this->innerModuleName_ = nullptr;};
      inline string getInnerModuleName() const { DARABONBA_PTR_GET_DEFAULT(innerModuleName_, "") };
      inline ResultObject& setInnerModuleName(string innerModuleName) { DARABONBA_PTR_SET_VALUE(innerModuleName_, innerModuleName) };


      // isAllowIterate Field Functions 
      bool hasIsAllowIterate() const { return this->isAllowIterate_ != nullptr;};
      void deleteIsAllowIterate() { this->isAllowIterate_ = nullptr;};
      inline bool getIsAllowIterate() const { DARABONBA_PTR_GET_DEFAULT(isAllowIterate_, false) };
      inline ResultObject& setIsAllowIterate(bool isAllowIterate) { DARABONBA_PTR_SET_VALUE(isAllowIterate_, isAllowIterate) };


      // isAllowRollback Field Functions 
      bool hasIsAllowRollback() const { return this->isAllowRollback_ != nullptr;};
      void deleteIsAllowRollback() { this->isAllowRollback_ = nullptr;};
      inline bool getIsAllowRollback() const { DARABONBA_PTR_GET_DEFAULT(isAllowRollback_, false) };
      inline ResultObject& setIsAllowRollback(bool isAllowRollback) { DARABONBA_PTR_SET_VALUE(isAllowRollback_, isAllowRollback) };


      // iterationVersion Field Functions 
      bool hasIterationVersion() const { return this->iterationVersion_ != nullptr;};
      void deleteIterationVersion() { this->iterationVersion_ = nullptr;};
      inline int64_t getIterationVersion() const { DARABONBA_PTR_GET_DEFAULT(iterationVersion_, 0L) };
      inline ResultObject& setIterationVersion(int64_t iterationVersion) { DARABONBA_PTR_SET_VALUE(iterationVersion_, iterationVersion) };


      // rootModuleId Field Functions 
      bool hasRootModuleId() const { return this->rootModuleId_ != nullptr;};
      void deleteRootModuleId() { this->rootModuleId_ = nullptr;};
      inline int64_t getRootModuleId() const { DARABONBA_PTR_GET_DEFAULT(rootModuleId_, 0L) };
      inline ResultObject& setRootModuleId(int64_t rootModuleId) { DARABONBA_PTR_SET_VALUE(rootModuleId_, rootModuleId) };


    protected:
      // Authorization type.
      shared_ptr<string> authType_ {};
      // Model name.
      shared_ptr<string> customerModuleName_ {};
      // Remarks.
      shared_ptr<string> description_ {};
      // Associated features.
      shared_ptr<string> featureTemplate_ {};
      // Modification time.
      shared_ptr<int64_t> gmtModified_ {};
      // Primary key ID of the model.
      shared_ptr<int64_t> id_ {};
      // Publication status.
      shared_ptr<string> innerDefineStatus_ {};
      // Model identifier.
      shared_ptr<string> innerModuleName_ {};
      // Whether iteration is allowed.
      shared_ptr<bool> isAllowIterate_ {};
      // Whether rollback is allowed.
      shared_ptr<bool> isAllowRollback_ {};
      // Iteration version.
      shared_ptr<int64_t> iterationVersion_ {};
      // Root model ID.
      shared_ptr<int64_t> rootModuleId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->currentPage_ == nullptr && this->httpStatusCode_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr
        && this->success_ == nullptr && this->totalItem_ == nullptr && this->totalPage_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeUserModelListResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline DescribeUserModelListResponseBody& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline DescribeUserModelListResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeUserModelListResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserModelListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeUserModelListResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeUserModelListResponseBody::ResultObject>) };
    inline vector<DescribeUserModelListResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeUserModelListResponseBody::ResultObject>) };
    inline DescribeUserModelListResponseBody& setResultObject(const vector<DescribeUserModelListResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeUserModelListResponseBody& setResultObject(vector<DescribeUserModelListResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeUserModelListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalItem Field Functions 
    bool hasTotalItem() const { return this->totalItem_ != nullptr;};
    void deleteTotalItem() { this->totalItem_ = nullptr;};
    inline int64_t getTotalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0L) };
    inline DescribeUserModelListResponseBody& setTotalItem(int64_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int64_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
    inline DescribeUserModelListResponseBody& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // `code`
    shared_ptr<int32_t> code_ {};
    // Current page.
    shared_ptr<int64_t> currentPage_ {};
    // HTTP status code.
    shared_ptr<int64_t> httpStatusCode_ {};
    // Pagination parameter: number of items per page, default value is 10.
    shared_ptr<int64_t> pageSize_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return result.
    shared_ptr<vector<DescribeUserModelListResponseBody::ResultObject>> resultObject_ {};
    // Indicates whether the request was successful, with values as follows:
    // - true, request succeeded
    // - false, request failed
    shared_ptr<bool> success_ {};
    // Total number of records.
    shared_ptr<int64_t> totalItem_ {};
    // Total number of pages.
    shared_ptr<int64_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
