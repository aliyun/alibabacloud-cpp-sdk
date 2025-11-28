// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SHAREPRIVACYRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SHAREPRIVACYRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class SharePrivacyRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SharePrivacyRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MemberIdList, memberIdList_);
      DARABONBA_PTR_TO_JSON(PrivacyRuleId, privacyRuleId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SharePrivacyRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberIdList, memberIdList_);
      DARABONBA_PTR_FROM_JSON(PrivacyRuleId, privacyRuleId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SharePrivacyRuleRequest() = default ;
    SharePrivacyRuleRequest(const SharePrivacyRuleRequest &) = default ;
    SharePrivacyRuleRequest(SharePrivacyRuleRequest &&) = default ;
    SharePrivacyRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SharePrivacyRuleRequest() = default ;
    SharePrivacyRuleRequest& operator=(const SharePrivacyRuleRequest &) = default ;
    SharePrivacyRuleRequest& operator=(SharePrivacyRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberIdList_ == nullptr
        && return this->privacyRuleId_ == nullptr && return this->regionId_ == nullptr; };
    // memberIdList Field Functions 
    bool hasMemberIdList() const { return this->memberIdList_ != nullptr;};
    void deleteMemberIdList() { this->memberIdList_ = nullptr;};
    inline string memberIdList() const { DARABONBA_PTR_GET_DEFAULT(memberIdList_, "") };
    inline SharePrivacyRuleRequest& setMemberIdList(string memberIdList) { DARABONBA_PTR_SET_VALUE(memberIdList_, memberIdList) };


    // privacyRuleId Field Functions 
    bool hasPrivacyRuleId() const { return this->privacyRuleId_ != nullptr;};
    void deletePrivacyRuleId() { this->privacyRuleId_ = nullptr;};
    inline string privacyRuleId() const { DARABONBA_PTR_GET_DEFAULT(privacyRuleId_, "") };
    inline SharePrivacyRuleRequest& setPrivacyRuleId(string privacyRuleId) { DARABONBA_PTR_SET_VALUE(privacyRuleId_, privacyRuleId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SharePrivacyRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> memberIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> privacyRuleId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
