// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCLOUDRECORDREQUESTSINGLESTREAMINGRECORD_HPP_
#define ALIBABACLOUD_MODELS_STARTCLOUDRECORDREQUESTSINGLESTREAMINGRECORD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams.hpp>
#include <alibabacloud/models/StartCloudRecordRequestSingleStreamingRecordTranscodingParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartCloudRecordRequestSingleStreamingRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCloudRecordRequestSingleStreamingRecord& obj) { 
      DARABONBA_PTR_TO_JSON(SpecifiedStreams, specifiedStreams_);
      DARABONBA_PTR_TO_JSON(TranscodingParameters, transcodingParameters_);
    };
    friend void from_json(const Darabonba::Json& j, StartCloudRecordRequestSingleStreamingRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(SpecifiedStreams, specifiedStreams_);
      DARABONBA_PTR_FROM_JSON(TranscodingParameters, transcodingParameters_);
    };
    StartCloudRecordRequestSingleStreamingRecord() = default ;
    StartCloudRecordRequestSingleStreamingRecord(const StartCloudRecordRequestSingleStreamingRecord &) = default ;
    StartCloudRecordRequestSingleStreamingRecord(StartCloudRecordRequestSingleStreamingRecord &&) = default ;
    StartCloudRecordRequestSingleStreamingRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCloudRecordRequestSingleStreamingRecord() = default ;
    StartCloudRecordRequestSingleStreamingRecord& operator=(const StartCloudRecordRequestSingleStreamingRecord &) = default ;
    StartCloudRecordRequestSingleStreamingRecord& operator=(StartCloudRecordRequestSingleStreamingRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->specifiedStreams_ != nullptr
        && this->transcodingParameters_ != nullptr; };
    // specifiedStreams Field Functions 
    bool hasSpecifiedStreams() const { return this->specifiedStreams_ != nullptr;};
    void deleteSpecifiedStreams() { this->specifiedStreams_ = nullptr;};
    inline const vector<Models::StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams> & specifiedStreams() const { DARABONBA_PTR_GET_CONST(specifiedStreams_, vector<Models::StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams>) };
    inline vector<Models::StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams> specifiedStreams() { DARABONBA_PTR_GET(specifiedStreams_, vector<Models::StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams>) };
    inline StartCloudRecordRequestSingleStreamingRecord& setSpecifiedStreams(const vector<Models::StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams> & specifiedStreams) { DARABONBA_PTR_SET_VALUE(specifiedStreams_, specifiedStreams) };
    inline StartCloudRecordRequestSingleStreamingRecord& setSpecifiedStreams(vector<Models::StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams> && specifiedStreams) { DARABONBA_PTR_SET_RVALUE(specifiedStreams_, specifiedStreams) };


    // transcodingParameters Field Functions 
    bool hasTranscodingParameters() const { return this->transcodingParameters_ != nullptr;};
    void deleteTranscodingParameters() { this->transcodingParameters_ = nullptr;};
    inline const Models::StartCloudRecordRequestSingleStreamingRecordTranscodingParameters & transcodingParameters() const { DARABONBA_PTR_GET_CONST(transcodingParameters_, Models::StartCloudRecordRequestSingleStreamingRecordTranscodingParameters) };
    inline Models::StartCloudRecordRequestSingleStreamingRecordTranscodingParameters transcodingParameters() { DARABONBA_PTR_GET(transcodingParameters_, Models::StartCloudRecordRequestSingleStreamingRecordTranscodingParameters) };
    inline StartCloudRecordRequestSingleStreamingRecord& setTranscodingParameters(const Models::StartCloudRecordRequestSingleStreamingRecordTranscodingParameters & transcodingParameters) { DARABONBA_PTR_SET_VALUE(transcodingParameters_, transcodingParameters) };
    inline StartCloudRecordRequestSingleStreamingRecord& setTranscodingParameters(Models::StartCloudRecordRequestSingleStreamingRecordTranscodingParameters && transcodingParameters) { DARABONBA_PTR_SET_RVALUE(transcodingParameters_, transcodingParameters) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams>> specifiedStreams_ = nullptr;
    std::shared_ptr<Models::StartCloudRecordRequestSingleStreamingRecordTranscodingParameters> transcodingParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
