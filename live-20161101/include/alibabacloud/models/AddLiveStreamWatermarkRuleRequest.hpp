// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLIVESTREAMWATERMARKRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDLIVESTREAMWATERMARKRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddLiveStreamWatermarkRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddLiveStreamWatermarkRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, AddLiveStreamWatermarkRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    AddLiveStreamWatermarkRuleRequest() = default ;
    AddLiveStreamWatermarkRuleRequest(const AddLiveStreamWatermarkRuleRequest &) = default ;
    AddLiveStreamWatermarkRuleRequest(AddLiveStreamWatermarkRuleRequest &&) = default ;
    AddLiveStreamWatermarkRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddLiveStreamWatermarkRuleRequest() = default ;
    AddLiveStreamWatermarkRuleRequest& operator=(const AddLiveStreamWatermarkRuleRequest &) = default ;
    AddLiveStreamWatermarkRuleRequest& operator=(AddLiveStreamWatermarkRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->app_ == nullptr
        && return this->description_ == nullptr && return this->domain_ == nullptr && return this->name_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr
        && return this->stream_ == nullptr && return this->templateId_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string app() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline AddLiveStreamWatermarkRuleRequest& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddLiveStreamWatermarkRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline AddLiveStreamWatermarkRuleRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddLiveStreamWatermarkRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddLiveStreamWatermarkRuleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddLiveStreamWatermarkRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline string stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, "") };
    inline AddLiveStreamWatermarkRuleRequest& setStream(string stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline AddLiveStreamWatermarkRuleRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The name of the application to which the live stream belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> app_ = nullptr;
    // The description of the custom rule.
    std::shared_ptr<string> description_ = nullptr;
    // The streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    // The name of the custom rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the live stream. The following rules apply:
    // 
    // *   A stream name can be exactly matched. Example: liveStreamA.
    // *   Fuzzy match is also supported. The use of an asterisk (`*`) allows all approximate matches to be found.
    // *   You can place the asterisk before or after an approximate string.
    // 
    // 
    // 
    // >*   Fuzzy match: Only one asterisk (`*`) before or after an approximate string is allowed. The approximate string must be enclosed in `()`. Separate multiple strings with vertical bars (`|`).
    // >*   For example, `*(t1|t2)` matches all streams whose name has the `t1` or `t2` suffix, and `(abc|123)*` matches all streams whose name has the `abc` or `123` prefix.
    // 
    // This parameter is required.
    std::shared_ptr<string> stream_ = nullptr;
    // The ID of the watermark template.
    // 
    // >  You can obtain the template ID by checking the value of the TemplateId parameter that is returned by the [AddLiveStreamWatermark](https://help.aliyun.com/document_detail/410759.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
