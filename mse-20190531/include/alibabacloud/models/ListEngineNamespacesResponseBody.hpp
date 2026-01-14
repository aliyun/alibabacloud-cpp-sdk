// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENGINENAMESPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENGINENAMESPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListEngineNamespacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEngineNamespacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListEngineNamespacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListEngineNamespacesResponseBody() = default ;
    ListEngineNamespacesResponseBody(const ListEngineNamespacesResponseBody &) = default ;
    ListEngineNamespacesResponseBody(ListEngineNamespacesResponseBody &&) = default ;
    ListEngineNamespacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEngineNamespacesResponseBody() = default ;
    ListEngineNamespacesResponseBody& operator=(const ListEngineNamespacesResponseBody &) = default ;
    ListEngineNamespacesResponseBody& operator=(ListEngineNamespacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigCount, configCount_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(NamespaceDesc, namespaceDesc_);
        DARABONBA_PTR_TO_JSON(NamespaceShowName, namespaceShowName_);
        DARABONBA_PTR_TO_JSON(Quota, quota_);
        DARABONBA_PTR_TO_JSON(ServiceCount, serviceCount_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigCount, configCount_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(NamespaceDesc, namespaceDesc_);
        DARABONBA_PTR_FROM_JSON(NamespaceShowName, namespaceShowName_);
        DARABONBA_PTR_FROM_JSON(Quota, quota_);
        DARABONBA_PTR_FROM_JSON(ServiceCount, serviceCount_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->configCount_ == nullptr
        && this->namespace_ == nullptr && this->namespaceDesc_ == nullptr && this->namespaceShowName_ == nullptr && this->quota_ == nullptr && this->serviceCount_ == nullptr
        && this->sourceType_ == nullptr && this->type_ == nullptr; };
      // configCount Field Functions 
      bool hasConfigCount() const { return this->configCount_ != nullptr;};
      void deleteConfigCount() { this->configCount_ = nullptr;};
      inline int32_t getConfigCount() const { DARABONBA_PTR_GET_DEFAULT(configCount_, 0) };
      inline Data& setConfigCount(int32_t configCount) { DARABONBA_PTR_SET_VALUE(configCount_, configCount) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Data& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // namespaceDesc Field Functions 
      bool hasNamespaceDesc() const { return this->namespaceDesc_ != nullptr;};
      void deleteNamespaceDesc() { this->namespaceDesc_ = nullptr;};
      inline string getNamespaceDesc() const { DARABONBA_PTR_GET_DEFAULT(namespaceDesc_, "") };
      inline Data& setNamespaceDesc(string namespaceDesc) { DARABONBA_PTR_SET_VALUE(namespaceDesc_, namespaceDesc) };


      // namespaceShowName Field Functions 
      bool hasNamespaceShowName() const { return this->namespaceShowName_ != nullptr;};
      void deleteNamespaceShowName() { this->namespaceShowName_ = nullptr;};
      inline string getNamespaceShowName() const { DARABONBA_PTR_GET_DEFAULT(namespaceShowName_, "") };
      inline Data& setNamespaceShowName(string namespaceShowName) { DARABONBA_PTR_SET_VALUE(namespaceShowName_, namespaceShowName) };


      // quota Field Functions 
      bool hasQuota() const { return this->quota_ != nullptr;};
      void deleteQuota() { this->quota_ = nullptr;};
      inline int32_t getQuota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0) };
      inline Data& setQuota(int32_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


      // serviceCount Field Functions 
      bool hasServiceCount() const { return this->serviceCount_ != nullptr;};
      void deleteServiceCount() { this->serviceCount_ = nullptr;};
      inline string getServiceCount() const { DARABONBA_PTR_GET_DEFAULT(serviceCount_, "") };
      inline Data& setServiceCount(string serviceCount) { DARABONBA_PTR_SET_VALUE(serviceCount_, serviceCount) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline Data& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline Data& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The quota value.
      shared_ptr<int32_t> configCount_ {};
      // The namespace.
      shared_ptr<string> namespace_ {};
      // The description of the namespace.
      shared_ptr<string> namespaceDesc_ {};
      // The name of the namespace.
      shared_ptr<string> namespaceShowName_ {};
      // The quota.
      shared_ptr<int32_t> quota_ {};
      // The number of active services.
      shared_ptr<string> serviceCount_ {};
      // The source from which the namespace was created.
      shared_ptr<string> sourceType_ {};
      // The type of the namespace. Valid values:
      // 
      // *   `0`: global configuration
      // *   `1`: default namespace
      // *   `2`: custom namespace
      shared_ptr<int32_t> type_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->httpCode_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListEngineNamespacesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListEngineNamespacesResponseBody::Data>) };
    inline vector<ListEngineNamespacesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListEngineNamespacesResponseBody::Data>) };
    inline ListEngineNamespacesResponseBody& setData(const vector<ListEngineNamespacesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListEngineNamespacesResponseBody& setData(vector<ListEngineNamespacesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListEngineNamespacesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline ListEngineNamespacesResponseBody& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListEngineNamespacesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListEngineNamespacesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEngineNamespacesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEngineNamespacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListEngineNamespacesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListEngineNamespacesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the data.
    shared_ptr<vector<ListEngineNamespacesResponseBody::Data>> data_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The HTTP status code.
    shared_ptr<string> httpCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of returned instances.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
