// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITISPFLUSHCACHETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITISPFLUSHCACHETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SubmitIspFlushCacheTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitIspFlushCacheTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitIspFlushCacheTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    SubmitIspFlushCacheTaskRequest() = default ;
    SubmitIspFlushCacheTaskRequest(const SubmitIspFlushCacheTaskRequest &) = default ;
    SubmitIspFlushCacheTaskRequest(SubmitIspFlushCacheTaskRequest &&) = default ;
    SubmitIspFlushCacheTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitIspFlushCacheTaskRequest() = default ;
    SubmitIspFlushCacheTaskRequest& operator=(const SubmitIspFlushCacheTaskRequest &) = default ;
    SubmitIspFlushCacheTaskRequest& operator=(SubmitIspFlushCacheTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->domainName_ == nullptr && return this->isp_ == nullptr && return this->lang_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SubmitIspFlushCacheTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SubmitIspFlushCacheTaskRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline const vector<string> & isp() const { DARABONBA_PTR_GET_CONST(isp_, vector<string>) };
    inline vector<string> isp() { DARABONBA_PTR_GET(isp_, vector<string>) };
    inline SubmitIspFlushCacheTaskRequest& setIsp(const vector<string> & isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };
    inline SubmitIspFlushCacheTaskRequest& setIsp(vector<string> && isp) { DARABONBA_PTR_SET_RVALUE(isp_, isp) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SubmitIspFlushCacheTaskRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> isp_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
