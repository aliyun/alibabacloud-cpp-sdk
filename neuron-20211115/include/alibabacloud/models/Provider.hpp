// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROVIDER_HPP_
#define ALIBABACLOUD_MODELS_PROVIDER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class Provider : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Provider& obj) { 
      DARABONBA_PTR_TO_JSON(company, company_);
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(contact, contact_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(team, team_);
      DARABONBA_PTR_TO_JSON(teamId, teamId_);
    };
    friend void from_json(const Darabonba::Json& j, Provider& obj) { 
      DARABONBA_PTR_FROM_JSON(company, company_);
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(contact, contact_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(team, team_);
      DARABONBA_PTR_FROM_JSON(teamId, teamId_);
    };
    Provider() = default ;
    Provider(const Provider &) = default ;
    Provider(Provider &&) = default ;
    Provider(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Provider() = default ;
    Provider& operator=(const Provider &) = default ;
    Provider& operator=(Provider &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->company_ == nullptr
        && this->companyId_ == nullptr && this->contact_ == nullptr && this->email_ == nullptr && this->team_ == nullptr && this->teamId_ == nullptr; };
    // company Field Functions 
    bool hasCompany() const { return this->company_ != nullptr;};
    void deleteCompany() { this->company_ = nullptr;};
    inline string getCompany() const { DARABONBA_PTR_GET_DEFAULT(company_, "") };
    inline Provider& setCompany(string company) { DARABONBA_PTR_SET_VALUE(company_, company) };


    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline Provider& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // contact Field Functions 
    bool hasContact() const { return this->contact_ != nullptr;};
    void deleteContact() { this->contact_ = nullptr;};
    inline string getContact() const { DARABONBA_PTR_GET_DEFAULT(contact_, "") };
    inline Provider& setContact(string contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline Provider& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // team Field Functions 
    bool hasTeam() const { return this->team_ != nullptr;};
    void deleteTeam() { this->team_ = nullptr;};
    inline string getTeam() const { DARABONBA_PTR_GET_DEFAULT(team_, "") };
    inline Provider& setTeam(string team) { DARABONBA_PTR_SET_VALUE(team_, team) };


    // teamId Field Functions 
    bool hasTeamId() const { return this->teamId_ != nullptr;};
    void deleteTeamId() { this->teamId_ = nullptr;};
    inline int64_t getTeamId() const { DARABONBA_PTR_GET_DEFAULT(teamId_, 0L) };
    inline Provider& setTeamId(int64_t teamId) { DARABONBA_PTR_SET_VALUE(teamId_, teamId) };


  protected:
    shared_ptr<string> company_ {};
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<string> contact_ {};
    shared_ptr<string> email_ {};
    shared_ptr<string> team_ {};
    shared_ptr<int64_t> teamId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
