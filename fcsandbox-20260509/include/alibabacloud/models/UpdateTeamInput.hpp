// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEAMINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEAMINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class UpdateTeamInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTeamInput& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(plan, plan_);
      DARABONBA_PTR_TO_JSON(resourceGroupID, resourceGroupID_);
      DARABONBA_PTR_TO_JSON(teamName, teamName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTeamInput& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(plan, plan_);
      DARABONBA_PTR_FROM_JSON(resourceGroupID, resourceGroupID_);
      DARABONBA_PTR_FROM_JSON(teamName, teamName_);
    };
    UpdateTeamInput() = default ;
    UpdateTeamInput(const UpdateTeamInput &) = default ;
    UpdateTeamInput(UpdateTeamInput &&) = default ;
    UpdateTeamInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTeamInput() = default ;
    UpdateTeamInput& operator=(const UpdateTeamInput &) = default ;
    UpdateTeamInput& operator=(UpdateTeamInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->plan_ == nullptr && this->resourceGroupID_ == nullptr && this->teamName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateTeamInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // plan Field Functions 
    bool hasPlan() const { return this->plan_ != nullptr;};
    void deletePlan() { this->plan_ = nullptr;};
    inline string getPlan() const { DARABONBA_PTR_GET_DEFAULT(plan_, "") };
    inline UpdateTeamInput& setPlan(string plan) { DARABONBA_PTR_SET_VALUE(plan_, plan) };


    // resourceGroupID Field Functions 
    bool hasResourceGroupID() const { return this->resourceGroupID_ != nullptr;};
    void deleteResourceGroupID() { this->resourceGroupID_ = nullptr;};
    inline string getResourceGroupID() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupID_, "") };
    inline UpdateTeamInput& setResourceGroupID(string resourceGroupID) { DARABONBA_PTR_SET_VALUE(resourceGroupID_, resourceGroupID) };


    // teamName Field Functions 
    bool hasTeamName() const { return this->teamName_ != nullptr;};
    void deleteTeamName() { this->teamName_ = nullptr;};
    inline string getTeamName() const { DARABONBA_PTR_GET_DEFAULT(teamName_, "") };
    inline UpdateTeamInput& setTeamName(string teamName) { DARABONBA_PTR_SET_VALUE(teamName_, teamName) };


  protected:
    // The description.
    shared_ptr<string> description_ {};
    shared_ptr<string> plan_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupID_ {};
    // The team name.
    shared_ptr<string> teamName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
