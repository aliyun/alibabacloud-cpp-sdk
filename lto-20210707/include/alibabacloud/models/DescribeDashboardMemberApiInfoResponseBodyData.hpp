// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDASHBOARDMEMBERAPIINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDASHBOARDMEMBERAPIINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDashboardMemberApiInfoResponseBodyDataMemberInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class DescribeDashboardMemberApiInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDashboardMemberApiInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MemberInfoList, memberInfoList_);
      DARABONBA_PTR_TO_JSON(MemberName, memberName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDashboardMemberApiInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberInfoList, memberInfoList_);
      DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
    };
    DescribeDashboardMemberApiInfoResponseBodyData() = default ;
    DescribeDashboardMemberApiInfoResponseBodyData(const DescribeDashboardMemberApiInfoResponseBodyData &) = default ;
    DescribeDashboardMemberApiInfoResponseBodyData(DescribeDashboardMemberApiInfoResponseBodyData &&) = default ;
    DescribeDashboardMemberApiInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDashboardMemberApiInfoResponseBodyData() = default ;
    DescribeDashboardMemberApiInfoResponseBodyData& operator=(const DescribeDashboardMemberApiInfoResponseBodyData &) = default ;
    DescribeDashboardMemberApiInfoResponseBodyData& operator=(DescribeDashboardMemberApiInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberInfoList_ == nullptr
        && return this->memberName_ == nullptr; };
    // memberInfoList Field Functions 
    bool hasMemberInfoList() const { return this->memberInfoList_ != nullptr;};
    void deleteMemberInfoList() { this->memberInfoList_ = nullptr;};
    inline const vector<Models::DescribeDashboardMemberApiInfoResponseBodyDataMemberInfoList> & memberInfoList() const { DARABONBA_PTR_GET_CONST(memberInfoList_, vector<Models::DescribeDashboardMemberApiInfoResponseBodyDataMemberInfoList>) };
    inline vector<Models::DescribeDashboardMemberApiInfoResponseBodyDataMemberInfoList> memberInfoList() { DARABONBA_PTR_GET(memberInfoList_, vector<Models::DescribeDashboardMemberApiInfoResponseBodyDataMemberInfoList>) };
    inline DescribeDashboardMemberApiInfoResponseBodyData& setMemberInfoList(const vector<Models::DescribeDashboardMemberApiInfoResponseBodyDataMemberInfoList> & memberInfoList) { DARABONBA_PTR_SET_VALUE(memberInfoList_, memberInfoList) };
    inline DescribeDashboardMemberApiInfoResponseBodyData& setMemberInfoList(vector<Models::DescribeDashboardMemberApiInfoResponseBodyDataMemberInfoList> && memberInfoList) { DARABONBA_PTR_SET_RVALUE(memberInfoList_, memberInfoList) };


    // memberName Field Functions 
    bool hasMemberName() const { return this->memberName_ != nullptr;};
    void deleteMemberName() { this->memberName_ = nullptr;};
    inline string memberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
    inline DescribeDashboardMemberApiInfoResponseBodyData& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


  protected:
    std::shared_ptr<vector<Models::DescribeDashboardMemberApiInfoResponseBodyDataMemberInfoList>> memberInfoList_ = nullptr;
    std::shared_ptr<string> memberName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
