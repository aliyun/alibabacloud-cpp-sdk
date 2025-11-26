// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBSWITHRESULTRESPONSEBODYJOBSLISTLATESTTASKCONTACT_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBSWITHRESULTRESPONSEBODYJOBSLISTLATESTTASKCONTACT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class QueryJobsWithResultResponseBodyJobsListLatestTaskContact : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobsWithResultResponseBodyJobsListLatestTaskContact& obj) { 
      DARABONBA_PTR_TO_JSON(Honorific, honorific_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(JobUuid, jobUuid_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(PreferredPhoneNumber, preferredPhoneNumber_);
      DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(Round, round_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobsWithResultResponseBodyJobsListLatestTaskContact& obj) { 
      DARABONBA_PTR_FROM_JSON(Honorific, honorific_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(JobUuid, jobUuid_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(PreferredPhoneNumber, preferredPhoneNumber_);
      DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(Round, round_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    QueryJobsWithResultResponseBodyJobsListLatestTaskContact() = default ;
    QueryJobsWithResultResponseBodyJobsListLatestTaskContact(const QueryJobsWithResultResponseBodyJobsListLatestTaskContact &) = default ;
    QueryJobsWithResultResponseBodyJobsListLatestTaskContact(QueryJobsWithResultResponseBodyJobsListLatestTaskContact &&) = default ;
    QueryJobsWithResultResponseBodyJobsListLatestTaskContact(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobsWithResultResponseBodyJobsListLatestTaskContact() = default ;
    QueryJobsWithResultResponseBodyJobsListLatestTaskContact& operator=(const QueryJobsWithResultResponseBodyJobsListLatestTaskContact &) = default ;
    QueryJobsWithResultResponseBodyJobsListLatestTaskContact& operator=(QueryJobsWithResultResponseBodyJobsListLatestTaskContact &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->honorific_ == nullptr
        && return this->id_ == nullptr && return this->jobUuid_ == nullptr && return this->name_ == nullptr && return this->phoneNumber_ == nullptr && return this->preferredPhoneNumber_ == nullptr
        && return this->referenceId_ == nullptr && return this->role_ == nullptr && return this->round_ == nullptr && return this->state_ == nullptr; };
    // honorific Field Functions 
    bool hasHonorific() const { return this->honorific_ != nullptr;};
    void deleteHonorific() { this->honorific_ = nullptr;};
    inline string honorific() const { DARABONBA_PTR_GET_DEFAULT(honorific_, "") };
    inline QueryJobsWithResultResponseBodyJobsListLatestTaskContact& setHonorific(string honorific) { DARABONBA_PTR_SET_VALUE(honorific_, honorific) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryJobsWithResultResponseBodyJobsListLatestTaskContact& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jobUuid Field Functions 
    bool hasJobUuid() const { return this->jobUuid_ != nullptr;};
    void deleteJobUuid() { this->jobUuid_ = nullptr;};
    inline string jobUuid() const { DARABONBA_PTR_GET_DEFAULT(jobUuid_, "") };
    inline QueryJobsWithResultResponseBodyJobsListLatestTaskContact& setJobUuid(string jobUuid) { DARABONBA_PTR_SET_VALUE(jobUuid_, jobUuid) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryJobsWithResultResponseBodyJobsListLatestTaskContact& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline QueryJobsWithResultResponseBodyJobsListLatestTaskContact& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // preferredPhoneNumber Field Functions 
    bool hasPreferredPhoneNumber() const { return this->preferredPhoneNumber_ != nullptr;};
    void deletePreferredPhoneNumber() { this->preferredPhoneNumber_ = nullptr;};
    inline string preferredPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(preferredPhoneNumber_, "") };
    inline QueryJobsWithResultResponseBodyJobsListLatestTaskContact& setPreferredPhoneNumber(string preferredPhoneNumber) { DARABONBA_PTR_SET_VALUE(preferredPhoneNumber_, preferredPhoneNumber) };


    // referenceId Field Functions 
    bool hasReferenceId() const { return this->referenceId_ != nullptr;};
    void deleteReferenceId() { this->referenceId_ = nullptr;};
    inline string referenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
    inline QueryJobsWithResultResponseBodyJobsListLatestTaskContact& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline QueryJobsWithResultResponseBodyJobsListLatestTaskContact& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // round Field Functions 
    bool hasRound() const { return this->round_ != nullptr;};
    void deleteRound() { this->round_ = nullptr;};
    inline int32_t round() const { DARABONBA_PTR_GET_DEFAULT(round_, 0) };
    inline QueryJobsWithResultResponseBodyJobsListLatestTaskContact& setRound(int32_t round) { DARABONBA_PTR_SET_VALUE(round_, round) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline QueryJobsWithResultResponseBodyJobsListLatestTaskContact& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    std::shared_ptr<string> honorific_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> jobUuid_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> phoneNumber_ = nullptr;
    std::shared_ptr<string> preferredPhoneNumber_ = nullptr;
    std::shared_ptr<string> referenceId_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<int32_t> round_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
