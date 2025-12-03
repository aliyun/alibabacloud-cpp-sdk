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
        && return this->domainLegalStatus_ == nullptr && return this->domainName_ == nullptr && return this->domainRemark_ == nullptr && return this->domainWebSocketStatus_ == nullptr && return this->groupId_ == nullptr
        && return this->requestId_ == nullptr && return this->subDomain_ == nullptr; };
    // domainBindingStatus Field Functions 
    bool hasDomainBindingStatus() const { return this->domainBindingStatus_ != nullptr;};
    void deleteDomainBindingStatus() { this->domainBindingStatus_ = nullptr;};
    inline string domainBindingStatus() const { DARABONBA_PTR_GET_DEFAULT(domainBindingStatus_, "") };
    inline SetDomainResponseBody& setDomainBindingStatus(string domainBindingStatus) { DARABONBA_PTR_SET_VALUE(domainBindingStatus_, domainBindingStatus) };


    // domainLegalStatus Field Functions 
    bool hasDomainLegalStatus() const { return this->domainLegalStatus_ != nullptr;};
    void deleteDomainLegalStatus() { this->domainLegalStatus_ = nullptr;};
    inline string domainLegalStatus() const { DARABONBA_PTR_GET_DEFAULT(domainLegalStatus_, "") };
    inline SetDomainResponseBody& setDomainLegalStatus(string domainLegalStatus) { DARABONBA_PTR_SET_VALUE(domainLegalStatus_, domainLegalStatus) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetDomainResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainRemark Field Functions 
    bool hasDomainRemark() const { return this->domainRemark_ != nullptr;};
    void deleteDomainRemark() { this->domainRemark_ = nullptr;};
    inline string domainRemark() const { DARABONBA_PTR_GET_DEFAULT(domainRemark_, "") };
    inline SetDomainResponseBody& setDomainRemark(string domainRemark) { DARABONBA_PTR_SET_VALUE(domainRemark_, domainRemark) };


    // domainWebSocketStatus Field Functions 
    bool hasDomainWebSocketStatus() const { return this->domainWebSocketStatus_ != nullptr;};
    void deleteDomainWebSocketStatus() { this->domainWebSocketStatus_ = nullptr;};
    inline string domainWebSocketStatus() const { DARABONBA_PTR_GET_DEFAULT(domainWebSocketStatus_, "") };
    inline SetDomainResponseBody& setDomainWebSocketStatus(string domainWebSocketStatus) { DARABONBA_PTR_SET_VALUE(domainWebSocketStatus_, domainWebSocketStatus) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline SetDomainResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subDomain Field Functions 
    bool hasSubDomain() const { return this->subDomain_ != nullptr;};
    void deleteSubDomain() { this->subDomain_ = nullptr;};
    inline string subDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
    inline SetDomainResponseBody& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


  protected:
    // The binding status of the custom domain name. Valid values:
    // 
    // *   **BINDING**: The domain name has been bound.
    // *   **BOUND**: The domain name has not been bound.
    std::shared_ptr<string> domainBindingStatus_ = nullptr;
    // The validity status of the domain name. Valid values:
    // 
    // *   **NORMAL**: The domain name is valid.
    // *   **ABNORMAL**: The domain name is invalid. This status affects API calls and must be resolved as soon as possible.
    std::shared_ptr<string> domainLegalStatus_ = nullptr;
    // The custom domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The remarks on the domain name, such as the cause of an exception.
    std::shared_ptr<string> domainRemark_ = nullptr;
    // The status of the domain name that uses the WebSocket feature.
    std::shared_ptr<string> domainWebSocketStatus_ = nullptr;
    // The ID of the API group. This ID is generated by the system and globally unique.
    std::shared_ptr<string> groupId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The second-level domain name assigned to the API group. This domain name is used to test API calls.
    std::shared_ptr<string> subDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
