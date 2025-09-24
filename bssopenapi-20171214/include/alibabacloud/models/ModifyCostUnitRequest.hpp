// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCOSTUNITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCOSTUNITREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyCostUnitRequestUnitEntityList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class ModifyCostUnitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCostUnitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UnitEntityList, unitEntityList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCostUnitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UnitEntityList, unitEntityList_);
    };
    ModifyCostUnitRequest() = default ;
    ModifyCostUnitRequest(const ModifyCostUnitRequest &) = default ;
    ModifyCostUnitRequest(ModifyCostUnitRequest &&) = default ;
    ModifyCostUnitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCostUnitRequest() = default ;
    ModifyCostUnitRequest& operator=(const ModifyCostUnitRequest &) = default ;
    ModifyCostUnitRequest& operator=(ModifyCostUnitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->unitEntityList_ != nullptr; };
    // unitEntityList Field Functions 
    bool hasUnitEntityList() const { return this->unitEntityList_ != nullptr;};
    void deleteUnitEntityList() { this->unitEntityList_ = nullptr;};
    inline const vector<ModifyCostUnitRequestUnitEntityList> & unitEntityList() const { DARABONBA_PTR_GET_CONST(unitEntityList_, vector<ModifyCostUnitRequestUnitEntityList>) };
    inline vector<ModifyCostUnitRequestUnitEntityList> unitEntityList() { DARABONBA_PTR_GET(unitEntityList_, vector<ModifyCostUnitRequestUnitEntityList>) };
    inline ModifyCostUnitRequest& setUnitEntityList(const vector<ModifyCostUnitRequestUnitEntityList> & unitEntityList) { DARABONBA_PTR_SET_VALUE(unitEntityList_, unitEntityList) };
    inline ModifyCostUnitRequest& setUnitEntityList(vector<ModifyCostUnitRequestUnitEntityList> && unitEntityList) { DARABONBA_PTR_SET_RVALUE(unitEntityList_, unitEntityList) };


  protected:
    // The cost centers to be modified.
    std::shared_ptr<vector<ModifyCostUnitRequestUnitEntityList>> unitEntityList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
