// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINSTANCEMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINSTANCEMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DeleteInstanceMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInstanceMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MemberUids, memberUids_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInstanceMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberUids, memberUids_);
    };
    DeleteInstanceMembersRequest() = default ;
    DeleteInstanceMembersRequest(const DeleteInstanceMembersRequest &) = default ;
    DeleteInstanceMembersRequest(DeleteInstanceMembersRequest &&) = default ;
    DeleteInstanceMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInstanceMembersRequest() = default ;
    DeleteInstanceMembersRequest& operator=(const DeleteInstanceMembersRequest &) = default ;
    DeleteInstanceMembersRequest& operator=(DeleteInstanceMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberUids_ == nullptr; };
    // memberUids Field Functions 
    bool hasMemberUids() const { return this->memberUids_ != nullptr;};
    void deleteMemberUids() { this->memberUids_ = nullptr;};
    inline const vector<int64_t> & memberUids() const { DARABONBA_PTR_GET_CONST(memberUids_, vector<int64_t>) };
    inline vector<int64_t> memberUids() { DARABONBA_PTR_GET(memberUids_, vector<int64_t>) };
    inline DeleteInstanceMembersRequest& setMemberUids(const vector<int64_t> & memberUids) { DARABONBA_PTR_SET_VALUE(memberUids_, memberUids) };
    inline DeleteInstanceMembersRequest& setMemberUids(vector<int64_t> && memberUids) { DARABONBA_PTR_SET_RVALUE(memberUids_, memberUids) };


  protected:
    // The UIDs of the members.
    // 
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> memberUids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
