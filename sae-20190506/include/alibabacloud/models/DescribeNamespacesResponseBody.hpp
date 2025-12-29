// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMESPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMESPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeNamespacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNamespacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNamespacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeNamespacesResponseBody() = default ;
    DescribeNamespacesResponseBody(const DescribeNamespacesResponseBody &) = default ;
    DescribeNamespacesResponseBody(DescribeNamespacesResponseBody &&) = default ;
    DescribeNamespacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNamespacesResponseBody() = default ;
    DescribeNamespacesResponseBody& operator=(const DescribeNamespacesResponseBody &) = default ;
    DescribeNamespacesResponseBody& operator=(DescribeNamespacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
      class Namespaces : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Namespaces& obj) { 
          DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
          DARABONBA_PTR_TO_JSON(AddressServerHost, addressServerHost_);
          DARABONBA_PTR_TO_JSON(NameSpaceShortId, nameSpaceShortId_);
          DARABONBA_PTR_TO_JSON(NamespaceDescription, namespaceDescription_);
          DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
          DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SecretKey, secretKey_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        };
        friend void from_json(const Darabonba::Json& j, Namespaces& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
          DARABONBA_PTR_FROM_JSON(AddressServerHost, addressServerHost_);
          DARABONBA_PTR_FROM_JSON(NameSpaceShortId, nameSpaceShortId_);
          DARABONBA_PTR_FROM_JSON(NamespaceDescription, namespaceDescription_);
          DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
          DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SecretKey, secretKey_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        };
        Namespaces() = default ;
        Namespaces(const Namespaces &) = default ;
        Namespaces(Namespaces &&) = default ;
        Namespaces(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Namespaces() = default ;
        Namespaces& operator=(const Namespaces &) = default ;
        Namespaces& operator=(Namespaces &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessKey_ == nullptr
        && this->addressServerHost_ == nullptr && this->nameSpaceShortId_ == nullptr && this->namespaceDescription_ == nullptr && this->namespaceId_ == nullptr && this->namespaceName_ == nullptr
        && this->regionId_ == nullptr && this->secretKey_ == nullptr && this->tenantId_ == nullptr; };
        // accessKey Field Functions 
        bool hasAccessKey() const { return this->accessKey_ != nullptr;};
        void deleteAccessKey() { this->accessKey_ = nullptr;};
        inline string getAccessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
        inline Namespaces& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


        // addressServerHost Field Functions 
        bool hasAddressServerHost() const { return this->addressServerHost_ != nullptr;};
        void deleteAddressServerHost() { this->addressServerHost_ = nullptr;};
        inline string getAddressServerHost() const { DARABONBA_PTR_GET_DEFAULT(addressServerHost_, "") };
        inline Namespaces& setAddressServerHost(string addressServerHost) { DARABONBA_PTR_SET_VALUE(addressServerHost_, addressServerHost) };


        // nameSpaceShortId Field Functions 
        bool hasNameSpaceShortId() const { return this->nameSpaceShortId_ != nullptr;};
        void deleteNameSpaceShortId() { this->nameSpaceShortId_ = nullptr;};
        inline string getNameSpaceShortId() const { DARABONBA_PTR_GET_DEFAULT(nameSpaceShortId_, "") };
        inline Namespaces& setNameSpaceShortId(string nameSpaceShortId) { DARABONBA_PTR_SET_VALUE(nameSpaceShortId_, nameSpaceShortId) };


        // namespaceDescription Field Functions 
        bool hasNamespaceDescription() const { return this->namespaceDescription_ != nullptr;};
        void deleteNamespaceDescription() { this->namespaceDescription_ = nullptr;};
        inline string getNamespaceDescription() const { DARABONBA_PTR_GET_DEFAULT(namespaceDescription_, "") };
        inline Namespaces& setNamespaceDescription(string namespaceDescription) { DARABONBA_PTR_SET_VALUE(namespaceDescription_, namespaceDescription) };


        // namespaceId Field Functions 
        bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
        void deleteNamespaceId() { this->namespaceId_ = nullptr;};
        inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
        inline Namespaces& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


        // namespaceName Field Functions 
        bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
        void deleteNamespaceName() { this->namespaceName_ = nullptr;};
        inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
        inline Namespaces& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Namespaces& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // secretKey Field Functions 
        bool hasSecretKey() const { return this->secretKey_ != nullptr;};
        void deleteSecretKey() { this->secretKey_ = nullptr;};
        inline string getSecretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
        inline Namespaces& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline Namespaces& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      protected:
        // The ACM-specific AccessKey ID. It can be used to manage data in an Application Configuration Management (ACM) namespace. For more information, see [Differences between Alibaba Cloud AccessKey and ACM-specific AccessKey](https://help.aliyun.com/document_detail/68941.html).
        shared_ptr<string> accessKey_ {};
        // The endpoint of the host.
        shared_ptr<string> addressServerHost_ {};
        // The short ID of the namespace.
        shared_ptr<string> nameSpaceShortId_ {};
        // The description of the namespace.
        shared_ptr<string> namespaceDescription_ {};
        // The ID of the namespace. You cannot query, modify, or delete the default namespace.
        shared_ptr<string> namespaceId_ {};
        // The name of the namespace.
        shared_ptr<string> namespaceName_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The ACM-specific AccessKey secret. It can be used to manage data in an ACM namespace. For more information, see [Differences between Alibaba Cloud AccessKey and ACM-specific AccessKey](https://help.aliyun.com/document_detail/68941.html).
        shared_ptr<string> secretKey_ {};
        // The tenant ID.
        shared_ptr<string> tenantId_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->namespaces_ == nullptr && this->pageSize_ == nullptr && this->totalSize_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline Data& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // namespaces Field Functions 
      bool hasNamespaces() const { return this->namespaces_ != nullptr;};
      void deleteNamespaces() { this->namespaces_ = nullptr;};
      inline const vector<Data::Namespaces> & getNamespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<Data::Namespaces>) };
      inline vector<Data::Namespaces> getNamespaces() { DARABONBA_PTR_GET(namespaces_, vector<Data::Namespaces>) };
      inline Data& setNamespaces(const vector<Data::Namespaces> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
      inline Data& setNamespaces(vector<Data::Namespaces> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The namespaces.
      shared_ptr<vector<Data::Namespaces>> namespaces_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of namespaces.
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeNamespacesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeNamespacesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeNamespacesResponseBody::Data) };
    inline DescribeNamespacesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeNamespacesResponseBody::Data) };
    inline DescribeNamespacesResponseBody& setData(const DescribeNamespacesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeNamespacesResponseBody& setData(DescribeNamespacesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeNamespacesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeNamespacesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNamespacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeNamespacesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeNamespacesResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: The call was successful.
    // *   **3xx**: The call was redirected.
    // *   **4xx**: The call failed.
    // *   **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The information of namespaces.
    shared_ptr<DescribeNamespacesResponseBody::Data> data_ {};
    // The error code. Valid values:
    // 
    // *   If the call is successful, the **ErrorCode** parameter is not returned.
    // *   If the call fails, the **ErrorCode** parameter is returned. For more information, see the **Error codes** section in this topic.
    shared_ptr<string> errorCode_ {};
    // The returned message. Valid values:
    // 
    // *   success: If the call is successful, **success** is returned.
    // *   An error code: If the call fails, an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the list of namespaces was queried. Valid values:
    // 
    // *   **true**: The list was queried.
    // *   **false**: The list failed to be queried.
    shared_ptr<bool> success_ {};
    // The trace ID that is used to query the details of the request.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
