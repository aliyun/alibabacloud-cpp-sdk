// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHTTPINCOMINGREQUESTHEADERMODIFICATIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHTTPINCOMINGREQUESTHEADERMODIFICATIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeleteHttpIncomingRequestHeaderModificationRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHttpIncomingRequestHeaderModificationRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHttpIncomingRequestHeaderModificationRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    DeleteHttpIncomingRequestHeaderModificationRuleRequest() = default ;
    DeleteHttpIncomingRequestHeaderModificationRuleRequest(const DeleteHttpIncomingRequestHeaderModificationRuleRequest &) = default ;
    DeleteHttpIncomingRequestHeaderModificationRuleRequest(DeleteHttpIncomingRequestHeaderModificationRuleRequest &&) = default ;
    DeleteHttpIncomingRequestHeaderModificationRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHttpIncomingRequestHeaderModificationRuleRequest() = default ;
    DeleteHttpIncomingRequestHeaderModificationRuleRequest& operator=(const DeleteHttpIncomingRequestHeaderModificationRuleRequest &) = default ;
    DeleteHttpIncomingRequestHeaderModificationRuleRequest& operator=(DeleteHttpIncomingRequestHeaderModificationRuleRequest &&) = default ;
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
    inline DeleteHttpIncomingRequestHeaderModificationRuleRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline DeleteHttpIncomingRequestHeaderModificationRuleRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The configuration ID. You can call the ListHttpIncomingRequestHeaderModificationRules operation to query the ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> configId_ {};
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
