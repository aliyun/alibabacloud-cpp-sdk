// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSnapshotsResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSnapshotsResponseBodySnapshots.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSnapshotsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
    };
    DescribeSnapshotsResponseBody() = default ;
    DescribeSnapshotsResponseBody(const DescribeSnapshotsResponseBody &) = default ;
    DescribeSnapshotsResponseBody(DescribeSnapshotsResponseBody &&) = default ;
    DescribeSnapshotsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotsResponseBody() = default ;
    DescribeSnapshotsResponseBody& operator=(const DescribeSnapshotsResponseBody &) = default ;
    DescribeSnapshotsResponseBody& operator=(DescribeSnapshotsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && return this->requestId_ == nullptr && return this->snapshots_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeSnapshotsResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeSnapshotsResponseBodyPageInfo) };
    inline DescribeSnapshotsResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeSnapshotsResponseBodyPageInfo) };
    inline DescribeSnapshotsResponseBody& setPageInfo(const DescribeSnapshotsResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeSnapshotsResponseBody& setPageInfo(DescribeSnapshotsResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSnapshotsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline const vector<DescribeSnapshotsResponseBodySnapshots> & snapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, vector<DescribeSnapshotsResponseBodySnapshots>) };
    inline vector<DescribeSnapshotsResponseBodySnapshots> snapshots() { DARABONBA_PTR_GET(snapshots_, vector<DescribeSnapshotsResponseBodySnapshots>) };
    inline DescribeSnapshotsResponseBody& setSnapshots(const vector<DescribeSnapshotsResponseBodySnapshots> & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
    inline DescribeSnapshotsResponseBody& setSnapshots(vector<DescribeSnapshotsResponseBodySnapshots> && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribeSnapshotsResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the backup snapshots.
    std::shared_ptr<vector<DescribeSnapshotsResponseBodySnapshots>> snapshots_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
