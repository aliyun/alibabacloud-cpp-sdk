// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERCONFIGRESPONSEBODYTRANSCODECONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERCONFIGRESPONSEBODYTRANSCODECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCasterConfigResponseBodyTranscodeConfigCustomParams.hpp>
#include <alibabacloud/models/DescribeCasterConfigResponseBodyTranscodeConfigLiveTemplateIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterConfigResponseBodyTranscodeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterConfigResponseBodyTranscodeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CasterTemplate, casterTemplate_);
      DARABONBA_PTR_TO_JSON(CustomParams, customParams_);
      DARABONBA_PTR_TO_JSON(LiveTemplateIds, liveTemplateIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterConfigResponseBodyTranscodeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterTemplate, casterTemplate_);
      DARABONBA_PTR_FROM_JSON(CustomParams, customParams_);
      DARABONBA_PTR_FROM_JSON(LiveTemplateIds, liveTemplateIds_);
    };
    DescribeCasterConfigResponseBodyTranscodeConfig() = default ;
    DescribeCasterConfigResponseBodyTranscodeConfig(const DescribeCasterConfigResponseBodyTranscodeConfig &) = default ;
    DescribeCasterConfigResponseBodyTranscodeConfig(DescribeCasterConfigResponseBodyTranscodeConfig &&) = default ;
    DescribeCasterConfigResponseBodyTranscodeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterConfigResponseBodyTranscodeConfig() = default ;
    DescribeCasterConfigResponseBodyTranscodeConfig& operator=(const DescribeCasterConfigResponseBodyTranscodeConfig &) = default ;
    DescribeCasterConfigResponseBodyTranscodeConfig& operator=(DescribeCasterConfigResponseBodyTranscodeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->casterTemplate_ != nullptr
        && this->customParams_ != nullptr && this->liveTemplateIds_ != nullptr; };
    // casterTemplate Field Functions 
    bool hasCasterTemplate() const { return this->casterTemplate_ != nullptr;};
    void deleteCasterTemplate() { this->casterTemplate_ = nullptr;};
    inline string casterTemplate() const { DARABONBA_PTR_GET_DEFAULT(casterTemplate_, "") };
    inline DescribeCasterConfigResponseBodyTranscodeConfig& setCasterTemplate(string casterTemplate) { DARABONBA_PTR_SET_VALUE(casterTemplate_, casterTemplate) };


    // customParams Field Functions 
    bool hasCustomParams() const { return this->customParams_ != nullptr;};
    void deleteCustomParams() { this->customParams_ = nullptr;};
    inline const Models::DescribeCasterConfigResponseBodyTranscodeConfigCustomParams & customParams() const { DARABONBA_PTR_GET_CONST(customParams_, Models::DescribeCasterConfigResponseBodyTranscodeConfigCustomParams) };
    inline Models::DescribeCasterConfigResponseBodyTranscodeConfigCustomParams customParams() { DARABONBA_PTR_GET(customParams_, Models::DescribeCasterConfigResponseBodyTranscodeConfigCustomParams) };
    inline DescribeCasterConfigResponseBodyTranscodeConfig& setCustomParams(const Models::DescribeCasterConfigResponseBodyTranscodeConfigCustomParams & customParams) { DARABONBA_PTR_SET_VALUE(customParams_, customParams) };
    inline DescribeCasterConfigResponseBodyTranscodeConfig& setCustomParams(Models::DescribeCasterConfigResponseBodyTranscodeConfigCustomParams && customParams) { DARABONBA_PTR_SET_RVALUE(customParams_, customParams) };


    // liveTemplateIds Field Functions 
    bool hasLiveTemplateIds() const { return this->liveTemplateIds_ != nullptr;};
    void deleteLiveTemplateIds() { this->liveTemplateIds_ = nullptr;};
    inline const Models::DescribeCasterConfigResponseBodyTranscodeConfigLiveTemplateIds & liveTemplateIds() const { DARABONBA_PTR_GET_CONST(liveTemplateIds_, Models::DescribeCasterConfigResponseBodyTranscodeConfigLiveTemplateIds) };
    inline Models::DescribeCasterConfigResponseBodyTranscodeConfigLiveTemplateIds liveTemplateIds() { DARABONBA_PTR_GET(liveTemplateIds_, Models::DescribeCasterConfigResponseBodyTranscodeConfigLiveTemplateIds) };
    inline DescribeCasterConfigResponseBodyTranscodeConfig& setLiveTemplateIds(const Models::DescribeCasterConfigResponseBodyTranscodeConfigLiveTemplateIds & liveTemplateIds) { DARABONBA_PTR_SET_VALUE(liveTemplateIds_, liveTemplateIds) };
    inline DescribeCasterConfigResponseBodyTranscodeConfig& setLiveTemplateIds(Models::DescribeCasterConfigResponseBodyTranscodeConfigLiveTemplateIds && liveTemplateIds) { DARABONBA_PTR_SET_RVALUE(liveTemplateIds_, liveTemplateIds) };


  protected:
    // The transcoding template of the production studio. Valid values:
    // 
    // *   **lp_ld**: low definition
    // *   **lp_sd**: standard definition
    // *   **lp_hd**: high definition
    // *   **lp_ud**: ultra high definition
    // *   **lp_ld_v**: low definition (portrait mode)
    // *   **lp_sd_v**: standard definition (portrait mode)
    // *   **lp_hd_v**: high definition (portrait mode)
    // *   **lp_ud_v**: ultra high definition (portrait mode)
    std::shared_ptr<string> casterTemplate_ = nullptr;
    // The custom settings.
    std::shared_ptr<Models::DescribeCasterConfigResponseBodyTranscodeConfigCustomParams> customParams_ = nullptr;
    // The transcoding setting for live streams.
    std::shared_ptr<Models::DescribeCasterConfigResponseBodyTranscodeConfigLiveTemplateIds> liveTemplateIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
