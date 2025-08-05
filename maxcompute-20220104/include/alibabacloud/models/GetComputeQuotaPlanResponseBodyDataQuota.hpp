// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPUTEQUOTAPLANRESPONSEBODYDATAQUOTA_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPUTEQUOTAPLANRESPONSEBODYDATAQUOTA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetComputeQuotaPlanResponseBodyDataQuotaParameter.hpp>
#include <vector>
#include <alibabacloud/models/GetComputeQuotaPlanResponseBodyDataQuotaSubQuotaInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetComputeQuotaPlanResponseBodyDataQuota : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetComputeQuotaPlanResponseBodyDataQuota& obj) { 
      DARABONBA_PTR_TO_JSON(cluster, cluster_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nickName, nickName_);
      DARABONBA_PTR_TO_JSON(parameter, parameter_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(subQuotaInfoList, subQuotaInfoList_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetComputeQuotaPlanResponseBodyDataQuota& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nickName, nickName_);
      DARABONBA_PTR_FROM_JSON(parameter, parameter_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(subQuotaInfoList, subQuotaInfoList_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    GetComputeQuotaPlanResponseBodyDataQuota() = default ;
    GetComputeQuotaPlanResponseBodyDataQuota(const GetComputeQuotaPlanResponseBodyDataQuota &) = default ;
    GetComputeQuotaPlanResponseBodyDataQuota(GetComputeQuotaPlanResponseBodyDataQuota &&) = default ;
    GetComputeQuotaPlanResponseBodyDataQuota(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetComputeQuotaPlanResponseBodyDataQuota() = default ;
    GetComputeQuotaPlanResponseBodyDataQuota& operator=(const GetComputeQuotaPlanResponseBodyDataQuota &) = default ;
    GetComputeQuotaPlanResponseBodyDataQuota& operator=(GetComputeQuotaPlanResponseBodyDataQuota &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cluster_ != nullptr
        && this->createTime_ != nullptr && this->creatorId_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->nickName_ != nullptr
        && this->parameter_ != nullptr && this->regionId_ != nullptr && this->status_ != nullptr && this->subQuotaInfoList_ != nullptr && this->tenantId_ != nullptr
        && this->type_ != nullptr && this->version_ != nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline string cluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
    inline GetComputeQuotaPlanResponseBodyDataQuota& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetComputeQuotaPlanResponseBodyDataQuota& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline GetComputeQuotaPlanResponseBodyDataQuota& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetComputeQuotaPlanResponseBodyDataQuota& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetComputeQuotaPlanResponseBodyDataQuota& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline GetComputeQuotaPlanResponseBodyDataQuota& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // parameter Field Functions 
    bool hasParameter() const { return this->parameter_ != nullptr;};
    void deleteParameter() { this->parameter_ = nullptr;};
    inline const Models::GetComputeQuotaPlanResponseBodyDataQuotaParameter & parameter() const { DARABONBA_PTR_GET_CONST(parameter_, Models::GetComputeQuotaPlanResponseBodyDataQuotaParameter) };
    inline Models::GetComputeQuotaPlanResponseBodyDataQuotaParameter parameter() { DARABONBA_PTR_GET(parameter_, Models::GetComputeQuotaPlanResponseBodyDataQuotaParameter) };
    inline GetComputeQuotaPlanResponseBodyDataQuota& setParameter(const Models::GetComputeQuotaPlanResponseBodyDataQuotaParameter & parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };
    inline GetComputeQuotaPlanResponseBodyDataQuota& setParameter(Models::GetComputeQuotaPlanResponseBodyDataQuotaParameter && parameter) { DARABONBA_PTR_SET_RVALUE(parameter_, parameter) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetComputeQuotaPlanResponseBodyDataQuota& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetComputeQuotaPlanResponseBodyDataQuota& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subQuotaInfoList Field Functions 
    bool hasSubQuotaInfoList() const { return this->subQuotaInfoList_ != nullptr;};
    void deleteSubQuotaInfoList() { this->subQuotaInfoList_ = nullptr;};
    inline const vector<Models::GetComputeQuotaPlanResponseBodyDataQuotaSubQuotaInfoList> & subQuotaInfoList() const { DARABONBA_PTR_GET_CONST(subQuotaInfoList_, vector<Models::GetComputeQuotaPlanResponseBodyDataQuotaSubQuotaInfoList>) };
    inline vector<Models::GetComputeQuotaPlanResponseBodyDataQuotaSubQuotaInfoList> subQuotaInfoList() { DARABONBA_PTR_GET(subQuotaInfoList_, vector<Models::GetComputeQuotaPlanResponseBodyDataQuotaSubQuotaInfoList>) };
    inline GetComputeQuotaPlanResponseBodyDataQuota& setSubQuotaInfoList(const vector<Models::GetComputeQuotaPlanResponseBodyDataQuotaSubQuotaInfoList> & subQuotaInfoList) { DARABONBA_PTR_SET_VALUE(subQuotaInfoList_, subQuotaInfoList) };
    inline GetComputeQuotaPlanResponseBodyDataQuota& setSubQuotaInfoList(vector<Models::GetComputeQuotaPlanResponseBodyDataQuotaSubQuotaInfoList> && subQuotaInfoList) { DARABONBA_PTR_SET_RVALUE(subQuotaInfoList_, subQuotaInfoList) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetComputeQuotaPlanResponseBodyDataQuota& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetComputeQuotaPlanResponseBodyDataQuota& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetComputeQuotaPlanResponseBodyDataQuota& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Cluster ID.
    std::shared_ptr<string> cluster_ = nullptr;
    // Creation time.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Creator\\"s cloud account UID.
    std::shared_ptr<string> creatorId_ = nullptr;
    // The ID of the level-1 quota.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the level-1 quota.
    std::shared_ptr<string> name_ = nullptr;
    // The nickname of the level-1 quota.
    std::shared_ptr<string> nickName_ = nullptr;
    // CU value parameters for the level-1 quota.
    std::shared_ptr<Models::GetComputeQuotaPlanResponseBodyDataQuotaParameter> parameter_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource status.
    std::shared_ptr<string> status_ = nullptr;
    // The list of level-2 quotas.
    std::shared_ptr<vector<Models::GetComputeQuotaPlanResponseBodyDataQuotaSubQuotaInfoList>> subQuotaInfoList_ = nullptr;
    // Tenant ID.
    std::shared_ptr<string> tenantId_ = nullptr;
    // Corresponds to the `resourceSystemType` field of the control cluster.
    std::shared_ptr<string> type_ = nullptr;
    // Version number.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
