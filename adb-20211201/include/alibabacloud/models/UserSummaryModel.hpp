// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_USERSUMMARYMODEL_HPP_
#define ALIBABACLOUD_MODELS_USERSUMMARYMODEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AccessTokenModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class UserSummaryModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UserSummaryModel& obj) { 
      DARABONBA_PTR_TO_JSON(AccessTokens, accessTokens_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(RamUser, ramUser_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, UserSummaryModel& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessTokens, accessTokens_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(RamUser, ramUser_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    UserSummaryModel() = default ;
    UserSummaryModel(const UserSummaryModel &) = default ;
    UserSummaryModel(UserSummaryModel &&) = default ;
    UserSummaryModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UserSummaryModel() = default ;
    UserSummaryModel& operator=(const UserSummaryModel &) = default ;
    UserSummaryModel& operator=(UserSummaryModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessTokens_ == nullptr
        && this->host_ == nullptr && this->ramUser_ == nullptr && this->status_ == nullptr && this->userName_ == nullptr; };
    // accessTokens Field Functions 
    bool hasAccessTokens() const { return this->accessTokens_ != nullptr;};
    void deleteAccessTokens() { this->accessTokens_ = nullptr;};
    inline const vector<AccessTokenModel> & getAccessTokens() const { DARABONBA_PTR_GET_CONST(accessTokens_, vector<AccessTokenModel>) };
    inline vector<AccessTokenModel> getAccessTokens() { DARABONBA_PTR_GET(accessTokens_, vector<AccessTokenModel>) };
    inline UserSummaryModel& setAccessTokens(const vector<AccessTokenModel> & accessTokens) { DARABONBA_PTR_SET_VALUE(accessTokens_, accessTokens) };
    inline UserSummaryModel& setAccessTokens(vector<AccessTokenModel> && accessTokens) { DARABONBA_PTR_SET_RVALUE(accessTokens_, accessTokens) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline UserSummaryModel& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // ramUser Field Functions 
    bool hasRamUser() const { return this->ramUser_ != nullptr;};
    void deleteRamUser() { this->ramUser_ = nullptr;};
    inline string getRamUser() const { DARABONBA_PTR_GET_DEFAULT(ramUser_, "") };
    inline UserSummaryModel& setRamUser(string ramUser) { DARABONBA_PTR_SET_VALUE(ramUser_, ramUser) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UserSummaryModel& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline UserSummaryModel& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    shared_ptr<vector<AccessTokenModel>> accessTokens_ {};
    shared_ptr<string> host_ {};
    shared_ptr<string> ramUser_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
