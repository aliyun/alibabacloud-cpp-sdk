// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDBAASFABRICBIZCHAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDBAASFABRICBIZCHAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class AddBaaSFabricBizChainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddBaaSFabricBizChainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaaSFabricChannelId, baaSFabricChannelId_);
      DARABONBA_PTR_TO_JSON(BaaSFabricConsortiumId, baaSFabricConsortiumId_);
      DARABONBA_PTR_TO_JSON(BaaSFabricOrganizationId, baaSFabricOrganizationId_);
      DARABONBA_PTR_TO_JSON(ContractTemplateIdList, contractTemplateIdList_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, AddBaaSFabricBizChainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaaSFabricChannelId, baaSFabricChannelId_);
      DARABONBA_PTR_FROM_JSON(BaaSFabricConsortiumId, baaSFabricConsortiumId_);
      DARABONBA_PTR_FROM_JSON(BaaSFabricOrganizationId, baaSFabricOrganizationId_);
      DARABONBA_PTR_FROM_JSON(ContractTemplateIdList, contractTemplateIdList_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    AddBaaSFabricBizChainRequest() = default ;
    AddBaaSFabricBizChainRequest(const AddBaaSFabricBizChainRequest &) = default ;
    AddBaaSFabricBizChainRequest(AddBaaSFabricBizChainRequest &&) = default ;
    AddBaaSFabricBizChainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddBaaSFabricBizChainRequest() = default ;
    AddBaaSFabricBizChainRequest& operator=(const AddBaaSFabricBizChainRequest &) = default ;
    AddBaaSFabricBizChainRequest& operator=(AddBaaSFabricBizChainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baaSFabricChannelId_ == nullptr
        && return this->baaSFabricConsortiumId_ == nullptr && return this->baaSFabricOrganizationId_ == nullptr && return this->contractTemplateIdList_ == nullptr && return this->name_ == nullptr && return this->regionId_ == nullptr
        && return this->remark_ == nullptr; };
    // baaSFabricChannelId Field Functions 
    bool hasBaaSFabricChannelId() const { return this->baaSFabricChannelId_ != nullptr;};
    void deleteBaaSFabricChannelId() { this->baaSFabricChannelId_ = nullptr;};
    inline string baaSFabricChannelId() const { DARABONBA_PTR_GET_DEFAULT(baaSFabricChannelId_, "") };
    inline AddBaaSFabricBizChainRequest& setBaaSFabricChannelId(string baaSFabricChannelId) { DARABONBA_PTR_SET_VALUE(baaSFabricChannelId_, baaSFabricChannelId) };


    // baaSFabricConsortiumId Field Functions 
    bool hasBaaSFabricConsortiumId() const { return this->baaSFabricConsortiumId_ != nullptr;};
    void deleteBaaSFabricConsortiumId() { this->baaSFabricConsortiumId_ = nullptr;};
    inline string baaSFabricConsortiumId() const { DARABONBA_PTR_GET_DEFAULT(baaSFabricConsortiumId_, "") };
    inline AddBaaSFabricBizChainRequest& setBaaSFabricConsortiumId(string baaSFabricConsortiumId) { DARABONBA_PTR_SET_VALUE(baaSFabricConsortiumId_, baaSFabricConsortiumId) };


    // baaSFabricOrganizationId Field Functions 
    bool hasBaaSFabricOrganizationId() const { return this->baaSFabricOrganizationId_ != nullptr;};
    void deleteBaaSFabricOrganizationId() { this->baaSFabricOrganizationId_ = nullptr;};
    inline string baaSFabricOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(baaSFabricOrganizationId_, "") };
    inline AddBaaSFabricBizChainRequest& setBaaSFabricOrganizationId(string baaSFabricOrganizationId) { DARABONBA_PTR_SET_VALUE(baaSFabricOrganizationId_, baaSFabricOrganizationId) };


    // contractTemplateIdList Field Functions 
    bool hasContractTemplateIdList() const { return this->contractTemplateIdList_ != nullptr;};
    void deleteContractTemplateIdList() { this->contractTemplateIdList_ = nullptr;};
    inline string contractTemplateIdList() const { DARABONBA_PTR_GET_DEFAULT(contractTemplateIdList_, "") };
    inline AddBaaSFabricBizChainRequest& setContractTemplateIdList(string contractTemplateIdList) { DARABONBA_PTR_SET_VALUE(contractTemplateIdList_, contractTemplateIdList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddBaaSFabricBizChainRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddBaaSFabricBizChainRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline AddBaaSFabricBizChainRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> baaSFabricChannelId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> baaSFabricConsortiumId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> baaSFabricOrganizationId_ = nullptr;
    std::shared_ptr<string> contractTemplateIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
