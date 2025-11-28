// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVACYRULESHAREDMEMBERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVACYRULESHAREDMEMBERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrivacyRuleSharedMemberResponseBodyDataMemberList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListPrivacyRuleSharedMemberResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivacyRuleSharedMemberResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BizChainId, bizChainId_);
      DARABONBA_PTR_TO_JSON(BizChainName, bizChainName_);
      DARABONBA_PTR_TO_JSON(MemberList, memberList_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivacyRuleSharedMemberResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BizChainId, bizChainId_);
      DARABONBA_PTR_FROM_JSON(BizChainName, bizChainName_);
      DARABONBA_PTR_FROM_JSON(MemberList, memberList_);
    };
    ListPrivacyRuleSharedMemberResponseBodyData() = default ;
    ListPrivacyRuleSharedMemberResponseBodyData(const ListPrivacyRuleSharedMemberResponseBodyData &) = default ;
    ListPrivacyRuleSharedMemberResponseBodyData(ListPrivacyRuleSharedMemberResponseBodyData &&) = default ;
    ListPrivacyRuleSharedMemberResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivacyRuleSharedMemberResponseBodyData() = default ;
    ListPrivacyRuleSharedMemberResponseBodyData& operator=(const ListPrivacyRuleSharedMemberResponseBodyData &) = default ;
    ListPrivacyRuleSharedMemberResponseBodyData& operator=(ListPrivacyRuleSharedMemberResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizChainId_ == nullptr
        && return this->bizChainName_ == nullptr && return this->memberList_ == nullptr; };
    // bizChainId Field Functions 
    bool hasBizChainId() const { return this->bizChainId_ != nullptr;};
    void deleteBizChainId() { this->bizChainId_ = nullptr;};
    inline string bizChainId() const { DARABONBA_PTR_GET_DEFAULT(bizChainId_, "") };
    inline ListPrivacyRuleSharedMemberResponseBodyData& setBizChainId(string bizChainId) { DARABONBA_PTR_SET_VALUE(bizChainId_, bizChainId) };


    // bizChainName Field Functions 
    bool hasBizChainName() const { return this->bizChainName_ != nullptr;};
    void deleteBizChainName() { this->bizChainName_ = nullptr;};
    inline string bizChainName() const { DARABONBA_PTR_GET_DEFAULT(bizChainName_, "") };
    inline ListPrivacyRuleSharedMemberResponseBodyData& setBizChainName(string bizChainName) { DARABONBA_PTR_SET_VALUE(bizChainName_, bizChainName) };


    // memberList Field Functions 
    bool hasMemberList() const { return this->memberList_ != nullptr;};
    void deleteMemberList() { this->memberList_ = nullptr;};
    inline const vector<Models::ListPrivacyRuleSharedMemberResponseBodyDataMemberList> & memberList() const { DARABONBA_PTR_GET_CONST(memberList_, vector<Models::ListPrivacyRuleSharedMemberResponseBodyDataMemberList>) };
    inline vector<Models::ListPrivacyRuleSharedMemberResponseBodyDataMemberList> memberList() { DARABONBA_PTR_GET(memberList_, vector<Models::ListPrivacyRuleSharedMemberResponseBodyDataMemberList>) };
    inline ListPrivacyRuleSharedMemberResponseBodyData& setMemberList(const vector<Models::ListPrivacyRuleSharedMemberResponseBodyDataMemberList> & memberList) { DARABONBA_PTR_SET_VALUE(memberList_, memberList) };
    inline ListPrivacyRuleSharedMemberResponseBodyData& setMemberList(vector<Models::ListPrivacyRuleSharedMemberResponseBodyDataMemberList> && memberList) { DARABONBA_PTR_SET_RVALUE(memberList_, memberList) };


  protected:
    std::shared_ptr<string> bizChainId_ = nullptr;
    std::shared_ptr<string> bizChainName_ = nullptr;
    std::shared_ptr<vector<Models::ListPrivacyRuleSharedMemberResponseBodyDataMemberList>> memberList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
