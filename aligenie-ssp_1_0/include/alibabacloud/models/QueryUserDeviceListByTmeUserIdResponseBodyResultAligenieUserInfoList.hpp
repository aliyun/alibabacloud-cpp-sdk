// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERDEVICELISTBYTMEUSERIDRESPONSEBODYRESULTALIGENIEUSERINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERDEVICELISTBYTMEUSERIDRESPONSEBODYRESULTALIGENIEUSERINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedDeviceList, authorizedDeviceList_);
      DARABONBA_PTR_TO_JSON(OpenUserId, openUserId_);
      DARABONBA_PTR_TO_JSON(UserNickname, userNickname_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedDeviceList, authorizedDeviceList_);
      DARABONBA_PTR_FROM_JSON(OpenUserId, openUserId_);
      DARABONBA_PTR_FROM_JSON(UserNickname, userNickname_);
    };
    QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList() = default ;
    QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList(const QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList &) = default ;
    QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList(QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList &&) = default ;
    QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList() = default ;
    QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList& operator=(const QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList &) = default ;
    QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList& operator=(QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorizedDeviceList_ != nullptr
        && this->openUserId_ != nullptr && this->userNickname_ != nullptr; };
    // authorizedDeviceList Field Functions 
    bool hasAuthorizedDeviceList() const { return this->authorizedDeviceList_ != nullptr;};
    void deleteAuthorizedDeviceList() { this->authorizedDeviceList_ = nullptr;};
    inline const vector<Models::QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList> & authorizedDeviceList() const { DARABONBA_PTR_GET_CONST(authorizedDeviceList_, vector<Models::QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList>) };
    inline vector<Models::QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList> authorizedDeviceList() { DARABONBA_PTR_GET(authorizedDeviceList_, vector<Models::QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList>) };
    inline QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList& setAuthorizedDeviceList(const vector<Models::QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList> & authorizedDeviceList) { DARABONBA_PTR_SET_VALUE(authorizedDeviceList_, authorizedDeviceList) };
    inline QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList& setAuthorizedDeviceList(vector<Models::QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList> && authorizedDeviceList) { DARABONBA_PTR_SET_RVALUE(authorizedDeviceList_, authorizedDeviceList) };


    // openUserId Field Functions 
    bool hasOpenUserId() const { return this->openUserId_ != nullptr;};
    void deleteOpenUserId() { this->openUserId_ = nullptr;};
    inline string openUserId() const { DARABONBA_PTR_GET_DEFAULT(openUserId_, "") };
    inline QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList& setOpenUserId(string openUserId) { DARABONBA_PTR_SET_VALUE(openUserId_, openUserId) };


    // userNickname Field Functions 
    bool hasUserNickname() const { return this->userNickname_ != nullptr;};
    void deleteUserNickname() { this->userNickname_ = nullptr;};
    inline string userNickname() const { DARABONBA_PTR_GET_DEFAULT(userNickname_, "") };
    inline QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoList& setUserNickname(string userNickname) { DARABONBA_PTR_SET_VALUE(userNickname_, userNickname) };


  protected:
    std::shared_ptr<vector<Models::QueryUserDeviceListByTmeUserIdResponseBodyResultAligenieUserInfoListAuthorizedDeviceList>> authorizedDeviceList_ = nullptr;
    std::shared_ptr<string> openUserId_ = nullptr;
    std::shared_ptr<string> userNickname_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
