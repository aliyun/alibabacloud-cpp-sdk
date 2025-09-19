// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTOREJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTOREJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRestoreJobsResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRestoreJobsResponseBodyRestoreJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRestoreJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RestoreJobs, restoreJobs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RestoreJobs, restoreJobs_);
    };
    DescribeRestoreJobsResponseBody() = default ;
    DescribeRestoreJobsResponseBody(const DescribeRestoreJobsResponseBody &) = default ;
    DescribeRestoreJobsResponseBody(DescribeRestoreJobsResponseBody &&) = default ;
    DescribeRestoreJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreJobsResponseBody() = default ;
    DescribeRestoreJobsResponseBody& operator=(const DescribeRestoreJobsResponseBody &) = default ;
    DescribeRestoreJobsResponseBody& operator=(DescribeRestoreJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->requestId_ != nullptr && this->restoreJobs_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeRestoreJobsResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeRestoreJobsResponseBodyPageInfo) };
    inline DescribeRestoreJobsResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeRestoreJobsResponseBodyPageInfo) };
    inline DescribeRestoreJobsResponseBody& setPageInfo(const DescribeRestoreJobsResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeRestoreJobsResponseBody& setPageInfo(DescribeRestoreJobsResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRestoreJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // restoreJobs Field Functions 
    bool hasRestoreJobs() const { return this->restoreJobs_ != nullptr;};
    void deleteRestoreJobs() { this->restoreJobs_ = nullptr;};
    inline const vector<DescribeRestoreJobsResponseBodyRestoreJobs> & restoreJobs() const { DARABONBA_PTR_GET_CONST(restoreJobs_, vector<DescribeRestoreJobsResponseBodyRestoreJobs>) };
    inline vector<DescribeRestoreJobsResponseBodyRestoreJobs> restoreJobs() { DARABONBA_PTR_GET(restoreJobs_, vector<DescribeRestoreJobsResponseBodyRestoreJobs>) };
    inline DescribeRestoreJobsResponseBody& setRestoreJobs(const vector<DescribeRestoreJobsResponseBodyRestoreJobs> & restoreJobs) { DARABONBA_PTR_SET_VALUE(restoreJobs_, restoreJobs) };
    inline DescribeRestoreJobsResponseBody& setRestoreJobs(vector<DescribeRestoreJobsResponseBodyRestoreJobs> && restoreJobs) { DARABONBA_PTR_SET_RVALUE(restoreJobs_, restoreJobs) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribeRestoreJobsResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details about the restoration tasks.
    std::shared_ptr<vector<DescribeRestoreJobsResponseBodyRestoreJobs>> restoreJobs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
