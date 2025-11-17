// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATALEVELPERMISSIONWHITELISTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTDATALEVELPERMISSIONWHITELISTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDataLevelPermissionWhiteListResponseBodyResultUsersModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListDataLevelPermissionWhiteListResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataLevelPermissionWhiteListResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(CubeId, cubeId_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(UsersModel, usersModel_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataLevelPermissionWhiteListResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CubeId, cubeId_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(UsersModel, usersModel_);
    };
    ListDataLevelPermissionWhiteListResponseBodyResult() = default ;
    ListDataLevelPermissionWhiteListResponseBodyResult(const ListDataLevelPermissionWhiteListResponseBodyResult &) = default ;
    ListDataLevelPermissionWhiteListResponseBodyResult(ListDataLevelPermissionWhiteListResponseBodyResult &&) = default ;
    ListDataLevelPermissionWhiteListResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataLevelPermissionWhiteListResponseBodyResult() = default ;
    ListDataLevelPermissionWhiteListResponseBodyResult& operator=(const ListDataLevelPermissionWhiteListResponseBodyResult &) = default ;
    ListDataLevelPermissionWhiteListResponseBodyResult& operator=(ListDataLevelPermissionWhiteListResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cubeId_ == nullptr
        && return this->ruleType_ == nullptr && return this->usersModel_ == nullptr; };
    // cubeId Field Functions 
    bool hasCubeId() const { return this->cubeId_ != nullptr;};
    void deleteCubeId() { this->cubeId_ = nullptr;};
    inline string cubeId() const { DARABONBA_PTR_GET_DEFAULT(cubeId_, "") };
    inline ListDataLevelPermissionWhiteListResponseBodyResult& setCubeId(string cubeId) { DARABONBA_PTR_SET_VALUE(cubeId_, cubeId) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline ListDataLevelPermissionWhiteListResponseBodyResult& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // usersModel Field Functions 
    bool hasUsersModel() const { return this->usersModel_ != nullptr;};
    void deleteUsersModel() { this->usersModel_ = nullptr;};
    inline const Models::ListDataLevelPermissionWhiteListResponseBodyResultUsersModel & usersModel() const { DARABONBA_PTR_GET_CONST(usersModel_, Models::ListDataLevelPermissionWhiteListResponseBodyResultUsersModel) };
    inline Models::ListDataLevelPermissionWhiteListResponseBodyResultUsersModel usersModel() { DARABONBA_PTR_GET(usersModel_, Models::ListDataLevelPermissionWhiteListResponseBodyResultUsersModel) };
    inline ListDataLevelPermissionWhiteListResponseBodyResult& setUsersModel(const Models::ListDataLevelPermissionWhiteListResponseBodyResultUsersModel & usersModel) { DARABONBA_PTR_SET_VALUE(usersModel_, usersModel) };
    inline ListDataLevelPermissionWhiteListResponseBodyResult& setUsersModel(Models::ListDataLevelPermissionWhiteListResponseBodyResultUsersModel && usersModel) { DARABONBA_PTR_SET_RVALUE(usersModel_, usersModel) };


  protected:
    // Dataset ID.
    std::shared_ptr<string> cubeId_ = nullptr;
    // Type of dataset row and column permissions. Possible values:
    // 
    // - ROW_LEVEL: Row-level permission
    // - COLUMN_LEVEL: Column-level permission
    std::shared_ptr<string> ruleType_ = nullptr;
    // Whitelist information.
    std::shared_ptr<Models::ListDataLevelPermissionWhiteListResponseBodyResultUsersModel> usersModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
