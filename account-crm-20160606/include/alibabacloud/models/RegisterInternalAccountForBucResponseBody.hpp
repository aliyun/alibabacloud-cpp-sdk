// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERINTERNALACCOUNTFORBUCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REGISTERINTERNALACCOUNTFORBUCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class RegisterInternalAccountForBucResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterInternalAccountForBucResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(LocalizedMessage, localizedMessage_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterInternalAccountForBucResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(LocalizedMessage, localizedMessage_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RegisterInternalAccountForBucResponseBody() = default ;
    RegisterInternalAccountForBucResponseBody(const RegisterInternalAccountForBucResponseBody &) = default ;
    RegisterInternalAccountForBucResponseBody(RegisterInternalAccountForBucResponseBody &&) = default ;
    RegisterInternalAccountForBucResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterInternalAccountForBucResponseBody() = default ;
    RegisterInternalAccountForBucResponseBody& operator=(const RegisterInternalAccountForBucResponseBody &) = default ;
    RegisterInternalAccountForBucResponseBody& operator=(RegisterInternalAccountForBucResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
        DARABONBA_PTR_TO_JSON(AccountStructure, accountStructure_);
        DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
        DARABONBA_PTR_TO_JSON(HavanaId, havanaId_);
        DARABONBA_PTR_TO_JSON(LastLoginTime, lastLoginTime_);
        DARABONBA_PTR_TO_JSON(OwnerBid, ownerBid_);
        DARABONBA_PTR_TO_JSON(ParentPk, parentPk_);
        DARABONBA_PTR_TO_JSON(PartnerPk, partnerPk_);
        DARABONBA_PTR_TO_JSON(Pk, pk_);
        DARABONBA_PTR_TO_JSON(Site, site_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
        DARABONBA_PTR_FROM_JSON(AccountStructure, accountStructure_);
        DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
        DARABONBA_PTR_FROM_JSON(HavanaId, havanaId_);
        DARABONBA_PTR_FROM_JSON(LastLoginTime, lastLoginTime_);
        DARABONBA_PTR_FROM_JSON(OwnerBid, ownerBid_);
        DARABONBA_PTR_FROM_JSON(ParentPk, parentPk_);
        DARABONBA_PTR_FROM_JSON(PartnerPk, partnerPk_);
        DARABONBA_PTR_FROM_JSON(Pk, pk_);
        DARABONBA_PTR_FROM_JSON(Site, site_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountStatus_ == nullptr
        && this->accountStructure_ == nullptr && this->extendInfo_ == nullptr && this->havanaId_ == nullptr && this->lastLoginTime_ == nullptr && this->ownerBid_ == nullptr
        && this->parentPk_ == nullptr && this->partnerPk_ == nullptr && this->pk_ == nullptr && this->site_ == nullptr; };
      // accountStatus Field Functions 
      bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
      void deleteAccountStatus() { this->accountStatus_ = nullptr;};
      inline string getAccountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
      inline Data& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


      // accountStructure Field Functions 
      bool hasAccountStructure() const { return this->accountStructure_ != nullptr;};
      void deleteAccountStructure() { this->accountStructure_ = nullptr;};
      inline string getAccountStructure() const { DARABONBA_PTR_GET_DEFAULT(accountStructure_, "") };
      inline Data& setAccountStructure(string accountStructure) { DARABONBA_PTR_SET_VALUE(accountStructure_, accountStructure) };


      // extendInfo Field Functions 
      bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
      void deleteExtendInfo() { this->extendInfo_ = nullptr;};
      inline string getExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
      inline Data& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


      // havanaId Field Functions 
      bool hasHavanaId() const { return this->havanaId_ != nullptr;};
      void deleteHavanaId() { this->havanaId_ = nullptr;};
      inline string getHavanaId() const { DARABONBA_PTR_GET_DEFAULT(havanaId_, "") };
      inline Data& setHavanaId(string havanaId) { DARABONBA_PTR_SET_VALUE(havanaId_, havanaId) };


      // lastLoginTime Field Functions 
      bool hasLastLoginTime() const { return this->lastLoginTime_ != nullptr;};
      void deleteLastLoginTime() { this->lastLoginTime_ = nullptr;};
      inline string getLastLoginTime() const { DARABONBA_PTR_GET_DEFAULT(lastLoginTime_, "") };
      inline Data& setLastLoginTime(string lastLoginTime) { DARABONBA_PTR_SET_VALUE(lastLoginTime_, lastLoginTime) };


      // ownerBid Field Functions 
      bool hasOwnerBid() const { return this->ownerBid_ != nullptr;};
      void deleteOwnerBid() { this->ownerBid_ = nullptr;};
      inline string getOwnerBid() const { DARABONBA_PTR_GET_DEFAULT(ownerBid_, "") };
      inline Data& setOwnerBid(string ownerBid) { DARABONBA_PTR_SET_VALUE(ownerBid_, ownerBid) };


      // parentPk Field Functions 
      bool hasParentPk() const { return this->parentPk_ != nullptr;};
      void deleteParentPk() { this->parentPk_ = nullptr;};
      inline string getParentPk() const { DARABONBA_PTR_GET_DEFAULT(parentPk_, "") };
      inline Data& setParentPk(string parentPk) { DARABONBA_PTR_SET_VALUE(parentPk_, parentPk) };


      // partnerPk Field Functions 
      bool hasPartnerPk() const { return this->partnerPk_ != nullptr;};
      void deletePartnerPk() { this->partnerPk_ = nullptr;};
      inline string getPartnerPk() const { DARABONBA_PTR_GET_DEFAULT(partnerPk_, "") };
      inline Data& setPartnerPk(string partnerPk) { DARABONBA_PTR_SET_VALUE(partnerPk_, partnerPk) };


      // pk Field Functions 
      bool hasPk() const { return this->pk_ != nullptr;};
      void deletePk() { this->pk_ = nullptr;};
      inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
      inline Data& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


      // site Field Functions 
      bool hasSite() const { return this->site_ != nullptr;};
      void deleteSite() { this->site_ = nullptr;};
      inline string getSite() const { DARABONBA_PTR_GET_DEFAULT(site_, "") };
      inline Data& setSite(string site) { DARABONBA_PTR_SET_VALUE(site_, site) };


    protected:
      shared_ptr<string> accountStatus_ {};
      shared_ptr<string> accountStructure_ {};
      shared_ptr<string> extendInfo_ {};
      shared_ptr<string> havanaId_ {};
      shared_ptr<string> lastLoginTime_ {};
      shared_ptr<string> ownerBid_ {};
      shared_ptr<string> parentPk_ {};
      shared_ptr<string> partnerPk_ {};
      shared_ptr<string> pk_ {};
      shared_ptr<string> site_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->localizedMessage_ == nullptr && this->message_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RegisterInternalAccountForBucResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RegisterInternalAccountForBucResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RegisterInternalAccountForBucResponseBody::Data) };
    inline RegisterInternalAccountForBucResponseBody::Data getData() { DARABONBA_PTR_GET(data_, RegisterInternalAccountForBucResponseBody::Data) };
    inline RegisterInternalAccountForBucResponseBody& setData(const RegisterInternalAccountForBucResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RegisterInternalAccountForBucResponseBody& setData(RegisterInternalAccountForBucResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // localizedMessage Field Functions 
    bool hasLocalizedMessage() const { return this->localizedMessage_ != nullptr;};
    void deleteLocalizedMessage() { this->localizedMessage_ = nullptr;};
    inline string getLocalizedMessage() const { DARABONBA_PTR_GET_DEFAULT(localizedMessage_, "") };
    inline RegisterInternalAccountForBucResponseBody& setLocalizedMessage(string localizedMessage) { DARABONBA_PTR_SET_VALUE(localizedMessage_, localizedMessage) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RegisterInternalAccountForBucResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline RegisterInternalAccountForBucResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RegisterInternalAccountForBucResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<RegisterInternalAccountForBucResponseBody::Data> data_ {};
    shared_ptr<string> localizedMessage_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> msg_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
