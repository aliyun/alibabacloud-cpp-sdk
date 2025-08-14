// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOSTCENTERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOSTCENTERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class CreateCostCenterShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCostCenterShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CostCenterEntityList, costCenterEntityListShrink_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCostCenterShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCenterEntityList, costCenterEntityListShrink_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
    };
    CreateCostCenterShrinkRequest() = default ;
    CreateCostCenterShrinkRequest(const CreateCostCenterShrinkRequest &) = default ;
    CreateCostCenterShrinkRequest(CreateCostCenterShrinkRequest &&) = default ;
    CreateCostCenterShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCostCenterShrinkRequest() = default ;
    CreateCostCenterShrinkRequest& operator=(const CreateCostCenterShrinkRequest &) = default ;
    CreateCostCenterShrinkRequest& operator=(CreateCostCenterShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costCenterEntityListShrink_ != nullptr
        && this->nbid_ != nullptr; };
    // costCenterEntityListShrink Field Functions 
    bool hasCostCenterEntityListShrink() const { return this->costCenterEntityListShrink_ != nullptr;};
    void deleteCostCenterEntityListShrink() { this->costCenterEntityListShrink_ = nullptr;};
    inline string costCenterEntityListShrink() const { DARABONBA_PTR_GET_DEFAULT(costCenterEntityListShrink_, "") };
    inline CreateCostCenterShrinkRequest& setCostCenterEntityListShrink(string costCenterEntityListShrink) { DARABONBA_PTR_SET_VALUE(costCenterEntityListShrink_, costCenterEntityListShrink) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string nbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline CreateCostCenterShrinkRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> costCenterEntityListShrink_ = nullptr;
    std::shared_ptr<string> nbid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
