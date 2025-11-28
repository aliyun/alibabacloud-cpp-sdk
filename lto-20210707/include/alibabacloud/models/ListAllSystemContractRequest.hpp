// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLSYSTEMCONTRACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALLSYSTEMCONTRACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListAllSystemContractRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllSystemContractRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlockChainType, blockChainType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllSystemContractRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockChainType, blockChainType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListAllSystemContractRequest() = default ;
    ListAllSystemContractRequest(const ListAllSystemContractRequest &) = default ;
    ListAllSystemContractRequest(ListAllSystemContractRequest &&) = default ;
    ListAllSystemContractRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllSystemContractRequest() = default ;
    ListAllSystemContractRequest& operator=(const ListAllSystemContractRequest &) = default ;
    ListAllSystemContractRequest& operator=(ListAllSystemContractRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockChainType_ == nullptr
        && return this->regionId_ == nullptr; };
    // blockChainType Field Functions 
    bool hasBlockChainType() const { return this->blockChainType_ != nullptr;};
    void deleteBlockChainType() { this->blockChainType_ = nullptr;};
    inline string blockChainType() const { DARABONBA_PTR_GET_DEFAULT(blockChainType_, "") };
    inline ListAllSystemContractRequest& setBlockChainType(string blockChainType) { DARABONBA_PTR_SET_VALUE(blockChainType_, blockChainType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAllSystemContractRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> blockChainType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
