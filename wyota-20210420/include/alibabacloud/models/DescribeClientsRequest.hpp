// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wyota20210420
{
namespace Models
{
  class DescribeClientsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallerAliUid, callerAliUid_);
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(CustomResourceId, customResourceId_);
      DARABONBA_PTR_TO_JSON(CustomResourceStatus, customResourceStatus_);
      DARABONBA_PTR_TO_JSON(InManage, inManage_);
      DARABONBA_PTR_TO_JSON(IncludeSubGroups, includeSubGroups_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OnlineStatus, onlineStatus_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(SearchKeyword, searchKeyword_);
      DARABONBA_PTR_TO_JSON(TerminalGroupId, terminalGroupId_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
      DARABONBA_PTR_TO_JSON(WithBindUser, withBindUser_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallerAliUid, callerAliUid_);
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(CustomResourceId, customResourceId_);
      DARABONBA_PTR_FROM_JSON(CustomResourceStatus, customResourceStatus_);
      DARABONBA_PTR_FROM_JSON(InManage, inManage_);
      DARABONBA_PTR_FROM_JSON(IncludeSubGroups, includeSubGroups_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OnlineStatus, onlineStatus_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(SearchKeyword, searchKeyword_);
      DARABONBA_PTR_FROM_JSON(TerminalGroupId, terminalGroupId_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
      DARABONBA_PTR_FROM_JSON(WithBindUser, withBindUser_);
    };
    DescribeClientsRequest() = default ;
    DescribeClientsRequest(const DescribeClientsRequest &) = default ;
    DescribeClientsRequest(DescribeClientsRequest &&) = default ;
    DescribeClientsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientsRequest() = default ;
    DescribeClientsRequest& operator=(const DescribeClientsRequest &) = default ;
    DescribeClientsRequest& operator=(DescribeClientsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callerAliUid_ == nullptr
        && this->clientType_ == nullptr && this->customResourceId_ == nullptr && this->customResourceStatus_ == nullptr && this->inManage_ == nullptr && this->includeSubGroups_ == nullptr
        && this->maxResults_ == nullptr && this->model_ == nullptr && this->nextToken_ == nullptr && this->onlineStatus_ == nullptr && this->platform_ == nullptr
        && this->searchKeyword_ == nullptr && this->terminalGroupId_ == nullptr && this->uuids_ == nullptr && this->withBindUser_ == nullptr; };
    // callerAliUid Field Functions 
    bool hasCallerAliUid() const { return this->callerAliUid_ != nullptr;};
    void deleteCallerAliUid() { this->callerAliUid_ = nullptr;};
    inline string getCallerAliUid() const { DARABONBA_PTR_GET_DEFAULT(callerAliUid_, "") };
    inline DescribeClientsRequest& setCallerAliUid(string callerAliUid) { DARABONBA_PTR_SET_VALUE(callerAliUid_, callerAliUid) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline int32_t getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, 0) };
    inline DescribeClientsRequest& setClientType(int32_t clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // customResourceId Field Functions 
    bool hasCustomResourceId() const { return this->customResourceId_ != nullptr;};
    void deleteCustomResourceId() { this->customResourceId_ = nullptr;};
    inline string getCustomResourceId() const { DARABONBA_PTR_GET_DEFAULT(customResourceId_, "") };
    inline DescribeClientsRequest& setCustomResourceId(string customResourceId) { DARABONBA_PTR_SET_VALUE(customResourceId_, customResourceId) };


    // customResourceStatus Field Functions 
    bool hasCustomResourceStatus() const { return this->customResourceStatus_ != nullptr;};
    void deleteCustomResourceStatus() { this->customResourceStatus_ = nullptr;};
    inline bool getCustomResourceStatus() const { DARABONBA_PTR_GET_DEFAULT(customResourceStatus_, false) };
    inline DescribeClientsRequest& setCustomResourceStatus(bool customResourceStatus) { DARABONBA_PTR_SET_VALUE(customResourceStatus_, customResourceStatus) };


    // inManage Field Functions 
    bool hasInManage() const { return this->inManage_ != nullptr;};
    void deleteInManage() { this->inManage_ = nullptr;};
    inline bool getInManage() const { DARABONBA_PTR_GET_DEFAULT(inManage_, false) };
    inline DescribeClientsRequest& setInManage(bool inManage) { DARABONBA_PTR_SET_VALUE(inManage_, inManage) };


    // includeSubGroups Field Functions 
    bool hasIncludeSubGroups() const { return this->includeSubGroups_ != nullptr;};
    void deleteIncludeSubGroups() { this->includeSubGroups_ = nullptr;};
    inline bool getIncludeSubGroups() const { DARABONBA_PTR_GET_DEFAULT(includeSubGroups_, false) };
    inline DescribeClientsRequest& setIncludeSubGroups(bool includeSubGroups) { DARABONBA_PTR_SET_VALUE(includeSubGroups_, includeSubGroups) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeClientsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline DescribeClientsRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeClientsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // onlineStatus Field Functions 
    bool hasOnlineStatus() const { return this->onlineStatus_ != nullptr;};
    void deleteOnlineStatus() { this->onlineStatus_ = nullptr;};
    inline bool getOnlineStatus() const { DARABONBA_PTR_GET_DEFAULT(onlineStatus_, false) };
    inline DescribeClientsRequest& setOnlineStatus(bool onlineStatus) { DARABONBA_PTR_SET_VALUE(onlineStatus_, onlineStatus) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeClientsRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // searchKeyword Field Functions 
    bool hasSearchKeyword() const { return this->searchKeyword_ != nullptr;};
    void deleteSearchKeyword() { this->searchKeyword_ = nullptr;};
    inline string getSearchKeyword() const { DARABONBA_PTR_GET_DEFAULT(searchKeyword_, "") };
    inline DescribeClientsRequest& setSearchKeyword(string searchKeyword) { DARABONBA_PTR_SET_VALUE(searchKeyword_, searchKeyword) };


    // terminalGroupId Field Functions 
    bool hasTerminalGroupId() const { return this->terminalGroupId_ != nullptr;};
    void deleteTerminalGroupId() { this->terminalGroupId_ = nullptr;};
    inline string getTerminalGroupId() const { DARABONBA_PTR_GET_DEFAULT(terminalGroupId_, "") };
    inline DescribeClientsRequest& setTerminalGroupId(string terminalGroupId) { DARABONBA_PTR_SET_VALUE(terminalGroupId_, terminalGroupId) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline const vector<string> & getUuids() const { DARABONBA_PTR_GET_CONST(uuids_, vector<string>) };
    inline vector<string> getUuids() { DARABONBA_PTR_GET(uuids_, vector<string>) };
    inline DescribeClientsRequest& setUuids(const vector<string> & uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };
    inline DescribeClientsRequest& setUuids(vector<string> && uuids) { DARABONBA_PTR_SET_RVALUE(uuids_, uuids) };


    // withBindUser Field Functions 
    bool hasWithBindUser() const { return this->withBindUser_ != nullptr;};
    void deleteWithBindUser() { this->withBindUser_ = nullptr;};
    inline bool getWithBindUser() const { DARABONBA_PTR_GET_DEFAULT(withBindUser_, false) };
    inline DescribeClientsRequest& setWithBindUser(bool withBindUser) { DARABONBA_PTR_SET_VALUE(withBindUser_, withBindUser) };


  protected:
    // aliuid
    shared_ptr<string> callerAliUid_ {};
    // This parameter is required.
    shared_ptr<int32_t> clientType_ {};
    shared_ptr<string> customResourceId_ {};
    shared_ptr<bool> customResourceStatus_ {};
    shared_ptr<bool> inManage_ {};
    shared_ptr<bool> includeSubGroups_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> model_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<bool> onlineStatus_ {};
    shared_ptr<string> platform_ {};
    shared_ptr<string> searchKeyword_ {};
    shared_ptr<string> terminalGroupId_ {};
    shared_ptr<vector<string>> uuids_ {};
    shared_ptr<bool> withBindUser_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wyota20210420
#endif
