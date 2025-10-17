// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYATTACHMENTMEMBERNETWORKINTERFACEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYATTACHMENTMEMBERNETWORKINTERFACEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNetworkInterfaceAttributeResponseBodyAttachmentMemberNetworkInterfaceIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfaceAttributeResponseBodyAttachmentMemberNetworkInterfaceIds& obj) { 
      DARABONBA_PTR_TO_JSON(MemberNetworkInterfaceId, memberNetworkInterfaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfaceAttributeResponseBodyAttachmentMemberNetworkInterfaceIds& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberNetworkInterfaceId, memberNetworkInterfaceId_);
    };
    DescribeNetworkInterfaceAttributeResponseBodyAttachmentMemberNetworkInterfaceIds() = default ;
    DescribeNetworkInterfaceAttributeResponseBodyAttachmentMemberNetworkInterfaceIds(const DescribeNetworkInterfaceAttributeResponseBodyAttachmentMemberNetworkInterfaceIds &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyAttachmentMemberNetworkInterfaceIds(DescribeNetworkInterfaceAttributeResponseBodyAttachmentMemberNetworkInterfaceIds &&) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyAttachmentMemberNetworkInterfaceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfaceAttributeResponseBodyAttachmentMemberNetworkInterfaceIds() = default ;
    DescribeNetworkInterfaceAttributeResponseBodyAttachmentMemberNetworkInterfaceIds& operator=(const DescribeNetworkInterfaceAttributeResponseBodyAttachmentMemberNetworkInterfaceIds &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyAttachmentMemberNetworkInterfaceIds& operator=(DescribeNetworkInterfaceAttributeResponseBodyAttachmentMemberNetworkInterfaceIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberNetworkInterfaceId_ == nullptr; };
    // memberNetworkInterfaceId Field Functions 
    bool hasMemberNetworkInterfaceId() const { return this->memberNetworkInterfaceId_ != nullptr;};
    void deleteMemberNetworkInterfaceId() { this->memberNetworkInterfaceId_ = nullptr;};
    inline const vector<string> & memberNetworkInterfaceId() const { DARABONBA_PTR_GET_CONST(memberNetworkInterfaceId_, vector<string>) };
    inline vector<string> memberNetworkInterfaceId() { DARABONBA_PTR_GET(memberNetworkInterfaceId_, vector<string>) };
    inline DescribeNetworkInterfaceAttributeResponseBodyAttachmentMemberNetworkInterfaceIds& setMemberNetworkInterfaceId(const vector<string> & memberNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(memberNetworkInterfaceId_, memberNetworkInterfaceId) };
    inline DescribeNetworkInterfaceAttributeResponseBodyAttachmentMemberNetworkInterfaceIds& setMemberNetworkInterfaceId(vector<string> && memberNetworkInterfaceId) { DARABONBA_PTR_SET_RVALUE(memberNetworkInterfaceId_, memberNetworkInterfaceId) };


  protected:
    std::shared_ptr<vector<string>> memberNetworkInterfaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
