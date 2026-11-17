// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListPoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(attachResourceId, attachResourceId_);
      DARABONBA_PTR_TO_JSON(attachResourceType, attachResourceType_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(withAttachments, withAttachments_);
      DARABONBA_PTR_TO_JSON(withSystemPolicy, withSystemPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, ListPoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(attachResourceId, attachResourceId_);
      DARABONBA_PTR_FROM_JSON(attachResourceType, attachResourceType_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(withAttachments, withAttachments_);
      DARABONBA_PTR_FROM_JSON(withSystemPolicy, withSystemPolicy_);
    };
    ListPoliciesRequest() = default ;
    ListPoliciesRequest(const ListPoliciesRequest &) = default ;
    ListPoliciesRequest(ListPoliciesRequest &&) = default ;
    ListPoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPoliciesRequest() = default ;
    ListPoliciesRequest& operator=(const ListPoliciesRequest &) = default ;
    ListPoliciesRequest& operator=(ListPoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachResourceId_ == nullptr
        && this->attachResourceType_ == nullptr && this->environmentId_ == nullptr && this->gatewayId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->withAttachments_ == nullptr && this->withSystemPolicy_ == nullptr; };
    // attachResourceId Field Functions 
    bool hasAttachResourceId() const { return this->attachResourceId_ != nullptr;};
    void deleteAttachResourceId() { this->attachResourceId_ = nullptr;};
    inline string getAttachResourceId() const { DARABONBA_PTR_GET_DEFAULT(attachResourceId_, "") };
    inline ListPoliciesRequest& setAttachResourceId(string attachResourceId) { DARABONBA_PTR_SET_VALUE(attachResourceId_, attachResourceId) };


    // attachResourceType Field Functions 
    bool hasAttachResourceType() const { return this->attachResourceType_ != nullptr;};
    void deleteAttachResourceType() { this->attachResourceType_ = nullptr;};
    inline string getAttachResourceType() const { DARABONBA_PTR_GET_DEFAULT(attachResourceType_, "") };
    inline ListPoliciesRequest& setAttachResourceType(string attachResourceType) { DARABONBA_PTR_SET_VALUE(attachResourceType_, attachResourceType) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline ListPoliciesRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListPoliciesRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPoliciesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPoliciesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // withAttachments Field Functions 
    bool hasWithAttachments() const { return this->withAttachments_ != nullptr;};
    void deleteWithAttachments() { this->withAttachments_ = nullptr;};
    inline bool getWithAttachments() const { DARABONBA_PTR_GET_DEFAULT(withAttachments_, false) };
    inline ListPoliciesRequest& setWithAttachments(bool withAttachments) { DARABONBA_PTR_SET_VALUE(withAttachments_, withAttachments) };


    // withSystemPolicy Field Functions 
    bool hasWithSystemPolicy() const { return this->withSystemPolicy_ != nullptr;};
    void deleteWithSystemPolicy() { this->withSystemPolicy_ = nullptr;};
    inline bool getWithSystemPolicy() const { DARABONBA_PTR_GET_DEFAULT(withSystemPolicy_, false) };
    inline ListPoliciesRequest& setWithSystemPolicy(bool withSystemPolicy) { DARABONBA_PTR_SET_VALUE(withSystemPolicy_, withSystemPolicy) };


  protected:
    // The ID of the mount point.
    shared_ptr<string> attachResourceId_ {};
    // The type of mount points supported by the policy. Valid values:
    // - HttpApi: HTTP API.
    // - Operation: The operation of the HTTP API.
    // - GatewayRoute: Gateway route.
    // - GatewayService: Gateway service.
    // - GatewayServicePort: Gateway service port.
    // - Domain: Gateway domain name.
    // - Gateway: Gateway.
    shared_ptr<string> attachResourceType_ {};
    // The ID of the environment.
    shared_ptr<string> environmentId_ {};
    // The ID of the gateway.
    shared_ptr<string> gatewayId_ {};
    // The page number. Pages start from 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page.
    shared_ptr<int32_t> pageSize_ {};
    // Specifies whether to return mount information.
    shared_ptr<bool> withAttachments_ {};
    // Specifies whether the policy is a system policy.
    shared_ptr<bool> withSystemPolicy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
