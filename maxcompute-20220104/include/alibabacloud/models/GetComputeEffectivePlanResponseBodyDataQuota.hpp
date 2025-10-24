// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPUTEEFFECTIVEPLANRESPONSEBODYDATAQUOTA_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPUTEEFFECTIVEPLANRESPONSEBODYDATAQUOTA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetComputeEffectivePlanResponseBodyDataQuotaSubQuotaInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetComputeEffectivePlanResponseBodyDataQuota : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetComputeEffectivePlanResponseBodyDataQuota& obj) { 
      DARABONBA_PTR_TO_JSON(cluster, cluster_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nickName, nickName_);
      DARABONBA_ANY_TO_JSON(parameter, parameter_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(subQuotaInfoList, subQuotaInfoList_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetComputeEffectivePlanResponseBodyDataQuota& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nickName, nickName_);
      DARABONBA_ANY_FROM_JSON(parameter, parameter_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(subQuotaInfoList, subQuotaInfoList_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    GetComputeEffectivePlanResponseBodyDataQuota() = default ;
    GetComputeEffectivePlanResponseBodyDataQuota(const GetComputeEffectivePlanResponseBodyDataQuota &) = default ;
    GetComputeEffectivePlanResponseBodyDataQuota(GetComputeEffectivePlanResponseBodyDataQuota &&) = default ;
    GetComputeEffectivePlanResponseBodyDataQuota(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetComputeEffectivePlanResponseBodyDataQuota() = default ;
    GetComputeEffectivePlanResponseBodyDataQuota& operator=(const GetComputeEffectivePlanResponseBodyDataQuota &) = default ;
    GetComputeEffectivePlanResponseBodyDataQuota& operator=(GetComputeEffectivePlanResponseBodyDataQuota &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cluster_ == nullptr
        && return this->createTime_ == nullptr && return this->creatorId_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->nickName_ == nullptr
        && return this->parameter_ == nullptr && return this->regionId_ == nullptr && return this->status_ == nullptr && return this->subQuotaInfoList_ == nullptr && return this->tenantId_ == nullptr
        && return this->type_ == nullptr && return this->version_ == nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline string cluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
    inline GetComputeEffectivePlanResponseBodyDataQuota& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetComputeEffectivePlanResponseBodyDataQuota& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline GetComputeEffectivePlanResponseBodyDataQuota& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetComputeEffectivePlanResponseBodyDataQuota& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetComputeEffectivePlanResponseBodyDataQuota& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline GetComputeEffectivePlanResponseBodyDataQuota& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // parameter Field Functions 
    bool hasParameter() const { return this->parameter_ != nullptr;};
    void deleteParameter() { this->parameter_ = nullptr;};
    inline     const Darabonba::Json & parameter() const { DARABONBA_GET(parameter_) };
    Darabonba::Json & parameter() { DARABONBA_GET(parameter_) };
    inline GetComputeEffectivePlanResponseBodyDataQuota& setParameter(const Darabonba::Json & parameter) { DARABONBA_SET_VALUE(parameter_, parameter) };
    inline GetComputeEffectivePlanResponseBodyDataQuota& setParameter(Darabonba::Json & parameter) { DARABONBA_SET_RVALUE(parameter_, parameter) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetComputeEffectivePlanResponseBodyDataQuota& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetComputeEffectivePlanResponseBodyDataQuota& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subQuotaInfoList Field Functions 
    bool hasSubQuotaInfoList() const { return this->subQuotaInfoList_ != nullptr;};
    void deleteSubQuotaInfoList() { this->subQuotaInfoList_ = nullptr;};
    inline const vector<Models::GetComputeEffectivePlanResponseBodyDataQuotaSubQuotaInfoList> & subQuotaInfoList() const { DARABONBA_PTR_GET_CONST(subQuotaInfoList_, vector<Models::GetComputeEffectivePlanResponseBodyDataQuotaSubQuotaInfoList>) };
    inline vector<Models::GetComputeEffectivePlanResponseBodyDataQuotaSubQuotaInfoList> subQuotaInfoList() { DARABONBA_PTR_GET(subQuotaInfoList_, vector<Models::GetComputeEffectivePlanResponseBodyDataQuotaSubQuotaInfoList>) };
    inline GetComputeEffectivePlanResponseBodyDataQuota& setSubQuotaInfoList(const vector<Models::GetComputeEffectivePlanResponseBodyDataQuotaSubQuotaInfoList> & subQuotaInfoList) { DARABONBA_PTR_SET_VALUE(subQuotaInfoList_, subQuotaInfoList) };
    inline GetComputeEffectivePlanResponseBodyDataQuota& setSubQuotaInfoList(vector<Models::GetComputeEffectivePlanResponseBodyDataQuotaSubQuotaInfoList> && subQuotaInfoList) { DARABONBA_PTR_SET_RVALUE(subQuotaInfoList_, subQuotaInfoList) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetComputeEffectivePlanResponseBodyDataQuota& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetComputeEffectivePlanResponseBodyDataQuota& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetComputeEffectivePlanResponseBodyDataQuota& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The ID of the cluster.
    std::shared_ptr<string> cluster_ = nullptr;
    // The time when the level-1 quota was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the Alibaba Cloud account that is used to create the resource.
    std::shared_ptr<string> creatorId_ = nullptr;
    // The ID of the level-1 quota.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the level-1 quota.
    std::shared_ptr<string> name_ = nullptr;
    // The nickname of the level-1 quota.
    std::shared_ptr<string> nickName_ = nullptr;
    // The description of the level-2 quota.
    Darabonba::Json parameter_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the resource.
    std::shared_ptr<string> status_ = nullptr;
    // The list of subquotas.
    std::shared_ptr<vector<Models::GetComputeEffectivePlanResponseBodyDataQuotaSubQuotaInfoList>> subQuotaInfoList_ = nullptr;
    // The ID of the tenant.
    std::shared_ptr<string> tenantId_ = nullptr;
    // The type of quota.
    std::shared_ptr<string> type_ = nullptr;
    // The version number.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
