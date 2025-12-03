// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROTECTEDBRANCHESREQUESTTESTSETTINGDTOCHECKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROTECTEDBRANCHESREQUESTTESTSETTINGDTOCHECKCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateProtectedBranchesRequestTestSettingDTOCheckConfigCheckItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateProtectedBranchesRequestTestSettingDTOCheckConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProtectedBranchesRequestTestSettingDTOCheckConfig& obj) { 
      DARABONBA_PTR_TO_JSON(checkItems, checkItems_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProtectedBranchesRequestTestSettingDTOCheckConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(checkItems, checkItems_);
    };
    UpdateProtectedBranchesRequestTestSettingDTOCheckConfig() = default ;
    UpdateProtectedBranchesRequestTestSettingDTOCheckConfig(const UpdateProtectedBranchesRequestTestSettingDTOCheckConfig &) = default ;
    UpdateProtectedBranchesRequestTestSettingDTOCheckConfig(UpdateProtectedBranchesRequestTestSettingDTOCheckConfig &&) = default ;
    UpdateProtectedBranchesRequestTestSettingDTOCheckConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProtectedBranchesRequestTestSettingDTOCheckConfig() = default ;
    UpdateProtectedBranchesRequestTestSettingDTOCheckConfig& operator=(const UpdateProtectedBranchesRequestTestSettingDTOCheckConfig &) = default ;
    UpdateProtectedBranchesRequestTestSettingDTOCheckConfig& operator=(UpdateProtectedBranchesRequestTestSettingDTOCheckConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkItems_ == nullptr; };
    // checkItems Field Functions 
    bool hasCheckItems() const { return this->checkItems_ != nullptr;};
    void deleteCheckItems() { this->checkItems_ = nullptr;};
    inline const vector<Models::UpdateProtectedBranchesRequestTestSettingDTOCheckConfigCheckItems> & checkItems() const { DARABONBA_PTR_GET_CONST(checkItems_, vector<Models::UpdateProtectedBranchesRequestTestSettingDTOCheckConfigCheckItems>) };
    inline vector<Models::UpdateProtectedBranchesRequestTestSettingDTOCheckConfigCheckItems> checkItems() { DARABONBA_PTR_GET(checkItems_, vector<Models::UpdateProtectedBranchesRequestTestSettingDTOCheckConfigCheckItems>) };
    inline UpdateProtectedBranchesRequestTestSettingDTOCheckConfig& setCheckItems(const vector<Models::UpdateProtectedBranchesRequestTestSettingDTOCheckConfigCheckItems> & checkItems) { DARABONBA_PTR_SET_VALUE(checkItems_, checkItems) };
    inline UpdateProtectedBranchesRequestTestSettingDTOCheckConfig& setCheckItems(vector<Models::UpdateProtectedBranchesRequestTestSettingDTOCheckConfigCheckItems> && checkItems) { DARABONBA_PTR_SET_RVALUE(checkItems_, checkItems) };


  protected:
    std::shared_ptr<vector<Models::UpdateProtectedBranchesRequestTestSettingDTOCheckConfigCheckItems>> checkItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
