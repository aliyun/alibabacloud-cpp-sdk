// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOSTUNITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOSTUNITREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCostUnitRequestUnitEntityList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class CreateCostUnitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCostUnitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UnitEntityList, unitEntityList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCostUnitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UnitEntityList, unitEntityList_);
    };
    CreateCostUnitRequest() = default ;
    CreateCostUnitRequest(const CreateCostUnitRequest &) = default ;
    CreateCostUnitRequest(CreateCostUnitRequest &&) = default ;
    CreateCostUnitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCostUnitRequest() = default ;
    CreateCostUnitRequest& operator=(const CreateCostUnitRequest &) = default ;
    CreateCostUnitRequest& operator=(CreateCostUnitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->unitEntityList_ != nullptr; };
    // unitEntityList Field Functions 
    bool hasUnitEntityList() const { return this->unitEntityList_ != nullptr;};
    void deleteUnitEntityList() { this->unitEntityList_ = nullptr;};
    inline const vector<CreateCostUnitRequestUnitEntityList> & unitEntityList() const { DARABONBA_PTR_GET_CONST(unitEntityList_, vector<CreateCostUnitRequestUnitEntityList>) };
    inline vector<CreateCostUnitRequestUnitEntityList> unitEntityList() { DARABONBA_PTR_GET(unitEntityList_, vector<CreateCostUnitRequestUnitEntityList>) };
    inline CreateCostUnitRequest& setUnitEntityList(const vector<CreateCostUnitRequestUnitEntityList> & unitEntityList) { DARABONBA_PTR_SET_VALUE(unitEntityList_, unitEntityList) };
    inline CreateCostUnitRequest& setUnitEntityList(vector<CreateCostUnitRequestUnitEntityList> && unitEntityList) { DARABONBA_PTR_SET_RVALUE(unitEntityList_, unitEntityList) };


  protected:
    // The list of cost centers.
    std::shared_ptr<vector<CreateCostUnitRequestUnitEntityList>> unitEntityList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
