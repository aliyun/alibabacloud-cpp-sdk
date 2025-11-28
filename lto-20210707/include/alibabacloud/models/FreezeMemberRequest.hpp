// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FREEZEMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FREEZEMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class FreezeMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FreezeMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, FreezeMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    FreezeMemberRequest() = default ;
    FreezeMemberRequest(const FreezeMemberRequest &) = default ;
    FreezeMemberRequest(FreezeMemberRequest &&) = default ;
    FreezeMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FreezeMemberRequest() = default ;
    FreezeMemberRequest& operator=(const FreezeMemberRequest &) = default ;
    FreezeMemberRequest& operator=(FreezeMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberId_ == nullptr
        && return this->regionId_ == nullptr; };
    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string memberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline FreezeMemberRequest& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline FreezeMemberRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> memberId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
