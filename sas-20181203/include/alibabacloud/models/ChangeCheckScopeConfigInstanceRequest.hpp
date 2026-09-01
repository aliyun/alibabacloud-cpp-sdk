// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECHECKSCOPECONFIGINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGECHECKSCOPECONFIGINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ChangeCheckScopeConfigInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeCheckScopeConfigInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddAssetUuids, addAssetUuids_);
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(DeleteAssetUuids, deleteAssetUuids_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeCheckScopeConfigInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddAssetUuids, addAssetUuids_);
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(DeleteAssetUuids, deleteAssetUuids_);
    };
    ChangeCheckScopeConfigInstanceRequest() = default ;
    ChangeCheckScopeConfigInstanceRequest(const ChangeCheckScopeConfigInstanceRequest &) = default ;
    ChangeCheckScopeConfigInstanceRequest(ChangeCheckScopeConfigInstanceRequest &&) = default ;
    ChangeCheckScopeConfigInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeCheckScopeConfigInstanceRequest() = default ;
    ChangeCheckScopeConfigInstanceRequest& operator=(const ChangeCheckScopeConfigInstanceRequest &) = default ;
    ChangeCheckScopeConfigInstanceRequest& operator=(ChangeCheckScopeConfigInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addAssetUuids_ == nullptr
        && this->configId_ == nullptr && this->deleteAssetUuids_ == nullptr; };
    // addAssetUuids Field Functions 
    bool hasAddAssetUuids() const { return this->addAssetUuids_ != nullptr;};
    void deleteAddAssetUuids() { this->addAssetUuids_ = nullptr;};
    inline const vector<string> & getAddAssetUuids() const { DARABONBA_PTR_GET_CONST(addAssetUuids_, vector<string>) };
    inline vector<string> getAddAssetUuids() { DARABONBA_PTR_GET(addAssetUuids_, vector<string>) };
    inline ChangeCheckScopeConfigInstanceRequest& setAddAssetUuids(const vector<string> & addAssetUuids) { DARABONBA_PTR_SET_VALUE(addAssetUuids_, addAssetUuids) };
    inline ChangeCheckScopeConfigInstanceRequest& setAddAssetUuids(vector<string> && addAssetUuids) { DARABONBA_PTR_SET_RVALUE(addAssetUuids_, addAssetUuids) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline ChangeCheckScopeConfigInstanceRequest& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // deleteAssetUuids Field Functions 
    bool hasDeleteAssetUuids() const { return this->deleteAssetUuids_ != nullptr;};
    void deleteDeleteAssetUuids() { this->deleteAssetUuids_ = nullptr;};
    inline const vector<string> & getDeleteAssetUuids() const { DARABONBA_PTR_GET_CONST(deleteAssetUuids_, vector<string>) };
    inline vector<string> getDeleteAssetUuids() { DARABONBA_PTR_GET(deleteAssetUuids_, vector<string>) };
    inline ChangeCheckScopeConfigInstanceRequest& setDeleteAssetUuids(const vector<string> & deleteAssetUuids) { DARABONBA_PTR_SET_VALUE(deleteAssetUuids_, deleteAssetUuids) };
    inline ChangeCheckScopeConfigInstanceRequest& setDeleteAssetUuids(vector<string> && deleteAssetUuids) { DARABONBA_PTR_SET_RVALUE(deleteAssetUuids_, deleteAssetUuids) };


  protected:
    // The list of unique IDs of cloud assets to add.
    shared_ptr<vector<string>> addAssetUuids_ {};
    // The ID of the scan scope configuration.
    // >Call the [GetCheckScopeConfig](~~GetCheckScopeConfig~~) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> configId_ {};
    // The list of unique IDs of cloud assets to delete.
    shared_ptr<vector<string>> deleteAssetUuids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
