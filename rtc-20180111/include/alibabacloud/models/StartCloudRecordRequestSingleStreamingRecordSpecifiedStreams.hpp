// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCLOUDRECORDREQUESTSINGLESTREAMINGRECORDSPECIFIEDSTREAMS_HPP_
#define ALIBABACLOUD_MODELS_STARTCLOUDRECORDREQUESTSINGLESTREAMINGRECORDSPECIFIEDSTREAMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(StreamType, streamType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams() = default ;
    StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams(const StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams &) = default ;
    StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams(StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams &&) = default ;
    StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams() = default ;
    StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams& operator=(const StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams &) = default ;
    StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams& operator=(StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ids_ != nullptr
        && this->streamType_ != nullptr && this->type_ != nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<string> & ids() const { DARABONBA_PTR_GET_CONST(ids_, vector<string>) };
    inline vector<string> ids() { DARABONBA_PTR_GET(ids_, vector<string>) };
    inline StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams& setIds(const vector<string> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams& setIds(vector<string> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


    // streamType Field Functions 
    bool hasStreamType() const { return this->streamType_ != nullptr;};
    void deleteStreamType() { this->streamType_ = nullptr;};
    inline string streamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, "") };
    inline StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams& setStreamType(string streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline StartCloudRecordRequestSingleStreamingRecordSpecifiedStreams& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> ids_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> streamType_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
