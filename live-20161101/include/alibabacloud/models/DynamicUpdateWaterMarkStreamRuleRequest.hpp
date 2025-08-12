// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DYNAMICUPDATEWATERMARKSTREAMRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DYNAMICUPDATEWATERMARKSTREAMRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DynamicUpdateWaterMarkStreamRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DynamicUpdateWaterMarkStreamRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DynamicUpdateWaterMarkStreamRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DynamicUpdateWaterMarkStreamRuleRequest() = default ;
    DynamicUpdateWaterMarkStreamRuleRequest(const DynamicUpdateWaterMarkStreamRuleRequest &) = default ;
    DynamicUpdateWaterMarkStreamRuleRequest(DynamicUpdateWaterMarkStreamRuleRequest &&) = default ;
    DynamicUpdateWaterMarkStreamRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DynamicUpdateWaterMarkStreamRuleRequest() = default ;
    DynamicUpdateWaterMarkStreamRuleRequest& operator=(const DynamicUpdateWaterMarkStreamRuleRequest &) = default ;
    DynamicUpdateWaterMarkStreamRuleRequest& operator=(DynamicUpdateWaterMarkStreamRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->app_ != nullptr
        && this->domain_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->stream_ != nullptr && this->templateId_ != nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string app() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline DynamicUpdateWaterMarkStreamRuleRequest& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DynamicUpdateWaterMarkStreamRuleRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DynamicUpdateWaterMarkStreamRuleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DynamicUpdateWaterMarkStreamRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline string stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, "") };
    inline DynamicUpdateWaterMarkStreamRuleRequest& setStream(string stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DynamicUpdateWaterMarkStreamRuleRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The name of the application to which the live stream belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> app_ = nullptr;
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the stream that contains the watermark.
    // 
    // This parameter is required.
    std::shared_ptr<string> stream_ = nullptr;
    // The watermark template ID. You can call the [DescribeLiveStreamWatermarks](https://help.aliyun.com/document_detail/2848102.html) operation to obtain available watermark template IDs.
    // 
    // >  The TemplateId parameter is used to replace the watermark template ID during live streaming.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
