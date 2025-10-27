// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEATTACKPATHSENSITIVEASSETCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEATTACKPATHSENSITIVEASSETCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateAttackPathSensitiveAssetConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAttackPathSensitiveAssetConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttackPathAssetList, attackPathAssetList_);
      DARABONBA_PTR_TO_JSON(AttackPathSensitiveAssetConfigId, attackPathSensitiveAssetConfigId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAttackPathSensitiveAssetConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackPathAssetList, attackPathAssetList_);
      DARABONBA_PTR_FROM_JSON(AttackPathSensitiveAssetConfigId, attackPathSensitiveAssetConfigId_);
    };
    UpdateAttackPathSensitiveAssetConfigRequest() = default ;
    UpdateAttackPathSensitiveAssetConfigRequest(const UpdateAttackPathSensitiveAssetConfigRequest &) = default ;
    UpdateAttackPathSensitiveAssetConfigRequest(UpdateAttackPathSensitiveAssetConfigRequest &&) = default ;
    UpdateAttackPathSensitiveAssetConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAttackPathSensitiveAssetConfigRequest() = default ;
    UpdateAttackPathSensitiveAssetConfigRequest& operator=(const UpdateAttackPathSensitiveAssetConfigRequest &) = default ;
    UpdateAttackPathSensitiveAssetConfigRequest& operator=(UpdateAttackPathSensitiveAssetConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackPathAssetList_ == nullptr
        && return this->attackPathSensitiveAssetConfigId_ == nullptr; };
    // attackPathAssetList Field Functions 
    bool hasAttackPathAssetList() const { return this->attackPathAssetList_ != nullptr;};
    void deleteAttackPathAssetList() { this->attackPathAssetList_ = nullptr;};
    inline const vector<UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList> & attackPathAssetList() const { DARABONBA_PTR_GET_CONST(attackPathAssetList_, vector<UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList>) };
    inline vector<UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList> attackPathAssetList() { DARABONBA_PTR_GET(attackPathAssetList_, vector<UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList>) };
    inline UpdateAttackPathSensitiveAssetConfigRequest& setAttackPathAssetList(const vector<UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList> & attackPathAssetList) { DARABONBA_PTR_SET_VALUE(attackPathAssetList_, attackPathAssetList) };
    inline UpdateAttackPathSensitiveAssetConfigRequest& setAttackPathAssetList(vector<UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList> && attackPathAssetList) { DARABONBA_PTR_SET_RVALUE(attackPathAssetList_, attackPathAssetList) };


    // attackPathSensitiveAssetConfigId Field Functions 
    bool hasAttackPathSensitiveAssetConfigId() const { return this->attackPathSensitiveAssetConfigId_ != nullptr;};
    void deleteAttackPathSensitiveAssetConfigId() { this->attackPathSensitiveAssetConfigId_ = nullptr;};
    inline string attackPathSensitiveAssetConfigId() const { DARABONBA_PTR_GET_DEFAULT(attackPathSensitiveAssetConfigId_, "") };
    inline UpdateAttackPathSensitiveAssetConfigRequest& setAttackPathSensitiveAssetConfigId(string attackPathSensitiveAssetConfigId) { DARABONBA_PTR_SET_VALUE(attackPathSensitiveAssetConfigId_, attackPathSensitiveAssetConfigId) };


  protected:
    // List of cloud product assets in the attack path.
    // 
    // This parameter is required.
    std::shared_ptr<vector<UpdateAttackPathSensitiveAssetConfigRequestAttackPathAssetList>> attackPathAssetList_ = nullptr;
    // ID of the sensitive asset setting for the attack path.
    // 
    // This parameter is required.
    std::shared_ptr<string> attackPathSensitiveAssetConfigId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
