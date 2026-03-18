// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICYATTACHMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICYATTACHMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class ListPolicyAttachmentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicyAttachmentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentList, attachmentList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicyAttachmentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentList, attachmentList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListPolicyAttachmentResponseBody() = default ;
    ListPolicyAttachmentResponseBody(const ListPolicyAttachmentResponseBody &) = default ;
    ListPolicyAttachmentResponseBody(ListPolicyAttachmentResponseBody &&) = default ;
    ListPolicyAttachmentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicyAttachmentResponseBody() = default ;
    ListPolicyAttachmentResponseBody& operator=(const ListPolicyAttachmentResponseBody &) = default ;
    ListPolicyAttachmentResponseBody& operator=(ListPolicyAttachmentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttachmentList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttachmentList& obj) { 
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
        DARABONBA_PTR_TO_JSON(PolicyRemark, policyRemark_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(PortRange, portRange_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(Region, region_);
      };
      friend void from_json(const Darabonba::Json& j, AttachmentList& obj) { 
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
        DARABONBA_PTR_FROM_JSON(PolicyRemark, policyRemark_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
      };
      AttachmentList() = default ;
      AttachmentList(const AttachmentList &) = default ;
      AttachmentList(AttachmentList &&) = default ;
      AttachmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttachmentList() = default ;
      AttachmentList& operator=(const AttachmentList &) = default ;
      AttachmentList& operator=(AttachmentList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ip_ == nullptr
        && this->memberUid_ == nullptr && this->policyId_ == nullptr && this->policyName_ == nullptr && this->policyRemark_ == nullptr && this->policyType_ == nullptr
        && this->port_ == nullptr && this->portRange_ == nullptr && this->protocol_ == nullptr && this->region_ == nullptr; };
      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline AttachmentList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // memberUid Field Functions 
      bool hasMemberUid() const { return this->memberUid_ != nullptr;};
      void deleteMemberUid() { this->memberUid_ = nullptr;};
      inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
      inline AttachmentList& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline AttachmentList& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // policyName Field Functions 
      bool hasPolicyName() const { return this->policyName_ != nullptr;};
      void deletePolicyName() { this->policyName_ = nullptr;};
      inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
      inline AttachmentList& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      // policyRemark Field Functions 
      bool hasPolicyRemark() const { return this->policyRemark_ != nullptr;};
      void deletePolicyRemark() { this->policyRemark_ = nullptr;};
      inline string getPolicyRemark() const { DARABONBA_PTR_GET_DEFAULT(policyRemark_, "") };
      inline AttachmentList& setPolicyRemark(string policyRemark) { DARABONBA_PTR_SET_VALUE(policyRemark_, policyRemark) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline AttachmentList& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline AttachmentList& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // portRange Field Functions 
      bool hasPortRange() const { return this->portRange_ != nullptr;};
      void deletePortRange() { this->portRange_ = nullptr;};
      inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
      inline AttachmentList& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline AttachmentList& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline AttachmentList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    protected:
      // The IP address of the protected object.
      shared_ptr<string> ip_ {};
      // The UID of the member to which the IP address of the protected object belongs.
      shared_ptr<string> memberUid_ {};
      // The ID of the policy.
      shared_ptr<string> policyId_ {};
      // The name of the rule.
      shared_ptr<string> policyName_ {};
      // The description of the policy.
      shared_ptr<string> policyRemark_ {};
      // The type of the policy. Valid values:
      // 
      // *   **l3**: IP-specific mitigation policies.
      // *   **l4**: port-specific mitigation policies.
      shared_ptr<string> policyType_ {};
      // The port number of the protected object.
      shared_ptr<int32_t> port_ {};
      shared_ptr<string> portRange_ {};
      // The protocol type of the protected object. Valid values:
      // 
      // *   **tcp**
      // *   **udp**
      shared_ptr<string> protocol_ {};
      // The region to which the IP address of the protected object belongs.
      shared_ptr<string> region_ {};
    };

    virtual bool empty() const override { return this->attachmentList_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // attachmentList Field Functions 
    bool hasAttachmentList() const { return this->attachmentList_ != nullptr;};
    void deleteAttachmentList() { this->attachmentList_ = nullptr;};
    inline const vector<ListPolicyAttachmentResponseBody::AttachmentList> & getAttachmentList() const { DARABONBA_PTR_GET_CONST(attachmentList_, vector<ListPolicyAttachmentResponseBody::AttachmentList>) };
    inline vector<ListPolicyAttachmentResponseBody::AttachmentList> getAttachmentList() { DARABONBA_PTR_GET(attachmentList_, vector<ListPolicyAttachmentResponseBody::AttachmentList>) };
    inline ListPolicyAttachmentResponseBody& setAttachmentList(const vector<ListPolicyAttachmentResponseBody::AttachmentList> & attachmentList) { DARABONBA_PTR_SET_VALUE(attachmentList_, attachmentList) };
    inline ListPolicyAttachmentResponseBody& setAttachmentList(vector<ListPolicyAttachmentResponseBody::AttachmentList> && attachmentList) { DARABONBA_PTR_SET_RVALUE(attachmentList_, attachmentList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPolicyAttachmentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListPolicyAttachmentResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The records of attachments to the mitigation policy.
    shared_ptr<vector<ListPolicyAttachmentResponseBody::AttachmentList>> attachmentList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of attachments to the mitigation policy.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
