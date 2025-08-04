// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCLOUDRECORDREQUESTSINGLESTREAMINGRECORDTRANSCODINGPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_STARTCLOUDRECORDREQUESTSINGLESTREAMINGRECORDTRANSCODINGPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartCloudRecordRequestSingleStreamingRecordTranscodingParametersAudio.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartCloudRecordRequestSingleStreamingRecordTranscodingParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCloudRecordRequestSingleStreamingRecordTranscodingParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Audio, audio_);
      DARABONBA_PTR_TO_JSON(Container, container_);
    };
    friend void from_json(const Darabonba::Json& j, StartCloudRecordRequestSingleStreamingRecordTranscodingParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Audio, audio_);
      DARABONBA_PTR_FROM_JSON(Container, container_);
    };
    StartCloudRecordRequestSingleStreamingRecordTranscodingParameters() = default ;
    StartCloudRecordRequestSingleStreamingRecordTranscodingParameters(const StartCloudRecordRequestSingleStreamingRecordTranscodingParameters &) = default ;
    StartCloudRecordRequestSingleStreamingRecordTranscodingParameters(StartCloudRecordRequestSingleStreamingRecordTranscodingParameters &&) = default ;
    StartCloudRecordRequestSingleStreamingRecordTranscodingParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCloudRecordRequestSingleStreamingRecordTranscodingParameters() = default ;
    StartCloudRecordRequestSingleStreamingRecordTranscodingParameters& operator=(const StartCloudRecordRequestSingleStreamingRecordTranscodingParameters &) = default ;
    StartCloudRecordRequestSingleStreamingRecordTranscodingParameters& operator=(StartCloudRecordRequestSingleStreamingRecordTranscodingParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audio_ != nullptr
        && this->container_ != nullptr; };
    // audio Field Functions 
    bool hasAudio() const { return this->audio_ != nullptr;};
    void deleteAudio() { this->audio_ = nullptr;};
    inline const Models::StartCloudRecordRequestSingleStreamingRecordTranscodingParametersAudio & audio() const { DARABONBA_PTR_GET_CONST(audio_, Models::StartCloudRecordRequestSingleStreamingRecordTranscodingParametersAudio) };
    inline Models::StartCloudRecordRequestSingleStreamingRecordTranscodingParametersAudio audio() { DARABONBA_PTR_GET(audio_, Models::StartCloudRecordRequestSingleStreamingRecordTranscodingParametersAudio) };
    inline StartCloudRecordRequestSingleStreamingRecordTranscodingParameters& setAudio(const Models::StartCloudRecordRequestSingleStreamingRecordTranscodingParametersAudio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
    inline StartCloudRecordRequestSingleStreamingRecordTranscodingParameters& setAudio(Models::StartCloudRecordRequestSingleStreamingRecordTranscodingParametersAudio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


    // container Field Functions 
    bool hasContainer() const { return this->container_ != nullptr;};
    void deleteContainer() { this->container_ = nullptr;};
    inline string container() const { DARABONBA_PTR_GET_DEFAULT(container_, "") };
    inline StartCloudRecordRequestSingleStreamingRecordTranscodingParameters& setContainer(string container) { DARABONBA_PTR_SET_VALUE(container_, container) };


  protected:
    std::shared_ptr<Models::StartCloudRecordRequestSingleStreamingRecordTranscodingParametersAudio> audio_ = nullptr;
    std::shared_ptr<string> container_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
