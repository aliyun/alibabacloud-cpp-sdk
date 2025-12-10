// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXPERIMENTSUSERSSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEXPERIMENTSUSERSSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetExperimentsUsersStatisticsResponseBodyUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class GetExperimentsUsersStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExperimentsUsersStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, GetExperimentsUsersStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    GetExperimentsUsersStatisticsResponseBody() = default ;
    GetExperimentsUsersStatisticsResponseBody(const GetExperimentsUsersStatisticsResponseBody &) = default ;
    GetExperimentsUsersStatisticsResponseBody(GetExperimentsUsersStatisticsResponseBody &&) = default ;
    GetExperimentsUsersStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExperimentsUsersStatisticsResponseBody() = default ;
    GetExperimentsUsersStatisticsResponseBody& operator=(const GetExperimentsUsersStatisticsResponseBody &) = default ;
    GetExperimentsUsersStatisticsResponseBody& operator=(GetExperimentsUsersStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->users_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetExperimentsUsersStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<GetExperimentsUsersStatisticsResponseBodyUsers> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<GetExperimentsUsersStatisticsResponseBodyUsers>) };
    inline vector<GetExperimentsUsersStatisticsResponseBodyUsers> users() { DARABONBA_PTR_GET(users_, vector<GetExperimentsUsersStatisticsResponseBodyUsers>) };
    inline GetExperimentsUsersStatisticsResponseBody& setUsers(const vector<GetExperimentsUsersStatisticsResponseBodyUsers> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline GetExperimentsUsersStatisticsResponseBody& setUsers(vector<GetExperimentsUsersStatisticsResponseBodyUsers> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<GetExperimentsUsersStatisticsResponseBodyUsers>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
