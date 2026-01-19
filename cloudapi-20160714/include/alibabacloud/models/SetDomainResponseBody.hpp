// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class SetDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainBindingStatus, domainBindingStatus_);
      DARABONBA_PTR_TO_JSON(DomainLegalStatus, domainLegalStatus_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainRemark, domainRemark_);
      DARABONBA_PTR_TO_JSON(DomainWebSocketStatus, domainWebSocketStatus_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
    };
    friend void from_json(const Darabonba::Json& j, SetDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainBindingStatus, domainBindingStatus_);
      DARABONBA_PTR_FROM_JSON(DomainLegalStatus, domainLegalStatus_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainRemark, domainRemark_);
      DARABONBA_PTR_FROM_JSON(DomainWebSocketStatus, domainWebSocketStatus_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
    };
    SetDomainResponseBody() = default ;
    SetDomainResponseBody(const SetDomainResponseBody &) = default ;
    SetDomainResponseBody(SetDomainResponseBody &&) = default ;
    SetDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDomainResponseBody() = default ;
    SetDomainResponseBody& operator=(const SetDomainResponseBody &) = default ;
    SetDomainResponseBody& operator=(SetDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainBindingStatus_ == nullptr
        && this->domainLegalStatus_ == nullptr && this->domainName_ == nullptr && this->domainRemark_ == nullptr && this->domainWebSocketStatus_ == nullptr && this->groupId_ == nullptr
        && this->requestId_ == nullptr && this->subDomain_ == nullptr; };
    // domainBindingStatus Field Functions 
    bool hasDomainBindingStatus() const { return this->domainBindingStatus_ != nullptr;};
    void deleteDomainBindingStatus() { this->domainBindingStatus_ = nullptr;};
    inline string getDomainBindingStatus() const { DARABONBA_PTR_GET_DEFAULT(domainBindingStatus_, "") };
    inline SetDomainResponseBody& setDomainBindingStatus(string domainBindingStatus) { DARABONBA_PTR_SET_VALUE(domainBindingStatus_, domainBindingStatus) };


    // domainLegalStatus Field Functions 
    bool hasDomainLegalStatus() const { return this->domainLegalStatus_ != nullptr;};
    void deleteDomainLegalStatus() { this->domainLegalStatus_ = nullptr;};
    inline string getDomainLegalStatus() const { DARABONBA_PTR_GET_DEFAULT(domainLegalStatus_, "") };
    inline SetDomainResponseBody& setDomainLegalStatus(string domainLegalStatus) { DARABONBA_PTR_SET_VALUE(domainLegalStatus_, domainLegalStatus) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetDomainResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainRemark Field Functions 
    bool hasDomainRemark() const { return this->domainRemark_ != nullptr;};
    void deleteDomainRemark() { this->domainRemark_ = nullptr;};
    inline string getDomainRemark() const { DARABONBA_PTR_GET_DEFAULT(domainRemark_, "") };
    inline SetDomainResponseBody& setDomainRemark(string domainRemark) { DARABONBA_PTR_SET_VALUE(domainRemark_, domainRemark) };


    // domainWebSocketStatus Field Functions 
    bool hasDomainWebSocketStatus() const { return this->domainWebSocketStatus_ != nullptr;};
    void deleteDomainWebSocketStatus() { this->domainWebSocketStatus_ = nullptr;};
    inline string getDomainWebSocketStatus() const { DARABONBA_PTR_GET_DEFAULT(domainWebSocketStatus_, "") };
    inline SetDomainResponseBody& setDomainWebSocketStatus(string domainWebSocketStatus) { DARABONBA_PTR_SET_VALUE(domainWebSocketStatus_, domainWebSocketStatus) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline SetDomainResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subDomain Field Functions 
    bool hasSubDomain() const { return this->subDomain_ != nullptr;};
    void deleteSubDomain() { this->subDomain_ = nullptr;};
    inline string getSubDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
    inline SetDomainResponseBody& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


  protected:
    // The binding status of the custom domain name. Valid values:
    // 
    // *   **BINDING**: The domain name has been bound.
    // *   **BOUND**: The domain name has not been bound.
    shared_ptr<string> domainBindingStatus_ {};
    // The validity status of the domain name. Valid values:
    // 
    // *   **NORMAL**: The domain name is valid.
    // *   **ABNORMAL**: The domain name is invalid. This status affects API calls and must be resolved as soon as possible.
    shared_ptr<string> domainLegalStatus_ {};
    // The custom domain name.
    shared_ptr<string> domainName_ {};
    // The remarks on the domain name, such as the cause of an exception.
    shared_ptr<string> domainRemark_ {};
    // The status of the domain name that uses the WebSocket feature.
    shared_ptr<string> domainWebSocketStatus_ {};
    // The ID of the API group. This ID is generated by the system and globally unique.
    shared_ptr<string> groupId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The second-level domain name assigned to the API group. This domain name is used to test API calls.
    shared_ptr<string> subDomain_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
