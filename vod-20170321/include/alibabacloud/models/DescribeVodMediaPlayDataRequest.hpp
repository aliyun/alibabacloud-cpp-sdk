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
        && return this->orderName_ == nullptr && return this->orderType_ == nullptr && return this->os_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr
        && return this->playDate_ == nullptr && return this->region_ == nullptr && return this->terminalType_ == nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline DescribeVodMediaPlayDataRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // orderName Field Functions 
    bool hasOrderName() const { return this->orderName_ != nullptr;};
    void deleteOrderName() { this->orderName_ = nullptr;};
    inline string orderName() const { DARABONBA_PTR_GET_DEFAULT(orderName_, "") };
    inline DescribeVodMediaPlayDataRequest& setOrderName(string orderName) { DARABONBA_PTR_SET_VALUE(orderName_, orderName) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribeVodMediaPlayDataRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribeVodMediaPlayDataRequest& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline DescribeVodMediaPlayDataRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeVodMediaPlayDataRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // playDate Field Functions 
    bool hasPlayDate() const { return this->playDate_ != nullptr;};
    void deletePlayDate() { this->playDate_ = nullptr;};
    inline string playDate() const { DARABONBA_PTR_GET_DEFAULT(playDate_, "") };
    inline DescribeVodMediaPlayDataRequest& setPlayDate(string playDate) { DARABONBA_PTR_SET_VALUE(playDate_, playDate) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeVodMediaPlayDataRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // terminalType Field Functions 
    bool hasTerminalType() const { return this->terminalType_ != nullptr;};
    void deleteTerminalType() { this->terminalType_ = nullptr;};
    inline string terminalType() const { DARABONBA_PTR_GET_DEFAULT(terminalType_, "") };
    inline DescribeVodMediaPlayDataRequest& setTerminalType(string terminalType) { DARABONBA_PTR_SET_VALUE(terminalType_, terminalType) };


  protected:
    // The ID of the media file (VideoId). You can specify this parameter to query all playback data of a media file. You can specify only one media ID. You can use one of the following methods to obtain the ID:
    // 
    // *   Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com). In the left-side navigation pane, choose **Media Files** > **Audio/Video**. On the page that appears, view the media ID.
    // *   Obtain the value of the VideoId parameter in the response to the [CreateUploadVideo](~~CreateUploadVideo~~) operation that you called to upload the audio or video file.
    // *   Obtain the value of VideoId by calling the [SearchMedia](~~SearchMedia~~) operation. This method is applicable to files that have been uploaded.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The name of the metric. This parameter must be specified together with the `OrderType` parameter. You can specify this parameter to sort the returned data in ascending or descending order based on specific metrics. Valid values:
    // 
    // *   **PlaySuccessVv**: the total number of views.
    // *   **PlayPerVv**: the average views per viewer.
    // *   **PlayDuration**: the total playback duration.
    // *   **PlayDurationPerUv**: the average playback duration per viewer.
    std::shared_ptr<string> orderName_ = nullptr;
    // The sort type. This parameter must be specified together with the `OrderName` parameter. You can specify this parameter to sort the returned data in ascending or descending order based on specific metrics. Valid values:
    // 
    // *   **ASC**: The returned data is sorted in ascending order.
    // *   **DESC**: The returned data is sorted in descending order.
    std::shared_ptr<string> orderType_ = nullptr;
    // The operating system of the player. You can specify this parameter to query all playback data generated on a specific operating system. Valid values:
    // 
    // *   **Android**
    // *   **iOS**
    // *   **Windows**
    // *   **macOS**
    // *   **Linux**
    std::shared_ptr<string> os_ = nullptr;
    // The number of the page. You can specify a page number to return data from the specified page.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    // The number of entries per page. Maximum value: 100.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The playback time. Specify the value in the yyyyMMdd format.
    // 
    // > *   You can query data only by day.
    // > *   You can query only data within the last 30 days.
    std::shared_ptr<string> playDate_ = nullptr;
    // The region in which ApsaraVideo VOD is activated. You can specify this parameter to query all playback data generated only in a specific region. Valid values:
    // 
    // *   **cn-beijing**: China (Beijing)
    // *   **cn-shanghai**: China (Shanghai)
    // *   **cn-shenzhen**: China (Shenzhen)
    // *   **ap-northeast-1**: Japan (Tokyo)
    // *   **ap-southeast-1**: Singapore
    // *   **ap-southeast-5**: Indonesia (Jakarta)
    // *   **eu-central-1**: Germany (Frankfurt)
    std::shared_ptr<string> region_ = nullptr;
    // The type of the player SDK. You can specify this parameter to query all playback data generated by using a specific type of player SDK. Valid values:
    // 
    // *   **Native**: ApsaraVideo Player SDK for Android or ApsaraVideo Player SDK for iOS
    // *   **Web**: ApsaraVideo Player SDK for Web
    std::shared_ptr<string> terminalType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
