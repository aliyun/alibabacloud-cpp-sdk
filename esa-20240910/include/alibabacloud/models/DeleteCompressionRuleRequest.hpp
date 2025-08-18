// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECOMPRESSIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECOMPRESSIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeleteCompressionRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCompressionRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCompressionRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    DeleteCompressionRuleRequest() = default ;
    DeleteCompressionRuleRequest(const DeleteCompressionRuleRequest &) = default ;
    DeleteCompressionRuleRequest(DeleteCompressionRuleRequest &&) = default ;
    DeleteCompressionRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCompressionRuleRequest() = default ;
    DeleteCompressionRuleRequest& operator=(const DeleteCompressionRuleRequest &) = default ;
    DeleteCompressionRuleRequest& operator=(DeleteCompressionRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configId_ != nullptr
        && this->siteId_ != nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline DeleteCompressionRuleRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline DeleteCompressionRuleRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // Configuration ID. It can be obtained by calling the [ListCompressionRules](https://help.aliyun.com/document_detail/2867498.html) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // Site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
