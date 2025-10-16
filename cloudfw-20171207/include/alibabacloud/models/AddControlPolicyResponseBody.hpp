// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCONTROLPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDCONTROLPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class AddControlPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddControlPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddControlPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddControlPolicyResponseBody() = default ;
    AddControlPolicyResponseBody(const AddControlPolicyResponseBody &) = default ;
    AddControlPolicyResponseBody(AddControlPolicyResponseBody &&) = default ;
    AddControlPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddControlPolicyResponseBody() = default ;
    AddControlPolicyResponseBody& operator=(const AddControlPolicyResponseBody &) = default ;
    AddControlPolicyResponseBody& operator=(AddControlPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclUuid_ == nullptr
        && return this->requestId_ == nullptr; };
    // aclUuid Field Functions 
    bool hasAclUuid() const { return this->aclUuid_ != nullptr;};
    void deleteAclUuid() { this->aclUuid_ = nullptr;};
    inline string aclUuid() const { DARABONBA_PTR_GET_DEFAULT(aclUuid_, "") };
    inline AddControlPolicyResponseBody& setAclUuid(string aclUuid) { DARABONBA_PTR_SET_VALUE(aclUuid_, aclUuid) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddControlPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the access control policy that is created on the Internet firewall.
    std::shared_ptr<string> aclUuid_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
