// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLIENTCACERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCLIENTCACERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetClientCaCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClientCaCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClientCaCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    GetClientCaCertificateRequest() = default ;
    GetClientCaCertificateRequest(const GetClientCaCertificateRequest &) = default ;
    GetClientCaCertificateRequest(GetClientCaCertificateRequest &&) = default ;
    GetClientCaCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClientCaCertificateRequest() = default ;
    GetClientCaCertificateRequest& operator=(const GetClientCaCertificateRequest &) = default ;
    GetClientCaCertificateRequest& operator=(GetClientCaCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->siteId_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetClientCaCertificateRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetClientCaCertificateRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The certificate ID, which can be obtained by calling the [ListClientCaCertificates](https://help.aliyun.com/document_detail/2860651.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
