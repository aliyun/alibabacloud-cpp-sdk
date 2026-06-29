// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDCVDELEGATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDCVDELEGATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetDcvDelegationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDcvDelegationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DelegationDomain, delegationDomain_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteName, siteName_);
    };
    friend void from_json(const Darabonba::Json& j, GetDcvDelegationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DelegationDomain, delegationDomain_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
    };
    GetDcvDelegationResponseBody() = default ;
    GetDcvDelegationResponseBody(const GetDcvDelegationResponseBody &) = default ;
    GetDcvDelegationResponseBody(GetDcvDelegationResponseBody &&) = default ;
    GetDcvDelegationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDcvDelegationResponseBody() = default ;
    GetDcvDelegationResponseBody& operator=(const GetDcvDelegationResponseBody &) = default ;
    GetDcvDelegationResponseBody& operator=(GetDcvDelegationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->delegationDomain_ == nullptr
        && this->requestId_ == nullptr && this->siteId_ == nullptr && this->siteName_ == nullptr; };
    // delegationDomain Field Functions 
    bool hasDelegationDomain() const { return this->delegationDomain_ != nullptr;};
    void deleteDelegationDomain() { this->delegationDomain_ = nullptr;};
    inline string getDelegationDomain() const { DARABONBA_PTR_GET_DEFAULT(delegationDomain_, "") };
    inline GetDcvDelegationResponseBody& setDelegationDomain(string delegationDomain) { DARABONBA_PTR_SET_VALUE(delegationDomain_, delegationDomain) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDcvDelegationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetDcvDelegationResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline GetDcvDelegationResponseBody& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


  protected:
    // The DCV managed domain name.
    shared_ptr<string> delegationDomain_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The site ID.
    shared_ptr<int64_t> siteId_ {};
    // The site name.
    shared_ptr<string> siteName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
