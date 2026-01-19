// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISIGNATURESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISIGNATURESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiSignaturesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiSignaturesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiSignatures, apiSignatures_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiSignaturesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiSignatures, apiSignatures_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApiSignaturesResponseBody() = default ;
    DescribeApiSignaturesResponseBody(const DescribeApiSignaturesResponseBody &) = default ;
    DescribeApiSignaturesResponseBody(DescribeApiSignaturesResponseBody &&) = default ;
    DescribeApiSignaturesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiSignaturesResponseBody() = default ;
    DescribeApiSignaturesResponseBody& operator=(const DescribeApiSignaturesResponseBody &) = default ;
    DescribeApiSignaturesResponseBody& operator=(DescribeApiSignaturesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApiSignatures : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiSignatures& obj) { 
        DARABONBA_PTR_TO_JSON(ApiSignatureItem, apiSignatureItem_);
      };
      friend void from_json(const Darabonba::Json& j, ApiSignatures& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiSignatureItem, apiSignatureItem_);
      };
      ApiSignatures() = default ;
      ApiSignatures(const ApiSignatures &) = default ;
      ApiSignatures(ApiSignatures &&) = default ;
      ApiSignatures(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiSignatures() = default ;
      ApiSignatures& operator=(const ApiSignatures &) = default ;
      ApiSignatures& operator=(ApiSignatures &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApiSignatureItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiSignatureItem& obj) { 
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(BoundTime, boundTime_);
          DARABONBA_PTR_TO_JSON(SignatureId, signatureId_);
          DARABONBA_PTR_TO_JSON(SignatureName, signatureName_);
        };
        friend void from_json(const Darabonba::Json& j, ApiSignatureItem& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(BoundTime, boundTime_);
          DARABONBA_PTR_FROM_JSON(SignatureId, signatureId_);
          DARABONBA_PTR_FROM_JSON(SignatureName, signatureName_);
        };
        ApiSignatureItem() = default ;
        ApiSignatureItem(const ApiSignatureItem &) = default ;
        ApiSignatureItem(ApiSignatureItem &&) = default ;
        ApiSignatureItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiSignatureItem() = default ;
        ApiSignatureItem& operator=(const ApiSignatureItem &) = default ;
        ApiSignatureItem& operator=(ApiSignatureItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->boundTime_ == nullptr && this->signatureId_ == nullptr && this->signatureName_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
        inline ApiSignatureItem& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline ApiSignatureItem& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // boundTime Field Functions 
        bool hasBoundTime() const { return this->boundTime_ != nullptr;};
        void deleteBoundTime() { this->boundTime_ = nullptr;};
        inline string getBoundTime() const { DARABONBA_PTR_GET_DEFAULT(boundTime_, "") };
        inline ApiSignatureItem& setBoundTime(string boundTime) { DARABONBA_PTR_SET_VALUE(boundTime_, boundTime) };


        // signatureId Field Functions 
        bool hasSignatureId() const { return this->signatureId_ != nullptr;};
        void deleteSignatureId() { this->signatureId_ = nullptr;};
        inline string getSignatureId() const { DARABONBA_PTR_GET_DEFAULT(signatureId_, "") };
        inline ApiSignatureItem& setSignatureId(string signatureId) { DARABONBA_PTR_SET_VALUE(signatureId_, signatureId) };


        // signatureName Field Functions 
        bool hasSignatureName() const { return this->signatureName_ != nullptr;};
        void deleteSignatureName() { this->signatureName_ = nullptr;};
        inline string getSignatureName() const { DARABONBA_PTR_GET_DEFAULT(signatureName_, "") };
        inline ApiSignatureItem& setSignatureName(string signatureName) { DARABONBA_PTR_SET_VALUE(signatureName_, signatureName) };


      protected:
        // The ID of the API.
        shared_ptr<string> apiId_ {};
        // The name of the API.
        shared_ptr<string> apiName_ {};
        // The time when the backend signature key was bound.
        shared_ptr<string> boundTime_ {};
        // The ID of the backend signature key.
        shared_ptr<string> signatureId_ {};
        // The name of the backend signature key.
        shared_ptr<string> signatureName_ {};
      };

      virtual bool empty() const override { return this->apiSignatureItem_ == nullptr; };
      // apiSignatureItem Field Functions 
      bool hasApiSignatureItem() const { return this->apiSignatureItem_ != nullptr;};
      void deleteApiSignatureItem() { this->apiSignatureItem_ = nullptr;};
      inline const vector<ApiSignatures::ApiSignatureItem> & getApiSignatureItem() const { DARABONBA_PTR_GET_CONST(apiSignatureItem_, vector<ApiSignatures::ApiSignatureItem>) };
      inline vector<ApiSignatures::ApiSignatureItem> getApiSignatureItem() { DARABONBA_PTR_GET(apiSignatureItem_, vector<ApiSignatures::ApiSignatureItem>) };
      inline ApiSignatures& setApiSignatureItem(const vector<ApiSignatures::ApiSignatureItem> & apiSignatureItem) { DARABONBA_PTR_SET_VALUE(apiSignatureItem_, apiSignatureItem) };
      inline ApiSignatures& setApiSignatureItem(vector<ApiSignatures::ApiSignatureItem> && apiSignatureItem) { DARABONBA_PTR_SET_RVALUE(apiSignatureItem_, apiSignatureItem) };


    protected:
      shared_ptr<vector<ApiSignatures::ApiSignatureItem>> apiSignatureItem_ {};
    };

    virtual bool empty() const override { return this->apiSignatures_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // apiSignatures Field Functions 
    bool hasApiSignatures() const { return this->apiSignatures_ != nullptr;};
    void deleteApiSignatures() { this->apiSignatures_ = nullptr;};
    inline const DescribeApiSignaturesResponseBody::ApiSignatures & getApiSignatures() const { DARABONBA_PTR_GET_CONST(apiSignatures_, DescribeApiSignaturesResponseBody::ApiSignatures) };
    inline DescribeApiSignaturesResponseBody::ApiSignatures getApiSignatures() { DARABONBA_PTR_GET(apiSignatures_, DescribeApiSignaturesResponseBody::ApiSignatures) };
    inline DescribeApiSignaturesResponseBody& setApiSignatures(const DescribeApiSignaturesResponseBody::ApiSignatures & apiSignatures) { DARABONBA_PTR_SET_VALUE(apiSignatures_, apiSignatures) };
    inline DescribeApiSignaturesResponseBody& setApiSignatures(DescribeApiSignaturesResponseBody::ApiSignatures && apiSignatures) { DARABONBA_PTR_SET_RVALUE(apiSignatures_, apiSignatures) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApiSignaturesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApiSignaturesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiSignaturesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeApiSignaturesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned signature key information. It is an array consisting of ApiSignatureItem data.
    shared_ptr<DescribeApiSignaturesResponseBody::ApiSignatures> apiSignatures_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
