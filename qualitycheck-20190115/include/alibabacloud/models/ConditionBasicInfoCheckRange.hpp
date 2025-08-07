// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONDITIONBASICINFOCHECKRANGE_HPP_
#define ALIBABACLOUD_MODELS_CONDITIONBASICINFOCHECKRANGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ConditionBasicInfoCheckRangeAnchor.hpp>
#include <alibabacloud/models/ConditionBasicInfoCheckRangeRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ConditionBasicInfoCheckRange : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConditionBasicInfoCheckRange& obj) { 
      DARABONBA_PTR_TO_JSON(Absolute, absolute_);
      DARABONBA_PTR_TO_JSON(AllSentencesSatisfy, allSentencesSatisfy_);
      DARABONBA_PTR_TO_JSON(Anchor, anchor_);
      DARABONBA_PTR_TO_JSON(Range, range_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
    };
    friend void from_json(const Darabonba::Json& j, ConditionBasicInfoCheckRange& obj) { 
      DARABONBA_PTR_FROM_JSON(Absolute, absolute_);
      DARABONBA_PTR_FROM_JSON(AllSentencesSatisfy, allSentencesSatisfy_);
      DARABONBA_PTR_FROM_JSON(Anchor, anchor_);
      DARABONBA_PTR_FROM_JSON(Range, range_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
    };
    ConditionBasicInfoCheckRange() = default ;
    ConditionBasicInfoCheckRange(const ConditionBasicInfoCheckRange &) = default ;
    ConditionBasicInfoCheckRange(ConditionBasicInfoCheckRange &&) = default ;
    ConditionBasicInfoCheckRange(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConditionBasicInfoCheckRange() = default ;
    ConditionBasicInfoCheckRange& operator=(const ConditionBasicInfoCheckRange &) = default ;
    ConditionBasicInfoCheckRange& operator=(ConditionBasicInfoCheckRange &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->absolute_ != nullptr
        && this->allSentencesSatisfy_ != nullptr && this->anchor_ != nullptr && this->range_ != nullptr && this->role_ != nullptr && this->roleId_ != nullptr; };
    // absolute Field Functions 
    bool hasAbsolute() const { return this->absolute_ != nullptr;};
    void deleteAbsolute() { this->absolute_ = nullptr;};
    inline bool absolute() const { DARABONBA_PTR_GET_DEFAULT(absolute_, false) };
    inline ConditionBasicInfoCheckRange& setAbsolute(bool absolute) { DARABONBA_PTR_SET_VALUE(absolute_, absolute) };


    // allSentencesSatisfy Field Functions 
    bool hasAllSentencesSatisfy() const { return this->allSentencesSatisfy_ != nullptr;};
    void deleteAllSentencesSatisfy() { this->allSentencesSatisfy_ = nullptr;};
    inline bool allSentencesSatisfy() const { DARABONBA_PTR_GET_DEFAULT(allSentencesSatisfy_, false) };
    inline ConditionBasicInfoCheckRange& setAllSentencesSatisfy(bool allSentencesSatisfy) { DARABONBA_PTR_SET_VALUE(allSentencesSatisfy_, allSentencesSatisfy) };


    // anchor Field Functions 
    bool hasAnchor() const { return this->anchor_ != nullptr;};
    void deleteAnchor() { this->anchor_ = nullptr;};
    inline const Models::ConditionBasicInfoCheckRangeAnchor & anchor() const { DARABONBA_PTR_GET_CONST(anchor_, Models::ConditionBasicInfoCheckRangeAnchor) };
    inline Models::ConditionBasicInfoCheckRangeAnchor anchor() { DARABONBA_PTR_GET(anchor_, Models::ConditionBasicInfoCheckRangeAnchor) };
    inline ConditionBasicInfoCheckRange& setAnchor(const Models::ConditionBasicInfoCheckRangeAnchor & anchor) { DARABONBA_PTR_SET_VALUE(anchor_, anchor) };
    inline ConditionBasicInfoCheckRange& setAnchor(Models::ConditionBasicInfoCheckRangeAnchor && anchor) { DARABONBA_PTR_SET_RVALUE(anchor_, anchor) };


    // range Field Functions 
    bool hasRange() const { return this->range_ != nullptr;};
    void deleteRange() { this->range_ = nullptr;};
    inline const Models::ConditionBasicInfoCheckRangeRange & range() const { DARABONBA_PTR_GET_CONST(range_, Models::ConditionBasicInfoCheckRangeRange) };
    inline Models::ConditionBasicInfoCheckRangeRange range() { DARABONBA_PTR_GET(range_, Models::ConditionBasicInfoCheckRangeRange) };
    inline ConditionBasicInfoCheckRange& setRange(const Models::ConditionBasicInfoCheckRangeRange & range) { DARABONBA_PTR_SET_VALUE(range_, range) };
    inline ConditionBasicInfoCheckRange& setRange(Models::ConditionBasicInfoCheckRangeRange && range) { DARABONBA_PTR_SET_RVALUE(range_, range) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline ConditionBasicInfoCheckRange& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline int32_t roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0) };
    inline ConditionBasicInfoCheckRange& setRoleId(int32_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


  protected:
    std::shared_ptr<bool> absolute_ = nullptr;
    std::shared_ptr<bool> allSentencesSatisfy_ = nullptr;
    std::shared_ptr<Models::ConditionBasicInfoCheckRangeAnchor> anchor_ = nullptr;
    std::shared_ptr<Models::ConditionBasicInfoCheckRangeRange> range_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<int32_t> roleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
