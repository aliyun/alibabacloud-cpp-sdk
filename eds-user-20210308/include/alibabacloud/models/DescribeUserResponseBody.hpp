// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribeUserResponseBody() = default ;
    DescribeUserResponseBody(const DescribeUserResponseBody &) = default ;
    DescribeUserResponseBody(DescribeUserResponseBody &&) = default ;
    DescribeUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserResponseBody() = default ;
    DescribeUserResponseBody& operator=(const DescribeUserResponseBody &) = default ;
    DescribeUserResponseBody& operator=(DescribeUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class User : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const User& obj) { 
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(ExternalInfo, externalInfo_);
        DARABONBA_PTR_TO_JSON(Extras, extras_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(NickName, nickName_);
        DARABONBA_PTR_TO_JSON(OrgIds, orgIds_);
        DARABONBA_PTR_TO_JSON(OrgPaths, orgPaths_);
        DARABONBA_PTR_TO_JSON(Phone, phone_);
        DARABONBA_PTR_TO_JSON(Properties, properties_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(WyId, wyId_);
      };
      friend void from_json(const Darabonba::Json& j, User& obj) { 
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(ExternalInfo, externalInfo_);
        DARABONBA_PTR_FROM_JSON(Extras, extras_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(NickName, nickName_);
        DARABONBA_PTR_FROM_JSON(OrgIds, orgIds_);
        DARABONBA_PTR_FROM_JSON(OrgPaths, orgPaths_);
        DARABONBA_PTR_FROM_JSON(Phone, phone_);
        DARABONBA_PTR_FROM_JSON(Properties, properties_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(WyId, wyId_);
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
      class Properties : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Properties& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Properties& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Properties() = default ;
        Properties(const Properties &) = default ;
        Properties(Properties &&) = default ;
        Properties(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Properties() = default ;
        Properties& operator=(const Properties &) = default ;
        Properties& operator=(Properties &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Properties& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Properties& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      class ExternalInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExternalInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ExternalId, externalId_);
          DARABONBA_PTR_TO_JSON(ExternalName, externalName_);
          DARABONBA_PTR_TO_JSON(JobNumber, jobNumber_);
          DARABONBA_PTR_TO_JSON(SsoType, ssoType_);
        };
        friend void from_json(const Darabonba::Json& j, ExternalInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ExternalId, externalId_);
          DARABONBA_PTR_FROM_JSON(ExternalName, externalName_);
          DARABONBA_PTR_FROM_JSON(JobNumber, jobNumber_);
          DARABONBA_PTR_FROM_JSON(SsoType, ssoType_);
        };
        ExternalInfo() = default ;
        ExternalInfo(const ExternalInfo &) = default ;
        ExternalInfo(ExternalInfo &&) = default ;
        ExternalInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExternalInfo() = default ;
        ExternalInfo& operator=(const ExternalInfo &) = default ;
        ExternalInfo& operator=(ExternalInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->externalId_ == nullptr
        && this->externalName_ == nullptr && this->jobNumber_ == nullptr && this->ssoType_ == nullptr; };
        // externalId Field Functions 
        bool hasExternalId() const { return this->externalId_ != nullptr;};
        void deleteExternalId() { this->externalId_ = nullptr;};
        inline string getExternalId() const { DARABONBA_PTR_GET_DEFAULT(externalId_, "") };
        inline ExternalInfo& setExternalId(string externalId) { DARABONBA_PTR_SET_VALUE(externalId_, externalId) };


        // externalName Field Functions 
        bool hasExternalName() const { return this->externalName_ != nullptr;};
        void deleteExternalName() { this->externalName_ = nullptr;};
        inline string getExternalName() const { DARABONBA_PTR_GET_DEFAULT(externalName_, "") };
        inline ExternalInfo& setExternalName(string externalName) { DARABONBA_PTR_SET_VALUE(externalName_, externalName) };


        // jobNumber Field Functions 
        bool hasJobNumber() const { return this->jobNumber_ != nullptr;};
        void deleteJobNumber() { this->jobNumber_ = nullptr;};
        inline string getJobNumber() const { DARABONBA_PTR_GET_DEFAULT(jobNumber_, "") };
        inline ExternalInfo& setJobNumber(string jobNumber) { DARABONBA_PTR_SET_VALUE(jobNumber_, jobNumber) };


        // ssoType Field Functions 
        bool hasSsoType() const { return this->ssoType_ != nullptr;};
        void deleteSsoType() { this->ssoType_ = nullptr;};
        inline string getSsoType() const { DARABONBA_PTR_GET_DEFAULT(ssoType_, "") };
        inline ExternalInfo& setSsoType(string ssoType) { DARABONBA_PTR_SET_VALUE(ssoType_, ssoType) };


      protected:
        shared_ptr<string> externalId_ {};
        shared_ptr<string> externalName_ {};
        shared_ptr<string> jobNumber_ {};
        shared_ptr<string> ssoType_ {};
      };

      virtual bool empty() const override { return this->email_ == nullptr
        && this->endUserId_ == nullptr && this->externalInfo_ == nullptr && this->extras_ == nullptr && this->gmtCreate_ == nullptr && this->nickName_ == nullptr
        && this->orgIds_ == nullptr && this->orgPaths_ == nullptr && this->phone_ == nullptr && this->properties_ == nullptr && this->remark_ == nullptr
        && this->status_ == nullptr && this->wyId_ == nullptr; };
      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline User& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline User& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // externalInfo Field Functions 
      bool hasExternalInfo() const { return this->externalInfo_ != nullptr;};
      void deleteExternalInfo() { this->externalInfo_ = nullptr;};
      inline const User::ExternalInfo & getExternalInfo() const { DARABONBA_PTR_GET_CONST(externalInfo_, User::ExternalInfo) };
      inline User::ExternalInfo getExternalInfo() { DARABONBA_PTR_GET(externalInfo_, User::ExternalInfo) };
      inline User& setExternalInfo(const User::ExternalInfo & externalInfo) { DARABONBA_PTR_SET_VALUE(externalInfo_, externalInfo) };
      inline User& setExternalInfo(User::ExternalInfo && externalInfo) { DARABONBA_PTR_SET_RVALUE(externalInfo_, externalInfo) };


      // extras Field Functions 
      bool hasExtras() const { return this->extras_ != nullptr;};
      void deleteExtras() { this->extras_ = nullptr;};
      inline const map<string, string> & getExtras() const { DARABONBA_PTR_GET_CONST(extras_, map<string, string>) };
      inline map<string, string> getExtras() { DARABONBA_PTR_GET(extras_, map<string, string>) };
      inline User& setExtras(const map<string, string> & extras) { DARABONBA_PTR_SET_VALUE(extras_, extras) };
      inline User& setExtras(map<string, string> && extras) { DARABONBA_PTR_SET_RVALUE(extras_, extras) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline User& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // nickName Field Functions 
      bool hasNickName() const { return this->nickName_ != nullptr;};
      void deleteNickName() { this->nickName_ = nullptr;};
      inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
      inline User& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


      // orgIds Field Functions 
      bool hasOrgIds() const { return this->orgIds_ != nullptr;};
      void deleteOrgIds() { this->orgIds_ = nullptr;};
      inline const vector<string> & getOrgIds() const { DARABONBA_PTR_GET_CONST(orgIds_, vector<string>) };
      inline vector<string> getOrgIds() { DARABONBA_PTR_GET(orgIds_, vector<string>) };
      inline User& setOrgIds(const vector<string> & orgIds) { DARABONBA_PTR_SET_VALUE(orgIds_, orgIds) };
      inline User& setOrgIds(vector<string> && orgIds) { DARABONBA_PTR_SET_RVALUE(orgIds_, orgIds) };


      // orgPaths Field Functions 
      bool hasOrgPaths() const { return this->orgPaths_ != nullptr;};
      void deleteOrgPaths() { this->orgPaths_ = nullptr;};
      inline const vector<string> & getOrgPaths() const { DARABONBA_PTR_GET_CONST(orgPaths_, vector<string>) };
      inline vector<string> getOrgPaths() { DARABONBA_PTR_GET(orgPaths_, vector<string>) };
      inline User& setOrgPaths(const vector<string> & orgPaths) { DARABONBA_PTR_SET_VALUE(orgPaths_, orgPaths) };
      inline User& setOrgPaths(vector<string> && orgPaths) { DARABONBA_PTR_SET_RVALUE(orgPaths_, orgPaths) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline User& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      // properties Field Functions 
      bool hasProperties() const { return this->properties_ != nullptr;};
      void deleteProperties() { this->properties_ = nullptr;};
      inline const vector<User::Properties> & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, vector<User::Properties>) };
      inline vector<User::Properties> getProperties() { DARABONBA_PTR_GET(properties_, vector<User::Properties>) };
      inline User& setProperties(const vector<User::Properties> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
      inline User& setProperties(vector<User::Properties> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline User& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline User& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // wyId Field Functions 
      bool hasWyId() const { return this->wyId_ != nullptr;};
      void deleteWyId() { this->wyId_ = nullptr;};
      inline string getWyId() const { DARABONBA_PTR_GET_DEFAULT(wyId_, "") };
      inline User& setWyId(string wyId) { DARABONBA_PTR_SET_VALUE(wyId_, wyId) };


    protected:
      shared_ptr<string> email_ {};
      shared_ptr<string> endUserId_ {};
      shared_ptr<User::ExternalInfo> externalInfo_ {};
      shared_ptr<map<string, string>> extras_ {};
      shared_ptr<int64_t> gmtCreate_ {};
      shared_ptr<string> nickName_ {};
      shared_ptr<vector<string>> orgIds_ {};
      shared_ptr<vector<string>> orgPaths_ {};
      shared_ptr<string> phone_ {};
      shared_ptr<vector<User::Properties>> properties_ {};
      shared_ptr<string> remark_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> wyId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->user_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const DescribeUserResponseBody::User & getUser() const { DARABONBA_PTR_GET_CONST(user_, DescribeUserResponseBody::User) };
    inline DescribeUserResponseBody::User getUser() { DARABONBA_PTR_GET(user_, DescribeUserResponseBody::User) };
    inline DescribeUserResponseBody& setUser(const DescribeUserResponseBody::User & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline DescribeUserResponseBody& setUser(DescribeUserResponseBody::User && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeUserResponseBody::User> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
