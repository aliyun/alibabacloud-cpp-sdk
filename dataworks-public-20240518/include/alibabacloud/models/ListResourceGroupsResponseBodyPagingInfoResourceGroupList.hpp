// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSRESPONSEBODYPAGINGINFORESOURCEGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSRESPONSEBODYPAGINGINFORESOURCEGROUPLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceGroupsResponseBodyPagingInfoResourceGroupListAliyunResourceTags.hpp>
#include <alibabacloud/models/ListResourceGroupsResponseBodyPagingInfoResourceGroupListSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListResourceGroupsResponseBodyPagingInfoResourceGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupsResponseBodyPagingInfoResourceGroupList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListResourceGroupsResponseBodyPagingInfoResourceGroupList& obj) { 
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
    ListResourceGroupsResponseBodyPagingInfoResourceGroupList() = default ;
    ListResourceGroupsResponseBodyPagingInfoResourceGroupList(const ListResourceGroupsResponseBodyPagingInfoResourceGroupList &) = default ;
    ListResourceGroupsResponseBodyPagingInfoResourceGroupList(ListResourceGroupsResponseBodyPagingInfoResourceGroupList &&) = default ;
    ListResourceGroupsResponseBodyPagingInfoResourceGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupsResponseBodyPagingInfoResourceGroupList() = default ;
    ListResourceGroupsResponseBodyPagingInfoResourceGroupList& operator=(const ListResourceGroupsResponseBodyPagingInfoResourceGroupList &) = default ;
    ListResourceGroupsResponseBodyPagingInfoResourceGroupList& operator=(ListResourceGroupsResponseBodyPagingInfoResourceGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunResourceGroupId_ != nullptr
        && this->aliyunResourceTags_ != nullptr && this->createTime_ != nullptr && this->createUser_ != nullptr && this->defaultVpcId_ != nullptr && this->defaultVswicthId_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr && this->orderInstanceId_ != nullptr && this->paymentType_ != nullptr && this->remark_ != nullptr
        && this->resourceGroupType_ != nullptr && this->spec_ != nullptr && this->status_ != nullptr; };
    // aliyunResourceGroupId Field Functions 
    bool hasAliyunResourceGroupId() const { return this->aliyunResourceGroupId_ != nullptr;};
    void deleteAliyunResourceGroupId() { this->aliyunResourceGroupId_ = nullptr;};
    inline string aliyunResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(aliyunResourceGroupId_, "") };
    inline ListResourceGroupsResponseBodyPagingInfoResourceGroupList& setAliyunResourceGroupId(string aliyunResourceGroupId) { DARABONBA_PTR_SET_VALUE(aliyunResourceGroupId_, aliyunResourceGroupId) };


    // aliyunResourceTags Field Functions 
    bool hasAliyunResourceTags() const { return this->aliyunResourceTags_ != nullptr;};
    void deleteAliyunResourceTags() { this->aliyunResourceTags_ = nullptr;};
    inline const vector<Models::ListResourceGroupsResponseBodyPagingInfoResourceGroupListAliyunResourceTags> & aliyunResourceTags() const { DARABONBA_PTR_GET_CONST(aliyunResourceTags_, vector<Models::ListResourceGroupsResponseBodyPagingInfoResourceGroupListAliyunResourceTags>) };
    inline vector<Models::ListResourceGroupsResponseBodyPagingInfoResourceGroupListAliyunResourceTags> aliyunResourceTags() { DARABONBA_PTR_GET(aliyunResourceTags_, vector<Models::ListResourceGroupsResponseBodyPagingInfoResourceGroupListAliyunResourceTags>) };
    inline ListResourceGroupsResponseBodyPagingInfoResourceGroupList& setAliyunResourceTags(const vector<Models::ListResourceGroupsResponseBodyPagingInfoResourceGroupListAliyunResourceTags> & aliyunResourceTags) { DARABONBA_PTR_SET_VALUE(aliyunResourceTags_, aliyunResourceTags) };
    inline ListResourceGroupsResponseBodyPagingInfoResourceGroupList& setAliyunResourceTags(vector<Models::ListResourceGroupsResponseBodyPagingInfoResourceGroupListAliyunResourceTags> && aliyunResourceTags) { DARABONBA_PTR_SET_RVALUE(aliyunResourceTags_, aliyunResourceTags) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListResourceGroupsResponseBodyPagingInfoResourceGroupList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListResourceGroupsResponseBodyPagingInfoResourceGroupList& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // defaultVpcId Field Functions 
    bool hasDefaultVpcId() const { return this->defaultVpcId_ != nullptr;};
    void deleteDefaultVpcId() { this->defaultVpcId_ = nullptr;};
    inline string defaultVpcId() const { DARABONBA_PTR_GET_DEFAULT(defaultVpcId_, "") };
    inline ListResourceGroupsResponseBodyPagingInfoResourceGroupList& setDefaultVpcId(string defaultVpcId) { DARABONBA_PTR_SET_VALUE(defaultVpcId_, defaultVpcId) };


    // defaultVswicthId Field Functions 
    bool hasDefaultVswicthId() const { return this->defaultVswicthId_ != nullptr;};
    void deleteDefaultVswicthId() { this->defaultVswicthId_ = nullptr;};
    inline string defaultVswicthId() const { DARABONBA_PTR_GET_DEFAULT(defaultVswicthId_, "") };
    inline ListResourceGroupsResponseBodyPagingInfoResourceGroupList& setDefaultVswicthId(string defaultVswicthId) { DARABONBA_PTR_SET_VALUE(defaultVswicthId_, defaultVswicthId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListResourceGroupsResponseBodyPagingInfoResourceGroupList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListResourceGroupsResponseBodyPagingInfoResourceGroupList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // orderInstanceId Field Functions 
    bool hasOrderInstanceId() const { return this->orderInstanceId_ != nullptr;};
    void deleteOrderInstanceId() { this->orderInstanceId_ = nullptr;};
    inline string orderInstanceId() const { DARABONBA_PTR_GET_DEFAULT(orderInstanceId_, "") };
    inline ListResourceGroupsResponseBodyPagingInfoResourceGroupList& setOrderInstanceId(string orderInstanceId) { DARABONBA_PTR_SET_VALUE(orderInstanceId_, orderInstanceId) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ListResourceGroupsResponseBodyPagingInfoResourceGroupList& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListResourceGroupsResponseBodyPagingInfoResourceGroupList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceGroupType Field Functions 
    bool hasResourceGroupType() const { return this->resourceGroupType_ != nullptr;};
    void deleteResourceGroupType() { this->resourceGroupType_ = nullptr;};
    inline string resourceGroupType() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupType_, "") };
    inline ListResourceGroupsResponseBodyPagingInfoResourceGroupList& setResourceGroupType(string resourceGroupType) { DARABONBA_PTR_SET_VALUE(resourceGroupType_, resourceGroupType) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline const Models::ListResourceGroupsResponseBodyPagingInfoResourceGroupListSpec & spec() const { DARABONBA_PTR_GET_CONST(spec_, Models::ListResourceGroupsResponseBodyPagingInfoResourceGroupListSpec) };
    inline Models::ListResourceGroupsResponseBodyPagingInfoResourceGroupListSpec spec() { DARABONBA_PTR_GET(spec_, Models::ListResourceGroupsResponseBodyPagingInfoResourceGroupListSpec) };
    inline ListResourceGroupsResponseBodyPagingInfoResourceGroupList& setSpec(const Models::ListResourceGroupsResponseBodyPagingInfoResourceGroupListSpec & spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };
    inline ListResourceGroupsResponseBodyPagingInfoResourceGroupList& setSpec(Models::ListResourceGroupsResponseBodyPagingInfoResourceGroupListSpec && spec) { DARABONBA_PTR_SET_RVALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListResourceGroupsResponseBodyPagingInfoResourceGroupList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Alibaba Cloud Resource Group ID
    std::shared_ptr<string> aliyunResourceGroupId_ = nullptr;
    // Alibaba Cloud tag list
    std::shared_ptr<vector<Models::ListResourceGroupsResponseBodyPagingInfoResourceGroupListAliyunResourceTags>> aliyunResourceTags_ = nullptr;
    // The creation time, which is a 64-bit timestamp.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the user who created the resource group.
    std::shared_ptr<string> createUser_ = nullptr;
    // Default VPC ID bound to a common resource group
    std::shared_ptr<string> defaultVpcId_ = nullptr;
    // The default switch ID bound to the common resource group.
    std::shared_ptr<string> defaultVswicthId_ = nullptr;
    // Unique identifier of a resource group
    std::shared_ptr<string> id_ = nullptr;
    // The name of the resource group.
    std::shared_ptr<string> name_ = nullptr;
    // The order instance ID of the resource group.
    std::shared_ptr<string> orderInstanceId_ = nullptr;
    // The billing method of the resource group. Valid values: PrePaid and PostPaid. The value PrePaid indicates the subscription billing method, and the value PostPaid indicates the pay-as-you-go billing method.
    std::shared_ptr<string> paymentType_ = nullptr;
    // Remarks for resource groups
    std::shared_ptr<string> remark_ = nullptr;
    // Resource group types:
    // 
    // *   CommonV2: Serverless resource group
    // *   ExclusiveDataIntegration: Exclusive resource group for Data Integration
    // *   ExclusiveScheduler: Exclusive resource group for scheduling
    // *   ExclusiveDataService: Exclusive resource group for DataService Studio
    std::shared_ptr<string> resourceGroupType_ = nullptr;
    // Resource Group specifications
    std::shared_ptr<Models::ListResourceGroupsResponseBodyPagingInfoResourceGroupListSpec> spec_ = nullptr;
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
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
