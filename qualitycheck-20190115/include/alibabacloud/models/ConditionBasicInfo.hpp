// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONDITIONBASICINFO_HPP_
#define ALIBABACLOUD_MODELS_CONDITIONBASICINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OperatorBasicInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ConditionBasicInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConditionBasicInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Check_range, checkRange_);
      DARABONBA_PTR_TO_JSON(Cid, cid_);
      DARABONBA_PTR_TO_JSON(Exclusion, exclusion_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Lambda, lambda_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Operators, operators_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
      DARABONBA_PTR_TO_JSON(UserGroup, userGroup_);
    };
    friend void from_json(const Darabonba::Json& j, ConditionBasicInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Check_range, checkRange_);
      DARABONBA_PTR_FROM_JSON(Cid, cid_);
      DARABONBA_PTR_FROM_JSON(Exclusion, exclusion_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Lambda, lambda_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Operators, operators_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
      DARABONBA_PTR_FROM_JSON(UserGroup, userGroup_);
    };
    ConditionBasicInfo() = default ;
    ConditionBasicInfo(const ConditionBasicInfo &) = default ;
    ConditionBasicInfo(ConditionBasicInfo &&) = default ;
    ConditionBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConditionBasicInfo() = default ;
    ConditionBasicInfo& operator=(const ConditionBasicInfo &) = default ;
    ConditionBasicInfo& operator=(ConditionBasicInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckRange : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckRange& obj) { 
        DARABONBA_PTR_TO_JSON(Absolute, absolute_);
        DARABONBA_PTR_TO_JSON(AllSentencesSatisfy, allSentencesSatisfy_);
        DARABONBA_PTR_TO_JSON(Anchor, anchor_);
        DARABONBA_PTR_TO_JSON(Range, range_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      };
      friend void from_json(const Darabonba::Json& j, CheckRange& obj) { 
        DARABONBA_PTR_FROM_JSON(Absolute, absolute_);
        DARABONBA_PTR_FROM_JSON(AllSentencesSatisfy, allSentencesSatisfy_);
        DARABONBA_PTR_FROM_JSON(Anchor, anchor_);
        DARABONBA_PTR_FROM_JSON(Range, range_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      };
      CheckRange() = default ;
      CheckRange(const CheckRange &) = default ;
      CheckRange(CheckRange &&) = default ;
      CheckRange(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckRange() = default ;
      CheckRange& operator=(const CheckRange &) = default ;
      CheckRange& operator=(CheckRange &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Range : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Range& obj) { 
          DARABONBA_PTR_TO_JSON(From, from_);
          DARABONBA_PTR_TO_JSON(To, to_);
        };
        friend void from_json(const Darabonba::Json& j, Range& obj) { 
          DARABONBA_PTR_FROM_JSON(From, from_);
          DARABONBA_PTR_FROM_JSON(To, to_);
        };
        Range() = default ;
        Range(const Range &) = default ;
        Range(Range &&) = default ;
        Range(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Range() = default ;
        Range& operator=(const Range &) = default ;
        Range& operator=(Range &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->from_ == nullptr
        && this->to_ == nullptr; };
        // from Field Functions 
        bool hasFrom() const { return this->from_ != nullptr;};
        void deleteFrom() { this->from_ = nullptr;};
        inline int32_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
        inline Range& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


        // to Field Functions 
        bool hasTo() const { return this->to_ != nullptr;};
        void deleteTo() { this->to_ = nullptr;};
        inline int32_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0) };
        inline Range& setTo(int32_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


      protected:
        shared_ptr<int32_t> from_ {};
        shared_ptr<int32_t> to_ {};
      };

      class Anchor : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Anchor& obj) { 
          DARABONBA_PTR_TO_JSON(Cid, cid_);
          DARABONBA_PTR_TO_JSON(Hit_time, hitTime_);
          DARABONBA_PTR_TO_JSON(Location, location_);
        };
        friend void from_json(const Darabonba::Json& j, Anchor& obj) { 
          DARABONBA_PTR_FROM_JSON(Cid, cid_);
          DARABONBA_PTR_FROM_JSON(Hit_time, hitTime_);
          DARABONBA_PTR_FROM_JSON(Location, location_);
        };
        Anchor() = default ;
        Anchor(const Anchor &) = default ;
        Anchor(Anchor &&) = default ;
        Anchor(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Anchor() = default ;
        Anchor& operator=(const Anchor &) = default ;
        Anchor& operator=(Anchor &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cid_ == nullptr
        && this->hitTime_ == nullptr && this->location_ == nullptr; };
        // cid Field Functions 
        bool hasCid() const { return this->cid_ != nullptr;};
        void deleteCid() { this->cid_ = nullptr;};
        inline string getCid() const { DARABONBA_PTR_GET_DEFAULT(cid_, "") };
        inline Anchor& setCid(string cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };


        // hitTime Field Functions 
        bool hasHitTime() const { return this->hitTime_ != nullptr;};
        void deleteHitTime() { this->hitTime_ = nullptr;};
        inline int32_t getHitTime() const { DARABONBA_PTR_GET_DEFAULT(hitTime_, 0) };
        inline Anchor& setHitTime(int32_t hitTime) { DARABONBA_PTR_SET_VALUE(hitTime_, hitTime) };


        // location Field Functions 
        bool hasLocation() const { return this->location_ != nullptr;};
        void deleteLocation() { this->location_ = nullptr;};
        inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
        inline Anchor& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


      protected:
        shared_ptr<string> cid_ {};
        shared_ptr<int32_t> hitTime_ {};
        shared_ptr<string> location_ {};
      };

      virtual bool empty() const override { return this->absolute_ == nullptr
        && this->allSentencesSatisfy_ == nullptr && this->anchor_ == nullptr && this->range_ == nullptr && this->role_ == nullptr && this->roleId_ == nullptr; };
      // absolute Field Functions 
      bool hasAbsolute() const { return this->absolute_ != nullptr;};
      void deleteAbsolute() { this->absolute_ = nullptr;};
      inline bool getAbsolute() const { DARABONBA_PTR_GET_DEFAULT(absolute_, false) };
      inline CheckRange& setAbsolute(bool absolute) { DARABONBA_PTR_SET_VALUE(absolute_, absolute) };


      // allSentencesSatisfy Field Functions 
      bool hasAllSentencesSatisfy() const { return this->allSentencesSatisfy_ != nullptr;};
      void deleteAllSentencesSatisfy() { this->allSentencesSatisfy_ = nullptr;};
      inline bool getAllSentencesSatisfy() const { DARABONBA_PTR_GET_DEFAULT(allSentencesSatisfy_, false) };
      inline CheckRange& setAllSentencesSatisfy(bool allSentencesSatisfy) { DARABONBA_PTR_SET_VALUE(allSentencesSatisfy_, allSentencesSatisfy) };


      // anchor Field Functions 
      bool hasAnchor() const { return this->anchor_ != nullptr;};
      void deleteAnchor() { this->anchor_ = nullptr;};
      inline const CheckRange::Anchor & getAnchor() const { DARABONBA_PTR_GET_CONST(anchor_, CheckRange::Anchor) };
      inline CheckRange::Anchor getAnchor() { DARABONBA_PTR_GET(anchor_, CheckRange::Anchor) };
      inline CheckRange& setAnchor(const CheckRange::Anchor & anchor) { DARABONBA_PTR_SET_VALUE(anchor_, anchor) };
      inline CheckRange& setAnchor(CheckRange::Anchor && anchor) { DARABONBA_PTR_SET_RVALUE(anchor_, anchor) };


      // range Field Functions 
      bool hasRange() const { return this->range_ != nullptr;};
      void deleteRange() { this->range_ = nullptr;};
      inline const CheckRange::Range & getRange() const { DARABONBA_PTR_GET_CONST(range_, CheckRange::Range) };
      inline CheckRange::Range getRange() { DARABONBA_PTR_GET(range_, CheckRange::Range) };
      inline CheckRange& setRange(const CheckRange::Range & range) { DARABONBA_PTR_SET_VALUE(range_, range) };
      inline CheckRange& setRange(CheckRange::Range && range) { DARABONBA_PTR_SET_RVALUE(range_, range) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline CheckRange& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // roleId Field Functions 
      bool hasRoleId() const { return this->roleId_ != nullptr;};
      void deleteRoleId() { this->roleId_ = nullptr;};
      inline int32_t getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0) };
      inline CheckRange& setRoleId(int32_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    protected:
      shared_ptr<bool> absolute_ {};
      shared_ptr<bool> allSentencesSatisfy_ {};
      shared_ptr<CheckRange::Anchor> anchor_ {};
      shared_ptr<CheckRange::Range> range_ {};
      shared_ptr<string> role_ {};
      shared_ptr<int32_t> roleId_ {};
    };

    virtual bool empty() const override { return this->checkRange_ == nullptr
        && this->cid_ == nullptr && this->exclusion_ == nullptr && this->id_ == nullptr && this->lambda_ == nullptr && this->name_ == nullptr
        && this->operators_ == nullptr && this->rid_ == nullptr && this->userGroup_ == nullptr; };
    // checkRange Field Functions 
    bool hasCheckRange() const { return this->checkRange_ != nullptr;};
    void deleteCheckRange() { this->checkRange_ = nullptr;};
    inline const ConditionBasicInfo::CheckRange & getCheckRange() const { DARABONBA_PTR_GET_CONST(checkRange_, ConditionBasicInfo::CheckRange) };
    inline ConditionBasicInfo::CheckRange getCheckRange() { DARABONBA_PTR_GET(checkRange_, ConditionBasicInfo::CheckRange) };
    inline ConditionBasicInfo& setCheckRange(const ConditionBasicInfo::CheckRange & checkRange) { DARABONBA_PTR_SET_VALUE(checkRange_, checkRange) };
    inline ConditionBasicInfo& setCheckRange(ConditionBasicInfo::CheckRange && checkRange) { DARABONBA_PTR_SET_RVALUE(checkRange_, checkRange) };


    // cid Field Functions 
    bool hasCid() const { return this->cid_ != nullptr;};
    void deleteCid() { this->cid_ = nullptr;};
    inline string getCid() const { DARABONBA_PTR_GET_DEFAULT(cid_, "") };
    inline ConditionBasicInfo& setCid(string cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };


    // exclusion Field Functions 
    bool hasExclusion() const { return this->exclusion_ != nullptr;};
    void deleteExclusion() { this->exclusion_ = nullptr;};
    inline int32_t getExclusion() const { DARABONBA_PTR_GET_DEFAULT(exclusion_, 0) };
    inline ConditionBasicInfo& setExclusion(int32_t exclusion) { DARABONBA_PTR_SET_VALUE(exclusion_, exclusion) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ConditionBasicInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lambda Field Functions 
    bool hasLambda() const { return this->lambda_ != nullptr;};
    void deleteLambda() { this->lambda_ = nullptr;};
    inline string getLambda() const { DARABONBA_PTR_GET_DEFAULT(lambda_, "") };
    inline ConditionBasicInfo& setLambda(string lambda) { DARABONBA_PTR_SET_VALUE(lambda_, lambda) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ConditionBasicInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operators Field Functions 
    bool hasOperators() const { return this->operators_ != nullptr;};
    void deleteOperators() { this->operators_ = nullptr;};
    inline const vector<OperatorBasicInfo> & getOperators() const { DARABONBA_PTR_GET_CONST(operators_, vector<OperatorBasicInfo>) };
    inline vector<OperatorBasicInfo> getOperators() { DARABONBA_PTR_GET(operators_, vector<OperatorBasicInfo>) };
    inline ConditionBasicInfo& setOperators(const vector<OperatorBasicInfo> & operators) { DARABONBA_PTR_SET_VALUE(operators_, operators) };
    inline ConditionBasicInfo& setOperators(vector<OperatorBasicInfo> && operators) { DARABONBA_PTR_SET_RVALUE(operators_, operators) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline string getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, "") };
    inline ConditionBasicInfo& setRid(string rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // userGroup Field Functions 
    bool hasUserGroup() const { return this->userGroup_ != nullptr;};
    void deleteUserGroup() { this->userGroup_ = nullptr;};
    inline string getUserGroup() const { DARABONBA_PTR_GET_DEFAULT(userGroup_, "") };
    inline ConditionBasicInfo& setUserGroup(string userGroup) { DARABONBA_PTR_SET_VALUE(userGroup_, userGroup) };


  protected:
    shared_ptr<ConditionBasicInfo::CheckRange> checkRange_ {};
    shared_ptr<string> cid_ {};
    shared_ptr<int32_t> exclusion_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> lambda_ {};
    shared_ptr<string> name_ {};
    shared_ptr<vector<OperatorBasicInfo>> operators_ {};
    shared_ptr<string> rid_ {};
    shared_ptr<string> userGroup_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
