// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMOUNTPOINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMOUNTPOINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class ListMountPointsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMountPointsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(StartOffset, startOffset_);
    };
    friend void from_json(const Darabonba::Json& j, ListMountPointsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(StartOffset, startOffset_);
    };
    ListMountPointsRequest() = default ;
    ListMountPointsRequest(const ListMountPointsRequest &) = default ;
    ListMountPointsRequest(ListMountPointsRequest &&) = default ;
    ListMountPointsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMountPointsRequest() = default ;
    ListMountPointsRequest& operator=(const ListMountPointsRequest &) = default ;
    ListMountPointsRequest& operator=(ListMountPointsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && return this->inputRegionId_ == nullptr && return this->limit_ == nullptr && return this->nextToken_ == nullptr && return this->orderBy_ == nullptr && return this->orderType_ == nullptr
        && return this->startOffset_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ListMountPointsRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string inputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline ListMountPointsRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListMountPointsRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMountPointsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListMountPointsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListMountPointsRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // startOffset Field Functions 
    bool hasStartOffset() const { return this->startOffset_ != nullptr;};
    void deleteStartOffset() { this->startOffset_ = nullptr;};
    inline int32_t startOffset() const { DARABONBA_PTR_GET_DEFAULT(startOffset_, 0) };
    inline ListMountPointsRequest& setStartOffset(int32_t startOffset) { DARABONBA_PTR_SET_VALUE(startOffset_, startOffset) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputRegionId_ = nullptr;
    std::shared_ptr<int32_t> limit_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> orderBy_ = nullptr;
    std::shared_ptr<string> orderType_ = nullptr;
    std::shared_ptr<int32_t> startOffset_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
