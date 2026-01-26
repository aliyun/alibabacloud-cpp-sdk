// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSILENCEPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSILENCEPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListSilencePoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSilencePoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageBean, pageBean_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSilencePoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageBean, pageBean_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSilencePoliciesResponseBody() = default ;
    ListSilencePoliciesResponseBody(const ListSilencePoliciesResponseBody &) = default ;
    ListSilencePoliciesResponseBody(ListSilencePoliciesResponseBody &&) = default ;
    ListSilencePoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSilencePoliciesResponseBody() = default ;
    ListSilencePoliciesResponseBody& operator=(const ListSilencePoliciesResponseBody &) = default ;
    ListSilencePoliciesResponseBody& operator=(ListSilencePoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageBean : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageBean& obj) { 
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(SilencePolicies, silencePolicies_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, PageBean& obj) { 
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(SilencePolicies, silencePolicies_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      PageBean() = default ;
      PageBean(const PageBean &) = default ;
      PageBean(PageBean &&) = default ;
      PageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageBean() = default ;
      PageBean& operator=(const PageBean &) = default ;
      PageBean& operator=(PageBean &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SilencePolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SilencePolicies& obj) { 
          DARABONBA_PTR_TO_JSON(EffectiveTimeType, effectiveTimeType_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(MatchingRules, matchingRules_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(TimePeriod, timePeriod_);
          DARABONBA_PTR_TO_JSON(TimeSlots, timeSlots_);
        };
        friend void from_json(const Darabonba::Json& j, SilencePolicies& obj) { 
          DARABONBA_PTR_FROM_JSON(EffectiveTimeType, effectiveTimeType_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(MatchingRules, matchingRules_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(TimePeriod, timePeriod_);
          DARABONBA_PTR_FROM_JSON(TimeSlots, timeSlots_);
        };
        SilencePolicies() = default ;
        SilencePolicies(const SilencePolicies &) = default ;
        SilencePolicies(SilencePolicies &&) = default ;
        SilencePolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SilencePolicies() = default ;
        SilencePolicies& operator=(const SilencePolicies &) = default ;
        SilencePolicies& operator=(SilencePolicies &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class MatchingRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MatchingRules& obj) { 
            DARABONBA_PTR_TO_JSON(MatchingConditions, matchingConditions_);
          };
          friend void from_json(const Darabonba::Json& j, MatchingRules& obj) { 
            DARABONBA_PTR_FROM_JSON(MatchingConditions, matchingConditions_);
          };
          MatchingRules() = default ;
          MatchingRules(const MatchingRules &) = default ;
          MatchingRules(MatchingRules &&) = default ;
          MatchingRules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MatchingRules() = default ;
          MatchingRules& operator=(const MatchingRules &) = default ;
          MatchingRules& operator=(MatchingRules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class MatchingConditions : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MatchingConditions& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Operator, operator_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, MatchingConditions& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Operator, operator_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            MatchingConditions() = default ;
            MatchingConditions(const MatchingConditions &) = default ;
            MatchingConditions(MatchingConditions &&) = default ;
            MatchingConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MatchingConditions() = default ;
            MatchingConditions& operator=(const MatchingConditions &) = default ;
            MatchingConditions& operator=(MatchingConditions &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline MatchingConditions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // operator Field Functions 
            bool hasOperator() const { return this->operator_ != nullptr;};
            void deleteOperator() { this->operator_ = nullptr;};
            inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
            inline MatchingConditions& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline MatchingConditions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The key of the matching condition.
            shared_ptr<string> key_ {};
            // The logical operator of the matching condition. Valid values:
            // 
            // *   `eq`: equal to
            // *   `neq`: not equal to
            // *   `in`: contains
            // *   `nin`: does not contain
            // *   `re`: regular expression match
            // *   `nre`: regular expression mismatch
            shared_ptr<string> operator_ {};
            // The value of the matching condition.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->matchingConditions_ == nullptr; };
          // matchingConditions Field Functions 
          bool hasMatchingConditions() const { return this->matchingConditions_ != nullptr;};
          void deleteMatchingConditions() { this->matchingConditions_ = nullptr;};
          inline const vector<MatchingRules::MatchingConditions> & getMatchingConditions() const { DARABONBA_PTR_GET_CONST(matchingConditions_, vector<MatchingRules::MatchingConditions>) };
          inline vector<MatchingRules::MatchingConditions> getMatchingConditions() { DARABONBA_PTR_GET(matchingConditions_, vector<MatchingRules::MatchingConditions>) };
          inline MatchingRules& setMatchingConditions(const vector<MatchingRules::MatchingConditions> & matchingConditions) { DARABONBA_PTR_SET_VALUE(matchingConditions_, matchingConditions) };
          inline MatchingRules& setMatchingConditions(vector<MatchingRules::MatchingConditions> && matchingConditions) { DARABONBA_PTR_SET_RVALUE(matchingConditions_, matchingConditions) };


        protected:
          // The matching conditions.
          shared_ptr<vector<MatchingRules::MatchingConditions>> matchingConditions_ {};
        };

        virtual bool empty() const override { return this->effectiveTimeType_ == nullptr
        && this->id_ == nullptr && this->matchingRules_ == nullptr && this->name_ == nullptr && this->state_ == nullptr && this->timePeriod_ == nullptr
        && this->timeSlots_ == nullptr; };
        // effectiveTimeType Field Functions 
        bool hasEffectiveTimeType() const { return this->effectiveTimeType_ != nullptr;};
        void deleteEffectiveTimeType() { this->effectiveTimeType_ = nullptr;};
        inline string getEffectiveTimeType() const { DARABONBA_PTR_GET_DEFAULT(effectiveTimeType_, "") };
        inline SilencePolicies& setEffectiveTimeType(string effectiveTimeType) { DARABONBA_PTR_SET_VALUE(effectiveTimeType_, effectiveTimeType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline SilencePolicies& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // matchingRules Field Functions 
        bool hasMatchingRules() const { return this->matchingRules_ != nullptr;};
        void deleteMatchingRules() { this->matchingRules_ = nullptr;};
        inline const vector<SilencePolicies::MatchingRules> & getMatchingRules() const { DARABONBA_PTR_GET_CONST(matchingRules_, vector<SilencePolicies::MatchingRules>) };
        inline vector<SilencePolicies::MatchingRules> getMatchingRules() { DARABONBA_PTR_GET(matchingRules_, vector<SilencePolicies::MatchingRules>) };
        inline SilencePolicies& setMatchingRules(const vector<SilencePolicies::MatchingRules> & matchingRules) { DARABONBA_PTR_SET_VALUE(matchingRules_, matchingRules) };
        inline SilencePolicies& setMatchingRules(vector<SilencePolicies::MatchingRules> && matchingRules) { DARABONBA_PTR_SET_RVALUE(matchingRules_, matchingRules) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SilencePolicies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline SilencePolicies& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // timePeriod Field Functions 
        bool hasTimePeriod() const { return this->timePeriod_ != nullptr;};
        void deleteTimePeriod() { this->timePeriod_ = nullptr;};
        inline string getTimePeriod() const { DARABONBA_PTR_GET_DEFAULT(timePeriod_, "") };
        inline SilencePolicies& setTimePeriod(string timePeriod) { DARABONBA_PTR_SET_VALUE(timePeriod_, timePeriod) };


        // timeSlots Field Functions 
        bool hasTimeSlots() const { return this->timeSlots_ != nullptr;};
        void deleteTimeSlots() { this->timeSlots_ = nullptr;};
        inline string getTimeSlots() const { DARABONBA_PTR_GET_DEFAULT(timeSlots_, "") };
        inline SilencePolicies& setTimeSlots(string timeSlots) { DARABONBA_PTR_SET_VALUE(timeSlots_, timeSlots) };


      protected:
        // The effective type. Valid values: PERMANENT: The policy is effective permanently. CYCLE_EFFECT: The policy is effective cyclically. CUSTOM_TIME: The policy is effective during a custom time period.
        shared_ptr<string> effectiveTimeType_ {};
        // The ID of the silence policy.
        shared_ptr<int64_t> id_ {};
        // The matching rules.
        shared_ptr<vector<SilencePolicies::MatchingRules>> matchingRules_ {};
        // The name of the silence policy.
        shared_ptr<string> name_ {};
        // Indicates whether the silence policy is enabled. Valid values: enable and disable.
        shared_ptr<string> state_ {};
        // The effective time. Valid values: WEEK: weekly DAY: daily
        shared_ptr<string> timePeriod_ {};
        // Effective period.
        shared_ptr<string> timeSlots_ {};
      };

      virtual bool empty() const override { return this->page_ == nullptr
        && this->silencePolicies_ == nullptr && this->size_ == nullptr && this->total_ == nullptr; };
      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
      inline PageBean& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // silencePolicies Field Functions 
      bool hasSilencePolicies() const { return this->silencePolicies_ != nullptr;};
      void deleteSilencePolicies() { this->silencePolicies_ = nullptr;};
      inline const vector<PageBean::SilencePolicies> & getSilencePolicies() const { DARABONBA_PTR_GET_CONST(silencePolicies_, vector<PageBean::SilencePolicies>) };
      inline vector<PageBean::SilencePolicies> getSilencePolicies() { DARABONBA_PTR_GET(silencePolicies_, vector<PageBean::SilencePolicies>) };
      inline PageBean& setSilencePolicies(const vector<PageBean::SilencePolicies> & silencePolicies) { DARABONBA_PTR_SET_VALUE(silencePolicies_, silencePolicies) };
      inline PageBean& setSilencePolicies(vector<PageBean::SilencePolicies> && silencePolicies) { DARABONBA_PTR_SET_RVALUE(silencePolicies_, silencePolicies) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline PageBean& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline PageBean& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The number of the page returned.
      shared_ptr<int64_t> page_ {};
      // The queried silence policies.
      shared_ptr<vector<PageBean::SilencePolicies>> silencePolicies_ {};
      // The number of entries returned per page.
      shared_ptr<int64_t> size_ {};
      // The number of silence policies that were returned.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->pageBean_ == nullptr
        && this->requestId_ == nullptr; };
    // pageBean Field Functions 
    bool hasPageBean() const { return this->pageBean_ != nullptr;};
    void deletePageBean() { this->pageBean_ = nullptr;};
    inline const ListSilencePoliciesResponseBody::PageBean & getPageBean() const { DARABONBA_PTR_GET_CONST(pageBean_, ListSilencePoliciesResponseBody::PageBean) };
    inline ListSilencePoliciesResponseBody::PageBean getPageBean() { DARABONBA_PTR_GET(pageBean_, ListSilencePoliciesResponseBody::PageBean) };
    inline ListSilencePoliciesResponseBody& setPageBean(const ListSilencePoliciesResponseBody::PageBean & pageBean) { DARABONBA_PTR_SET_VALUE(pageBean_, pageBean) };
    inline ListSilencePoliciesResponseBody& setPageBean(ListSilencePoliciesResponseBody::PageBean && pageBean) { DARABONBA_PTR_SET_RVALUE(pageBean_, pageBean) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSilencePoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned pages.
    shared_ptr<ListSilencePoliciesResponseBody::PageBean> pageBean_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
