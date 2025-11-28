// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLBIZCHAINCONTRACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALLBIZCHAINCONTRACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListAllBizChainContractRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllBizChainContractRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizChainId, bizChainId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllBizChainContractRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizChainId, bizChainId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListAllBizChainContractRequest() = default ;
    ListAllBizChainContractRequest(const ListAllBizChainContractRequest &) = default ;
    ListAllBizChainContractRequest(ListAllBizChainContractRequest &&) = default ;
    ListAllBizChainContractRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllBizChainContractRequest() = default ;
    ListAllBizChainContractRequest& operator=(const ListAllBizChainContractRequest &) = default ;
    ListAllBizChainContractRequest& operator=(ListAllBizChainContractRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizChainId_ == nullptr
        && return this->regionId_ == nullptr; };
    // bizChainId Field Functions 
    bool hasBizChainId() const { return this->bizChainId_ != nullptr;};
    void deleteBizChainId() { this->bizChainId_ = nullptr;};
    inline string bizChainId() const { DARABONBA_PTR_GET_DEFAULT(bizChainId_, "") };
    inline ListAllBizChainContractRequest& setBizChainId(string bizChainId) { DARABONBA_PTR_SET_VALUE(bizChainId_, bizChainId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAllBizChainContractRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> bizChainId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
