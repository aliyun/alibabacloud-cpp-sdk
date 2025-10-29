// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTREAMLOCATIONBLOCKRESPONSEBODYSTREAMBLOCKLISTSTREAMBLOCK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTREAMLOCATIONBLOCKRESPONSEBODYSTREAMBLOCKLISTSTREAMBLOCK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BlockType, blockType_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(LocationList, locationList_);
      DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BlockType, blockType_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(LocationList, locationList_);
      DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock() = default ;
    DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock(const DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock &) = default ;
    DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock(DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock &&) = default ;
    DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock() = default ;
    DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock& operator=(const DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock &) = default ;
    DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock& operator=(DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->blockType_ == nullptr && return this->domainName_ == nullptr && return this->locationList_ == nullptr && return this->releaseTime_ == nullptr && return this->status_ == nullptr
        && return this->streamName_ == nullptr && return this->updateTime_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // blockType Field Functions 
    bool hasBlockType() const { return this->blockType_ != nullptr;};
    void deleteBlockType() { this->blockType_ = nullptr;};
    inline string blockType() const { DARABONBA_PTR_GET_DEFAULT(blockType_, "") };
    inline DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock& setBlockType(string blockType) { DARABONBA_PTR_SET_VALUE(blockType_, blockType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // locationList Field Functions 
    bool hasLocationList() const { return this->locationList_ != nullptr;};
    void deleteLocationList() { this->locationList_ = nullptr;};
    inline string locationList() const { DARABONBA_PTR_GET_DEFAULT(locationList_, "") };
    inline DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock& setLocationList(string locationList) { DARABONBA_PTR_SET_VALUE(locationList_, locationList) };


    // releaseTime Field Functions 
    bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
    void deleteReleaseTime() { this->releaseTime_ = nullptr;};
    inline string releaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, "") };
    inline DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock& setReleaseTime(string releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeStreamLocationBlockResponseBodyStreamBlockListStreamBlock& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The name of the application in which the blocking applies.
    std::shared_ptr<string> appName_ = nullptr;
    // The blocking type. Valid values:
    // 
    // *   blacklist
    // *   whitelist
    std::shared_ptr<string> blockType_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The blocked region. If multiple regions are specified, such as CN and AS, they are separated by commas (,).
    std::shared_ptr<string> locationList_ = nullptr;
    // The time when the blocking ends. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> releaseTime_ = nullptr;
    // The blocking status. Valid values: 0 (not started), 1 (blocking), 2 (successful), 3 (failed), 4 (expired), and 5 (deleting).
    std::shared_ptr<int32_t> status_ = nullptr;
    // The name of the stream.
    std::shared_ptr<string> streamName_ = nullptr;
    // The time when the configuration was last modified. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
