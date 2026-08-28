// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListSourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListSourcesResponseBody() = default ;
    ListSourcesResponseBody(const ListSourcesResponseBody &) = default ;
    ListSourcesResponseBody(ListSourcesResponseBody &&) = default ;
    ListSourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSourcesResponseBody() = default ;
    ListSourcesResponseBody& operator=(const ListSourcesResponseBody &) = default ;
    ListSourcesResponseBody& operator=(ListSourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(totalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(totalSize, totalSize_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(associationReason, associationReason_);
          DARABONBA_PTR_TO_JSON(associationStatus, associationStatus_);
          DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(k8sSourceInfo, k8sSourceInfo_);
          DARABONBA_PTR_TO_JSON(nacosSourceInfo, nacosSourceInfo_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
          DARABONBA_PTR_TO_JSON(updateTimestamp, updateTimestamp_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(associationReason, associationReason_);
          DARABONBA_PTR_FROM_JSON(associationStatus, associationStatus_);
          DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(k8sSourceInfo, k8sSourceInfo_);
          DARABONBA_PTR_FROM_JSON(nacosSourceInfo, nacosSourceInfo_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
          DARABONBA_PTR_FROM_JSON(updateTimestamp, updateTimestamp_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NacosSourceInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NacosSourceInfo& obj) { 
            DARABONBA_PTR_TO_JSON(address, address_);
            DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
            DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
          };
          friend void from_json(const Darabonba::Json& j, NacosSourceInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(address, address_);
            DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
            DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
          };
          NacosSourceInfo() = default ;
          NacosSourceInfo(const NacosSourceInfo &) = default ;
          NacosSourceInfo(NacosSourceInfo &&) = default ;
          NacosSourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NacosSourceInfo() = default ;
          NacosSourceInfo& operator=(const NacosSourceInfo &) = default ;
          NacosSourceInfo& operator=(NacosSourceInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->address_ == nullptr
        && this->clusterId_ == nullptr && this->instanceId_ == nullptr; };
          // address Field Functions 
          bool hasAddress() const { return this->address_ != nullptr;};
          void deleteAddress() { this->address_ = nullptr;};
          inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
          inline NacosSourceInfo& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


          // clusterId Field Functions 
          bool hasClusterId() const { return this->clusterId_ != nullptr;};
          void deleteClusterId() { this->clusterId_ = nullptr;};
          inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
          inline NacosSourceInfo& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline NacosSourceInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        protected:
          // The endpoint of the Nacos instance.
          shared_ptr<string> address_ {};
          // The registry ID.
          shared_ptr<string> clusterId_ {};
          // The Nacos instance ID.
          shared_ptr<string> instanceId_ {};
        };

        class K8sSourceInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const K8sSourceInfo& obj) { 
            DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
          };
          friend void from_json(const Darabonba::Json& j, K8sSourceInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
          };
          K8sSourceInfo() = default ;
          K8sSourceInfo(const K8sSourceInfo &) = default ;
          K8sSourceInfo(K8sSourceInfo &&) = default ;
          K8sSourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~K8sSourceInfo() = default ;
          K8sSourceInfo& operator=(const K8sSourceInfo &) = default ;
          K8sSourceInfo& operator=(K8sSourceInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->clusterId_ == nullptr; };
          // clusterId Field Functions 
          bool hasClusterId() const { return this->clusterId_ != nullptr;};
          void deleteClusterId() { this->clusterId_ = nullptr;};
          inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
          inline K8sSourceInfo& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        protected:
          // The cluster ID.
          shared_ptr<string> clusterId_ {};
        };

        virtual bool empty() const override { return this->associationReason_ == nullptr
        && this->associationStatus_ == nullptr && this->createTimestamp_ == nullptr && this->k8sSourceInfo_ == nullptr && this->nacosSourceInfo_ == nullptr && this->name_ == nullptr
        && this->resourceGroupId_ == nullptr && this->sourceId_ == nullptr && this->updateTimestamp_ == nullptr; };
        // associationReason Field Functions 
        bool hasAssociationReason() const { return this->associationReason_ != nullptr;};
        void deleteAssociationReason() { this->associationReason_ = nullptr;};
        inline string getAssociationReason() const { DARABONBA_PTR_GET_DEFAULT(associationReason_, "") };
        inline Items& setAssociationReason(string associationReason) { DARABONBA_PTR_SET_VALUE(associationReason_, associationReason) };


        // associationStatus Field Functions 
        bool hasAssociationStatus() const { return this->associationStatus_ != nullptr;};
        void deleteAssociationStatus() { this->associationStatus_ = nullptr;};
        inline string getAssociationStatus() const { DARABONBA_PTR_GET_DEFAULT(associationStatus_, "") };
        inline Items& setAssociationStatus(string associationStatus) { DARABONBA_PTR_SET_VALUE(associationStatus_, associationStatus) };


        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline Items& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // k8sSourceInfo Field Functions 
        bool hasK8sSourceInfo() const { return this->k8sSourceInfo_ != nullptr;};
        void deleteK8sSourceInfo() { this->k8sSourceInfo_ = nullptr;};
        inline const Items::K8sSourceInfo & getK8sSourceInfo() const { DARABONBA_PTR_GET_CONST(k8sSourceInfo_, Items::K8sSourceInfo) };
        inline Items::K8sSourceInfo getK8sSourceInfo() { DARABONBA_PTR_GET(k8sSourceInfo_, Items::K8sSourceInfo) };
        inline Items& setK8sSourceInfo(const Items::K8sSourceInfo & k8sSourceInfo) { DARABONBA_PTR_SET_VALUE(k8sSourceInfo_, k8sSourceInfo) };
        inline Items& setK8sSourceInfo(Items::K8sSourceInfo && k8sSourceInfo) { DARABONBA_PTR_SET_RVALUE(k8sSourceInfo_, k8sSourceInfo) };


        // nacosSourceInfo Field Functions 
        bool hasNacosSourceInfo() const { return this->nacosSourceInfo_ != nullptr;};
        void deleteNacosSourceInfo() { this->nacosSourceInfo_ = nullptr;};
        inline const Items::NacosSourceInfo & getNacosSourceInfo() const { DARABONBA_PTR_GET_CONST(nacosSourceInfo_, Items::NacosSourceInfo) };
        inline Items::NacosSourceInfo getNacosSourceInfo() { DARABONBA_PTR_GET(nacosSourceInfo_, Items::NacosSourceInfo) };
        inline Items& setNacosSourceInfo(const Items::NacosSourceInfo & nacosSourceInfo) { DARABONBA_PTR_SET_VALUE(nacosSourceInfo_, nacosSourceInfo) };
        inline Items& setNacosSourceInfo(Items::NacosSourceInfo && nacosSourceInfo) { DARABONBA_PTR_SET_RVALUE(nacosSourceInfo_, nacosSourceInfo) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Items& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // sourceId Field Functions 
        bool hasSourceId() const { return this->sourceId_ != nullptr;};
        void deleteSourceId() { this->sourceId_ = nullptr;};
        inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
        inline Items& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


        // updateTimestamp Field Functions 
        bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
        void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
        inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
        inline Items& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


      protected:
        shared_ptr<string> associationReason_ {};
        shared_ptr<string> associationStatus_ {};
        // The creation timestamp. Unit: milliseconds.
        shared_ptr<int64_t> createTimestamp_ {};
        // The source information when the source type is K8S.
        shared_ptr<Items::K8sSourceInfo> k8sSourceInfo_ {};
        // The source information when the source type is MSE_NACOS.
        shared_ptr<Items::NacosSourceInfo> nacosSourceInfo_ {};
        // The source name. If the source type is K8S, the name is the container cluster name. If the source type is MSE_NACOS, the name is the Nacos instance name.
        shared_ptr<string> name_ {};
        shared_ptr<string> resourceGroupId_ {};
        // The source ID.
        shared_ptr<string> sourceId_ {};
        // The update timestamp. Unit: milliseconds.
        shared_ptr<int64_t> updateTimestamp_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalSize_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


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
      // The list of sources.
      shared_ptr<vector<Data::Items>> items_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSourcesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListSourcesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListSourcesResponseBody::Data) };
    inline ListSourcesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListSourcesResponseBody::Data) };
    inline ListSourcesResponseBody& setData(const ListSourcesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSourcesResponseBody& setData(ListSourcesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSourcesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<ListSourcesResponseBody::Data> data_ {};
    // The response message returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
