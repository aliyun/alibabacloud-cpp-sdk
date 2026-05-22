// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFRATELIMITCHARACTERISTICS_HPP_
#define ALIBABACLOUD_MODELS_WAFRATELIMITCHARACTERISTICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafRatelimitCharacteristics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafRatelimitCharacteristics& obj) { 
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
    };
    friend void from_json(const Darabonba::Json& j, WafRatelimitCharacteristics& obj) { 
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
    };
    WafRatelimitCharacteristics() = default ;
    WafRatelimitCharacteristics(const WafRatelimitCharacteristics &) = default ;
    WafRatelimitCharacteristics(WafRatelimitCharacteristics &&) = default ;
    WafRatelimitCharacteristics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafRatelimitCharacteristics() = default ;
    WafRatelimitCharacteristics& operator=(const WafRatelimitCharacteristics &) = default ;
    WafRatelimitCharacteristics& operator=(WafRatelimitCharacteristics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Criteria : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Criteria& obj) { 
        DARABONBA_PTR_TO_JSON(Criteria, criteria_);
        DARABONBA_PTR_TO_JSON(Logic, logic_);
        DARABONBA_PTR_TO_JSON(MatchType, matchType_);
      };
      friend void from_json(const Darabonba::Json& j, Criteria& obj) { 
        DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
        DARABONBA_PTR_FROM_JSON(Logic, logic_);
        DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
      };
      Criteria() = default ;
      Criteria(const Criteria &) = default ;
      Criteria(Criteria &&) = default ;
      Criteria(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Criteria() = default ;
      Criteria& operator=(const Criteria &) = default ;
      Criteria& operator=(Criteria &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CriteriaItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CriteriaItem& obj) { 
          DARABONBA_PTR_TO_JSON(Criteria, criteria_);
          DARABONBA_PTR_TO_JSON(Logic, logic_);
          DARABONBA_PTR_TO_JSON(MatchType, matchType_);
        };
        friend void from_json(const Darabonba::Json& j, CriteriaItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
          DARABONBA_PTR_FROM_JSON(Logic, logic_);
          DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
        };
        CriteriaItem() = default ;
        CriteriaItem(const CriteriaItem &) = default ;
        CriteriaItem(CriteriaItem &&) = default ;
        CriteriaItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CriteriaItem() = default ;
        CriteriaItem& operator=(const CriteriaItem &) = default ;
        CriteriaItem& operator=(CriteriaItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Criteria : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Criteria& obj) { 
            DARABONBA_PTR_TO_JSON(MatchType, matchType_);
          };
          friend void from_json(const Darabonba::Json& j, Criteria& obj) { 
            DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
          };
          Criteria() = default ;
          Criteria(const Criteria &) = default ;
          Criteria(Criteria &&) = default ;
          Criteria(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Criteria() = default ;
          Criteria& operator=(const Criteria &) = default ;
          Criteria& operator=(Criteria &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->matchType_ == nullptr; };
          // matchType Field Functions 
          bool hasMatchType() const { return this->matchType_ != nullptr;};
          void deleteMatchType() { this->matchType_ = nullptr;};
          inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
          inline Criteria& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


        protected:
          shared_ptr<string> matchType_ {};
        };

        virtual bool empty() const override { return this->criteria_ == nullptr
        && this->logic_ == nullptr && this->matchType_ == nullptr; };
        // criteria Field Functions 
        bool hasCriteria() const { return this->criteria_ != nullptr;};
        void deleteCriteria() { this->criteria_ = nullptr;};
        inline const vector<CriteriaItem::Criteria> & getCriteria() const { DARABONBA_PTR_GET_CONST(criteria_, vector<CriteriaItem::Criteria>) };
        inline vector<CriteriaItem::Criteria> getCriteria() { DARABONBA_PTR_GET(criteria_, vector<CriteriaItem::Criteria>) };
        inline CriteriaItem& setCriteria(const vector<CriteriaItem::Criteria> & criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };
        inline CriteriaItem& setCriteria(vector<CriteriaItem::Criteria> && criteria) { DARABONBA_PTR_SET_RVALUE(criteria_, criteria) };


        // logic Field Functions 
        bool hasLogic() const { return this->logic_ != nullptr;};
        void deleteLogic() { this->logic_ = nullptr;};
        inline string getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, "") };
        inline CriteriaItem& setLogic(string logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


        // matchType Field Functions 
        bool hasMatchType() const { return this->matchType_ != nullptr;};
        void deleteMatchType() { this->matchType_ = nullptr;};
        inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
        inline CriteriaItem& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


      protected:
        shared_ptr<vector<CriteriaItem::Criteria>> criteria_ {};
        shared_ptr<string> logic_ {};
        shared_ptr<string> matchType_ {};
      };

      virtual bool empty() const override { return this->criteria_ == nullptr
        && this->logic_ == nullptr && this->matchType_ == nullptr; };
      // criteria Field Functions 
      bool hasCriteria() const { return this->criteria_ != nullptr;};
      void deleteCriteria() { this->criteria_ = nullptr;};
      inline const vector<Criteria::CriteriaItem> & getCriteria() const { DARABONBA_PTR_GET_CONST(criteria_, vector<Criteria::CriteriaItem>) };
      inline vector<Criteria::CriteriaItem> getCriteria() { DARABONBA_PTR_GET(criteria_, vector<Criteria::CriteriaItem>) };
      inline Criteria& setCriteria(const vector<Criteria::CriteriaItem> & criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };
      inline Criteria& setCriteria(vector<Criteria::CriteriaItem> && criteria) { DARABONBA_PTR_SET_RVALUE(criteria_, criteria) };


      // logic Field Functions 
      bool hasLogic() const { return this->logic_ != nullptr;};
      void deleteLogic() { this->logic_ = nullptr;};
      inline string getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, "") };
      inline Criteria& setLogic(string logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


      // matchType Field Functions 
      bool hasMatchType() const { return this->matchType_ != nullptr;};
      void deleteMatchType() { this->matchType_ = nullptr;};
      inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
      inline Criteria& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    protected:
      shared_ptr<vector<Criteria::CriteriaItem>> criteria_ {};
      shared_ptr<string> logic_ {};
      shared_ptr<string> matchType_ {};
    };

    virtual bool empty() const override { return this->criteria_ == nullptr
        && this->logic_ == nullptr && this->matchType_ == nullptr; };
    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline const vector<WafRatelimitCharacteristics::Criteria> & getCriteria() const { DARABONBA_PTR_GET_CONST(criteria_, vector<WafRatelimitCharacteristics::Criteria>) };
    inline vector<WafRatelimitCharacteristics::Criteria> getCriteria() { DARABONBA_PTR_GET(criteria_, vector<WafRatelimitCharacteristics::Criteria>) };
    inline WafRatelimitCharacteristics& setCriteria(const vector<WafRatelimitCharacteristics::Criteria> & criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };
    inline WafRatelimitCharacteristics& setCriteria(vector<WafRatelimitCharacteristics::Criteria> && criteria) { DARABONBA_PTR_SET_RVALUE(criteria_, criteria) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline string getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, "") };
    inline WafRatelimitCharacteristics& setLogic(string logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
    inline WafRatelimitCharacteristics& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


  protected:
    shared_ptr<vector<WafRatelimitCharacteristics::Criteria>> criteria_ {};
    shared_ptr<string> logic_ {};
    shared_ptr<string> matchType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
