// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVOLUMESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVOLUMESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class ListVolumesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVolumesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(resourceGroupID, resourceGroupID_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
      DARABONBA_PTR_TO_JSON(userID, userID_);
      DARABONBA_PTR_TO_JSON(volumeName, volumeName_);
    };
    friend void from_json(const Darabonba::Json& j, ListVolumesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(resourceGroupID, resourceGroupID_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
      DARABONBA_PTR_FROM_JSON(userID, userID_);
      DARABONBA_PTR_FROM_JSON(volumeName, volumeName_);
    };
    ListVolumesRequest() = default ;
    ListVolumesRequest(const ListVolumesRequest &) = default ;
    ListVolumesRequest(ListVolumesRequest &&) = default ;
    ListVolumesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVolumesRequest() = default ;
    ListVolumesRequest& operator=(const ListVolumesRequest &) = default ;
    ListVolumesRequest& operator=(ListVolumesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->resourceGroupID_ == nullptr && this->status_ == nullptr && this->teamID_ == nullptr && this->userID_ == nullptr
        && this->volumeName_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVolumesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVolumesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceGroupID Field Functions 
    bool hasResourceGroupID() const { return this->resourceGroupID_ != nullptr;};
    void deleteResourceGroupID() { this->resourceGroupID_ = nullptr;};
    inline string getResourceGroupID() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupID_, "") };
    inline ListVolumesRequest& setResourceGroupID(string resourceGroupID) { DARABONBA_PTR_SET_VALUE(resourceGroupID_, resourceGroupID) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListVolumesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline ListVolumesRequest& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


    // userID Field Functions 
    bool hasUserID() const { return this->userID_ != nullptr;};
    void deleteUserID() { this->userID_ = nullptr;};
    inline string getUserID() const { DARABONBA_PTR_GET_DEFAULT(userID_, "") };
    inline ListVolumesRequest& setUserID(string userID) { DARABONBA_PTR_SET_VALUE(userID_, userID) };


    // volumeName Field Functions 
    bool hasVolumeName() const { return this->volumeName_ != nullptr;};
    void deleteVolumeName() { this->volumeName_ = nullptr;};
    inline string getVolumeName() const { DARABONBA_PTR_GET_DEFAULT(volumeName_, "") };
    inline ListVolumesRequest& setVolumeName(string volumeName) { DARABONBA_PTR_SET_VALUE(volumeName_, volumeName) };


  protected:
    // The number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token used to retrieve more results. You do not need to specify this parameter for the first request. For subsequent requests, use the token returned in the previous response.
    shared_ptr<string> nextToken_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupID_ {};
    // The status of the volume. Valid values:
    // - CREATING
    // - AVAILABLE
    // - ERROR
    // - DELETING
    shared_ptr<string> status_ {};
    // The unique identifier of the team.
    shared_ptr<string> teamID_ {};
    // The UID of the creator.
    shared_ptr<string> userID_ {};
    // The name of the volume. The name must be unique within a team.
    shared_ptr<string> volumeName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
