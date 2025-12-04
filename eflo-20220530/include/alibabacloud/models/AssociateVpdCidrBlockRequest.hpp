// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEVPDCIDRBLOCKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEVPDCIDRBLOCKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class AssociateVpdCidrBlockRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateVpdCidrBlockRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecondaryCidrBlock, secondaryCidrBlock_);
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateVpdCidrBlockRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecondaryCidrBlock, secondaryCidrBlock_);
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
    };
    AssociateVpdCidrBlockRequest() = default ;
    AssociateVpdCidrBlockRequest(const AssociateVpdCidrBlockRequest &) = default ;
    AssociateVpdCidrBlockRequest(AssociateVpdCidrBlockRequest &&) = default ;
    AssociateVpdCidrBlockRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateVpdCidrBlockRequest() = default ;
    AssociateVpdCidrBlockRequest& operator=(const AssociateVpdCidrBlockRequest &) = default ;
    AssociateVpdCidrBlockRequest& operator=(AssociateVpdCidrBlockRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->secondaryCidrBlock_ == nullptr && return this->vpdId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AssociateVpdCidrBlockRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // secondaryCidrBlock Field Functions 
    bool hasSecondaryCidrBlock() const { return this->secondaryCidrBlock_ != nullptr;};
    void deleteSecondaryCidrBlock() { this->secondaryCidrBlock_ = nullptr;};
    inline string secondaryCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(secondaryCidrBlock_, "") };
    inline AssociateVpdCidrBlockRequest& setSecondaryCidrBlock(string secondaryCidrBlock) { DARABONBA_PTR_SET_VALUE(secondaryCidrBlock_, secondaryCidrBlock) };


    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string vpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline AssociateVpdCidrBlockRequest& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


  protected:
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The additional CIDR block.
    // 
    // This parameter is required.
    std::shared_ptr<string> secondaryCidrBlock_ = nullptr;
    // The ID of the Lingjun CIDR block.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpdId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
