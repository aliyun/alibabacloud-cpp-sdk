// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDATALEVELPERMISSIONWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDATALEVELPERMISSIONWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class SetDataLevelPermissionWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDataLevelPermissionWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WhiteListModel, whiteListModel_);
    };
    friend void from_json(const Darabonba::Json& j, SetDataLevelPermissionWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WhiteListModel, whiteListModel_);
    };
    SetDataLevelPermissionWhiteListRequest() = default ;
    SetDataLevelPermissionWhiteListRequest(const SetDataLevelPermissionWhiteListRequest &) = default ;
    SetDataLevelPermissionWhiteListRequest(SetDataLevelPermissionWhiteListRequest &&) = default ;
    SetDataLevelPermissionWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDataLevelPermissionWhiteListRequest() = default ;
    SetDataLevelPermissionWhiteListRequest& operator=(const SetDataLevelPermissionWhiteListRequest &) = default ;
    SetDataLevelPermissionWhiteListRequest& operator=(SetDataLevelPermissionWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->whiteListModel_ != nullptr; };
    // whiteListModel Field Functions 
    bool hasWhiteListModel() const { return this->whiteListModel_ != nullptr;};
    void deleteWhiteListModel() { this->whiteListModel_ = nullptr;};
    inline string whiteListModel() const { DARABONBA_PTR_GET_DEFAULT(whiteListModel_, "") };
    inline SetDataLevelPermissionWhiteListRequest& setWhiteListModel(string whiteListModel) { DARABONBA_PTR_SET_VALUE(whiteListModel_, whiteListModel) };


  protected:
    // { "ruleType": "ROW_LEVEL", // The row-level permission type. "usersModel": { "userGroups": [ "0d5fb19b- ***-1248 fc27ca51", // The ID of the user group. "3d2c23d4-***-f6390f325c2d" ], "users": [ "4334 ***358", // Quick BI the UserID of the user. "Huang***3fa822" ] }, "cubeId": "7c7223ae-31d1-4d2f-b11f-3c744528014b" }
    // 
    // This parameter is required.
    std::shared_ptr<string> whiteListModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
