// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESPONSEBODY_HPP_
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
  class GetResourceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetResourceGroupResponseBody() = default ;
    GetResourceGroupResponseBody(const GetResourceGroupResponseBody &) = default ;
    GetResourceGroupResponseBody(GetResourceGroupResponseBody &&) = default ;
    GetResourceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupResponseBody() = default ;
    GetResourceGroupResponseBody& operator=(const GetResourceGroupResponseBody &) = default ;
    GetResourceGroupResponseBody& operator=(GetResourceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceGroup& obj) { 
        DARABONBA_PTR_TO_JSON(AliyunResourceGroupId, aliyunResourceGroupId_);
        DARABONBA_PTR_TO_JSON(AliyunResourceTags, aliyunResourceTags_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
        DARABONBA_PTR_TO_JSON(DefaultVpcId, defaultVpcId_);
        DARABONBA_PTR_TO_JSON(DefaultVswitchId, defaultVswitchId_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OrderInstanceId, orderInstanceId_);
        DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(ResourceGroupType, resourceGroupType_);
        DARABONBA_PTR_TO_JSON(Spec, spec_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(AliyunResourceGroupId, aliyunResourceGroupId_);
        DARABONBA_PTR_FROM_JSON(AliyunResourceTags, aliyunResourceTags_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
        DARABONBA_PTR_FROM_JSON(DefaultVpcId, defaultVpcId_);
        DARABONBA_PTR_FROM_JSON(DefaultVswitchId, defaultVswitchId_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OrderInstanceId, orderInstanceId_);
        DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupType, resourceGroupType_);
        DARABONBA_PTR_FROM_JSON(Spec, spec_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ResourceGroup() = default ;
      ResourceGroup(const ResourceGroup &) = default ;
      ResourceGroup(ResourceGroup &&) = default ;
      ResourceGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceGroup() = default ;
      ResourceGroup& operator=(const ResourceGroup &) = default ;
      ResourceGroup& operator=(ResourceGroup &&) = default ;
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
        // The number of resources in the resource group.
        shared_ptr<int32_t> amount_ {};
        // The number of compute units (CUs) in the resource group.
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
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->aliyunResourceGroupId_ == nullptr
        && this->aliyunResourceTags_ == nullptr && this->createTime_ == nullptr && this->createUser_ == nullptr && this->defaultVpcId_ == nullptr && this->defaultVswitchId_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->orderInstanceId_ == nullptr && this->paymentType_ == nullptr && this->remark_ == nullptr
        && this->resourceGroupType_ == nullptr && this->spec_ == nullptr && this->status_ == nullptr; };
      // aliyunResourceGroupId Field Functions 
      bool hasAliyunResourceGroupId() const { return this->aliyunResourceGroupId_ != nullptr;};
      void deleteAliyunResourceGroupId() { this->aliyunResourceGroupId_ = nullptr;};
      inline string getAliyunResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(aliyunResourceGroupId_, "") };
      inline ResourceGroup& setAliyunResourceGroupId(string aliyunResourceGroupId) { DARABONBA_PTR_SET_VALUE(aliyunResourceGroupId_, aliyunResourceGroupId) };


      // aliyunResourceTags Field Functions 
      bool hasAliyunResourceTags() const { return this->aliyunResourceTags_ != nullptr;};
      void deleteAliyunResourceTags() { this->aliyunResourceTags_ = nullptr;};
      inline const vector<ResourceGroup::AliyunResourceTags> & getAliyunResourceTags() const { DARABONBA_PTR_GET_CONST(aliyunResourceTags_, vector<ResourceGroup::AliyunResourceTags>) };
      inline vector<ResourceGroup::AliyunResourceTags> getAliyunResourceTags() { DARABONBA_PTR_GET(aliyunResourceTags_, vector<ResourceGroup::AliyunResourceTags>) };
      inline ResourceGroup& setAliyunResourceTags(const vector<ResourceGroup::AliyunResourceTags> & aliyunResourceTags) { DARABONBA_PTR_SET_VALUE(aliyunResourceTags_, aliyunResourceTags) };
      inline ResourceGroup& setAliyunResourceTags(vector<ResourceGroup::AliyunResourceTags> && aliyunResourceTags) { DARABONBA_PTR_SET_RVALUE(aliyunResourceTags_, aliyunResourceTags) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ResourceGroup& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUser Field Functions 
      bool hasCreateUser() const { return this->createUser_ != nullptr;};
      void deleteCreateUser() { this->createUser_ = nullptr;};
      inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
      inline ResourceGroup& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


      // defaultVpcId Field Functions 
      bool hasDefaultVpcId() const { return this->defaultVpcId_ != nullptr;};
      void deleteDefaultVpcId() { this->defaultVpcId_ = nullptr;};
      inline string getDefaultVpcId() const { DARABONBA_PTR_GET_DEFAULT(defaultVpcId_, "") };
      inline ResourceGroup& setDefaultVpcId(string defaultVpcId) { DARABONBA_PTR_SET_VALUE(defaultVpcId_, defaultVpcId) };


      // defaultVswitchId Field Functions 
      bool hasDefaultVswitchId() const { return this->defaultVswitchId_ != nullptr;};
      void deleteDefaultVswitchId() { this->defaultVswitchId_ = nullptr;};
      inline string getDefaultVswitchId() const { DARABONBA_PTR_GET_DEFAULT(defaultVswitchId_, "") };
      inline ResourceGroup& setDefaultVswitchId(string defaultVswitchId) { DARABONBA_PTR_SET_VALUE(defaultVswitchId_, defaultVswitchId) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline ResourceGroup& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ResourceGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // orderInstanceId Field Functions 
      bool hasOrderInstanceId() const { return this->orderInstanceId_ != nullptr;};
      void deleteOrderInstanceId() { this->orderInstanceId_ = nullptr;};
      inline string getOrderInstanceId() const { DARABONBA_PTR_GET_DEFAULT(orderInstanceId_, "") };
      inline ResourceGroup& setOrderInstanceId(string orderInstanceId) { DARABONBA_PTR_SET_VALUE(orderInstanceId_, orderInstanceId) };


      // paymentType Field Functions 
      bool hasPaymentType() const { return this->paymentType_ != nullptr;};
      void deletePaymentType() { this->paymentType_ = nullptr;};
      inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
      inline ResourceGroup& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline ResourceGroup& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // resourceGroupType Field Functions 
      bool hasResourceGroupType() const { return this->resourceGroupType_ != nullptr;};
      void deleteResourceGroupType() { this->resourceGroupType_ = nullptr;};
      inline string getResourceGroupType() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupType_, "") };
      inline ResourceGroup& setResourceGroupType(string resourceGroupType) { DARABONBA_PTR_SET_VALUE(resourceGroupType_, resourceGroupType) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline const ResourceGroup::Spec & getSpec() const { DARABONBA_PTR_GET_CONST(spec_, ResourceGroup::Spec) };
      inline ResourceGroup::Spec getSpec() { DARABONBA_PTR_GET(spec_, ResourceGroup::Spec) };
      inline ResourceGroup& setSpec(const ResourceGroup::Spec & spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };
      inline ResourceGroup& setSpec(ResourceGroup::Spec && spec) { DARABONBA_PTR_SET_RVALUE(spec_, spec) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResourceGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the Alibaba Cloud resource group.
      shared_ptr<string> aliyunResourceGroupId_ {};
      // The tags.
      shared_ptr<vector<ResourceGroup::AliyunResourceTags>> aliyunResourceTags_ {};
      // The time when the resource group was created. The value is a 64-bit timestamp.
      shared_ptr<int64_t> createTime_ {};
      // The ID of the account that is used to create the resource group.
      shared_ptr<string> createUser_ {};
      // The ID of the virtual private cloud (VPC) with which the resource group is associated by default.
      shared_ptr<string> defaultVpcId_ {};
      // The ID of the vSwitch with which the resource group is associated by default.
      shared_ptr<string> defaultVswitchId_ {};
      // The ID of the resource group.
      shared_ptr<string> id_ {};
      // The name of the resource group.
      shared_ptr<string> name_ {};
      // The instance ID of the order that is used to create the resource group.
      shared_ptr<string> orderInstanceId_ {};
      // The billing method of the resource group. Valid values: PrePaid and PostPaid. The value PrePaid indicates the subscription billing method, and the value PostPaid indicates the pay-as-you-go billing method.
      shared_ptr<string> paymentType_ {};
      // The description of the resource group.
      shared_ptr<string> remark_ {};
      // The type of the resource group. Valid values:
      // 
      // *   CommonV2: Serverless resource group.
      // *   ExclusiveDataIntegration: Exclusive resource group for Data Integration.
      // *   ExclusiveScheduler: Exclusive resource group for scheduling.
      // *   ExclusiveDataService: Exclusive resource group for DataService Studio.
      shared_ptr<string> resourceGroupType_ {};
      // The specifications of the resource group.
      shared_ptr<ResourceGroup::Spec> spec_ {};
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

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceGroup_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline const GetResourceGroupResponseBody::ResourceGroup & getResourceGroup() const { DARABONBA_PTR_GET_CONST(resourceGroup_, GetResourceGroupResponseBody::ResourceGroup) };
    inline GetResourceGroupResponseBody::ResourceGroup getResourceGroup() { DARABONBA_PTR_GET(resourceGroup_, GetResourceGroupResponseBody::ResourceGroup) };
    inline GetResourceGroupResponseBody& setResourceGroup(const GetResourceGroupResponseBody::ResourceGroup & resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };
    inline GetResourceGroupResponseBody& setResourceGroup(GetResourceGroupResponseBody::ResourceGroup && resourceGroup) { DARABONBA_PTR_SET_RVALUE(resourceGroup_, resourceGroup) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetResourceGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details about the resource group.
    shared_ptr<GetResourceGroupResponseBody::ResourceGroup> resourceGroup_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
