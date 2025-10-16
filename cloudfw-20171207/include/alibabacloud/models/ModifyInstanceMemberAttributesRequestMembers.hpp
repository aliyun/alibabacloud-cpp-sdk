// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEMEMBERATTRIBUTESREQUESTMEMBERS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEMEMBERATTRIBUTESREQUESTMEMBERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyInstanceMemberAttributesRequestMembers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceMemberAttributesRequestMembers& obj) { 
      DARABONBA_PTR_TO_JSON(MemberDesc, memberDesc_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceMemberAttributesRequestMembers& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberDesc, memberDesc_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
    };
    ModifyInstanceMemberAttributesRequestMembers() = default ;
    ModifyInstanceMemberAttributesRequestMembers(const ModifyInstanceMemberAttributesRequestMembers &) = default ;
    ModifyInstanceMemberAttributesRequestMembers(ModifyInstanceMemberAttributesRequestMembers &&) = default ;
    ModifyInstanceMemberAttributesRequestMembers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceMemberAttributesRequestMembers() = default ;
    ModifyInstanceMemberAttributesRequestMembers& operator=(const ModifyInstanceMemberAttributesRequestMembers &) = default ;
    ModifyInstanceMemberAttributesRequestMembers& operator=(ModifyInstanceMemberAttributesRequestMembers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberDesc_ == nullptr
        && return this->memberUid_ == nullptr; };
    // memberDesc Field Functions 
    bool hasMemberDesc() const { return this->memberDesc_ != nullptr;};
    void deleteMemberDesc() { this->memberDesc_ = nullptr;};
    inline string memberDesc() const { DARABONBA_PTR_GET_DEFAULT(memberDesc_, "") };
    inline ModifyInstanceMemberAttributesRequestMembers& setMemberDesc(string memberDesc) { DARABONBA_PTR_SET_VALUE(memberDesc_, memberDesc) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline int64_t memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, 0L) };
    inline ModifyInstanceMemberAttributesRequestMembers& setMemberUid(int64_t memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


  protected:
    // The remarks of the member in Cloud Firewall.
    // 
    // This parameter is required.
    std::shared_ptr<string> memberDesc_ = nullptr;
    // The UID of the member in Cloud Firewall.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> memberUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
