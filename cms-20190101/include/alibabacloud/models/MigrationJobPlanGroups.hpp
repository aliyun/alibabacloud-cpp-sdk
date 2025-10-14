// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONJOBPLANGROUPS_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONJOBPLANGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class MigrationJobPlanGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationJobPlanGroups& obj) { 
      DARABONBA_PTR_TO_JSON(Contacts, contacts_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationJobPlanGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    MigrationJobPlanGroups() = default ;
    MigrationJobPlanGroups(const MigrationJobPlanGroups &) = default ;
    MigrationJobPlanGroups(MigrationJobPlanGroups &&) = default ;
    MigrationJobPlanGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationJobPlanGroups() = default ;
    MigrationJobPlanGroups& operator=(const MigrationJobPlanGroups &) = default ;
    MigrationJobPlanGroups& operator=(MigrationJobPlanGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contacts_ == nullptr
        && return this->name_ == nullptr; };
    // contacts Field Functions 
    bool hasContacts() const { return this->contacts_ != nullptr;};
    void deleteContacts() { this->contacts_ = nullptr;};
    inline const vector<string> & contacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<string>) };
    inline vector<string> contacts() { DARABONBA_PTR_GET(contacts_, vector<string>) };
    inline MigrationJobPlanGroups& setContacts(const vector<string> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
    inline MigrationJobPlanGroups& setContacts(vector<string> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MigrationJobPlanGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<vector<string>> contacts_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
