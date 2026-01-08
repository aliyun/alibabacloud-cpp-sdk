// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMEMBERINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMEMBERINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeMemberInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMemberInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMemberInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
    };
    DescribeMemberInfoRequest() = default ;
    DescribeMemberInfoRequest(const DescribeMemberInfoRequest &) = default ;
    DescribeMemberInfoRequest(DescribeMemberInfoRequest &&) = default ;
    DescribeMemberInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMemberInfoRequest() = default ;
    DescribeMemberInfoRequest& operator=(const DescribeMemberInfoRequest &) = default ;
    DescribeMemberInfoRequest& operator=(DescribeMemberInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberUid_ == nullptr; };
    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline DescribeMemberInfoRequest& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


  protected:
    shared_ptr<string> memberUid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
