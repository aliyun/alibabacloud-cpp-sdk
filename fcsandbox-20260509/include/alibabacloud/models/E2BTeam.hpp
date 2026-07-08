// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_E2BTEAM_HPP_
#define ALIBABACLOUD_MODELS_E2BTEAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class E2BTeam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const E2BTeam& obj) { 
      DARABONBA_PTR_TO_JSON(allowUpdateTeamName, allowUpdateTeamName_);
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(resourceGroupID, resourceGroupID_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
      DARABONBA_PTR_TO_JSON(teamName, teamName_);
      DARABONBA_PTR_TO_JSON(userID, userID_);
    };
    friend void from_json(const Darabonba::Json& j, E2BTeam& obj) { 
      DARABONBA_PTR_FROM_JSON(allowUpdateTeamName, allowUpdateTeamName_);
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(resourceGroupID, resourceGroupID_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
      DARABONBA_PTR_FROM_JSON(teamName, teamName_);
      DARABONBA_PTR_FROM_JSON(userID, userID_);
    };
    E2BTeam() = default ;
    E2BTeam(const E2BTeam &) = default ;
    E2BTeam(E2BTeam &&) = default ;
    E2BTeam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~E2BTeam() = default ;
    E2BTeam& operator=(const E2BTeam &) = default ;
    E2BTeam& operator=(E2BTeam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowUpdateTeamName_ == nullptr
        && this->createdTime_ == nullptr && this->description_ == nullptr && this->resourceGroupID_ == nullptr && this->status_ == nullptr && this->teamID_ == nullptr
        && this->teamName_ == nullptr && this->userID_ == nullptr; };
    // allowUpdateTeamName Field Functions 
    bool hasAllowUpdateTeamName() const { return this->allowUpdateTeamName_ != nullptr;};
    void deleteAllowUpdateTeamName() { this->allowUpdateTeamName_ = nullptr;};
    inline bool getAllowUpdateTeamName() const { DARABONBA_PTR_GET_DEFAULT(allowUpdateTeamName_, false) };
    inline E2BTeam& setAllowUpdateTeamName(bool allowUpdateTeamName) { DARABONBA_PTR_SET_VALUE(allowUpdateTeamName_, allowUpdateTeamName) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline E2BTeam& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline E2BTeam& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // resourceGroupID Field Functions 
    bool hasResourceGroupID() const { return this->resourceGroupID_ != nullptr;};
    void deleteResourceGroupID() { this->resourceGroupID_ = nullptr;};
    inline string getResourceGroupID() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupID_, "") };
    inline E2BTeam& setResourceGroupID(string resourceGroupID) { DARABONBA_PTR_SET_VALUE(resourceGroupID_, resourceGroupID) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline E2BTeam& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline E2BTeam& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


    // teamName Field Functions 
    bool hasTeamName() const { return this->teamName_ != nullptr;};
    void deleteTeamName() { this->teamName_ = nullptr;};
    inline string getTeamName() const { DARABONBA_PTR_GET_DEFAULT(teamName_, "") };
    inline E2BTeam& setTeamName(string teamName) { DARABONBA_PTR_SET_VALUE(teamName_, teamName) };


    // userID Field Functions 
    bool hasUserID() const { return this->userID_ != nullptr;};
    void deleteUserID() { this->userID_ = nullptr;};
    inline string getUserID() const { DARABONBA_PTR_GET_DEFAULT(userID_, "") };
    inline E2BTeam& setUserID(string userID) { DARABONBA_PTR_SET_VALUE(userID_, userID) };


  protected:
    shared_ptr<bool> allowUpdateTeamName_ {};
    shared_ptr<string> createdTime_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> resourceGroupID_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> teamID_ {};
    shared_ptr<string> teamName_ {};
    shared_ptr<string> userID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
