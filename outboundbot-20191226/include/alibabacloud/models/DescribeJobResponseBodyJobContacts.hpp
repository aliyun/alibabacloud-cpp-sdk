// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBRESPONSEBODYJOBCONTACTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBRESPONSEBODYJOBCONTACTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeJobResponseBodyJobContacts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobResponseBodyJobContacts& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(Honorific, honorific_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobResponseBodyJobContacts& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(Honorific, honorific_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    DescribeJobResponseBodyJobContacts() = default ;
    DescribeJobResponseBodyJobContacts(const DescribeJobResponseBodyJobContacts &) = default ;
    DescribeJobResponseBodyJobContacts(DescribeJobResponseBodyJobContacts &&) = default ;
    DescribeJobResponseBodyJobContacts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobResponseBodyJobContacts() = default ;
    DescribeJobResponseBodyJobContacts& operator=(const DescribeJobResponseBodyJobContacts &) = default ;
    DescribeJobResponseBodyJobContacts& operator=(DescribeJobResponseBodyJobContacts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactId_ == nullptr
        && return this->contactName_ == nullptr && return this->honorific_ == nullptr && return this->jobId_ == nullptr && return this->phoneNumber_ == nullptr && return this->referenceId_ == nullptr
        && return this->role_ == nullptr && return this->state_ == nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline DescribeJobResponseBodyJobContacts& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string contactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline DescribeJobResponseBodyJobContacts& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // honorific Field Functions 
    bool hasHonorific() const { return this->honorific_ != nullptr;};
    void deleteHonorific() { this->honorific_ = nullptr;};
    inline string honorific() const { DARABONBA_PTR_GET_DEFAULT(honorific_, "") };
    inline DescribeJobResponseBodyJobContacts& setHonorific(string honorific) { DARABONBA_PTR_SET_VALUE(honorific_, honorific) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeJobResponseBodyJobContacts& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline DescribeJobResponseBodyJobContacts& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // referenceId Field Functions 
    bool hasReferenceId() const { return this->referenceId_ != nullptr;};
    void deleteReferenceId() { this->referenceId_ = nullptr;};
    inline string referenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
    inline DescribeJobResponseBodyJobContacts& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline DescribeJobResponseBodyJobContacts& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeJobResponseBodyJobContacts& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    std::shared_ptr<string> contactId_ = nullptr;
    std::shared_ptr<string> contactName_ = nullptr;
    std::shared_ptr<string> honorific_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> phoneNumber_ = nullptr;
    std::shared_ptr<string> referenceId_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
