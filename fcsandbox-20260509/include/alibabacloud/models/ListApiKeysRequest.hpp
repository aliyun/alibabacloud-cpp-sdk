// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIKEYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIKEYSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class ListApiKeysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiKeysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apiKeyName, apiKeyName_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(resourceGroupID, resourceGroupID_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
      DARABONBA_PTR_TO_JSON(userID, userID_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiKeysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKeyName, apiKeyName_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(resourceGroupID, resourceGroupID_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
      DARABONBA_PTR_FROM_JSON(userID, userID_);
    };
    ListApiKeysRequest() = default ;
    ListApiKeysRequest(const ListApiKeysRequest &) = default ;
    ListApiKeysRequest(ListApiKeysRequest &&) = default ;
    ListApiKeysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiKeysRequest() = default ;
    ListApiKeysRequest& operator=(const ListApiKeysRequest &) = default ;
    ListApiKeysRequest& operator=(ListApiKeysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKeyName_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->resourceGroupID_ == nullptr && this->status_ == nullptr && this->teamID_ == nullptr
        && this->userID_ == nullptr; };
    // apiKeyName Field Functions 
    bool hasApiKeyName() const { return this->apiKeyName_ != nullptr;};
    void deleteApiKeyName() { this->apiKeyName_ = nullptr;};
    inline string getApiKeyName() const { DARABONBA_PTR_GET_DEFAULT(apiKeyName_, "") };
    inline ListApiKeysRequest& setApiKeyName(string apiKeyName) { DARABONBA_PTR_SET_VALUE(apiKeyName_, apiKeyName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListApiKeysRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListApiKeysRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupID Field Functions 
    bool hasResourceGroupID() const { return this->resourceGroupID_ != nullptr;};
    void deleteResourceGroupID() { this->resourceGroupID_ = nullptr;};
    inline string getResourceGroupID() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupID_, "") };
    inline ListApiKeysRequest& setResourceGroupID(string resourceGroupID) { DARABONBA_PTR_SET_VALUE(resourceGroupID_, resourceGroupID) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListApiKeysRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline ListApiKeysRequest& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


    // userID Field Functions 
    bool hasUserID() const { return this->userID_ != nullptr;};
    void deleteUserID() { this->userID_ = nullptr;};
    inline string getUserID() const { DARABONBA_PTR_GET_DEFAULT(userID_, "") };
    inline ListApiKeysRequest& setUserID(string userID) { DARABONBA_PTR_SET_VALUE(userID_, userID) };


  protected:
    shared_ptr<string> apiKeyName_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> resourceGroupID_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> teamID_ {};
    shared_ptr<string> userID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
