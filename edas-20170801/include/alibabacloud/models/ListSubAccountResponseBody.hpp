// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListSubAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubAccountList, subAccountList_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubAccountList, subAccountList_);
    };
    ListSubAccountResponseBody() = default ;
    ListSubAccountResponseBody(const ListSubAccountResponseBody &) = default ;
    ListSubAccountResponseBody(ListSubAccountResponseBody &&) = default ;
    ListSubAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubAccountResponseBody() = default ;
    ListSubAccountResponseBody& operator=(const ListSubAccountResponseBody &) = default ;
    ListSubAccountResponseBody& operator=(ListSubAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubAccountList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubAccountList& obj) { 
        DARABONBA_PTR_TO_JSON(SubAccount, subAccount_);
      };
      friend void from_json(const Darabonba::Json& j, SubAccountList& obj) { 
        DARABONBA_PTR_FROM_JSON(SubAccount, subAccount_);
      };
      SubAccountList() = default ;
      SubAccountList(const SubAccountList &) = default ;
      SubAccountList(SubAccountList &&) = default ;
      SubAccountList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubAccountList() = default ;
      SubAccountList& operator=(const SubAccountList &) = default ;
      SubAccountList& operator=(SubAccountList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubAccount : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubAccount& obj) { 
          DARABONBA_PTR_TO_JSON(AdminEdasId, adminEdasId_);
          DARABONBA_PTR_TO_JSON(AdminUserId, adminUserId_);
          DARABONBA_PTR_TO_JSON(AdminUserKp, adminUserKp_);
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(Phone, phone_);
          DARABONBA_PTR_TO_JSON(SubEdasId, subEdasId_);
          DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
          DARABONBA_PTR_TO_JSON(SubUserKp, subUserKp_);
        };
        friend void from_json(const Darabonba::Json& j, SubAccount& obj) { 
          DARABONBA_PTR_FROM_JSON(AdminEdasId, adminEdasId_);
          DARABONBA_PTR_FROM_JSON(AdminUserId, adminUserId_);
          DARABONBA_PTR_FROM_JSON(AdminUserKp, adminUserKp_);
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(Phone, phone_);
          DARABONBA_PTR_FROM_JSON(SubEdasId, subEdasId_);
          DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
          DARABONBA_PTR_FROM_JSON(SubUserKp, subUserKp_);
        };
        SubAccount() = default ;
        SubAccount(const SubAccount &) = default ;
        SubAccount(SubAccount &&) = default ;
        SubAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubAccount() = default ;
        SubAccount& operator=(const SubAccount &) = default ;
        SubAccount& operator=(SubAccount &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->adminEdasId_ == nullptr
        && this->adminUserId_ == nullptr && this->adminUserKp_ == nullptr && this->email_ == nullptr && this->phone_ == nullptr && this->subEdasId_ == nullptr
        && this->subUserId_ == nullptr && this->subUserKp_ == nullptr; };
        // adminEdasId Field Functions 
        bool hasAdminEdasId() const { return this->adminEdasId_ != nullptr;};
        void deleteAdminEdasId() { this->adminEdasId_ = nullptr;};
        inline string getAdminEdasId() const { DARABONBA_PTR_GET_DEFAULT(adminEdasId_, "") };
        inline SubAccount& setAdminEdasId(string adminEdasId) { DARABONBA_PTR_SET_VALUE(adminEdasId_, adminEdasId) };


        // adminUserId Field Functions 
        bool hasAdminUserId() const { return this->adminUserId_ != nullptr;};
        void deleteAdminUserId() { this->adminUserId_ = nullptr;};
        inline string getAdminUserId() const { DARABONBA_PTR_GET_DEFAULT(adminUserId_, "") };
        inline SubAccount& setAdminUserId(string adminUserId) { DARABONBA_PTR_SET_VALUE(adminUserId_, adminUserId) };


        // adminUserKp Field Functions 
        bool hasAdminUserKp() const { return this->adminUserKp_ != nullptr;};
        void deleteAdminUserKp() { this->adminUserKp_ = nullptr;};
        inline string getAdminUserKp() const { DARABONBA_PTR_GET_DEFAULT(adminUserKp_, "") };
        inline SubAccount& setAdminUserKp(string adminUserKp) { DARABONBA_PTR_SET_VALUE(adminUserKp_, adminUserKp) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline SubAccount& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // phone Field Functions 
        bool hasPhone() const { return this->phone_ != nullptr;};
        void deletePhone() { this->phone_ = nullptr;};
        inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
        inline SubAccount& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


        // subEdasId Field Functions 
        bool hasSubEdasId() const { return this->subEdasId_ != nullptr;};
        void deleteSubEdasId() { this->subEdasId_ = nullptr;};
        inline string getSubEdasId() const { DARABONBA_PTR_GET_DEFAULT(subEdasId_, "") };
        inline SubAccount& setSubEdasId(string subEdasId) { DARABONBA_PTR_SET_VALUE(subEdasId_, subEdasId) };


        // subUserId Field Functions 
        bool hasSubUserId() const { return this->subUserId_ != nullptr;};
        void deleteSubUserId() { this->subUserId_ = nullptr;};
        inline string getSubUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, "") };
        inline SubAccount& setSubUserId(string subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


        // subUserKp Field Functions 
        bool hasSubUserKp() const { return this->subUserKp_ != nullptr;};
        void deleteSubUserKp() { this->subUserKp_ = nullptr;};
        inline string getSubUserKp() const { DARABONBA_PTR_GET_DEFAULT(subUserKp_, "") };
        inline SubAccount& setSubUserKp(string subUserKp) { DARABONBA_PTR_SET_VALUE(subUserKp_, subUserKp) };


      protected:
        shared_ptr<string> adminEdasId_ {};
        shared_ptr<string> adminUserId_ {};
        shared_ptr<string> adminUserKp_ {};
        shared_ptr<string> email_ {};
        shared_ptr<string> phone_ {};
        shared_ptr<string> subEdasId_ {};
        shared_ptr<string> subUserId_ {};
        shared_ptr<string> subUserKp_ {};
      };

      virtual bool empty() const override { return this->subAccount_ == nullptr; };
      // subAccount Field Functions 
      bool hasSubAccount() const { return this->subAccount_ != nullptr;};
      void deleteSubAccount() { this->subAccount_ = nullptr;};
      inline const vector<SubAccountList::SubAccount> & getSubAccount() const { DARABONBA_PTR_GET_CONST(subAccount_, vector<SubAccountList::SubAccount>) };
      inline vector<SubAccountList::SubAccount> getSubAccount() { DARABONBA_PTR_GET(subAccount_, vector<SubAccountList::SubAccount>) };
      inline SubAccountList& setSubAccount(const vector<SubAccountList::SubAccount> & subAccount) { DARABONBA_PTR_SET_VALUE(subAccount_, subAccount) };
      inline SubAccountList& setSubAccount(vector<SubAccountList::SubAccount> && subAccount) { DARABONBA_PTR_SET_RVALUE(subAccount_, subAccount) };


    protected:
      shared_ptr<vector<SubAccountList::SubAccount>> subAccount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->subAccountList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListSubAccountResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSubAccountResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSubAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subAccountList Field Functions 
    bool hasSubAccountList() const { return this->subAccountList_ != nullptr;};
    void deleteSubAccountList() { this->subAccountList_ = nullptr;};
    inline const ListSubAccountResponseBody::SubAccountList & getSubAccountList() const { DARABONBA_PTR_GET_CONST(subAccountList_, ListSubAccountResponseBody::SubAccountList) };
    inline ListSubAccountResponseBody::SubAccountList getSubAccountList() { DARABONBA_PTR_GET(subAccountList_, ListSubAccountResponseBody::SubAccountList) };
    inline ListSubAccountResponseBody& setSubAccountList(const ListSubAccountResponseBody::SubAccountList & subAccountList) { DARABONBA_PTR_SET_VALUE(subAccountList_, subAccountList) };
    inline ListSubAccountResponseBody& setSubAccountList(ListSubAccountResponseBody::SubAccountList && subAccountList) { DARABONBA_PTR_SET_RVALUE(subAccountList_, subAccountList) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<ListSubAccountResponseBody::SubAccountList> subAccountList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
