// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZEMEMBERBIZCHAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZEMEMBERBIZCHAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class AuthorizeMemberBizChainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeMemberBizChainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizChainInfo, bizChainInfo_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeMemberBizChainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizChainInfo, bizChainInfo_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AuthorizeMemberBizChainRequest() = default ;
    AuthorizeMemberBizChainRequest(const AuthorizeMemberBizChainRequest &) = default ;
    AuthorizeMemberBizChainRequest(AuthorizeMemberBizChainRequest &&) = default ;
    AuthorizeMemberBizChainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeMemberBizChainRequest() = default ;
    AuthorizeMemberBizChainRequest& operator=(const AuthorizeMemberBizChainRequest &) = default ;
    AuthorizeMemberBizChainRequest& operator=(AuthorizeMemberBizChainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizChainInfo_ == nullptr
        && return this->memberId_ == nullptr && return this->regionId_ == nullptr; };
    // bizChainInfo Field Functions 
    bool hasBizChainInfo() const { return this->bizChainInfo_ != nullptr;};
    void deleteBizChainInfo() { this->bizChainInfo_ = nullptr;};
    inline string bizChainInfo() const { DARABONBA_PTR_GET_DEFAULT(bizChainInfo_, "") };
    inline AuthorizeMemberBizChainRequest& setBizChainInfo(string bizChainInfo) { DARABONBA_PTR_SET_VALUE(bizChainInfo_, bizChainInfo) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string memberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline AuthorizeMemberBizChainRequest& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AuthorizeMemberBizChainRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> bizChainInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> memberId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
