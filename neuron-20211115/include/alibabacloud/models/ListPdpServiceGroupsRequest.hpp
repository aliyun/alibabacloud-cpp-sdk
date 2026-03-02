// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPDPSERVICEGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPDPSERVICEGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ListPdpServiceGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPdpServiceGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alias, alias_);
      DARABONBA_PTR_TO_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(env, env_);
      DARABONBA_PTR_TO_JSON(envType, envType_);
      DARABONBA_PTR_TO_JSON(groupType, groupType_);
      DARABONBA_PTR_TO_JSON(ids, ids_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_TO_JSON(orgType, orgType_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(pbcId, pbcId_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(repoId, repoId_);
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPdpServiceGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alias, alias_);
      DARABONBA_PTR_FROM_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(env, env_);
      DARABONBA_PTR_FROM_JSON(envType, envType_);
      DARABONBA_PTR_FROM_JSON(groupType, groupType_);
      DARABONBA_PTR_FROM_JSON(ids, ids_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_FROM_JSON(orgType, orgType_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(pbcId, pbcId_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(repoId, repoId_);
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
    };
    ListPdpServiceGroupsRequest() = default ;
    ListPdpServiceGroupsRequest(const ListPdpServiceGroupsRequest &) = default ;
    ListPdpServiceGroupsRequest(ListPdpServiceGroupsRequest &&) = default ;
    ListPdpServiceGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPdpServiceGroupsRequest() = default ;
    ListPdpServiceGroupsRequest& operator=(const ListPdpServiceGroupsRequest &) = default ;
    ListPdpServiceGroupsRequest& operator=(ListPdpServiceGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && this->enterpriseId_ == nullptr && this->env_ == nullptr && this->envType_ == nullptr && this->groupType_ == nullptr && this->ids_ == nullptr
        && this->name_ == nullptr && this->orderBy_ == nullptr && this->orderDirection_ == nullptr && this->orgType_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->pbcId_ == nullptr && this->productId_ == nullptr && this->region_ == nullptr && this->repoId_ == nullptr
        && this->serviceId_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline ListPdpServiceGroupsRequest& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline ListPdpServiceGroupsRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline ListPdpServiceGroupsRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ListPdpServiceGroupsRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline ListPdpServiceGroupsRequest& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<int64_t> & getIds() const { DARABONBA_PTR_GET_CONST(ids_, vector<int64_t>) };
    inline vector<int64_t> getIds() { DARABONBA_PTR_GET(ids_, vector<int64_t>) };
    inline ListPdpServiceGroupsRequest& setIds(const vector<int64_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline ListPdpServiceGroupsRequest& setIds(vector<int64_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPdpServiceGroupsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListPdpServiceGroupsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string getOrderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline ListPdpServiceGroupsRequest& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // orgType Field Functions 
    bool hasOrgType() const { return this->orgType_ != nullptr;};
    void deleteOrgType() { this->orgType_ = nullptr;};
    inline string getOrgType() const { DARABONBA_PTR_GET_DEFAULT(orgType_, "") };
    inline ListPdpServiceGroupsRequest& setOrgType(string orgType) { DARABONBA_PTR_SET_VALUE(orgType_, orgType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPdpServiceGroupsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPdpServiceGroupsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pbcId Field Functions 
    bool hasPbcId() const { return this->pbcId_ != nullptr;};
    void deletePbcId() { this->pbcId_ = nullptr;};
    inline int64_t getPbcId() const { DARABONBA_PTR_GET_DEFAULT(pbcId_, 0L) };
    inline ListPdpServiceGroupsRequest& setPbcId(int64_t pbcId) { DARABONBA_PTR_SET_VALUE(pbcId_, pbcId) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline ListPdpServiceGroupsRequest& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListPdpServiceGroupsRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline ListPdpServiceGroupsRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline int64_t getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
    inline ListPdpServiceGroupsRequest& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


  protected:
    shared_ptr<string> alias_ {};
    shared_ptr<int64_t> enterpriseId_ {};
    // This parameter is required.
    shared_ptr<string> env_ {};
    shared_ptr<string> envType_ {};
    shared_ptr<string> groupType_ {};
    shared_ptr<vector<int64_t>> ids_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> orderBy_ {};
    shared_ptr<string> orderDirection_ {};
    shared_ptr<string> orgType_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    // pbcId
    shared_ptr<int64_t> pbcId_ {};
    shared_ptr<int64_t> productId_ {};
    shared_ptr<string> region_ {};
    shared_ptr<string> repoId_ {};
    shared_ptr<int64_t> serviceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
