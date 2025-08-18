// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBINDINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBINDINFOREQUEST_HPP_
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
  class ListBindInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBindInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIdList, appIdList_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupIdList, appInstanceGroupIdList_);
      DARABONBA_PTR_TO_JSON(AppInstanceIdList, appInstanceIdList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(UserIdList, userIdList_);
      DARABONBA_PTR_TO_JSON(WyIdList, wyIdList_);
    };
    friend void from_json(const Darabonba::Json& j, ListBindInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIdList, appIdList_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupIdList, appInstanceGroupIdList_);
      DARABONBA_PTR_FROM_JSON(AppInstanceIdList, appInstanceIdList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(UserIdList, userIdList_);
      DARABONBA_PTR_FROM_JSON(WyIdList, wyIdList_);
    };
    ListBindInfoRequest() = default ;
    ListBindInfoRequest(const ListBindInfoRequest &) = default ;
    ListBindInfoRequest(ListBindInfoRequest &&) = default ;
    ListBindInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBindInfoRequest() = default ;
    ListBindInfoRequest& operator=(const ListBindInfoRequest &) = default ;
    ListBindInfoRequest& operator=(ListBindInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appIdList_ != nullptr
        && this->appInstanceGroupIdList_ != nullptr && this->appInstanceIdList_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->userIdList_ != nullptr
        && this->wyIdList_ != nullptr; };
    // appIdList Field Functions 
    bool hasAppIdList() const { return this->appIdList_ != nullptr;};
    void deleteAppIdList() { this->appIdList_ = nullptr;};
    inline const vector<string> & appIdList() const { DARABONBA_PTR_GET_CONST(appIdList_, vector<string>) };
    inline vector<string> appIdList() { DARABONBA_PTR_GET(appIdList_, vector<string>) };
    inline ListBindInfoRequest& setAppIdList(const vector<string> & appIdList) { DARABONBA_PTR_SET_VALUE(appIdList_, appIdList) };
    inline ListBindInfoRequest& setAppIdList(vector<string> && appIdList) { DARABONBA_PTR_SET_RVALUE(appIdList_, appIdList) };


    // appInstanceGroupIdList Field Functions 
    bool hasAppInstanceGroupIdList() const { return this->appInstanceGroupIdList_ != nullptr;};
    void deleteAppInstanceGroupIdList() { this->appInstanceGroupIdList_ = nullptr;};
    inline const vector<string> & appInstanceGroupIdList() const { DARABONBA_PTR_GET_CONST(appInstanceGroupIdList_, vector<string>) };
    inline vector<string> appInstanceGroupIdList() { DARABONBA_PTR_GET(appInstanceGroupIdList_, vector<string>) };
    inline ListBindInfoRequest& setAppInstanceGroupIdList(const vector<string> & appInstanceGroupIdList) { DARABONBA_PTR_SET_VALUE(appInstanceGroupIdList_, appInstanceGroupIdList) };
    inline ListBindInfoRequest& setAppInstanceGroupIdList(vector<string> && appInstanceGroupIdList) { DARABONBA_PTR_SET_RVALUE(appInstanceGroupIdList_, appInstanceGroupIdList) };


    // appInstanceIdList Field Functions 
    bool hasAppInstanceIdList() const { return this->appInstanceIdList_ != nullptr;};
    void deleteAppInstanceIdList() { this->appInstanceIdList_ = nullptr;};
    inline const vector<string> & appInstanceIdList() const { DARABONBA_PTR_GET_CONST(appInstanceIdList_, vector<string>) };
    inline vector<string> appInstanceIdList() { DARABONBA_PTR_GET(appInstanceIdList_, vector<string>) };
    inline ListBindInfoRequest& setAppInstanceIdList(const vector<string> & appInstanceIdList) { DARABONBA_PTR_SET_VALUE(appInstanceIdList_, appInstanceIdList) };
    inline ListBindInfoRequest& setAppInstanceIdList(vector<string> && appInstanceIdList) { DARABONBA_PTR_SET_RVALUE(appInstanceIdList_, appInstanceIdList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListBindInfoRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBindInfoRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // userIdList Field Functions 
    bool hasUserIdList() const { return this->userIdList_ != nullptr;};
    void deleteUserIdList() { this->userIdList_ = nullptr;};
    inline const vector<string> & userIdList() const { DARABONBA_PTR_GET_CONST(userIdList_, vector<string>) };
    inline vector<string> userIdList() { DARABONBA_PTR_GET(userIdList_, vector<string>) };
    inline ListBindInfoRequest& setUserIdList(const vector<string> & userIdList) { DARABONBA_PTR_SET_VALUE(userIdList_, userIdList) };
    inline ListBindInfoRequest& setUserIdList(vector<string> && userIdList) { DARABONBA_PTR_SET_RVALUE(userIdList_, userIdList) };


    // wyIdList Field Functions 
    bool hasWyIdList() const { return this->wyIdList_ != nullptr;};
    void deleteWyIdList() { this->wyIdList_ = nullptr;};
    inline const vector<string> & wyIdList() const { DARABONBA_PTR_GET_CONST(wyIdList_, vector<string>) };
    inline vector<string> wyIdList() { DARABONBA_PTR_GET(wyIdList_, vector<string>) };
    inline ListBindInfoRequest& setWyIdList(const vector<string> & wyIdList) { DARABONBA_PTR_SET_VALUE(wyIdList_, wyIdList) };
    inline ListBindInfoRequest& setWyIdList(vector<string> && wyIdList) { DARABONBA_PTR_SET_RVALUE(wyIdList_, wyIdList) };


  protected:
    std::shared_ptr<vector<string>> appIdList_ = nullptr;
    std::shared_ptr<vector<string>> appInstanceGroupIdList_ = nullptr;
    std::shared_ptr<vector<string>> appInstanceIdList_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<vector<string>> userIdList_ = nullptr;
    std::shared_ptr<vector<string>> wyIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
