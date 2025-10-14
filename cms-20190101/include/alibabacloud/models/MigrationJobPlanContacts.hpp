// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONJOBPLANCONTACTS_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONJOBPLANCONTACTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MigrationJobPlanContactsChannels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class MigrationJobPlanContacts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationJobPlanContacts& obj) { 
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationJobPlanContacts& obj) { 
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    MigrationJobPlanContacts() = default ;
    MigrationJobPlanContacts(const MigrationJobPlanContacts &) = default ;
    MigrationJobPlanContacts(MigrationJobPlanContacts &&) = default ;
    MigrationJobPlanContacts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationJobPlanContacts() = default ;
    MigrationJobPlanContacts& operator=(const MigrationJobPlanContacts &) = default ;
    MigrationJobPlanContacts& operator=(MigrationJobPlanContacts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channels_ == nullptr
        && return this->name_ == nullptr; };
    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const vector<Models::MigrationJobPlanContactsChannels> & channels() const { DARABONBA_PTR_GET_CONST(channels_, vector<Models::MigrationJobPlanContactsChannels>) };
    inline vector<Models::MigrationJobPlanContactsChannels> channels() { DARABONBA_PTR_GET(channels_, vector<Models::MigrationJobPlanContactsChannels>) };
    inline MigrationJobPlanContacts& setChannels(const vector<Models::MigrationJobPlanContactsChannels> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline MigrationJobPlanContacts& setChannels(vector<Models::MigrationJobPlanContactsChannels> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MigrationJobPlanContacts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<vector<Models::MigrationJobPlanContactsChannels>> channels_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
