// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAUTOREPAIRPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAUTOREPAIRPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyAutoRepairPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAutoRepairPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAutoRepairPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(rules, rules_);
    };
    ModifyAutoRepairPolicyRequest() = default ;
    ModifyAutoRepairPolicyRequest(const ModifyAutoRepairPolicyRequest &) = default ;
    ModifyAutoRepairPolicyRequest(ModifyAutoRepairPolicyRequest &&) = default ;
    ModifyAutoRepairPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAutoRepairPolicyRequest() = default ;
    ModifyAutoRepairPolicyRequest& operator=(const ModifyAutoRepairPolicyRequest &) = default ;
    ModifyAutoRepairPolicyRequest& operator=(ModifyAutoRepairPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(incidents, incidents_);
        DARABONBA_PTR_TO_JSON(repair_procedure, repairProcedure_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(incidents, incidents_);
        DARABONBA_PTR_FROM_JSON(repair_procedure, repairProcedure_);
      };
      Rules() = default ;
      Rules(const Rules &) = default ;
      Rules(Rules &&) = default ;
      Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rules() = default ;
      Rules& operator=(const Rules &) = default ;
      Rules& operator=(Rules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RepairProcedure : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RepairProcedure& obj) { 
          DARABONBA_ANY_TO_JSON(config, config_);
          DARABONBA_PTR_TO_JSON(intervention, intervention_);
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, RepairProcedure& obj) { 
          DARABONBA_ANY_FROM_JSON(config, config_);
          DARABONBA_PTR_FROM_JSON(intervention, intervention_);
          DARABONBA_PTR_FROM_JSON(name, name_);
        };
        RepairProcedure() = default ;
        RepairProcedure(const RepairProcedure &) = default ;
        RepairProcedure(RepairProcedure &&) = default ;
        RepairProcedure(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RepairProcedure() = default ;
        RepairProcedure& operator=(const RepairProcedure &) = default ;
        RepairProcedure& operator=(RepairProcedure &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Intervention : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Intervention& obj) { 
            DARABONBA_PTR_TO_JSON(approved_label, approvedLabel_);
            DARABONBA_PTR_TO_JSON(enable, enable_);
            DARABONBA_PTR_TO_JSON(inquiring_label, inquiringLabel_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Intervention& obj) { 
            DARABONBA_PTR_FROM_JSON(approved_label, approvedLabel_);
            DARABONBA_PTR_FROM_JSON(enable, enable_);
            DARABONBA_PTR_FROM_JSON(inquiring_label, inquiringLabel_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          Intervention() = default ;
          Intervention(const Intervention &) = default ;
          Intervention(Intervention &&) = default ;
          Intervention(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Intervention() = default ;
          Intervention& operator=(const Intervention &) = default ;
          Intervention& operator=(Intervention &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class InquiringLabel : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const InquiringLabel& obj) { 
              DARABONBA_PTR_TO_JSON(key, key_);
              DARABONBA_PTR_TO_JSON(value, value_);
            };
            friend void from_json(const Darabonba::Json& j, InquiringLabel& obj) { 
              DARABONBA_PTR_FROM_JSON(key, key_);
              DARABONBA_PTR_FROM_JSON(value, value_);
            };
            InquiringLabel() = default ;
            InquiringLabel(const InquiringLabel &) = default ;
            InquiringLabel(InquiringLabel &&) = default ;
            InquiringLabel(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~InquiringLabel() = default ;
            InquiringLabel& operator=(const InquiringLabel &) = default ;
            InquiringLabel& operator=(InquiringLabel &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline InquiringLabel& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline InquiringLabel& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> key_ {};
            shared_ptr<string> value_ {};
          };

          class ApprovedLabel : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ApprovedLabel& obj) { 
              DARABONBA_PTR_TO_JSON(key, key_);
              DARABONBA_PTR_TO_JSON(value, value_);
            };
            friend void from_json(const Darabonba::Json& j, ApprovedLabel& obj) { 
              DARABONBA_PTR_FROM_JSON(key, key_);
              DARABONBA_PTR_FROM_JSON(value, value_);
            };
            ApprovedLabel() = default ;
            ApprovedLabel(const ApprovedLabel &) = default ;
            ApprovedLabel(ApprovedLabel &&) = default ;
            ApprovedLabel(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ApprovedLabel() = default ;
            ApprovedLabel& operator=(const ApprovedLabel &) = default ;
            ApprovedLabel& operator=(ApprovedLabel &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline ApprovedLabel& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline ApprovedLabel& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> key_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->approvedLabel_ == nullptr
        && this->enable_ == nullptr && this->inquiringLabel_ == nullptr && this->type_ == nullptr; };
          // approvedLabel Field Functions 
          bool hasApprovedLabel() const { return this->approvedLabel_ != nullptr;};
          void deleteApprovedLabel() { this->approvedLabel_ = nullptr;};
          inline const Intervention::ApprovedLabel & getApprovedLabel() const { DARABONBA_PTR_GET_CONST(approvedLabel_, Intervention::ApprovedLabel) };
          inline Intervention::ApprovedLabel getApprovedLabel() { DARABONBA_PTR_GET(approvedLabel_, Intervention::ApprovedLabel) };
          inline Intervention& setApprovedLabel(const Intervention::ApprovedLabel & approvedLabel) { DARABONBA_PTR_SET_VALUE(approvedLabel_, approvedLabel) };
          inline Intervention& setApprovedLabel(Intervention::ApprovedLabel && approvedLabel) { DARABONBA_PTR_SET_RVALUE(approvedLabel_, approvedLabel) };


          // enable Field Functions 
          bool hasEnable() const { return this->enable_ != nullptr;};
          void deleteEnable() { this->enable_ = nullptr;};
          inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
          inline Intervention& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


          // inquiringLabel Field Functions 
          bool hasInquiringLabel() const { return this->inquiringLabel_ != nullptr;};
          void deleteInquiringLabel() { this->inquiringLabel_ = nullptr;};
          inline const Intervention::InquiringLabel & getInquiringLabel() const { DARABONBA_PTR_GET_CONST(inquiringLabel_, Intervention::InquiringLabel) };
          inline Intervention::InquiringLabel getInquiringLabel() { DARABONBA_PTR_GET(inquiringLabel_, Intervention::InquiringLabel) };
          inline Intervention& setInquiringLabel(const Intervention::InquiringLabel & inquiringLabel) { DARABONBA_PTR_SET_VALUE(inquiringLabel_, inquiringLabel) };
          inline Intervention& setInquiringLabel(Intervention::InquiringLabel && inquiringLabel) { DARABONBA_PTR_SET_RVALUE(inquiringLabel_, inquiringLabel) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Intervention& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<Intervention::ApprovedLabel> approvedLabel_ {};
          shared_ptr<bool> enable_ {};
          shared_ptr<Intervention::InquiringLabel> inquiringLabel_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->config_ == nullptr
        && this->intervention_ == nullptr && this->name_ == nullptr; };
        // config Field Functions 
        bool hasConfig() const { return this->config_ != nullptr;};
        void deleteConfig() { this->config_ = nullptr;};
        inline         const Darabonba::Json & getConfig() const { DARABONBA_GET(config_) };
        Darabonba::Json & getConfig() { DARABONBA_GET(config_) };
        inline RepairProcedure& setConfig(const Darabonba::Json & config) { DARABONBA_SET_VALUE(config_, config) };
        inline RepairProcedure& setConfig(Darabonba::Json && config) { DARABONBA_SET_RVALUE(config_, config) };


        // intervention Field Functions 
        bool hasIntervention() const { return this->intervention_ != nullptr;};
        void deleteIntervention() { this->intervention_ = nullptr;};
        inline const RepairProcedure::Intervention & getIntervention() const { DARABONBA_PTR_GET_CONST(intervention_, RepairProcedure::Intervention) };
        inline RepairProcedure::Intervention getIntervention() { DARABONBA_PTR_GET(intervention_, RepairProcedure::Intervention) };
        inline RepairProcedure& setIntervention(const RepairProcedure::Intervention & intervention) { DARABONBA_PTR_SET_VALUE(intervention_, intervention) };
        inline RepairProcedure& setIntervention(RepairProcedure::Intervention && intervention) { DARABONBA_PTR_SET_RVALUE(intervention_, intervention) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RepairProcedure& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        Darabonba::Json config_ {};
        shared_ptr<RepairProcedure::Intervention> intervention_ {};
        shared_ptr<string> name_ {};
      };

      class Incidents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Incidents& obj) { 
          DARABONBA_PTR_TO_JSON(conditions, conditions_);
          DARABONBA_PTR_TO_JSON(events, events_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Incidents& obj) { 
          DARABONBA_PTR_FROM_JSON(conditions, conditions_);
          DARABONBA_PTR_FROM_JSON(events, events_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Incidents() = default ;
        Incidents(const Incidents &) = default ;
        Incidents(Incidents &&) = default ;
        Incidents(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Incidents() = default ;
        Incidents& operator=(const Incidents &) = default ;
        Incidents& operator=(Incidents &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Events : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Events& obj) { 
            DARABONBA_PTR_TO_JSON(reason, reason_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Events& obj) { 
            DARABONBA_PTR_FROM_JSON(reason, reason_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          Events() = default ;
          Events(const Events &) = default ;
          Events(Events &&) = default ;
          Events(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Events() = default ;
          Events& operator=(const Events &) = default ;
          Events& operator=(Events &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->reason_ == nullptr
        && this->type_ == nullptr; };
          // reason Field Functions 
          bool hasReason() const { return this->reason_ != nullptr;};
          void deleteReason() { this->reason_ = nullptr;};
          inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
          inline Events& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Events& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> reason_ {};
          shared_ptr<string> type_ {};
        };

        class Conditions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
            DARABONBA_PTR_TO_JSON(reason, reason_);
            DARABONBA_PTR_TO_JSON(status, status_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
            DARABONBA_PTR_FROM_JSON(reason, reason_);
            DARABONBA_PTR_FROM_JSON(status, status_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          Conditions() = default ;
          Conditions(const Conditions &) = default ;
          Conditions(Conditions &&) = default ;
          Conditions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Conditions() = default ;
          Conditions& operator=(const Conditions &) = default ;
          Conditions& operator=(Conditions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->reason_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr; };
          // reason Field Functions 
          bool hasReason() const { return this->reason_ != nullptr;};
          void deleteReason() { this->reason_ = nullptr;};
          inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
          inline Conditions& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline Conditions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Conditions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> reason_ {};
          shared_ptr<string> status_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->conditions_ == nullptr
        && this->events_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
        // conditions Field Functions 
        bool hasConditions() const { return this->conditions_ != nullptr;};
        void deleteConditions() { this->conditions_ = nullptr;};
        inline const vector<Incidents::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Incidents::Conditions>) };
        inline vector<Incidents::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<Incidents::Conditions>) };
        inline Incidents& setConditions(const vector<Incidents::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
        inline Incidents& setConditions(vector<Incidents::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


        // events Field Functions 
        bool hasEvents() const { return this->events_ != nullptr;};
        void deleteEvents() { this->events_ = nullptr;};
        inline const vector<Incidents::Events> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<Incidents::Events>) };
        inline vector<Incidents::Events> getEvents() { DARABONBA_PTR_GET(events_, vector<Incidents::Events>) };
        inline Incidents& setEvents(const vector<Incidents::Events> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
        inline Incidents& setEvents(vector<Incidents::Events> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Incidents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Incidents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<vector<Incidents::Conditions>> conditions_ {};
        shared_ptr<vector<Incidents::Events>> events_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->incidents_ == nullptr
        && this->repairProcedure_ == nullptr; };
      // incidents Field Functions 
      bool hasIncidents() const { return this->incidents_ != nullptr;};
      void deleteIncidents() { this->incidents_ = nullptr;};
      inline const vector<Rules::Incidents> & getIncidents() const { DARABONBA_PTR_GET_CONST(incidents_, vector<Rules::Incidents>) };
      inline vector<Rules::Incidents> getIncidents() { DARABONBA_PTR_GET(incidents_, vector<Rules::Incidents>) };
      inline Rules& setIncidents(const vector<Rules::Incidents> & incidents) { DARABONBA_PTR_SET_VALUE(incidents_, incidents) };
      inline Rules& setIncidents(vector<Rules::Incidents> && incidents) { DARABONBA_PTR_SET_RVALUE(incidents_, incidents) };


      // repairProcedure Field Functions 
      bool hasRepairProcedure() const { return this->repairProcedure_ != nullptr;};
      void deleteRepairProcedure() { this->repairProcedure_ = nullptr;};
      inline const vector<Rules::RepairProcedure> & getRepairProcedure() const { DARABONBA_PTR_GET_CONST(repairProcedure_, vector<Rules::RepairProcedure>) };
      inline vector<Rules::RepairProcedure> getRepairProcedure() { DARABONBA_PTR_GET(repairProcedure_, vector<Rules::RepairProcedure>) };
      inline Rules& setRepairProcedure(const vector<Rules::RepairProcedure> & repairProcedure) { DARABONBA_PTR_SET_VALUE(repairProcedure_, repairProcedure) };
      inline Rules& setRepairProcedure(vector<Rules::RepairProcedure> && repairProcedure) { DARABONBA_PTR_SET_RVALUE(repairProcedure_, repairProcedure) };


    protected:
      shared_ptr<vector<Rules::Incidents>> incidents_ {};
      shared_ptr<vector<Rules::RepairProcedure>> repairProcedure_ {};
    };

    virtual bool empty() const override { return this->name_ == nullptr
        && this->rules_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyAutoRepairPolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<ModifyAutoRepairPolicyRequest::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<ModifyAutoRepairPolicyRequest::Rules>) };
    inline vector<ModifyAutoRepairPolicyRequest::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<ModifyAutoRepairPolicyRequest::Rules>) };
    inline ModifyAutoRepairPolicyRequest& setRules(const vector<ModifyAutoRepairPolicyRequest::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ModifyAutoRepairPolicyRequest& setRules(vector<ModifyAutoRepairPolicyRequest::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    shared_ptr<string> name_ {};
    shared_ptr<vector<ModifyAutoRepairPolicyRequest::Rules>> rules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
