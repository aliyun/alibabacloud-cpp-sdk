// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRDMEMBERLISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDRDMEMBERLISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class AddRdMemberListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddRdMemberListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MemberList, memberListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AddRdMemberListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberList, memberListShrink_);
    };
    AddRdMemberListShrinkRequest() = default ;
    AddRdMemberListShrinkRequest(const AddRdMemberListShrinkRequest &) = default ;
    AddRdMemberListShrinkRequest(AddRdMemberListShrinkRequest &&) = default ;
    AddRdMemberListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddRdMemberListShrinkRequest() = default ;
    AddRdMemberListShrinkRequest& operator=(const AddRdMemberListShrinkRequest &) = default ;
    AddRdMemberListShrinkRequest& operator=(AddRdMemberListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberListShrink_ == nullptr; };
    // memberListShrink Field Functions 
    bool hasMemberListShrink() const { return this->memberListShrink_ != nullptr;};
    void deleteMemberListShrink() { this->memberListShrink_ = nullptr;};
    inline string getMemberListShrink() const { DARABONBA_PTR_GET_DEFAULT(memberListShrink_, "") };
    inline AddRdMemberListShrinkRequest& setMemberListShrink(string memberListShrink) { DARABONBA_PTR_SET_VALUE(memberListShrink_, memberListShrink) };


  protected:
    // The list of the members.
    // 
    // This parameter is required.
    shared_ptr<string> memberListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
