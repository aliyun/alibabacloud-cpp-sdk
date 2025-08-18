// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListAppInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_TO_JSON(AppInstanceIdList, appInstanceIdList_);
      DARABONBA_PTR_TO_JSON(IncludeDeleted, includeDeleted_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserIdList, userIdList_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceIdList, appInstanceIdList_);
      DARABONBA_PTR_FROM_JSON(IncludeDeleted, includeDeleted_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserIdList, userIdList_);
    };
    ListAppInstancesRequest() = default ;
    ListAppInstancesRequest(const ListAppInstancesRequest &) = default ;
    ListAppInstancesRequest(ListAppInstancesRequest &&) = default ;
    ListAppInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppInstancesRequest() = default ;
    ListAppInstancesRequest& operator=(const ListAppInstancesRequest &) = default ;
    ListAppInstancesRequest& operator=(ListAppInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appInstanceGroupId_ != nullptr
        && this->appInstanceId_ != nullptr && this->appInstanceIdList_ != nullptr && this->includeDeleted_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->status_ != nullptr && this->userIdList_ != nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string appInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline ListAppInstancesRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceId Field Functions 
    bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
    void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
    inline string appInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
    inline ListAppInstancesRequest& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


    // appInstanceIdList Field Functions 
    bool hasAppInstanceIdList() const { return this->appInstanceIdList_ != nullptr;};
    void deleteAppInstanceIdList() { this->appInstanceIdList_ = nullptr;};
    inline const vector<string> & appInstanceIdList() const { DARABONBA_PTR_GET_CONST(appInstanceIdList_, vector<string>) };
    inline vector<string> appInstanceIdList() { DARABONBA_PTR_GET(appInstanceIdList_, vector<string>) };
    inline ListAppInstancesRequest& setAppInstanceIdList(const vector<string> & appInstanceIdList) { DARABONBA_PTR_SET_VALUE(appInstanceIdList_, appInstanceIdList) };
    inline ListAppInstancesRequest& setAppInstanceIdList(vector<string> && appInstanceIdList) { DARABONBA_PTR_SET_RVALUE(appInstanceIdList_, appInstanceIdList) };


    // includeDeleted Field Functions 
    bool hasIncludeDeleted() const { return this->includeDeleted_ != nullptr;};
    void deleteIncludeDeleted() { this->includeDeleted_ = nullptr;};
    inline bool includeDeleted() const { DARABONBA_PTR_GET_DEFAULT(includeDeleted_, false) };
    inline ListAppInstancesRequest& setIncludeDeleted(bool includeDeleted) { DARABONBA_PTR_SET_VALUE(includeDeleted_, includeDeleted) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAppInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAppInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const vector<string> & status() const { DARABONBA_PTR_GET_CONST(status_, vector<string>) };
    inline vector<string> status() { DARABONBA_PTR_GET(status_, vector<string>) };
    inline ListAppInstancesRequest& setStatus(const vector<string> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline ListAppInstancesRequest& setStatus(vector<string> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // userIdList Field Functions 
    bool hasUserIdList() const { return this->userIdList_ != nullptr;};
    void deleteUserIdList() { this->userIdList_ = nullptr;};
    inline const vector<string> & userIdList() const { DARABONBA_PTR_GET_CONST(userIdList_, vector<string>) };
    inline vector<string> userIdList() { DARABONBA_PTR_GET(userIdList_, vector<string>) };
    inline ListAppInstancesRequest& setUserIdList(const vector<string> & userIdList) { DARABONBA_PTR_SET_VALUE(userIdList_, userIdList) };
    inline ListAppInstancesRequest& setUserIdList(vector<string> && userIdList) { DARABONBA_PTR_SET_RVALUE(userIdList_, userIdList) };


  protected:
    // The ID of the delivery group.
    // 
    // This parameter is required.
    std::shared_ptr<string> appInstanceGroupId_ = nullptr;
    // The ID of the application instance.
    std::shared_ptr<string> appInstanceId_ = nullptr;
    // The IDs of the application instances. Up to 100 IDs can be specified.
    std::shared_ptr<vector<string>> appInstanceIdList_ = nullptr;
    // Specifies whether to query the information about deleted app instances. If you set this parameter to true, you must configure AppInstanceIdList. Otherwise, a parameter error is reported.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> includeDeleted_ = nullptr;
    // The page number. Default value: `1`. We recommend that you specify this parameter.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. The value cannot be greater than `100`. Default value: `20`. We recommend that you specify this parameter.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The status of the application instances.
    std::shared_ptr<vector<string>> status_ = nullptr;
    // The user IDs. You can specify up to 100 IDs.
    std::shared_ptr<vector<string>> userIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
