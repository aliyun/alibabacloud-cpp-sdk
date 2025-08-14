// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUESTOUTPUTGROUPPROCESSCONFIGTRANSCODEOVERWRITEPARAMSMUXCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUESTOUTPUTGROUPPROCESSCONFIGTRANSCODEOVERWRITEPARAMSMUXCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Segment, segment_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Segment, segment_);
    };
    SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig() = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig(const SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig &) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig(SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig &&) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig() = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig& operator=(const SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig &) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig& operator=(SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->segment_ != nullptr; };
    // segment Field Functions 
    bool hasSegment() const { return this->segment_ != nullptr;};
    void deleteSegment() { this->segment_ = nullptr;};
    inline const Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment & segment() const { DARABONBA_PTR_GET_CONST(segment_, Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment) };
    inline Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment segment() { DARABONBA_PTR_GET(segment_, Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig& setSegment(const Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment & segment) { DARABONBA_PTR_SET_VALUE(segment_, segment) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig& setSegment(Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment && segment) { DARABONBA_PTR_SET_RVALUE(segment_, segment) };


  protected:
    // The segment settings.
    std::shared_ptr<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment> segment_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
