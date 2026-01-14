// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUBEDATALEVELPERMISSIONCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCUBEDATALEVELPERMISSIONCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListCubeDataLevelPermissionConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCubeDataLevelPermissionConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CubeId, cubeId_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, ListCubeDataLevelPermissionConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CubeId, cubeId_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    ListCubeDataLevelPermissionConfigRequest() = default ;
    ListCubeDataLevelPermissionConfigRequest(const ListCubeDataLevelPermissionConfigRequest &) = default ;
    ListCubeDataLevelPermissionConfigRequest(ListCubeDataLevelPermissionConfigRequest &&) = default ;
    ListCubeDataLevelPermissionConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCubeDataLevelPermissionConfigRequest() = default ;
    ListCubeDataLevelPermissionConfigRequest& operator=(const ListCubeDataLevelPermissionConfigRequest &) = default ;
    ListCubeDataLevelPermissionConfigRequest& operator=(ListCubeDataLevelPermissionConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cubeId_ == nullptr
        && this->ruleType_ == nullptr; };
    // cubeId Field Functions 
    bool hasCubeId() const { return this->cubeId_ != nullptr;};
    void deleteCubeId() { this->cubeId_ = nullptr;};
    inline string getCubeId() const { DARABONBA_PTR_GET_DEFAULT(cubeId_, "") };
    inline ListCubeDataLevelPermissionConfigRequest& setCubeId(string cubeId) { DARABONBA_PTR_SET_VALUE(cubeId_, cubeId) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline ListCubeDataLevelPermissionConfigRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // The ID of the training dataset that you want to remove from the specified custom linguistic model.
    // 
    // This parameter is required.
    shared_ptr<string> cubeId_ {};
    // The type of the dataset row and column permission. Valid values:
    // 
    // *   ROW_LEVEL: row-level permissions
    // *   COLUMN_LEVEL: column-level permissions
    // 
    // This parameter is required.
    shared_ptr<string> ruleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
