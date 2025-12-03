// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROTECTDBRANCHRESPONSEBODYRESULTTESTSETTINGDTOCHECKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROTECTDBRANCHRESPONSEBODYRESULTTESTSETTINGDTOCHECKCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfigCheckItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfig& obj) { 
      DARABONBA_PTR_TO_JSON(checkItems, checkItems_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(checkItems, checkItems_);
    };
    CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfig() = default ;
    CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfig(const CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfig &) = default ;
    CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfig(CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfig &&) = default ;
    CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfig() = default ;
    CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfig& operator=(const CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfig &) = default ;
    CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfig& operator=(CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkItems_ == nullptr; };
    // checkItems Field Functions 
    bool hasCheckItems() const { return this->checkItems_ != nullptr;};
    void deleteCheckItems() { this->checkItems_ = nullptr;};
    inline const vector<Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfigCheckItems> & checkItems() const { DARABONBA_PTR_GET_CONST(checkItems_, vector<Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfigCheckItems>) };
    inline vector<Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfigCheckItems> checkItems() { DARABONBA_PTR_GET(checkItems_, vector<Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfigCheckItems>) };
    inline CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfig& setCheckItems(const vector<Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfigCheckItems> & checkItems) { DARABONBA_PTR_SET_VALUE(checkItems_, checkItems) };
    inline CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfig& setCheckItems(vector<Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfigCheckItems> && checkItems) { DARABONBA_PTR_SET_RVALUE(checkItems_, checkItems) };


  protected:
    std::shared_ptr<vector<Models::CreateProtectdBranchResponseBodyResultTestSettingDTOCheckConfigCheckItems>> checkItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
