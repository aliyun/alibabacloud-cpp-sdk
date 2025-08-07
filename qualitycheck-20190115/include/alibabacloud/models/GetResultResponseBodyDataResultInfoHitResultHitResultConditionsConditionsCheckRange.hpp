// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTCONDITIONSCONDITIONSCHECKRANGE_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTCONDITIONSCONDITIONSCHECKRANGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeAnchor.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeRange.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeTimeRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange& obj) { 
      DARABONBA_PTR_TO_JSON(Absolute, absolute_);
      DARABONBA_PTR_TO_JSON(AllSentencesSatisfy, allSentencesSatisfy_);
      DARABONBA_PTR_TO_JSON(Anchor, anchor_);
      DARABONBA_PTR_TO_JSON(Range, range_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(TimeRange, timeRange_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange& obj) { 
      DARABONBA_PTR_FROM_JSON(Absolute, absolute_);
      DARABONBA_PTR_FROM_JSON(AllSentencesSatisfy, allSentencesSatisfy_);
      DARABONBA_PTR_FROM_JSON(Anchor, anchor_);
      DARABONBA_PTR_FROM_JSON(Range, range_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(TimeRange, timeRange_);
    };
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange(const GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange(GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange &&) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange& operator=(const GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange& operator=(GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->absolute_ != nullptr
        && this->allSentencesSatisfy_ != nullptr && this->anchor_ != nullptr && this->range_ != nullptr && this->role_ != nullptr && this->roleId_ != nullptr
        && this->timeRange_ != nullptr; };
    // absolute Field Functions 
    bool hasAbsolute() const { return this->absolute_ != nullptr;};
    void deleteAbsolute() { this->absolute_ = nullptr;};
    inline bool absolute() const { DARABONBA_PTR_GET_DEFAULT(absolute_, false) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange& setAbsolute(bool absolute) { DARABONBA_PTR_SET_VALUE(absolute_, absolute) };


    // allSentencesSatisfy Field Functions 
    bool hasAllSentencesSatisfy() const { return this->allSentencesSatisfy_ != nullptr;};
    void deleteAllSentencesSatisfy() { this->allSentencesSatisfy_ = nullptr;};
    inline bool allSentencesSatisfy() const { DARABONBA_PTR_GET_DEFAULT(allSentencesSatisfy_, false) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange& setAllSentencesSatisfy(bool allSentencesSatisfy) { DARABONBA_PTR_SET_VALUE(allSentencesSatisfy_, allSentencesSatisfy) };


    // anchor Field Functions 
    bool hasAnchor() const { return this->anchor_ != nullptr;};
    void deleteAnchor() { this->anchor_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeAnchor & anchor() const { DARABONBA_PTR_GET_CONST(anchor_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeAnchor) };
    inline Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeAnchor anchor() { DARABONBA_PTR_GET(anchor_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeAnchor) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange& setAnchor(const Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeAnchor & anchor) { DARABONBA_PTR_SET_VALUE(anchor_, anchor) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange& setAnchor(Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeAnchor && anchor) { DARABONBA_PTR_SET_RVALUE(anchor_, anchor) };


    // range Field Functions 
    bool hasRange() const { return this->range_ != nullptr;};
    void deleteRange() { this->range_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeRange & range() const { DARABONBA_PTR_GET_CONST(range_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeRange) };
    inline Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeRange range() { DARABONBA_PTR_GET(range_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeRange) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange& setRange(const Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeRange & range) { DARABONBA_PTR_SET_VALUE(range_, range) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange& setRange(Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeRange && range) { DARABONBA_PTR_SET_RVALUE(range_, range) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline int32_t roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange& setRoleId(int32_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeTimeRange & timeRange() const { DARABONBA_PTR_GET_CONST(timeRange_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeTimeRange) };
    inline Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeTimeRange timeRange() { DARABONBA_PTR_GET(timeRange_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeTimeRange) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange& setTimeRange(const Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeTimeRange & timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange& setTimeRange(Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeTimeRange && timeRange) { DARABONBA_PTR_SET_RVALUE(timeRange_, timeRange) };


  protected:
    // false: 相对位置; 会结合anchor以及角色来决定句子位置
    std::shared_ptr<bool> absolute_ = nullptr;
    // true: 每句话都必须满足条件；
    std::shared_ptr<bool> allSentencesSatisfy_ = nullptr;
    // 前置后置条件
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeAnchor> anchor_ = nullptr;
    // 相对范围
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeRange> range_ = nullptr;
    // 对应 RoleType.type
    std::shared_ptr<string> role_ = nullptr;
    // 对应 RoleType.id
    std::shared_ptr<int32_t> roleId_ = nullptr;
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRangeTimeRange> timeRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
