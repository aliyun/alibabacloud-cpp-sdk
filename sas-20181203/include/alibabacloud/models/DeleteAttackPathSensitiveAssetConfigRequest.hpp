// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEATTACKPATHSENSITIVEASSETCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEATTACKPATHSENSITIVEASSETCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteAttackPathSensitiveAssetConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAttackPathSensitiveAssetConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttackPathSensitiveAssetConfigId, attackPathSensitiveAssetConfigId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAttackPathSensitiveAssetConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackPathSensitiveAssetConfigId, attackPathSensitiveAssetConfigId_);
    };
    DeleteAttackPathSensitiveAssetConfigRequest() = default ;
    DeleteAttackPathSensitiveAssetConfigRequest(const DeleteAttackPathSensitiveAssetConfigRequest &) = default ;
    DeleteAttackPathSensitiveAssetConfigRequest(DeleteAttackPathSensitiveAssetConfigRequest &&) = default ;
    DeleteAttackPathSensitiveAssetConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAttackPathSensitiveAssetConfigRequest() = default ;
    DeleteAttackPathSensitiveAssetConfigRequest& operator=(const DeleteAttackPathSensitiveAssetConfigRequest &) = default ;
    DeleteAttackPathSensitiveAssetConfigRequest& operator=(DeleteAttackPathSensitiveAssetConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackPathSensitiveAssetConfigId_ == nullptr; };
    // attackPathSensitiveAssetConfigId Field Functions 
    bool hasAttackPathSensitiveAssetConfigId() const { return this->attackPathSensitiveAssetConfigId_ != nullptr;};
    void deleteAttackPathSensitiveAssetConfigId() { this->attackPathSensitiveAssetConfigId_ = nullptr;};
    inline string getAttackPathSensitiveAssetConfigId() const { DARABONBA_PTR_GET_DEFAULT(attackPathSensitiveAssetConfigId_, "") };
    inline DeleteAttackPathSensitiveAssetConfigRequest& setAttackPathSensitiveAssetConfigId(string attackPathSensitiveAssetConfigId) { DARABONBA_PTR_SET_VALUE(attackPathSensitiveAssetConfigId_, attackPathSensitiveAssetConfigId) };


  protected:
    // ID of the attack path sensitive asset configuration.
    // 
    // This parameter is required.
    shared_ptr<string> attackPathSensitiveAssetConfigId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
