// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListResourceGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListResourceGroupsResponseBody() = default ;
    ListResourceGroupsResponseBody(const ListResourceGroupsResponseBody &) = default ;
    ListResourceGroupsResponseBody(ListResourceGroupsResponseBody &&) = default ;
    ListResourceGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupsResponseBody() = default ;
    ListResourceGroupsResponseBody& operator=(const ListResourceGroupsResponseBody &) = default ;
    ListResourceGroupsResponseBody& operator=(ListResourceGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ResourceGroupList, resourceGroupList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupList, resourceGroupList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResourceGroupList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceGroupList& obj) { 
          DARABONBA_PTR_TO_JSON(AliyunResourceGroupId, aliyunResourceGroupId_);
          DARABONBA_PTR_TO_JSON(AliyunResourceTags, aliyunResourceTags_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
          DARABONBA_PTR_TO_JSON(DefaultVpcId, defaultVpcId_);
          DARABONBA_PTR_TO_JSON(DefaultVswicthId, defaultVswicthId_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OrderInstanceId, orderInstanceId_);
          DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(ResourceGroupType, resourceGroupType_);
          DARABONBA_PTR_TO_JSON(Spec, spec_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceGroupList& obj) { 
          DARABONBA_PTR_FROM_JSON(AliyunResourceGroupId, aliyunResourceGroupId_);
          DARABONBA_PTR_FROM_JSON(AliyunResourceTags, aliyunResourceTags_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
          DARABONBA_PTR_FROM_JSON(DefaultVpcId, defaultVpcId_);
          DARABONBA_PTR_FROM_JSON(DefaultVswicthId, defaultVswicthId_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OrderInstanceId, orderInstanceId_);
          DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupType, resourceGroupType_);
          DARABONBA_PTR_FROM_JSON(Spec, spec_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        ResourceGroupList() = default ;
        ResourceGroupList(const ResourceGroupList &) = default ;
        ResourceGroupList(ResourceGroupList &&) = default ;
        ResourceGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceGroupList() = default ;
        ResourceGroupList& operator=(const ResourceGroupList &) = default ;
        ResourceGroupList& operator=(ResourceGroupList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Spec : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Spec& obj) { 
            DARABONBA_PTR_TO_JSON(Amount, amount_);
            DARABONBA_PTR_TO_JSON(Standard, standard_);
          };
          friend void from_json(const Darabonba::Json& j, Spec& obj) { 
            DARABONBA_PTR_FROM_JSON(Amount, amount_);
            DARABONBA_PTR_FROM_JSON(Standard, standard_);
          };
          Spec() = default ;
          Spec(const Spec &) = default ;
          Spec(Spec &&) = default ;
          Spec(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Spec() = default ;
          Spec& operator=(const Spec &) = default ;
          Spec& operator=(Spec &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->amount_ == nullptr
        && this->standard_ == nullptr; };
          // amount Field Functions 
          bool hasAmount() const { return this->amount_ != nullptr;};
          void deleteAmount() { this->amount_ = nullptr;};
          inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
          inline Spec& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


          // standard Field Functions 
          bool hasStandard() const { return this->standard_ != nullptr;};
          void deleteStandard() { this->standard_ = nullptr;};
          inline string getStandard() const { DARABONBA_PTR_GET_DEFAULT(standard_, "") };
          inline Spec& setStandard(string standard) { DARABONBA_PTR_SET_VALUE(standard_, standard) };


        protected:
          // Quantity
          shared_ptr<int32_t> amount_ {};
          // Specification details
          shared_ptr<string> standard_ {};
        };

        class AliyunResourceTags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AliyunResourceTags& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, AliyunResourceTags& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          AliyunResourceTags() = default ;
          AliyunResourceTags(const AliyunResourceTags &) = default ;
          AliyunResourceTags(AliyunResourceTags &&) = default ;
          AliyunResourceTags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AliyunResourceTags() = default ;
          AliyunResourceTags& operator=(const AliyunResourceTags &) = default ;
          AliyunResourceTags& operator=(AliyunResourceTags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline AliyunResourceTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline AliyunResourceTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // Tag Key
          shared_ptr<string> key_ {};
          // Tag Value
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->aliyunResourceGroupId_ == nullptr
        && this->aliyunResourceTags_ == nullptr && this->createTime_ == nullptr && this->createUser_ == nullptr && this->defaultVpcId_ == nullptr && this->defaultVswicthId_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->orderInstanceId_ == nullptr && this->paymentType_ == nullptr && this->remark_ == nullptr
        && this->resourceGroupType_ == nullptr && this->spec_ == nullptr && this->status_ == nullptr; };
        // aliyunResourceGroupId Field Functions 
        bool hasAliyunResourceGroupId() const { return this->aliyunResourceGroupId_ != nullptr;};
        void deleteAliyunResourceGroupId() { this->aliyunResourceGroupId_ = nullptr;};
        inline string getAliyunResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(aliyunResourceGroupId_, "") };
        inline ResourceGroupList& setAliyunResourceGroupId(string aliyunResourceGroupId) { DARABONBA_PTR_SET_VALUE(aliyunResourceGroupId_, aliyunResourceGroupId) };


        // aliyunResourceTags Field Functions 
        bool hasAliyunResourceTags() const { return this->aliyunResourceTags_ != nullptr;};
        void deleteAliyunResourceTags() { this->aliyunResourceTags_ = nullptr;};
        inline const vector<ResourceGroupList::AliyunResourceTags> & getAliyunResourceTags() const { DARABONBA_PTR_GET_CONST(aliyunResourceTags_, vector<ResourceGroupList::AliyunResourceTags>) };
        inline vector<ResourceGroupList::AliyunResourceTags> getAliyunResourceTags() { DARABONBA_PTR_GET(aliyunResourceTags_, vector<ResourceGroupList::AliyunResourceTags>) };
        inline ResourceGroupList& setAliyunResourceTags(const vector<ResourceGroupList::AliyunResourceTags> & aliyunResourceTags) { DARABONBA_PTR_SET_VALUE(aliyunResourceTags_, aliyunResourceTags) };
        inline ResourceGroupList& setAliyunResourceTags(vector<ResourceGroupList::AliyunResourceTags> && aliyunResourceTags) { DARABONBA_PTR_SET_RVALUE(aliyunResourceTags_, aliyunResourceTags) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline ResourceGroupList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createUser Field Functions 
        bool hasCreateUser() const { return this->createUser_ != nullptr;};
        void deleteCreateUser() { this->createUser_ = nullptr;};
        inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
        inline ResourceGroupList& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


        // defaultVpcId Field Functions 
        bool hasDefaultVpcId() const { return this->defaultVpcId_ != nullptr;};
        void deleteDefaultVpcId() { this->defaultVpcId_ = nullptr;};
        inline string getDefaultVpcId() const { DARABONBA_PTR_GET_DEFAULT(defaultVpcId_, "") };
        inline ResourceGroupList& setDefaultVpcId(string defaultVpcId) { DARABONBA_PTR_SET_VALUE(defaultVpcId_, defaultVpcId) };


        // defaultVswicthId Field Functions 
        bool hasDefaultVswicthId() const { return this->defaultVswicthId_ != nullptr;};
        void deleteDefaultVswicthId() { this->defaultVswicthId_ = nullptr;};
        inline string getDefaultVswicthId() const { DARABONBA_PTR_GET_DEFAULT(defaultVswicthId_, "") };
        inline ResourceGroupList& setDefaultVswicthId(string defaultVswicthId) { DARABONBA_PTR_SET_VALUE(defaultVswicthId_, defaultVswicthId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline ResourceGroupList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ResourceGroupList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // orderInstanceId Field Functions 
        bool hasOrderInstanceId() const { return this->orderInstanceId_ != nullptr;};
        void deleteOrderInstanceId() { this->orderInstanceId_ = nullptr;};
        inline string getOrderInstanceId() const { DARABONBA_PTR_GET_DEFAULT(orderInstanceId_, "") };
        inline ResourceGroupList& setOrderInstanceId(string orderInstanceId) { DARABONBA_PTR_SET_VALUE(orderInstanceId_, orderInstanceId) };


        // paymentType Field Functions 
        bool hasPaymentType() const { return this->paymentType_ != nullptr;};
        void deletePaymentType() { this->paymentType_ = nullptr;};
        inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
        inline ResourceGroupList& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline ResourceGroupList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // resourceGroupType Field Functions 
        bool hasResourceGroupType() const { return this->resourceGroupType_ != nullptr;};
        void deleteResourceGroupType() { this->resourceGroupType_ = nullptr;};
        inline string getResourceGroupType() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupType_, "") };
        inline ResourceGroupList& setResourceGroupType(string resourceGroupType) { DARABONBA_PTR_SET_VALUE(resourceGroupType_, resourceGroupType) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline const ResourceGroupList::Spec & getSpec() const { DARABONBA_PTR_GET_CONST(spec_, ResourceGroupList::Spec) };
        inline ResourceGroupList::Spec getSpec() { DARABONBA_PTR_GET(spec_, ResourceGroupList::Spec) };
        inline ResourceGroupList& setSpec(const ResourceGroupList::Spec & spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };
        inline ResourceGroupList& setSpec(ResourceGroupList::Spec && spec) { DARABONBA_PTR_SET_RVALUE(spec_, spec) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ResourceGroupList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // Alibaba Cloud Resource Group ID
        shared_ptr<string> aliyunResourceGroupId_ {};
        // Alibaba Cloud tag list
        shared_ptr<vector<ResourceGroupList::AliyunResourceTags>> aliyunResourceTags_ {};
        // The creation time, which is a 64-bit timestamp.
        shared_ptr<int64_t> createTime_ {};
        // The ID of the user who created the resource group.
        shared_ptr<string> createUser_ {};
        // Default VPC ID bound to a common resource group
        shared_ptr<string> defaultVpcId_ {};
        // The default switch ID bound to the common resource group.
        shared_ptr<string> defaultVswicthId_ {};
        // Unique identifier of a resource group
        shared_ptr<string> id_ {};
        // The name of the resource group.
        shared_ptr<string> name_ {};
        // The order instance ID of the resource group.
        shared_ptr<string> orderInstanceId_ {};
        // The billing method of the resource group. Valid values: PrePaid and PostPaid. The value PrePaid indicates the subscription billing method, and the value PostPaid indicates the pay-as-you-go billing method.
        shared_ptr<string> paymentType_ {};
        // Remarks for resource groups
        shared_ptr<string> remark_ {};
        // Resource group types:
        // 
        // *   CommonV2: Serverless resource group
        // *   ExclusiveDataIntegration: Exclusive resource group for Data Integration
        // *   ExclusiveScheduler: Exclusive resource group for scheduling
        // *   ExclusiveDataService: Exclusive resource group for DataService Studio
        shared_ptr<string> resourceGroupType_ {};
        // Resource Group specifications
        shared_ptr<ResourceGroupList::Spec> spec_ {};
        // The status of the resource group. Valid values:
        // 
        // *   Normal: The resource group is running or in use.
        // *   Stop: The resource group is expired.
        // *   Deleted: The resource group is released or destroyed.
        // *   Creating: The resource group is being created.
        // *   CreateFailed: The resource group fails to be created.
        // *   Updating: The resource group is being scaled in or out, or the configurations of the resource group are being changed.
        // *   UpdateFailed: The resource group fails to be scaled out or upgraded.
        // *   Deleting: The resource group is being released or destroyed.
        // *   DeleteFailed: The resource group fails to be released or destroyed.
        // *   Timeout: The operations that are performed on the resource group time out.
        // *   Freezed: The resource group is frozen.
        // *   Starting: The resource group is being started.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->resourceGroupList_ == nullptr && this->totalCount_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // resourceGroupList Field Functions 
      bool hasResourceGroupList() const { return this->resourceGroupList_ != nullptr;};
      void deleteResourceGroupList() { this->resourceGroupList_ = nullptr;};
      inline const vector<PagingInfo::ResourceGroupList> & getResourceGroupList() const { DARABONBA_PTR_GET_CONST(resourceGroupList_, vector<PagingInfo::ResourceGroupList>) };
      inline vector<PagingInfo::ResourceGroupList> getResourceGroupList() { DARABONBA_PTR_GET(resourceGroupList_, vector<PagingInfo::ResourceGroupList>) };
      inline PagingInfo& setResourceGroupList(const vector<PagingInfo::ResourceGroupList> & resourceGroupList) { DARABONBA_PTR_SET_VALUE(resourceGroupList_, resourceGroupList) };
      inline PagingInfo& setResourceGroupList(vector<PagingInfo::ResourceGroupList> && resourceGroupList) { DARABONBA_PTR_SET_RVALUE(resourceGroupList_, resourceGroupList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The resource groups returned.
      shared_ptr<vector<PagingInfo::ResourceGroupList>> resourceGroupList_ {};
      // All data entries
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListResourceGroupsResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListResourceGroupsResponseBody::PagingInfo) };
    inline ListResourceGroupsResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListResourceGroupsResponseBody::PagingInfo) };
    inline ListResourceGroupsResponseBody& setPagingInfo(const ListResourceGroupsResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListResourceGroupsResponseBody& setPagingInfo(ListResourceGroupsResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListResourceGroupsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The pagination information.
    shared_ptr<ListResourceGroupsResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values: true and false.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
