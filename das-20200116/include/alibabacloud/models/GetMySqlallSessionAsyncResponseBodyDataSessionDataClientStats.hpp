// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMYSQLALLSESSIONASYNCRESPONSEBODYDATASESSIONDATACLIENTSTATS_HPP_
#define ALIBABACLOUD_MODELS_GETMYSQLALLSESSIONASYNCRESPONSEBODYDATASESSIONDATACLIENTSTATS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveCount, activeCount_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(ThreadIdList, threadIdList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UserList, userList_);
    };
    friend void from_json(const Darabonba::Json& j, GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveCount, activeCount_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(ThreadIdList, threadIdList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UserList, userList_);
    };
    GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats() = default ;
    GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats(const GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats &) = default ;
    GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats(GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats &&) = default ;
    GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats() = default ;
    GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats& operator=(const GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats &) = default ;
    GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats& operator=(GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activeCount_ != nullptr
        && this->key_ != nullptr && this->threadIdList_ != nullptr && this->totalCount_ != nullptr && this->userList_ != nullptr; };
    // activeCount Field Functions 
    bool hasActiveCount() const { return this->activeCount_ != nullptr;};
    void deleteActiveCount() { this->activeCount_ = nullptr;};
    inline int64_t activeCount() const { DARABONBA_PTR_GET_DEFAULT(activeCount_, 0L) };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats& setActiveCount(int64_t activeCount) { DARABONBA_PTR_SET_VALUE(activeCount_, activeCount) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // threadIdList Field Functions 
    bool hasThreadIdList() const { return this->threadIdList_ != nullptr;};
    void deleteThreadIdList() { this->threadIdList_ = nullptr;};
    inline const vector<int64_t> & threadIdList() const { DARABONBA_PTR_GET_CONST(threadIdList_, vector<int64_t>) };
    inline vector<int64_t> threadIdList() { DARABONBA_PTR_GET(threadIdList_, vector<int64_t>) };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats& setThreadIdList(const vector<int64_t> & threadIdList) { DARABONBA_PTR_SET_VALUE(threadIdList_, threadIdList) };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats& setThreadIdList(vector<int64_t> && threadIdList) { DARABONBA_PTR_SET_RVALUE(threadIdList_, threadIdList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const vector<string> & userList() const { DARABONBA_PTR_GET_CONST(userList_, vector<string>) };
    inline vector<string> userList() { DARABONBA_PTR_GET(userList_, vector<string>) };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats& setUserList(const vector<string> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionDataClientStats& setUserList(vector<string> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    // The number of active sessions that belong to the client IP address.
    // 
    // >  If the type of the command executed in the session is Query or Execute and the session in the transaction is not terminated, the session is active.
    std::shared_ptr<int64_t> activeCount_ = nullptr;
    // The IP address of the client.
    std::shared_ptr<string> key_ = nullptr;
    // The IDs of the sessions that belong to the client IP address.
    std::shared_ptr<vector<int64_t>> threadIdList_ = nullptr;
    // The total number of sessions that belong to the client IP address.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    // The database accounts to which the sessions belong.
    std::shared_ptr<vector<string>> userList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
