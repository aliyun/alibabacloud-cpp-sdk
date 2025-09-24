// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOSTUNITRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATECOSTUNITRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCostUnitResponseBodyDataCostUnitDtoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class CreateCostUnitResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCostUnitResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CostUnitDtoList, costUnitDtoList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCostUnitResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CostUnitDtoList, costUnitDtoList_);
    };
    CreateCostUnitResponseBodyData() = default ;
    CreateCostUnitResponseBodyData(const CreateCostUnitResponseBodyData &) = default ;
    CreateCostUnitResponseBodyData(CreateCostUnitResponseBodyData &&) = default ;
    CreateCostUnitResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCostUnitResponseBodyData() = default ;
    CreateCostUnitResponseBodyData& operator=(const CreateCostUnitResponseBodyData &) = default ;
    CreateCostUnitResponseBodyData& operator=(CreateCostUnitResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costUnitDtoList_ != nullptr; };
    // costUnitDtoList Field Functions 
    bool hasCostUnitDtoList() const { return this->costUnitDtoList_ != nullptr;};
    void deleteCostUnitDtoList() { this->costUnitDtoList_ = nullptr;};
    inline const vector<Models::CreateCostUnitResponseBodyDataCostUnitDtoList> & costUnitDtoList() const { DARABONBA_PTR_GET_CONST(costUnitDtoList_, vector<Models::CreateCostUnitResponseBodyDataCostUnitDtoList>) };
    inline vector<Models::CreateCostUnitResponseBodyDataCostUnitDtoList> costUnitDtoList() { DARABONBA_PTR_GET(costUnitDtoList_, vector<Models::CreateCostUnitResponseBodyDataCostUnitDtoList>) };
    inline CreateCostUnitResponseBodyData& setCostUnitDtoList(const vector<Models::CreateCostUnitResponseBodyDataCostUnitDtoList> & costUnitDtoList) { DARABONBA_PTR_SET_VALUE(costUnitDtoList_, costUnitDtoList) };
    inline CreateCostUnitResponseBodyData& setCostUnitDtoList(vector<Models::CreateCostUnitResponseBodyDataCostUnitDtoList> && costUnitDtoList) { DARABONBA_PTR_SET_RVALUE(costUnitDtoList_, costUnitDtoList) };


  protected:
    // The list of cost center entities.
    std::shared_ptr<vector<Models::CreateCostUnitResponseBodyDataCostUnitDtoList>> costUnitDtoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
