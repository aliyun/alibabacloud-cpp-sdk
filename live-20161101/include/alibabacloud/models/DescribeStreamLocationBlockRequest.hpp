// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTREAMLOCATIONBLOCKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTREAMLOCATIONBLOCKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeStreamLocationBlockRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStreamLocationBlockRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BlockType, blockType_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStreamLocationBlockRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BlockType, blockType_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
    };
    DescribeStreamLocationBlockRequest() = default ;
    DescribeStreamLocationBlockRequest(const DescribeStreamLocationBlockRequest &) = default ;
    DescribeStreamLocationBlockRequest(DescribeStreamLocationBlockRequest &&) = default ;
    DescribeStreamLocationBlockRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStreamLocationBlockRequest() = default ;
    DescribeStreamLocationBlockRequest& operator=(const DescribeStreamLocationBlockRequest &) = default ;
    DescribeStreamLocationBlockRequest& operator=(DescribeStreamLocationBlockRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->blockType_ == nullptr && return this->domainName_ == nullptr && return this->ownerId_ == nullptr && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr
        && return this->regionId_ == nullptr && return this->streamName_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeStreamLocationBlockRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // blockType Field Functions 
    bool hasBlockType() const { return this->blockType_ != nullptr;};
    void deleteBlockType() { this->blockType_ = nullptr;};
    inline string blockType() const { DARABONBA_PTR_GET_DEFAULT(blockType_, "") };
    inline DescribeStreamLocationBlockRequest& setBlockType(string blockType) { DARABONBA_PTR_SET_VALUE(blockType_, blockType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeStreamLocationBlockRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeStreamLocationBlockRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeStreamLocationBlockRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeStreamLocationBlockRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeStreamLocationBlockRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeStreamLocationBlockRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    // The name of the application to which the live stream belongs.
    std::shared_ptr<string> appName_ = nullptr;
    // The blocking type. Valid values:
    // 
    // *   blacklist
    // *   whitelist
    std::shared_ptr<string> blockType_ = nullptr;
    // The streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries per page. Valid values: integers from 1 to 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the live stream.
    std::shared_ptr<string> streamName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
