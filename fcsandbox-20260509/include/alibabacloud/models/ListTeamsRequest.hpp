// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEAMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTEAMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class ListTeamsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTeamsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(resourceGroupID, resourceGroupID_);
      DARABONBA_PTR_TO_JSON(teamName, teamName_);
    };
    friend void from_json(const Darabonba::Json& j, ListTeamsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(resourceGroupID, resourceGroupID_);
      DARABONBA_PTR_FROM_JSON(teamName, teamName_);
    };
    ListTeamsRequest() = default ;
    ListTeamsRequest(const ListTeamsRequest &) = default ;
    ListTeamsRequest(ListTeamsRequest &&) = default ;
    ListTeamsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTeamsRequest() = default ;
    ListTeamsRequest& operator=(const ListTeamsRequest &) = default ;
    ListTeamsRequest& operator=(ListTeamsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->resourceGroupID_ == nullptr && this->teamName_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTeamsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTeamsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupID Field Functions 
    bool hasResourceGroupID() const { return this->resourceGroupID_ != nullptr;};
    void deleteResourceGroupID() { this->resourceGroupID_ = nullptr;};
    inline string getResourceGroupID() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupID_, "") };
    inline ListTeamsRequest& setResourceGroupID(string resourceGroupID) { DARABONBA_PTR_SET_VALUE(resourceGroupID_, resourceGroupID) };


    // teamName Field Functions 
    bool hasTeamName() const { return this->teamName_ != nullptr;};
    void deleteTeamName() { this->teamName_ = nullptr;};
    inline string getTeamName() const { DARABONBA_PTR_GET_DEFAULT(teamName_, "") };
    inline ListTeamsRequest& setTeamName(string teamName) { DARABONBA_PTR_SET_VALUE(teamName_, teamName) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> resourceGroupID_ {};
    shared_ptr<string> teamName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
