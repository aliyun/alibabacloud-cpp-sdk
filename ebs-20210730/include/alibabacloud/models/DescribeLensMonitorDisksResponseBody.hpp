// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELENSMONITORDISKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELENSMONITORDISKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLensMonitorDisksResponseBodyDiskInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeLensMonitorDisksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLensMonitorDisksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiskInfos, diskInfos_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLensMonitorDisksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskInfos, diskInfos_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLensMonitorDisksResponseBody() = default ;
    DescribeLensMonitorDisksResponseBody(const DescribeLensMonitorDisksResponseBody &) = default ;
    DescribeLensMonitorDisksResponseBody(DescribeLensMonitorDisksResponseBody &&) = default ;
    DescribeLensMonitorDisksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLensMonitorDisksResponseBody() = default ;
    DescribeLensMonitorDisksResponseBody& operator=(const DescribeLensMonitorDisksResponseBody &) = default ;
    DescribeLensMonitorDisksResponseBody& operator=(DescribeLensMonitorDisksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskInfos_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // diskInfos Field Functions 
    bool hasDiskInfos() const { return this->diskInfos_ != nullptr;};
    void deleteDiskInfos() { this->diskInfos_ = nullptr;};
    inline const vector<DescribeLensMonitorDisksResponseBodyDiskInfos> & diskInfos() const { DARABONBA_PTR_GET_CONST(diskInfos_, vector<DescribeLensMonitorDisksResponseBodyDiskInfos>) };
    inline vector<DescribeLensMonitorDisksResponseBodyDiskInfos> diskInfos() { DARABONBA_PTR_GET(diskInfos_, vector<DescribeLensMonitorDisksResponseBodyDiskInfos>) };
    inline DescribeLensMonitorDisksResponseBody& setDiskInfos(const vector<DescribeLensMonitorDisksResponseBodyDiskInfos> & diskInfos) { DARABONBA_PTR_SET_VALUE(diskInfos_, diskInfos) };
    inline DescribeLensMonitorDisksResponseBody& setDiskInfos(vector<DescribeLensMonitorDisksResponseBodyDiskInfos> && diskInfos) { DARABONBA_PTR_SET_RVALUE(diskInfos_, diskInfos) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeLensMonitorDisksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLensMonitorDisksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeLensMonitorDisksResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the disks.
    std::shared_ptr<vector<DescribeLensMonitorDisksResponseBodyDiskInfos>> diskInfos_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
