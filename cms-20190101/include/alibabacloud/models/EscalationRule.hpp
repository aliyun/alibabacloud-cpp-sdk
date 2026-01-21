// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ESCALATIONRULE_HPP_
#define ALIBABACLOUD_MODELS_ESCALATIONRULE_HPP_
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
  class EscalationRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EscalationRule& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Escalations, escalations_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, EscalationRule& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Escalations, escalations_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    EscalationRule() = default ;
    EscalationRule(const EscalationRule &) = default ;
    EscalationRule(EscalationRule &&) = default ;
    EscalationRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EscalationRule() = default ;
    EscalationRule& operator=(const EscalationRule &) = default ;
    EscalationRule& operator=(EscalationRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Escalations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Escalations& obj) { 
        DARABONBA_PTR_TO_JSON(BackupContactGroups, backupContactGroups_);
        DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
        DARABONBA_PTR_TO_JSON(ContactGroupsByLevel, contactGroupsByLevel_);
        DARABONBA_PTR_TO_JSON(EscalateMin, escalateMin_);
      };
      friend void from_json(const Darabonba::Json& j, Escalations& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupContactGroups, backupContactGroups_);
        DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
        DARABONBA_PTR_FROM_JSON(ContactGroupsByLevel, contactGroupsByLevel_);
        DARABONBA_PTR_FROM_JSON(EscalateMin, escalateMin_);
      };
      Escalations() = default ;
      Escalations(const Escalations &) = default ;
      Escalations(Escalations &&) = default ;
      Escalations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Escalations() = default ;
      Escalations& operator=(const Escalations &) = default ;
      Escalations& operator=(Escalations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ContactGroupsByLevel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ContactGroupsByLevel& obj) { 
          DARABONBA_PTR_TO_JSON(Critical, critical_);
          DARABONBA_PTR_TO_JSON(Error, error_);
          DARABONBA_PTR_TO_JSON(Info, info_);
          DARABONBA_PTR_TO_JSON(Resolve, resolve_);
          DARABONBA_PTR_TO_JSON(Warning, warning_);
        };
        friend void from_json(const Darabonba::Json& j, ContactGroupsByLevel& obj) { 
          DARABONBA_PTR_FROM_JSON(Critical, critical_);
          DARABONBA_PTR_FROM_JSON(Error, error_);
          DARABONBA_PTR_FROM_JSON(Info, info_);
          DARABONBA_PTR_FROM_JSON(Resolve, resolve_);
          DARABONBA_PTR_FROM_JSON(Warning, warning_);
        };
        ContactGroupsByLevel() = default ;
        ContactGroupsByLevel(const ContactGroupsByLevel &) = default ;
        ContactGroupsByLevel(ContactGroupsByLevel &&) = default ;
        ContactGroupsByLevel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ContactGroupsByLevel() = default ;
        ContactGroupsByLevel& operator=(const ContactGroupsByLevel &) = default ;
        ContactGroupsByLevel& operator=(ContactGroupsByLevel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->critical_ == nullptr
        && this->error_ == nullptr && this->info_ == nullptr && this->resolve_ == nullptr && this->warning_ == nullptr; };
        // critical Field Functions 
        bool hasCritical() const { return this->critical_ != nullptr;};
        void deleteCritical() { this->critical_ = nullptr;};
        inline const vector<string> & getCritical() const { DARABONBA_PTR_GET_CONST(critical_, vector<string>) };
        inline vector<string> getCritical() { DARABONBA_PTR_GET(critical_, vector<string>) };
        inline ContactGroupsByLevel& setCritical(const vector<string> & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
        inline ContactGroupsByLevel& setCritical(vector<string> && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


        // error Field Functions 
        bool hasError() const { return this->error_ != nullptr;};
        void deleteError() { this->error_ = nullptr;};
        inline const vector<string> & getError() const { DARABONBA_PTR_GET_CONST(error_, vector<string>) };
        inline vector<string> getError() { DARABONBA_PTR_GET(error_, vector<string>) };
        inline ContactGroupsByLevel& setError(const vector<string> & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
        inline ContactGroupsByLevel& setError(vector<string> && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


        // info Field Functions 
        bool hasInfo() const { return this->info_ != nullptr;};
        void deleteInfo() { this->info_ = nullptr;};
        inline const vector<string> & getInfo() const { DARABONBA_PTR_GET_CONST(info_, vector<string>) };
        inline vector<string> getInfo() { DARABONBA_PTR_GET(info_, vector<string>) };
        inline ContactGroupsByLevel& setInfo(const vector<string> & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
        inline ContactGroupsByLevel& setInfo(vector<string> && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


        // resolve Field Functions 
        bool hasResolve() const { return this->resolve_ != nullptr;};
        void deleteResolve() { this->resolve_ = nullptr;};
        inline const vector<string> & getResolve() const { DARABONBA_PTR_GET_CONST(resolve_, vector<string>) };
        inline vector<string> getResolve() { DARABONBA_PTR_GET(resolve_, vector<string>) };
        inline ContactGroupsByLevel& setResolve(const vector<string> & resolve) { DARABONBA_PTR_SET_VALUE(resolve_, resolve) };
        inline ContactGroupsByLevel& setResolve(vector<string> && resolve) { DARABONBA_PTR_SET_RVALUE(resolve_, resolve) };


        // warning Field Functions 
        bool hasWarning() const { return this->warning_ != nullptr;};
        void deleteWarning() { this->warning_ = nullptr;};
        inline const vector<string> & getWarning() const { DARABONBA_PTR_GET_CONST(warning_, vector<string>) };
        inline vector<string> getWarning() { DARABONBA_PTR_GET(warning_, vector<string>) };
        inline ContactGroupsByLevel& setWarning(const vector<string> & warning) { DARABONBA_PTR_SET_VALUE(warning_, warning) };
        inline ContactGroupsByLevel& setWarning(vector<string> && warning) { DARABONBA_PTR_SET_RVALUE(warning_, warning) };


      protected:
        shared_ptr<vector<string>> critical_ {};
        shared_ptr<vector<string>> error_ {};
        shared_ptr<vector<string>> info_ {};
        shared_ptr<vector<string>> resolve_ {};
        shared_ptr<vector<string>> warning_ {};
      };

      virtual bool empty() const override { return this->backupContactGroups_ == nullptr
        && this->contactGroups_ == nullptr && this->contactGroupsByLevel_ == nullptr && this->escalateMin_ == nullptr; };
      // backupContactGroups Field Functions 
      bool hasBackupContactGroups() const { return this->backupContactGroups_ != nullptr;};
      void deleteBackupContactGroups() { this->backupContactGroups_ = nullptr;};
      inline const vector<string> & getBackupContactGroups() const { DARABONBA_PTR_GET_CONST(backupContactGroups_, vector<string>) };
      inline vector<string> getBackupContactGroups() { DARABONBA_PTR_GET(backupContactGroups_, vector<string>) };
      inline Escalations& setBackupContactGroups(const vector<string> & backupContactGroups) { DARABONBA_PTR_SET_VALUE(backupContactGroups_, backupContactGroups) };
      inline Escalations& setBackupContactGroups(vector<string> && backupContactGroups) { DARABONBA_PTR_SET_RVALUE(backupContactGroups_, backupContactGroups) };


      // contactGroups Field Functions 
      bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
      void deleteContactGroups() { this->contactGroups_ = nullptr;};
      inline const vector<string> & getContactGroups() const { DARABONBA_PTR_GET_CONST(contactGroups_, vector<string>) };
      inline vector<string> getContactGroups() { DARABONBA_PTR_GET(contactGroups_, vector<string>) };
      inline Escalations& setContactGroups(const vector<string> & contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };
      inline Escalations& setContactGroups(vector<string> && contactGroups) { DARABONBA_PTR_SET_RVALUE(contactGroups_, contactGroups) };


      // contactGroupsByLevel Field Functions 
      bool hasContactGroupsByLevel() const { return this->contactGroupsByLevel_ != nullptr;};
      void deleteContactGroupsByLevel() { this->contactGroupsByLevel_ = nullptr;};
      inline const Escalations::ContactGroupsByLevel & getContactGroupsByLevel() const { DARABONBA_PTR_GET_CONST(contactGroupsByLevel_, Escalations::ContactGroupsByLevel) };
      inline Escalations::ContactGroupsByLevel getContactGroupsByLevel() { DARABONBA_PTR_GET(contactGroupsByLevel_, Escalations::ContactGroupsByLevel) };
      inline Escalations& setContactGroupsByLevel(const Escalations::ContactGroupsByLevel & contactGroupsByLevel) { DARABONBA_PTR_SET_VALUE(contactGroupsByLevel_, contactGroupsByLevel) };
      inline Escalations& setContactGroupsByLevel(Escalations::ContactGroupsByLevel && contactGroupsByLevel) { DARABONBA_PTR_SET_RVALUE(contactGroupsByLevel_, contactGroupsByLevel) };


      // escalateMin Field Functions 
      bool hasEscalateMin() const { return this->escalateMin_ != nullptr;};
      void deleteEscalateMin() { this->escalateMin_ = nullptr;};
      inline int64_t getEscalateMin() const { DARABONBA_PTR_GET_DEFAULT(escalateMin_, 0L) };
      inline Escalations& setEscalateMin(int64_t escalateMin) { DARABONBA_PTR_SET_VALUE(escalateMin_, escalateMin) };


    protected:
      shared_ptr<vector<string>> backupContactGroups_ {};
      shared_ptr<vector<string>> contactGroups_ {};
      shared_ptr<Escalations::ContactGroupsByLevel> contactGroupsByLevel_ {};
      shared_ptr<int64_t> escalateMin_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->escalations_ == nullptr && this->name_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr
        && this->uuid_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline EscalationRule& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline EscalationRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // escalations Field Functions 
    bool hasEscalations() const { return this->escalations_ != nullptr;};
    void deleteEscalations() { this->escalations_ = nullptr;};
    inline const vector<EscalationRule::Escalations> & getEscalations() const { DARABONBA_PTR_GET_CONST(escalations_, vector<EscalationRule::Escalations>) };
    inline vector<EscalationRule::Escalations> getEscalations() { DARABONBA_PTR_GET(escalations_, vector<EscalationRule::Escalations>) };
    inline EscalationRule& setEscalations(const vector<EscalationRule::Escalations> & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
    inline EscalationRule& setEscalations(vector<EscalationRule::Escalations> && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline EscalationRule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline EscalationRule& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline EscalationRule& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline EscalationRule& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    shared_ptr<string> createTime_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<vector<EscalationRule::Escalations>> escalations_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> updateTime_ {};
    shared_ptr<string> userId_ {};
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
