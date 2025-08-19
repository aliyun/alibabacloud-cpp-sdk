// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGECONTACTDELETIONSTATUSRESPONSEBODYCONTACTDELETIONSTATUS_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGECONTACTDELETIONSTATUSRESPONSEBODYCONTACTDELETIONSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class GetMessageContactDeletionStatusResponseBodyContactDeletionStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageContactDeletionStatusResponseBodyContactDeletionStatus& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(FailReasonList, failReasonList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageContactDeletionStatusResponseBodyContactDeletionStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(FailReasonList, failReasonList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetMessageContactDeletionStatusResponseBodyContactDeletionStatus() = default ;
    GetMessageContactDeletionStatusResponseBodyContactDeletionStatus(const GetMessageContactDeletionStatusResponseBodyContactDeletionStatus &) = default ;
    GetMessageContactDeletionStatusResponseBodyContactDeletionStatus(GetMessageContactDeletionStatusResponseBodyContactDeletionStatus &&) = default ;
    GetMessageContactDeletionStatusResponseBodyContactDeletionStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageContactDeletionStatusResponseBodyContactDeletionStatus() = default ;
    GetMessageContactDeletionStatusResponseBodyContactDeletionStatus& operator=(const GetMessageContactDeletionStatusResponseBodyContactDeletionStatus &) = default ;
    GetMessageContactDeletionStatusResponseBodyContactDeletionStatus& operator=(GetMessageContactDeletionStatusResponseBodyContactDeletionStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactId_ != nullptr
        && this->failReasonList_ != nullptr && this->status_ != nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline GetMessageContactDeletionStatusResponseBodyContactDeletionStatus& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // failReasonList Field Functions 
    bool hasFailReasonList() const { return this->failReasonList_ != nullptr;};
    void deleteFailReasonList() { this->failReasonList_ = nullptr;};
    inline const vector<Models::GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList> & failReasonList() const { DARABONBA_PTR_GET_CONST(failReasonList_, vector<Models::GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList>) };
    inline vector<Models::GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList> failReasonList() { DARABONBA_PTR_GET(failReasonList_, vector<Models::GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList>) };
    inline GetMessageContactDeletionStatusResponseBodyContactDeletionStatus& setFailReasonList(const vector<Models::GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList> & failReasonList) { DARABONBA_PTR_SET_VALUE(failReasonList_, failReasonList) };
    inline GetMessageContactDeletionStatusResponseBodyContactDeletionStatus& setFailReasonList(vector<Models::GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList> && failReasonList) { DARABONBA_PTR_SET_RVALUE(failReasonList_, failReasonList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetMessageContactDeletionStatusResponseBodyContactDeletionStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the contact.
    std::shared_ptr<string> contactId_ = nullptr;
    // The types of messages received by the contact.
    std::shared_ptr<vector<Models::GetMessageContactDeletionStatusResponseBodyContactDeletionStatusFailReasonList>> failReasonList_ = nullptr;
    // The deletion status of the contact. Valid values:
    // 
    // *   Deleting
    // *   Failed
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
