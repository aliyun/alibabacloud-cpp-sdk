// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMERGERESPONSEBODYLIVESTREAMMERGELISTLIVESTREAMMERGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMERGERESPONSEBODYLIVESTREAMMERGELISTLIVESTREAMMERGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppUsing, appUsing_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExtraInAppStreams, extraInAppStreams_);
      DARABONBA_PTR_TO_JSON(InAppName1, inAppName1_);
      DARABONBA_PTR_TO_JSON(InAppName2, inAppName2_);
      DARABONBA_PTR_TO_JSON(InStreamName1, inStreamName1_);
      DARABONBA_PTR_TO_JSON(InStreamName2, inStreamName2_);
      DARABONBA_PTR_TO_JSON(LiveMerger, liveMerger_);
      DARABONBA_PTR_TO_JSON(MergeParameters, mergeParameters_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(StreamUsing, streamUsing_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppUsing, appUsing_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExtraInAppStreams, extraInAppStreams_);
      DARABONBA_PTR_FROM_JSON(InAppName1, inAppName1_);
      DARABONBA_PTR_FROM_JSON(InAppName2, inAppName2_);
      DARABONBA_PTR_FROM_JSON(InStreamName1, inStreamName1_);
      DARABONBA_PTR_FROM_JSON(InStreamName2, inStreamName2_);
      DARABONBA_PTR_FROM_JSON(LiveMerger, liveMerger_);
      DARABONBA_PTR_FROM_JSON(MergeParameters, mergeParameters_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(StreamUsing, streamUsing_);
    };
    DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge() = default ;
    DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge(const DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge &) = default ;
    DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge(DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge &&) = default ;
    DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge() = default ;
    DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge& operator=(const DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge &) = default ;
    DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge& operator=(DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->appUsing_ != nullptr && this->domainName_ != nullptr && this->endTime_ != nullptr && this->extraInAppStreams_ != nullptr && this->inAppName1_ != nullptr
        && this->inAppName2_ != nullptr && this->inStreamName1_ != nullptr && this->inStreamName2_ != nullptr && this->liveMerger_ != nullptr && this->mergeParameters_ != nullptr
        && this->protocol_ != nullptr && this->startTime_ != nullptr && this->streamName_ != nullptr && this->streamUsing_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appUsing Field Functions 
    bool hasAppUsing() const { return this->appUsing_ != nullptr;};
    void deleteAppUsing() { this->appUsing_ = nullptr;};
    inline string appUsing() const { DARABONBA_PTR_GET_DEFAULT(appUsing_, "") };
    inline DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge& setAppUsing(string appUsing) { DARABONBA_PTR_SET_VALUE(appUsing_, appUsing) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // extraInAppStreams Field Functions 
    bool hasExtraInAppStreams() const { return this->extraInAppStreams_ != nullptr;};
    void deleteExtraInAppStreams() { this->extraInAppStreams_ = nullptr;};
    inline string extraInAppStreams() const { DARABONBA_PTR_GET_DEFAULT(extraInAppStreams_, "") };
    inline DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge& setExtraInAppStreams(string extraInAppStreams) { DARABONBA_PTR_SET_VALUE(extraInAppStreams_, extraInAppStreams) };


    // inAppName1 Field Functions 
    bool hasInAppName1() const { return this->inAppName1_ != nullptr;};
    void deleteInAppName1() { this->inAppName1_ = nullptr;};
    inline string inAppName1() const { DARABONBA_PTR_GET_DEFAULT(inAppName1_, "") };
    inline DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge& setInAppName1(string inAppName1) { DARABONBA_PTR_SET_VALUE(inAppName1_, inAppName1) };


    // inAppName2 Field Functions 
    bool hasInAppName2() const { return this->inAppName2_ != nullptr;};
    void deleteInAppName2() { this->inAppName2_ = nullptr;};
    inline string inAppName2() const { DARABONBA_PTR_GET_DEFAULT(inAppName2_, "") };
    inline DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge& setInAppName2(string inAppName2) { DARABONBA_PTR_SET_VALUE(inAppName2_, inAppName2) };


    // inStreamName1 Field Functions 
    bool hasInStreamName1() const { return this->inStreamName1_ != nullptr;};
    void deleteInStreamName1() { this->inStreamName1_ = nullptr;};
    inline string inStreamName1() const { DARABONBA_PTR_GET_DEFAULT(inStreamName1_, "") };
    inline DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge& setInStreamName1(string inStreamName1) { DARABONBA_PTR_SET_VALUE(inStreamName1_, inStreamName1) };


    // inStreamName2 Field Functions 
    bool hasInStreamName2() const { return this->inStreamName2_ != nullptr;};
    void deleteInStreamName2() { this->inStreamName2_ = nullptr;};
    inline string inStreamName2() const { DARABONBA_PTR_GET_DEFAULT(inStreamName2_, "") };
    inline DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge& setInStreamName2(string inStreamName2) { DARABONBA_PTR_SET_VALUE(inStreamName2_, inStreamName2) };


    // liveMerger Field Functions 
    bool hasLiveMerger() const { return this->liveMerger_ != nullptr;};
    void deleteLiveMerger() { this->liveMerger_ = nullptr;};
    inline string liveMerger() const { DARABONBA_PTR_GET_DEFAULT(liveMerger_, "") };
    inline DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge& setLiveMerger(string liveMerger) { DARABONBA_PTR_SET_VALUE(liveMerger_, liveMerger) };


    // mergeParameters Field Functions 
    bool hasMergeParameters() const { return this->mergeParameters_ != nullptr;};
    void deleteMergeParameters() { this->mergeParameters_ = nullptr;};
    inline string mergeParameters() const { DARABONBA_PTR_GET_DEFAULT(mergeParameters_, "") };
    inline DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge& setMergeParameters(string mergeParameters) { DARABONBA_PTR_SET_VALUE(mergeParameters_, mergeParameters) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // streamUsing Field Functions 
    bool hasStreamUsing() const { return this->streamUsing_ != nullptr;};
    void deleteStreamUsing() { this->streamUsing_ = nullptr;};
    inline string streamUsing() const { DARABONBA_PTR_GET_DEFAULT(streamUsing_, "") };
    inline DescribeLiveStreamMergeResponseBodyLiveStreamMergeListLiveStreamMerge& setStreamUsing(string streamUsing) { DARABONBA_PTR_SET_VALUE(streamUsing_, streamUsing) };


  protected:
    // The name of the application that generates the output stream.
    std::shared_ptr<string> appName_ = nullptr;
    // The application that is being used.
    std::shared_ptr<string> appUsing_ = nullptr;
    // The streaming domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end time of the stream mixing.
    std::shared_ptr<string> endTime_ = nullptr;
    // The names of the applications that generate the input additional streams other than the primary stream and secondary stream, and the names of these additional streams.
    std::shared_ptr<string> extraInAppStreams_ = nullptr;
    // The name of the application that generates the input primary stream.
    std::shared_ptr<string> inAppName1_ = nullptr;
    // The name of the application that generates the input secondary stream.
    std::shared_ptr<string> inAppName2_ = nullptr;
    // The name of the input primary stream.
    std::shared_ptr<string> inStreamName1_ = nullptr;
    // The name of the input secondary stream.
    std::shared_ptr<string> inStreamName2_ = nullptr;
    std::shared_ptr<string> liveMerger_ = nullptr;
    std::shared_ptr<string> mergeParameters_ = nullptr;
    // The streaming protocol.
    std::shared_ptr<string> protocol_ = nullptr;
    // The start time of the stream mixing.
    std::shared_ptr<string> startTime_ = nullptr;
    // The name of the output stream.
    std::shared_ptr<string> streamName_ = nullptr;
    // The stream that is being used.
    std::shared_ptr<string> streamUsing_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
