// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTASRESPONSEBODYDATAQUOTAINFOLISTSUBQUOTAINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTASRESPONSEBODYDATAQUOTAINFOLISTSUBQUOTAINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListBillingPolicy.hpp>
#include <alibabacloud/models/ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter.hpp>
#include <alibabacloud/models/ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListSaleTag.hpp>
#include <alibabacloud/models/ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListScheduleInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(billingPolicy, billingPolicy_);
      DARABONBA_PTR_TO_JSON(cluster, cluster_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nickName, nickName_);
      DARABONBA_PTR_TO_JSON(parameter, parameter_);
      DARABONBA_PTR_TO_JSON(parentId, parentId_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(saleTag, saleTag_);
      DARABONBA_PTR_TO_JSON(scheduleInfo, scheduleInfo_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(billingPolicy, billingPolicy_);
      DARABONBA_PTR_FROM_JSON(cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nickName, nickName_);
      DARABONBA_PTR_FROM_JSON(parameter, parameter_);
      DARABONBA_PTR_FROM_JSON(parentId, parentId_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(saleTag, saleTag_);
      DARABONBA_PTR_FROM_JSON(scheduleInfo, scheduleInfo_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList() = default ;
    ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList(const ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList &) = default ;
    ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList(ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList &&) = default ;
    ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList() = default ;
    ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList& operator=(const ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList &) = default ;
    ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList& operator=(ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billingPolicy_ == nullptr
        && return this->cluster_ == nullptr && return this->createTime_ == nullptr && return this->creatorId_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr
        && return this->nickName_ == nullptr && return this->parameter_ == nullptr && return this->parentId_ == nullptr && return this->regionId_ == nullptr && return this->saleTag_ == nullptr
        && return this->scheduleInfo_ == nullptr && return this->status_ == nullptr && return this->tag_ == nullptr && return this->tenantId_ == nullptr && return this->type_ == nullptr
        && return this->version_ == nullptr; };
    // billingPolicy Field Functions 
    bool hasBillingPolicy() const { return this->billingPolicy_ != nullptr;};
    void deleteBillingPolicy() { this->billingPolicy_ = nullptr;};
    inline const Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListBillingPolicy & billingPolicy() const { DARABONBA_PTR_GET_CONST(billingPolicy_, Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListBillingPolicy) };
    inline Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListBillingPolicy billingPolicy() { DARABONBA_PTR_GET(billingPolicy_, Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListBillingPolicy) };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList& setBillingPolicy(const Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListBillingPolicy & billingPolicy) { DARABONBA_PTR_SET_VALUE(billingPolicy_, billingPolicy) };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList& setBillingPolicy(Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListBillingPolicy && billingPolicy) { DARABONBA_PTR_SET_RVALUE(billingPolicy_, billingPolicy) };


    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline string cluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // parameter Field Functions 
    bool hasParameter() const { return this->parameter_ != nullptr;};
    void deleteParameter() { this->parameter_ = nullptr;};
    inline const Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter & parameter() const { DARABONBA_PTR_GET_CONST(parameter_, Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter) };
    inline Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter parameter() { DARABONBA_PTR_GET(parameter_, Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter) };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList& setParameter(const Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter & parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList& setParameter(Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter && parameter) { DARABONBA_PTR_SET_RVALUE(parameter_, parameter) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // saleTag Field Functions 
    bool hasSaleTag() const { return this->saleTag_ != nullptr;};
    void deleteSaleTag() { this->saleTag_ = nullptr;};
    inline const Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListSaleTag & saleTag() const { DARABONBA_PTR_GET_CONST(saleTag_, Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListSaleTag) };
    inline Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListSaleTag saleTag() { DARABONBA_PTR_GET(saleTag_, Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListSaleTag) };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList& setSaleTag(const Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListSaleTag & saleTag) { DARABONBA_PTR_SET_VALUE(saleTag_, saleTag) };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList& setSaleTag(Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListSaleTag && saleTag) { DARABONBA_PTR_SET_RVALUE(saleTag_, saleTag) };


    // scheduleInfo Field Functions 
    bool hasScheduleInfo() const { return this->scheduleInfo_ != nullptr;};
    void deleteScheduleInfo() { this->scheduleInfo_ = nullptr;};
    inline const Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListScheduleInfo & scheduleInfo() const { DARABONBA_PTR_GET_CONST(scheduleInfo_, Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListScheduleInfo) };
    inline Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListScheduleInfo scheduleInfo() { DARABONBA_PTR_GET(scheduleInfo_, Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListScheduleInfo) };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList& setScheduleInfo(const Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListScheduleInfo & scheduleInfo) { DARABONBA_PTR_SET_VALUE(scheduleInfo_, scheduleInfo) };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList& setScheduleInfo(Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListScheduleInfo && scheduleInfo) { DARABONBA_PTR_SET_RVALUE(scheduleInfo_, scheduleInfo) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The information of the order.
    std::shared_ptr<Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListBillingPolicy> billingPolicy_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> cluster_ = nullptr;
    // The time when the resource was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the Alibaba Cloud account that is used to create the resource.
    std::shared_ptr<string> creatorId_ = nullptr;
    // The ID of the level-2 quota.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the level-2 quota.
    std::shared_ptr<string> name_ = nullptr;
    // The nickname of the level-2 quota.
    std::shared_ptr<string> nickName_ = nullptr;
    // The description of the quota.
    std::shared_ptr<Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter> parameter_ = nullptr;
    // The ID of the parent resource.
    std::shared_ptr<string> parentId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The identifier of an object in a MaxCompute quota. This identifier is the same as the identifier in the sales bill of Alibaba Cloud. This parameter is used for tags.
    std::shared_ptr<Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListSaleTag> saleTag_ = nullptr;
    // The information of the scheduling plan.
    std::shared_ptr<Models::ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListScheduleInfo> scheduleInfo_ = nullptr;
    // The status of the endpoint group.
    std::shared_ptr<string> status_ = nullptr;
    // The tag of the resource for the quota.
    std::shared_ptr<string> tag_ = nullptr;
    // The tenant ID.
    std::shared_ptr<string> tenantId_ = nullptr;
    // The type of the resource system. This parameter corresponds to the resourceSystemType parameter of the cluster.
    std::shared_ptr<string> type_ = nullptr;
    // The version of the algorithm image.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
