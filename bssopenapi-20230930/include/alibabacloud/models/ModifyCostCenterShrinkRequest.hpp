// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCOSTCENTERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCOSTCENTERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ModifyCostCenterShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCostCenterShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CostCenterEntityList, costCenterEntityListShrink_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCostCenterShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCenterEntityList, costCenterEntityListShrink_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
    };
    ModifyCostCenterShrinkRequest() = default ;
    ModifyCostCenterShrinkRequest(const ModifyCostCenterShrinkRequest &) = default ;
    ModifyCostCenterShrinkRequest(ModifyCostCenterShrinkRequest &&) = default ;
    ModifyCostCenterShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCostCenterShrinkRequest() = default ;
    ModifyCostCenterShrinkRequest& operator=(const ModifyCostCenterShrinkRequest &) = default ;
    ModifyCostCenterShrinkRequest& operator=(ModifyCostCenterShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->costCenterEntityListShrink_ == nullptr
        && this->nbid_ == nullptr; };
    // costCenterEntityListShrink Field Functions 
    bool hasCostCenterEntityListShrink() const { return this->costCenterEntityListShrink_ != nullptr;};
    void deleteCostCenterEntityListShrink() { this->costCenterEntityListShrink_ = nullptr;};
    inline string getCostCenterEntityListShrink() const { DARABONBA_PTR_GET_DEFAULT(costCenterEntityListShrink_, "") };
    inline ModifyCostCenterShrinkRequest& setCostCenterEntityListShrink(string costCenterEntityListShrink) { DARABONBA_PTR_SET_VALUE(costCenterEntityListShrink_, costCenterEntityListShrink) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline ModifyCostCenterShrinkRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


  protected:
    // This parameter is required.
    shared_ptr<string> costCenterEntityListShrink_ {};
    shared_ptr<string> nbid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
