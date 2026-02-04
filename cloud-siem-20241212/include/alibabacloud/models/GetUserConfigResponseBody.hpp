// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetUserConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    GetUserConfigResponseBody() = default ;
    GetUserConfigResponseBody(const GetUserConfigResponseBody &) = default ;
    GetUserConfigResponseBody(GetUserConfigResponseBody &&) = default ;
    GetUserConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserConfigResponseBody() = default ;
    GetUserConfigResponseBody& operator=(const GetUserConfigResponseBody &) = default ;
    GetUserConfigResponseBody& operator=(GetUserConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class User : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const User& obj) { 
        DARABONBA_PTR_TO_JSON(CtdrVersion, ctdrVersion_);
        DARABONBA_PTR_TO_JSON(DataStorageVersion, dataStorageVersion_);
        DARABONBA_PTR_TO_JSON(UpgradeCtdrVersion, upgradeCtdrVersion_);
        DARABONBA_PTR_TO_JSON(UpgradeStatus, upgradeStatus_);
      };
      friend void from_json(const Darabonba::Json& j, User& obj) { 
        DARABONBA_PTR_FROM_JSON(CtdrVersion, ctdrVersion_);
        DARABONBA_PTR_FROM_JSON(DataStorageVersion, dataStorageVersion_);
        DARABONBA_PTR_FROM_JSON(UpgradeCtdrVersion, upgradeCtdrVersion_);
        DARABONBA_PTR_FROM_JSON(UpgradeStatus, upgradeStatus_);
      };
      User() = default ;
      User(const User &) = default ;
      User(User &&) = default ;
      User(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~User() = default ;
      User& operator=(const User &) = default ;
      User& operator=(User &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ctdrVersion_ == nullptr
        && this->dataStorageVersion_ == nullptr && this->upgradeCtdrVersion_ == nullptr && this->upgradeStatus_ == nullptr; };
      // ctdrVersion Field Functions 
      bool hasCtdrVersion() const { return this->ctdrVersion_ != nullptr;};
      void deleteCtdrVersion() { this->ctdrVersion_ = nullptr;};
      inline string getCtdrVersion() const { DARABONBA_PTR_GET_DEFAULT(ctdrVersion_, "") };
      inline User& setCtdrVersion(string ctdrVersion) { DARABONBA_PTR_SET_VALUE(ctdrVersion_, ctdrVersion) };


      // dataStorageVersion Field Functions 
      bool hasDataStorageVersion() const { return this->dataStorageVersion_ != nullptr;};
      void deleteDataStorageVersion() { this->dataStorageVersion_ = nullptr;};
      inline string getDataStorageVersion() const { DARABONBA_PTR_GET_DEFAULT(dataStorageVersion_, "") };
      inline User& setDataStorageVersion(string dataStorageVersion) { DARABONBA_PTR_SET_VALUE(dataStorageVersion_, dataStorageVersion) };


      // upgradeCtdrVersion Field Functions 
      bool hasUpgradeCtdrVersion() const { return this->upgradeCtdrVersion_ != nullptr;};
      void deleteUpgradeCtdrVersion() { this->upgradeCtdrVersion_ = nullptr;};
      inline string getUpgradeCtdrVersion() const { DARABONBA_PTR_GET_DEFAULT(upgradeCtdrVersion_, "") };
      inline User& setUpgradeCtdrVersion(string upgradeCtdrVersion) { DARABONBA_PTR_SET_VALUE(upgradeCtdrVersion_, upgradeCtdrVersion) };


      // upgradeStatus Field Functions 
      bool hasUpgradeStatus() const { return this->upgradeStatus_ != nullptr;};
      void deleteUpgradeStatus() { this->upgradeStatus_ = nullptr;};
      inline string getUpgradeStatus() const { DARABONBA_PTR_GET_DEFAULT(upgradeStatus_, "") };
      inline User& setUpgradeStatus(string upgradeStatus) { DARABONBA_PTR_SET_VALUE(upgradeStatus_, upgradeStatus) };


    protected:
      shared_ptr<string> ctdrVersion_ {};
      shared_ptr<string> dataStorageVersion_ {};
      shared_ptr<string> upgradeCtdrVersion_ {};
      shared_ptr<string> upgradeStatus_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->user_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const GetUserConfigResponseBody::User & getUser() const { DARABONBA_PTR_GET_CONST(user_, GetUserConfigResponseBody::User) };
    inline GetUserConfigResponseBody::User getUser() { DARABONBA_PTR_GET(user_, GetUserConfigResponseBody::User) };
    inline GetUserConfigResponseBody& setUser(const GetUserConfigResponseBody::User & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline GetUserConfigResponseBody& setUser(GetUserConfigResponseBody::User && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetUserConfigResponseBody::User> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
