// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYENCRYPTEDACCOUNTPROFILEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYENCRYPTEDACCOUNTPROFILEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class QueryEncryptedAccountProfileInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEncryptedAccountProfileInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptedProfileInfo, encryptedProfileInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEncryptedAccountProfileInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptedProfileInfo, encryptedProfileInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryEncryptedAccountProfileInfoResponseBody() = default ;
    QueryEncryptedAccountProfileInfoResponseBody(const QueryEncryptedAccountProfileInfoResponseBody &) = default ;
    QueryEncryptedAccountProfileInfoResponseBody(QueryEncryptedAccountProfileInfoResponseBody &&) = default ;
    QueryEncryptedAccountProfileInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEncryptedAccountProfileInfoResponseBody() = default ;
    QueryEncryptedAccountProfileInfoResponseBody& operator=(const QueryEncryptedAccountProfileInfoResponseBody &) = default ;
    QueryEncryptedAccountProfileInfoResponseBody& operator=(QueryEncryptedAccountProfileInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EncryptedProfileInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EncryptedProfileInfo& obj) { 
        DARABONBA_PTR_TO_JSON(EncryptedAliyunID, encryptedAliyunID_);
        DARABONBA_PTR_TO_JSON(EncryptedEmail, encryptedEmail_);
        DARABONBA_PTR_TO_JSON(EncryptedMobile, encryptedMobile_);
        DARABONBA_PTR_TO_JSON(EncryptedSecurityMobile, encryptedSecurityMobile_);
        DARABONBA_PTR_TO_JSON(IsAliyunIdAnEmail, isAliyunIdAnEmail_);
        DARABONBA_PTR_TO_JSON(pk, pk_);
      };
      friend void from_json(const Darabonba::Json& j, EncryptedProfileInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(EncryptedAliyunID, encryptedAliyunID_);
        DARABONBA_PTR_FROM_JSON(EncryptedEmail, encryptedEmail_);
        DARABONBA_PTR_FROM_JSON(EncryptedMobile, encryptedMobile_);
        DARABONBA_PTR_FROM_JSON(EncryptedSecurityMobile, encryptedSecurityMobile_);
        DARABONBA_PTR_FROM_JSON(IsAliyunIdAnEmail, isAliyunIdAnEmail_);
        DARABONBA_PTR_FROM_JSON(pk, pk_);
      };
      EncryptedProfileInfo() = default ;
      EncryptedProfileInfo(const EncryptedProfileInfo &) = default ;
      EncryptedProfileInfo(EncryptedProfileInfo &&) = default ;
      EncryptedProfileInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EncryptedProfileInfo() = default ;
      EncryptedProfileInfo& operator=(const EncryptedProfileInfo &) = default ;
      EncryptedProfileInfo& operator=(EncryptedProfileInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->encryptedAliyunID_ == nullptr
        && this->encryptedEmail_ == nullptr && this->encryptedMobile_ == nullptr && this->encryptedSecurityMobile_ == nullptr && this->isAliyunIdAnEmail_ == nullptr && this->pk_ == nullptr; };
      // encryptedAliyunID Field Functions 
      bool hasEncryptedAliyunID() const { return this->encryptedAliyunID_ != nullptr;};
      void deleteEncryptedAliyunID() { this->encryptedAliyunID_ = nullptr;};
      inline string getEncryptedAliyunID() const { DARABONBA_PTR_GET_DEFAULT(encryptedAliyunID_, "") };
      inline EncryptedProfileInfo& setEncryptedAliyunID(string encryptedAliyunID) { DARABONBA_PTR_SET_VALUE(encryptedAliyunID_, encryptedAliyunID) };


      // encryptedEmail Field Functions 
      bool hasEncryptedEmail() const { return this->encryptedEmail_ != nullptr;};
      void deleteEncryptedEmail() { this->encryptedEmail_ = nullptr;};
      inline string getEncryptedEmail() const { DARABONBA_PTR_GET_DEFAULT(encryptedEmail_, "") };
      inline EncryptedProfileInfo& setEncryptedEmail(string encryptedEmail) { DARABONBA_PTR_SET_VALUE(encryptedEmail_, encryptedEmail) };


      // encryptedMobile Field Functions 
      bool hasEncryptedMobile() const { return this->encryptedMobile_ != nullptr;};
      void deleteEncryptedMobile() { this->encryptedMobile_ = nullptr;};
      inline string getEncryptedMobile() const { DARABONBA_PTR_GET_DEFAULT(encryptedMobile_, "") };
      inline EncryptedProfileInfo& setEncryptedMobile(string encryptedMobile) { DARABONBA_PTR_SET_VALUE(encryptedMobile_, encryptedMobile) };


      // encryptedSecurityMobile Field Functions 
      bool hasEncryptedSecurityMobile() const { return this->encryptedSecurityMobile_ != nullptr;};
      void deleteEncryptedSecurityMobile() { this->encryptedSecurityMobile_ = nullptr;};
      inline string getEncryptedSecurityMobile() const { DARABONBA_PTR_GET_DEFAULT(encryptedSecurityMobile_, "") };
      inline EncryptedProfileInfo& setEncryptedSecurityMobile(string encryptedSecurityMobile) { DARABONBA_PTR_SET_VALUE(encryptedSecurityMobile_, encryptedSecurityMobile) };


      // isAliyunIdAnEmail Field Functions 
      bool hasIsAliyunIdAnEmail() const { return this->isAliyunIdAnEmail_ != nullptr;};
      void deleteIsAliyunIdAnEmail() { this->isAliyunIdAnEmail_ = nullptr;};
      inline bool getIsAliyunIdAnEmail() const { DARABONBA_PTR_GET_DEFAULT(isAliyunIdAnEmail_, false) };
      inline EncryptedProfileInfo& setIsAliyunIdAnEmail(bool isAliyunIdAnEmail) { DARABONBA_PTR_SET_VALUE(isAliyunIdAnEmail_, isAliyunIdAnEmail) };


      // pk Field Functions 
      bool hasPk() const { return this->pk_ != nullptr;};
      void deletePk() { this->pk_ = nullptr;};
      inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
      inline EncryptedProfileInfo& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


    protected:
      shared_ptr<string> encryptedAliyunID_ {};
      shared_ptr<string> encryptedEmail_ {};
      shared_ptr<string> encryptedMobile_ {};
      shared_ptr<string> encryptedSecurityMobile_ {};
      shared_ptr<bool> isAliyunIdAnEmail_ {};
      shared_ptr<string> pk_ {};
    };

    virtual bool empty() const override { return this->encryptedProfileInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // encryptedProfileInfo Field Functions 
    bool hasEncryptedProfileInfo() const { return this->encryptedProfileInfo_ != nullptr;};
    void deleteEncryptedProfileInfo() { this->encryptedProfileInfo_ = nullptr;};
    inline const QueryEncryptedAccountProfileInfoResponseBody::EncryptedProfileInfo & getEncryptedProfileInfo() const { DARABONBA_PTR_GET_CONST(encryptedProfileInfo_, QueryEncryptedAccountProfileInfoResponseBody::EncryptedProfileInfo) };
    inline QueryEncryptedAccountProfileInfoResponseBody::EncryptedProfileInfo getEncryptedProfileInfo() { DARABONBA_PTR_GET(encryptedProfileInfo_, QueryEncryptedAccountProfileInfoResponseBody::EncryptedProfileInfo) };
    inline QueryEncryptedAccountProfileInfoResponseBody& setEncryptedProfileInfo(const QueryEncryptedAccountProfileInfoResponseBody::EncryptedProfileInfo & encryptedProfileInfo) { DARABONBA_PTR_SET_VALUE(encryptedProfileInfo_, encryptedProfileInfo) };
    inline QueryEncryptedAccountProfileInfoResponseBody& setEncryptedProfileInfo(QueryEncryptedAccountProfileInfoResponseBody::EncryptedProfileInfo && encryptedProfileInfo) { DARABONBA_PTR_SET_RVALUE(encryptedProfileInfo_, encryptedProfileInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryEncryptedAccountProfileInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryEncryptedAccountProfileInfoResponseBody::EncryptedProfileInfo> encryptedProfileInfo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
