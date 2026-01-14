// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATALEVELPERMISSIONWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATALEVELPERMISSIONWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListDataLevelPermissionWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataLevelPermissionWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CubeId, cubeId_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataLevelPermissionWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CubeId, cubeId_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    ListDataLevelPermissionWhiteListRequest() = default ;
    ListDataLevelPermissionWhiteListRequest(const ListDataLevelPermissionWhiteListRequest &) = default ;
    ListDataLevelPermissionWhiteListRequest(ListDataLevelPermissionWhiteListRequest &&) = default ;
    ListDataLevelPermissionWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataLevelPermissionWhiteListRequest() = default ;
    ListDataLevelPermissionWhiteListRequest& operator=(const ListDataLevelPermissionWhiteListRequest &) = default ;
    ListDataLevelPermissionWhiteListRequest& operator=(ListDataLevelPermissionWhiteListRequest &&) = default ;
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
    inline ListDataLevelPermissionWhiteListRequest& setCubeId(string cubeId) { DARABONBA_PTR_SET_VALUE(cubeId_, cubeId) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline ListDataLevelPermissionWhiteListRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // Dataset ID.
    // 
    // This parameter is required.
    shared_ptr<string> cubeId_ {};
    // Type of row and column permission that the whitelist belongs to:
    // 
    // - ROW_LEVEL: Row-level permission
    // - COLUMN_LEVEL: Column-level permission
    // 
    // This parameter is required.
    shared_ptr<string> ruleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
