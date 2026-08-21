// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODMEDIAPLAYDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODMEDIAPLAYDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodMediaPlayDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodMediaPlayDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(OrderName, orderName_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PlayDate, playDate_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(TerminalType, terminalType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodMediaPlayDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(OrderName, orderName_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PlayDate, playDate_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(TerminalType, terminalType_);
    };
    DescribeVodMediaPlayDataRequest() = default ;
    DescribeVodMediaPlayDataRequest(const DescribeVodMediaPlayDataRequest &) = default ;
    DescribeVodMediaPlayDataRequest(DescribeVodMediaPlayDataRequest &&) = default ;
    DescribeVodMediaPlayDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodMediaPlayDataRequest() = default ;
    DescribeVodMediaPlayDataRequest& operator=(const DescribeVodMediaPlayDataRequest &) = default ;
    DescribeVodMediaPlayDataRequest& operator=(DescribeVodMediaPlayDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaId_ == nullptr
        && this->orderName_ == nullptr && this->orderType_ == nullptr && this->os_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr
        && this->playDate_ == nullptr && this->region_ == nullptr && this->terminalType_ == nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline DescribeVodMediaPlayDataRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // orderName Field Functions 
    bool hasOrderName() const { return this->orderName_ != nullptr;};
    void deleteOrderName() { this->orderName_ = nullptr;};
    inline string getOrderName() const { DARABONBA_PTR_GET_DEFAULT(orderName_, "") };
    inline DescribeVodMediaPlayDataRequest& setOrderName(string orderName) { DARABONBA_PTR_SET_VALUE(orderName_, orderName) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribeVodMediaPlayDataRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribeVodMediaPlayDataRequest& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline DescribeVodMediaPlayDataRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeVodMediaPlayDataRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // playDate Field Functions 
    bool hasPlayDate() const { return this->playDate_ != nullptr;};
    void deletePlayDate() { this->playDate_ = nullptr;};
    inline string getPlayDate() const { DARABONBA_PTR_GET_DEFAULT(playDate_, "") };
    inline DescribeVodMediaPlayDataRequest& setPlayDate(string playDate) { DARABONBA_PTR_SET_VALUE(playDate_, playDate) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeVodMediaPlayDataRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // terminalType Field Functions 
    bool hasTerminalType() const { return this->terminalType_ != nullptr;};
    void deleteTerminalType() { this->terminalType_ = nullptr;};
    inline string getTerminalType() const { DARABONBA_PTR_GET_DEFAULT(terminalType_, "") };
    inline DescribeVodMediaPlayDataRequest& setTerminalType(string terminalType) { DARABONBA_PTR_SET_VALUE(terminalType_, terminalType) };


  protected:
    // The media ID, which is the audio or video ID (VideoId). Specify this parameter filtered query playback data for a specific media file. Only one media ID can be specified. You can obtain the media ID by using the following methods:
    // - For audio or video files uploaded through the console, log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Media Files** > **Audio/Video** to view the audio or video ID.
    // - When you upload an audio or video file by calling the [CreateUploadVideo](~~CreateUploadVideo~~) operation, the audio or video ID is the value of the VideoId response parameter.
    // - After the audio or video file is uploaded, you can call the [SearchMedia](~~SearchMedia~~) operation filtered query the audio or video ID, which is the value of the VideoId response parameter.
    shared_ptr<string> mediaId_ {};
    // The metric name. This parameter is used together with the `OrderType` parameter. Specify this parameter to sort the returned data in ascending or descending order by a specified metric. Valid values:
    // - **PlaySuccessVv**: total plays.
    // - **PlayPerVv**: average plays per user.
    // - **PlayDuration**: total play duration.
    // - **PlayDurationPerUv**: average play duration per user.
    shared_ptr<string> orderName_ {};
    // The sort order. This parameter is used together with the `OrderName` parameter. Specify this parameter to sort the returned data in ascending or descending order by a specified metric. Valid values:
    // - **ASC**: ascending order. The returned data is sorted from smallest to largest.
    // - **DESC**: descending order. The returned data is sorted from largest to smallest.
    shared_ptr<string> orderType_ {};
    // The operating system of the playback device. Specify this parameter to perform a filtered query for playback data of all audio and video files by operating system. Valid values:
    // - **Android**
    // - **iOS**
    // - **Windows**
    // - **macOS**
    // - **Linux**
    shared_ptr<string> os_ {};
    // The page number of the data to return. Specify this parameter to set the page from which data starts to be returned.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page. Specify this parameter to set the number of entries displayed on each page. Maximum value: 100.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageSize_ {};
    // The playback date. Unit: day. Format: yyyyMMdd.
    // > - Only daily queries are supported.
    // > - Only data within the last 30 days can be queried.
    shared_ptr<string> playDate_ {};
    // The service region. Specify this parameter to perform a filtered query for playback data of all audio and video files by service region. Valid values:
    // - **cn-beijing**: China (Beijing)
    // - **cn-shanghai**: China (Shanghai)
    // - **cn-shenzhen**: China (Shenzhen)
    // - **ap-northeast-1**: Japan (Tokyo)
    // - **ap-southeast-1**: Singapore
    // - **ap-southeast-5**: Indonesia (Jakarta)
    // - **eu-central-1**: Germany (Frankfurt)
    shared_ptr<string> region_ {};
    // The terminal type of the Player SDK. Specify this parameter to perform a filtered query for playback data of all audio and video files by terminal type. Valid values:
    // - **Native**: Android Player SDK or iOS Player SDK.
    // - **Web**: Web Player SDK.
    shared_ptr<string> terminalType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
