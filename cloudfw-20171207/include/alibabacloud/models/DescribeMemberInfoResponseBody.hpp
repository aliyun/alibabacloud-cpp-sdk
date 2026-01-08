// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMEMBERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMEMBERINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeMemberInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMemberInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdminName, adminName_);
      DARABONBA_PTR_TO_JSON(AdminUid, adminUid_);
      DARABONBA_PTR_TO_JSON(IsMember, isMember_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMemberInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminName, adminName_);
      DARABONBA_PTR_FROM_JSON(AdminUid, adminUid_);
      DARABONBA_PTR_FROM_JSON(IsMember, isMember_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMemberInfoResponseBody() = default ;
    DescribeMemberInfoResponseBody(const DescribeMemberInfoResponseBody &) = default ;
    DescribeMemberInfoResponseBody(DescribeMemberInfoResponseBody &&) = default ;
    DescribeMemberInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMemberInfoResponseBody() = default ;
    DescribeMemberInfoResponseBody& operator=(const DescribeMemberInfoResponseBody &) = default ;
    DescribeMemberInfoResponseBody& operator=(DescribeMemberInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adminName_ == nullptr
        && this->adminUid_ == nullptr && this->isMember_ == nullptr && this->memberUid_ == nullptr && this->requestId_ == nullptr; };
    // adminName Field Functions 
    bool hasAdminName() const { return this->adminName_ != nullptr;};
    void deleteAdminName() { this->adminName_ = nullptr;};
    inline string getAdminName() const { DARABONBA_PTR_GET_DEFAULT(adminName_, "") };
    inline DescribeMemberInfoResponseBody& setAdminName(string adminName) { DARABONBA_PTR_SET_VALUE(adminName_, adminName) };


    // adminUid Field Functions 
    bool hasAdminUid() const { return this->adminUid_ != nullptr;};
    void deleteAdminUid() { this->adminUid_ = nullptr;};
    inline string getAdminUid() const { DARABONBA_PTR_GET_DEFAULT(adminUid_, "") };
    inline DescribeMemberInfoResponseBody& setAdminUid(string adminUid) { DARABONBA_PTR_SET_VALUE(adminUid_, adminUid) };


    // isMember Field Functions 
    bool hasIsMember() const { return this->isMember_ != nullptr;};
    void deleteIsMember() { this->isMember_ = nullptr;};
    inline bool getIsMember() const { DARABONBA_PTR_GET_DEFAULT(isMember_, false) };
    inline DescribeMemberInfoResponseBody& setIsMember(bool isMember) { DARABONBA_PTR_SET_VALUE(isMember_, isMember) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline DescribeMemberInfoResponseBody& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMemberInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> adminName_ {};
    shared_ptr<string> adminUid_ {};
    shared_ptr<bool> isMember_ {};
    shared_ptr<string> memberUid_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
