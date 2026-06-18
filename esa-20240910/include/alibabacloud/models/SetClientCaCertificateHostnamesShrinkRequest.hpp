// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETCLIENTCACERTIFICATEHOSTNAMESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETCLIENTCACERTIFICATEHOSTNAMESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class SetClientCaCertificateHostnamesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetClientCaCertificateHostnamesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Hostnames, hostnamesShrink_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, SetClientCaCertificateHostnamesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Hostnames, hostnamesShrink_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    SetClientCaCertificateHostnamesShrinkRequest() = default ;
    SetClientCaCertificateHostnamesShrinkRequest(const SetClientCaCertificateHostnamesShrinkRequest &) = default ;
    SetClientCaCertificateHostnamesShrinkRequest(SetClientCaCertificateHostnamesShrinkRequest &&) = default ;
    SetClientCaCertificateHostnamesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetClientCaCertificateHostnamesShrinkRequest() = default ;
    SetClientCaCertificateHostnamesShrinkRequest& operator=(const SetClientCaCertificateHostnamesShrinkRequest &) = default ;
    SetClientCaCertificateHostnamesShrinkRequest& operator=(SetClientCaCertificateHostnamesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostnamesShrink_ == nullptr
        && this->id_ == nullptr && this->siteId_ == nullptr; };
    // hostnamesShrink Field Functions 
    bool hasHostnamesShrink() const { return this->hostnamesShrink_ != nullptr;};
    void deleteHostnamesShrink() { this->hostnamesShrink_ = nullptr;};
    inline string getHostnamesShrink() const { DARABONBA_PTR_GET_DEFAULT(hostnamesShrink_, "") };
    inline SetClientCaCertificateHostnamesShrinkRequest& setHostnamesShrink(string hostnamesShrink) { DARABONBA_PTR_SET_VALUE(hostnamesShrink_, hostnamesShrink) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline SetClientCaCertificateHostnamesShrinkRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline SetClientCaCertificateHostnamesShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // A list of hostnames.
    // 
    // This parameter is required.
    shared_ptr<string> hostnamesShrink_ {};
    // The client CA certificate ID.
    shared_ptr<string> id_ {};
    // The site ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
