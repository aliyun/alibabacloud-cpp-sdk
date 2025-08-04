// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERCONNECTIONRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERCONNECTIONRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeUserConnectionRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserConnectionRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectDurationFrom, connectDurationFrom_);
      DARABONBA_PTR_TO_JSON(ConnectDurationTo, connectDurationTo_);
      DARABONBA_PTR_TO_JSON(ConnectEndTimeFrom, connectEndTimeFrom_);
      DARABONBA_PTR_TO_JSON(ConnectEndTimeTo, connectEndTimeTo_);
      DARABONBA_PTR_TO_JSON(ConnectStartTimeFrom, connectStartTimeFrom_);
      DARABONBA_PTR_TO_JSON(ConnectStartTimeTo, connectStartTimeTo_);
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(EndUserType, endUserType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserConnectionRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectDurationFrom, connectDurationFrom_);
      DARABONBA_PTR_FROM_JSON(ConnectDurationTo, connectDurationTo_);
      DARABONBA_PTR_FROM_JSON(ConnectEndTimeFrom, connectEndTimeFrom_);
      DARABONBA_PTR_FROM_JSON(ConnectEndTimeTo, connectEndTimeTo_);
      DARABONBA_PTR_FROM_JSON(ConnectStartTimeFrom, connectStartTimeFrom_);
      DARABONBA_PTR_FROM_JSON(ConnectStartTimeTo, connectStartTimeTo_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(EndUserType, endUserType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeUserConnectionRecordsRequest() = default ;
    DescribeUserConnectionRecordsRequest(const DescribeUserConnectionRecordsRequest &) = default ;
    DescribeUserConnectionRecordsRequest(DescribeUserConnectionRecordsRequest &&) = default ;
    DescribeUserConnectionRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserConnectionRecordsRequest() = default ;
    DescribeUserConnectionRecordsRequest& operator=(const DescribeUserConnectionRecordsRequest &) = default ;
    DescribeUserConnectionRecordsRequest& operator=(DescribeUserConnectionRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectDurationFrom_ != nullptr
        && this->connectDurationTo_ != nullptr && this->connectEndTimeFrom_ != nullptr && this->connectEndTimeTo_ != nullptr && this->connectStartTimeFrom_ != nullptr && this->connectStartTimeTo_ != nullptr
        && this->desktopGroupId_ != nullptr && this->desktopId_ != nullptr && this->endUserId_ != nullptr && this->endUserType_ != nullptr && this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->regionId_ != nullptr; };
    // connectDurationFrom Field Functions 
    bool hasConnectDurationFrom() const { return this->connectDurationFrom_ != nullptr;};
    void deleteConnectDurationFrom() { this->connectDurationFrom_ = nullptr;};
    inline int64_t connectDurationFrom() const { DARABONBA_PTR_GET_DEFAULT(connectDurationFrom_, 0L) };
    inline DescribeUserConnectionRecordsRequest& setConnectDurationFrom(int64_t connectDurationFrom) { DARABONBA_PTR_SET_VALUE(connectDurationFrom_, connectDurationFrom) };


    // connectDurationTo Field Functions 
    bool hasConnectDurationTo() const { return this->connectDurationTo_ != nullptr;};
    void deleteConnectDurationTo() { this->connectDurationTo_ = nullptr;};
    inline int64_t connectDurationTo() const { DARABONBA_PTR_GET_DEFAULT(connectDurationTo_, 0L) };
    inline DescribeUserConnectionRecordsRequest& setConnectDurationTo(int64_t connectDurationTo) { DARABONBA_PTR_SET_VALUE(connectDurationTo_, connectDurationTo) };


    // connectEndTimeFrom Field Functions 
    bool hasConnectEndTimeFrom() const { return this->connectEndTimeFrom_ != nullptr;};
    void deleteConnectEndTimeFrom() { this->connectEndTimeFrom_ = nullptr;};
    inline int64_t connectEndTimeFrom() const { DARABONBA_PTR_GET_DEFAULT(connectEndTimeFrom_, 0L) };
    inline DescribeUserConnectionRecordsRequest& setConnectEndTimeFrom(int64_t connectEndTimeFrom) { DARABONBA_PTR_SET_VALUE(connectEndTimeFrom_, connectEndTimeFrom) };


    // connectEndTimeTo Field Functions 
    bool hasConnectEndTimeTo() const { return this->connectEndTimeTo_ != nullptr;};
    void deleteConnectEndTimeTo() { this->connectEndTimeTo_ = nullptr;};
    inline int64_t connectEndTimeTo() const { DARABONBA_PTR_GET_DEFAULT(connectEndTimeTo_, 0L) };
    inline DescribeUserConnectionRecordsRequest& setConnectEndTimeTo(int64_t connectEndTimeTo) { DARABONBA_PTR_SET_VALUE(connectEndTimeTo_, connectEndTimeTo) };


    // connectStartTimeFrom Field Functions 
    bool hasConnectStartTimeFrom() const { return this->connectStartTimeFrom_ != nullptr;};
    void deleteConnectStartTimeFrom() { this->connectStartTimeFrom_ = nullptr;};
    inline int64_t connectStartTimeFrom() const { DARABONBA_PTR_GET_DEFAULT(connectStartTimeFrom_, 0L) };
    inline DescribeUserConnectionRecordsRequest& setConnectStartTimeFrom(int64_t connectStartTimeFrom) { DARABONBA_PTR_SET_VALUE(connectStartTimeFrom_, connectStartTimeFrom) };


    // connectStartTimeTo Field Functions 
    bool hasConnectStartTimeTo() const { return this->connectStartTimeTo_ != nullptr;};
    void deleteConnectStartTimeTo() { this->connectStartTimeTo_ = nullptr;};
    inline int64_t connectStartTimeTo() const { DARABONBA_PTR_GET_DEFAULT(connectStartTimeTo_, 0L) };
    inline DescribeUserConnectionRecordsRequest& setConnectStartTimeTo(int64_t connectStartTimeTo) { DARABONBA_PTR_SET_VALUE(connectStartTimeTo_, connectStartTimeTo) };


    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string desktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline DescribeUserConnectionRecordsRequest& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeUserConnectionRecordsRequest& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeUserConnectionRecordsRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // endUserType Field Functions 
    bool hasEndUserType() const { return this->endUserType_ != nullptr;};
    void deleteEndUserType() { this->endUserType_ = nullptr;};
    inline string endUserType() const { DARABONBA_PTR_GET_DEFAULT(endUserType_, "") };
    inline DescribeUserConnectionRecordsRequest& setEndUserType(string endUserType) { DARABONBA_PTR_SET_VALUE(endUserType_, endUserType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeUserConnectionRecordsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeUserConnectionRecordsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeUserConnectionRecordsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The duration when the cloud desktop is connected, which is the minimum value for condition filtering.
    std::shared_ptr<int64_t> connectDurationFrom_ = nullptr;
    // The duration when the cloud desktop is connected, which is the maximum value for condition filtering.
    std::shared_ptr<int64_t> connectDurationTo_ = nullptr;
    // The time when the cloud desktop stops to be connected, which is the minimum value for condition filtering. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> connectEndTimeFrom_ = nullptr;
    // The time when the cloud desktop stops to be connected, which is the maximum value for condition filtering. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> connectEndTimeTo_ = nullptr;
    // The time when the cloud desktop starts to be connected, which is the minimum value for condition filtering. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> connectStartTimeFrom_ = nullptr;
    // The time when the cloud desktop starts to be connected, which is the maximum value for condition filtering. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> connectStartTimeTo_ = nullptr;
    // The ID of the cloud computer pool.
    // 
    // This parameter is required.
    std::shared_ptr<string> desktopGroupId_ = nullptr;
    // The ID of the cloud computer.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The ID of the authorized user.
    // 
    // This parameter is required.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The type of the user account.
    // 
    // Valid values:
    // 
    // *   SIMPLE: convenience account
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   AD_CONNECTOR: enterprise AD account
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> endUserType_ = nullptr;
    // The number of entries to return on each page. Maximum value: 100. Default value: 10.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that determines the start point of the next query. If this parameter is empty, all results are returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
