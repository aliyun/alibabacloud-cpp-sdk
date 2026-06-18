// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETCLIENTCACERTIFICATEHOSTNAMESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETCLIENTCACERTIFICATEHOSTNAMESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class SetClientCaCertificateHostnamesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetClientCaCertificateHostnamesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Hostnames, hostnames_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteName, siteName_);
    };
    friend void from_json(const Darabonba::Json& j, SetClientCaCertificateHostnamesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Hostnames, hostnames_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
    };
    SetClientCaCertificateHostnamesResponseBody() = default ;
    SetClientCaCertificateHostnamesResponseBody(const SetClientCaCertificateHostnamesResponseBody &) = default ;
    SetClientCaCertificateHostnamesResponseBody(SetClientCaCertificateHostnamesResponseBody &&) = default ;
    SetClientCaCertificateHostnamesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetClientCaCertificateHostnamesResponseBody() = default ;
    SetClientCaCertificateHostnamesResponseBody& operator=(const SetClientCaCertificateHostnamesResponseBody &) = default ;
    SetClientCaCertificateHostnamesResponseBody& operator=(SetClientCaCertificateHostnamesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostnames_ == nullptr
        && this->id_ == nullptr && this->requestId_ == nullptr && this->siteId_ == nullptr && this->siteName_ == nullptr; };
    // hostnames Field Functions 
    bool hasHostnames() const { return this->hostnames_ != nullptr;};
    void deleteHostnames() { this->hostnames_ = nullptr;};
    inline const vector<string> & getHostnames() const { DARABONBA_PTR_GET_CONST(hostnames_, vector<string>) };
    inline vector<string> getHostnames() { DARABONBA_PTR_GET(hostnames_, vector<string>) };
    inline SetClientCaCertificateHostnamesResponseBody& setHostnames(const vector<string> & hostnames) { DARABONBA_PTR_SET_VALUE(hostnames_, hostnames) };
    inline SetClientCaCertificateHostnamesResponseBody& setHostnames(vector<string> && hostnames) { DARABONBA_PTR_SET_RVALUE(hostnames_, hostnames) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline SetClientCaCertificateHostnamesResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetClientCaCertificateHostnamesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline SetClientCaCertificateHostnamesResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline SetClientCaCertificateHostnamesResponseBody& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


  protected:
    // A list of bound hostnames.
    shared_ptr<vector<string>> hostnames_ {};
    // The client CA certificate ID.
    shared_ptr<string> id_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The site ID. You can obtain the ID by calling the [ListSites](~~ListSites~~) API.
    shared_ptr<int64_t> siteId_ {};
    // The site name.
    shared_ptr<string> siteName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
