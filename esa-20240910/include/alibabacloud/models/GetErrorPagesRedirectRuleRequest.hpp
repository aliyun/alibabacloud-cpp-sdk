// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETERRORPAGESREDIRECTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETERRORPAGESREDIRECTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetErrorPagesRedirectRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetErrorPagesRedirectRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, GetErrorPagesRedirectRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    GetErrorPagesRedirectRuleRequest() = default ;
    GetErrorPagesRedirectRuleRequest(const GetErrorPagesRedirectRuleRequest &) = default ;
    GetErrorPagesRedirectRuleRequest(GetErrorPagesRedirectRuleRequest &&) = default ;
    GetErrorPagesRedirectRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetErrorPagesRedirectRuleRequest() = default ;
    GetErrorPagesRedirectRuleRequest& operator=(const GetErrorPagesRedirectRuleRequest &) = default ;
    GetErrorPagesRedirectRuleRequest& operator=(GetErrorPagesRedirectRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && this->siteId_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline GetErrorPagesRedirectRuleRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetErrorPagesRedirectRuleRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The configuration ID. You can obtain the configuration ID by calling the [ListCompressionRules](https://help.aliyun.com/document_detail/2867498.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> configId_ {};
    // The site ID. You can obtain the site ID by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
