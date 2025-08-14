// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCOSTCENTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCOSTCENTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyCostCenterRequestCostCenterEntityList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ModifyCostCenterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCostCenterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CostCenterEntityList, costCenterEntityList_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCostCenterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCenterEntityList, costCenterEntityList_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
    };
    ModifyCostCenterRequest() = default ;
    ModifyCostCenterRequest(const ModifyCostCenterRequest &) = default ;
    ModifyCostCenterRequest(ModifyCostCenterRequest &&) = default ;
    ModifyCostCenterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCostCenterRequest() = default ;
    ModifyCostCenterRequest& operator=(const ModifyCostCenterRequest &) = default ;
    ModifyCostCenterRequest& operator=(ModifyCostCenterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costCenterEntityList_ != nullptr
        && this->nbid_ != nullptr; };
    // costCenterEntityList Field Functions 
    bool hasCostCenterEntityList() const { return this->costCenterEntityList_ != nullptr;};
    void deleteCostCenterEntityList() { this->costCenterEntityList_ = nullptr;};
    inline const vector<ModifyCostCenterRequestCostCenterEntityList> & costCenterEntityList() const { DARABONBA_PTR_GET_CONST(costCenterEntityList_, vector<ModifyCostCenterRequestCostCenterEntityList>) };
    inline vector<ModifyCostCenterRequestCostCenterEntityList> costCenterEntityList() { DARABONBA_PTR_GET(costCenterEntityList_, vector<ModifyCostCenterRequestCostCenterEntityList>) };
    inline ModifyCostCenterRequest& setCostCenterEntityList(const vector<ModifyCostCenterRequestCostCenterEntityList> & costCenterEntityList) { DARABONBA_PTR_SET_VALUE(costCenterEntityList_, costCenterEntityList) };
    inline ModifyCostCenterRequest& setCostCenterEntityList(vector<ModifyCostCenterRequestCostCenterEntityList> && costCenterEntityList) { DARABONBA_PTR_SET_RVALUE(costCenterEntityList_, costCenterEntityList) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string nbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline ModifyCostCenterRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<ModifyCostCenterRequestCostCenterEntityList>> costCenterEntityList_ = nullptr;
    std::shared_ptr<string> nbid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
