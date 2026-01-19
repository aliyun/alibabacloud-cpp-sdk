// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFRULEMATCH2_HPP_
#define ALIBABACLOUD_MODELS_WAFRULEMATCH2_HPP_
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
  class WafRuleMatch2 : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafRuleMatch2& obj) { 
      DARABONBA_PTR_TO_JSON(ConvertToLower, convertToLower_);
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(MatchOperator, matchOperator_);
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
      DARABONBA_ANY_TO_JSON(MatchValue, matchValue_);
      DARABONBA_PTR_TO_JSON(Negate, negate_);
    };
    friend void from_json(const Darabonba::Json& j, WafRuleMatch2& obj) { 
      DARABONBA_PTR_FROM_JSON(ConvertToLower, convertToLower_);
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(MatchOperator, matchOperator_);
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
      DARABONBA_ANY_FROM_JSON(MatchValue, matchValue_);
      DARABONBA_PTR_FROM_JSON(Negate, negate_);
    };
    WafRuleMatch2() = default ;
    WafRuleMatch2(const WafRuleMatch2 &) = default ;
    WafRuleMatch2(WafRuleMatch2 &&) = default ;
    WafRuleMatch2(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafRuleMatch2() = default ;
    WafRuleMatch2& operator=(const WafRuleMatch2 &) = default ;
    WafRuleMatch2& operator=(WafRuleMatch2 &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Criteria : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Criteria& obj) { 
        DARABONBA_PTR_TO_JSON(ConvertToLower, convertToLower_);
        DARABONBA_PTR_TO_JSON(Criteria, criteria_);
        DARABONBA_PTR_TO_JSON(Logic, logic_);
        DARABONBA_PTR_TO_JSON(MatchOperator, matchOperator_);
        DARABONBA_PTR_TO_JSON(MatchType, matchType_);
        DARABONBA_ANY_TO_JSON(MatchValue, matchValue_);
        DARABONBA_PTR_TO_JSON(Negate, negate_);
      };
      friend void from_json(const Darabonba::Json& j, Criteria& obj) { 
        DARABONBA_PTR_FROM_JSON(ConvertToLower, convertToLower_);
        DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
        DARABONBA_PTR_FROM_JSON(Logic, logic_);
        DARABONBA_PTR_FROM_JSON(MatchOperator, matchOperator_);
        DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
        DARABONBA_ANY_FROM_JSON(MatchValue, matchValue_);
        DARABONBA_PTR_FROM_JSON(Negate, negate_);
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
          DARABONBA_PTR_TO_JSON(ConvertToLower, convertToLower_);
          DARABONBA_PTR_TO_JSON(Criteria, criteria_);
          DARABONBA_PTR_TO_JSON(Logic, logic_);
          DARABONBA_PTR_TO_JSON(MatchOperator, matchOperator_);
          DARABONBA_PTR_TO_JSON(MatchType, matchType_);
          DARABONBA_ANY_TO_JSON(MatchValue, matchValue_);
          DARABONBA_PTR_TO_JSON(Negate, negate_);
        };
        friend void from_json(const Darabonba::Json& j, CriteriaItem& obj) { 
          DARABONBA_PTR_FROM_JSON(ConvertToLower, convertToLower_);
          DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
          DARABONBA_PTR_FROM_JSON(Logic, logic_);
          DARABONBA_PTR_FROM_JSON(MatchOperator, matchOperator_);
          DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
          DARABONBA_ANY_FROM_JSON(MatchValue, matchValue_);
          DARABONBA_PTR_FROM_JSON(Negate, negate_);
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
            DARABONBA_PTR_TO_JSON(ConvertToLower, convertToLower_);
            DARABONBA_PTR_TO_JSON(MatchOperator, matchOperator_);
            DARABONBA_PTR_TO_JSON(MatchType, matchType_);
            DARABONBA_ANY_TO_JSON(MatchValue, matchValue_);
            DARABONBA_PTR_TO_JSON(Negate, negate_);
          };
          friend void from_json(const Darabonba::Json& j, Criteria& obj) { 
            DARABONBA_PTR_FROM_JSON(ConvertToLower, convertToLower_);
            DARABONBA_PTR_FROM_JSON(MatchOperator, matchOperator_);
            DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
            DARABONBA_ANY_FROM_JSON(MatchValue, matchValue_);
            DARABONBA_PTR_FROM_JSON(Negate, negate_);
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
          virtual bool empty() const override { return this->convertToLower_ == nullptr
        && this->matchOperator_ == nullptr && this->matchType_ == nullptr && this->matchValue_ == nullptr && this->negate_ == nullptr; };
          // convertToLower Field Functions 
          bool hasConvertToLower() const { return this->convertToLower_ != nullptr;};
          void deleteConvertToLower() { this->convertToLower_ = nullptr;};
          inline bool getConvertToLower() const { DARABONBA_PTR_GET_DEFAULT(convertToLower_, false) };
          inline Criteria& setConvertToLower(bool convertToLower) { DARABONBA_PTR_SET_VALUE(convertToLower_, convertToLower) };


          // matchOperator Field Functions 
          bool hasMatchOperator() const { return this->matchOperator_ != nullptr;};
          void deleteMatchOperator() { this->matchOperator_ = nullptr;};
          inline string getMatchOperator() const { DARABONBA_PTR_GET_DEFAULT(matchOperator_, "") };
          inline Criteria& setMatchOperator(string matchOperator) { DARABONBA_PTR_SET_VALUE(matchOperator_, matchOperator) };


          // matchType Field Functions 
          bool hasMatchType() const { return this->matchType_ != nullptr;};
          void deleteMatchType() { this->matchType_ = nullptr;};
          inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
          inline Criteria& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


          // matchValue Field Functions 
          bool hasMatchValue() const { return this->matchValue_ != nullptr;};
          void deleteMatchValue() { this->matchValue_ = nullptr;};
          inline           const Darabonba::Json & getMatchValue() const { DARABONBA_GET(matchValue_) };
          Darabonba::Json & getMatchValue() { DARABONBA_GET(matchValue_) };
          inline Criteria& setMatchValue(const Darabonba::Json & matchValue) { DARABONBA_SET_VALUE(matchValue_, matchValue) };
          inline Criteria& setMatchValue(Darabonba::Json && matchValue) { DARABONBA_SET_RVALUE(matchValue_, matchValue) };


          // negate Field Functions 
          bool hasNegate() const { return this->negate_ != nullptr;};
          void deleteNegate() { this->negate_ = nullptr;};
          inline bool getNegate() const { DARABONBA_PTR_GET_DEFAULT(negate_, false) };
          inline Criteria& setNegate(bool negate) { DARABONBA_PTR_SET_VALUE(negate_, negate) };


        protected:
          shared_ptr<bool> convertToLower_ {};
          shared_ptr<string> matchOperator_ {};
          shared_ptr<string> matchType_ {};
          Darabonba::Json matchValue_ {};
          shared_ptr<bool> negate_ {};
        };

        virtual bool empty() const override { return this->convertToLower_ == nullptr
        && this->criteria_ == nullptr && this->logic_ == nullptr && this->matchOperator_ == nullptr && this->matchType_ == nullptr && this->matchValue_ == nullptr
        && this->negate_ == nullptr; };
        // convertToLower Field Functions 
        bool hasConvertToLower() const { return this->convertToLower_ != nullptr;};
        void deleteConvertToLower() { this->convertToLower_ = nullptr;};
        inline bool getConvertToLower() const { DARABONBA_PTR_GET_DEFAULT(convertToLower_, false) };
        inline CriteriaItem& setConvertToLower(bool convertToLower) { DARABONBA_PTR_SET_VALUE(convertToLower_, convertToLower) };


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


        // matchOperator Field Functions 
        bool hasMatchOperator() const { return this->matchOperator_ != nullptr;};
        void deleteMatchOperator() { this->matchOperator_ = nullptr;};
        inline string getMatchOperator() const { DARABONBA_PTR_GET_DEFAULT(matchOperator_, "") };
        inline CriteriaItem& setMatchOperator(string matchOperator) { DARABONBA_PTR_SET_VALUE(matchOperator_, matchOperator) };


        // matchType Field Functions 
        bool hasMatchType() const { return this->matchType_ != nullptr;};
        void deleteMatchType() { this->matchType_ = nullptr;};
        inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
        inline CriteriaItem& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


        // matchValue Field Functions 
        bool hasMatchValue() const { return this->matchValue_ != nullptr;};
        void deleteMatchValue() { this->matchValue_ = nullptr;};
        inline         const Darabonba::Json & getMatchValue() const { DARABONBA_GET(matchValue_) };
        Darabonba::Json & getMatchValue() { DARABONBA_GET(matchValue_) };
        inline CriteriaItem& setMatchValue(const Darabonba::Json & matchValue) { DARABONBA_SET_VALUE(matchValue_, matchValue) };
        inline CriteriaItem& setMatchValue(Darabonba::Json && matchValue) { DARABONBA_SET_RVALUE(matchValue_, matchValue) };


        // negate Field Functions 
        bool hasNegate() const { return this->negate_ != nullptr;};
        void deleteNegate() { this->negate_ = nullptr;};
        inline bool getNegate() const { DARABONBA_PTR_GET_DEFAULT(negate_, false) };
        inline CriteriaItem& setNegate(bool negate) { DARABONBA_PTR_SET_VALUE(negate_, negate) };


      protected:
        shared_ptr<bool> convertToLower_ {};
        shared_ptr<vector<CriteriaItem::Criteria>> criteria_ {};
        shared_ptr<string> logic_ {};
        shared_ptr<string> matchOperator_ {};
        shared_ptr<string> matchType_ {};
        Darabonba::Json matchValue_ {};
        shared_ptr<bool> negate_ {};
      };

      virtual bool empty() const override { return this->convertToLower_ == nullptr
        && this->criteria_ == nullptr && this->logic_ == nullptr && this->matchOperator_ == nullptr && this->matchType_ == nullptr && this->matchValue_ == nullptr
        && this->negate_ == nullptr; };
      // convertToLower Field Functions 
      bool hasConvertToLower() const { return this->convertToLower_ != nullptr;};
      void deleteConvertToLower() { this->convertToLower_ = nullptr;};
      inline bool getConvertToLower() const { DARABONBA_PTR_GET_DEFAULT(convertToLower_, false) };
      inline Criteria& setConvertToLower(bool convertToLower) { DARABONBA_PTR_SET_VALUE(convertToLower_, convertToLower) };


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


      // matchOperator Field Functions 
      bool hasMatchOperator() const { return this->matchOperator_ != nullptr;};
      void deleteMatchOperator() { this->matchOperator_ = nullptr;};
      inline string getMatchOperator() const { DARABONBA_PTR_GET_DEFAULT(matchOperator_, "") };
      inline Criteria& setMatchOperator(string matchOperator) { DARABONBA_PTR_SET_VALUE(matchOperator_, matchOperator) };


      // matchType Field Functions 
      bool hasMatchType() const { return this->matchType_ != nullptr;};
      void deleteMatchType() { this->matchType_ = nullptr;};
      inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
      inline Criteria& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


      // matchValue Field Functions 
      bool hasMatchValue() const { return this->matchValue_ != nullptr;};
      void deleteMatchValue() { this->matchValue_ = nullptr;};
      inline       const Darabonba::Json & getMatchValue() const { DARABONBA_GET(matchValue_) };
      Darabonba::Json & getMatchValue() { DARABONBA_GET(matchValue_) };
      inline Criteria& setMatchValue(const Darabonba::Json & matchValue) { DARABONBA_SET_VALUE(matchValue_, matchValue) };
      inline Criteria& setMatchValue(Darabonba::Json && matchValue) { DARABONBA_SET_RVALUE(matchValue_, matchValue) };


      // negate Field Functions 
      bool hasNegate() const { return this->negate_ != nullptr;};
      void deleteNegate() { this->negate_ = nullptr;};
      inline bool getNegate() const { DARABONBA_PTR_GET_DEFAULT(negate_, false) };
      inline Criteria& setNegate(bool negate) { DARABONBA_PTR_SET_VALUE(negate_, negate) };


    protected:
      shared_ptr<bool> convertToLower_ {};
      shared_ptr<vector<Criteria::CriteriaItem>> criteria_ {};
      shared_ptr<string> logic_ {};
      shared_ptr<string> matchOperator_ {};
      shared_ptr<string> matchType_ {};
      Darabonba::Json matchValue_ {};
      shared_ptr<bool> negate_ {};
    };

    virtual bool empty() const override { return this->convertToLower_ == nullptr
        && this->criteria_ == nullptr && this->logic_ == nullptr && this->matchOperator_ == nullptr && this->matchType_ == nullptr && this->matchValue_ == nullptr
        && this->negate_ == nullptr; };
    // convertToLower Field Functions 
    bool hasConvertToLower() const { return this->convertToLower_ != nullptr;};
    void deleteConvertToLower() { this->convertToLower_ = nullptr;};
    inline bool getConvertToLower() const { DARABONBA_PTR_GET_DEFAULT(convertToLower_, false) };
    inline WafRuleMatch2& setConvertToLower(bool convertToLower) { DARABONBA_PTR_SET_VALUE(convertToLower_, convertToLower) };


    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline const vector<WafRuleMatch2::Criteria> & getCriteria() const { DARABONBA_PTR_GET_CONST(criteria_, vector<WafRuleMatch2::Criteria>) };
    inline vector<WafRuleMatch2::Criteria> getCriteria() { DARABONBA_PTR_GET(criteria_, vector<WafRuleMatch2::Criteria>) };
    inline WafRuleMatch2& setCriteria(const vector<WafRuleMatch2::Criteria> & criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };
    inline WafRuleMatch2& setCriteria(vector<WafRuleMatch2::Criteria> && criteria) { DARABONBA_PTR_SET_RVALUE(criteria_, criteria) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline string getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, "") };
    inline WafRuleMatch2& setLogic(string logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // matchOperator Field Functions 
    bool hasMatchOperator() const { return this->matchOperator_ != nullptr;};
    void deleteMatchOperator() { this->matchOperator_ = nullptr;};
    inline string getMatchOperator() const { DARABONBA_PTR_GET_DEFAULT(matchOperator_, "") };
    inline WafRuleMatch2& setMatchOperator(string matchOperator) { DARABONBA_PTR_SET_VALUE(matchOperator_, matchOperator) };


    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
    inline WafRuleMatch2& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // matchValue Field Functions 
    bool hasMatchValue() const { return this->matchValue_ != nullptr;};
    void deleteMatchValue() { this->matchValue_ = nullptr;};
    inline     const Darabonba::Json & getMatchValue() const { DARABONBA_GET(matchValue_) };
    Darabonba::Json & getMatchValue() { DARABONBA_GET(matchValue_) };
    inline WafRuleMatch2& setMatchValue(const Darabonba::Json & matchValue) { DARABONBA_SET_VALUE(matchValue_, matchValue) };
    inline WafRuleMatch2& setMatchValue(Darabonba::Json && matchValue) { DARABONBA_SET_RVALUE(matchValue_, matchValue) };


    // negate Field Functions 
    bool hasNegate() const { return this->negate_ != nullptr;};
    void deleteNegate() { this->negate_ = nullptr;};
    inline bool getNegate() const { DARABONBA_PTR_GET_DEFAULT(negate_, false) };
    inline WafRuleMatch2& setNegate(bool negate) { DARABONBA_PTR_SET_VALUE(negate_, negate) };


  protected:
    shared_ptr<bool> convertToLower_ {};
    shared_ptr<vector<WafRuleMatch2::Criteria>> criteria_ {};
    shared_ptr<string> logic_ {};
    shared_ptr<string> matchOperator_ {};
    shared_ptr<string> matchType_ {};
    Darabonba::Json matchValue_ {};
    shared_ptr<bool> negate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
