// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGECONTACTDELETIONSTATUSRESPONSEBODYCONTACTDELETIONSTATUSFAILREASONLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGECONTACTDELETIONSTATUSRESPONSEBODYCONTACTDELETIONSTATUSFAILREASONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(MessageTypes, messageTypes_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(MessageTypes, messageTypes_);
    };
    GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList() = default ;
    GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList(const GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList &) = default ;
    GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList(GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList &&) = default ;
    GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList() = default ;
    GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList& operator=(const GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList &) = default ;
    GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList& operator=(GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->messageTypes_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // messageTypes Field Functions 
    bool hasMessageTypes() const { return this->messageTypes_ != nullptr;};
    void deleteMessageTypes() { this->messageTypes_ = nullptr;};
    inline const vector<string> & messageTypes() const { DARABONBA_PTR_GET_CONST(messageTypes_, vector<string>) };
    inline vector<string> messageTypes() { DARABONBA_PTR_GET(messageTypes_, vector<string>) };
    inline GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList& setMessageTypes(const vector<string> & messageTypes) { DARABONBA_PTR_SET_VALUE(messageTypes_, messageTypes) };
    inline GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList& setMessageTypes(vector<string> && messageTypes) { DARABONBA_PTR_SET_RVALUE(messageTypes_, messageTypes) };


  protected:
    // The Alibaba Cloud account ID of the member.
    std::shared_ptr<string> accountId_ = nullptr;
    // The types of messages received by the contact.
    std::shared_ptr<vector<string>> messageTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
