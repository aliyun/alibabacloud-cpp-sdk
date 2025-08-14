// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBOUTPUTGROUPPROCESSCONFIGTRANSCODEOVERWRITEPARAMSMUXCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBOUTPUTGROUPPROCESSCONFIGTRANSCODEOVERWRITEPARAMSMUXCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Segment, segment_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Segment, segment_);
    };
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig() = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig(const SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig &) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig(SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig &&) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig() = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig& operator=(const SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig &) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig& operator=(SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->segment_ != nullptr; };
    // segment Field Functions 
    bool hasSegment() const { return this->segment_ != nullptr;};
    void deleteSegment() { this->segment_ = nullptr;};
    inline const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment & segment() const { DARABONBA_PTR_GET_CONST(segment_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment) };
    inline Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment segment() { DARABONBA_PTR_GET(segment_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig& setSegment(const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment & segment) { DARABONBA_PTR_SET_VALUE(segment_, segment) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig& setSegment(Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment && segment) { DARABONBA_PTR_SET_RVALUE(segment_, segment) };


  protected:
    // The segment settings.
    std::shared_ptr<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfigSegment> segment_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
