// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGETRANSCODETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEDGETRANSCODETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class GetEdgeTranscodeTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeTranscodeTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeTranscodeTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    GetEdgeTranscodeTemplateRequest() = default ;
    GetEdgeTranscodeTemplateRequest(const GetEdgeTranscodeTemplateRequest &) = default ;
    GetEdgeTranscodeTemplateRequest(GetEdgeTranscodeTemplateRequest &&) = default ;
    GetEdgeTranscodeTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeTranscodeTemplateRequest() = default ;
    GetEdgeTranscodeTemplateRequest& operator=(const GetEdgeTranscodeTemplateRequest &) = default ;
    GetEdgeTranscodeTemplateRequest& operator=(GetEdgeTranscodeTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->templateId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetEdgeTranscodeTemplateRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GetEdgeTranscodeTemplateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetEdgeTranscodeTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetEdgeTranscodeTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The ID of the data center.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The template ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
