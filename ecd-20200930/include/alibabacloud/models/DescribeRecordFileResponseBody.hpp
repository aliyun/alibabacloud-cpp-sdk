// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRecordFileResponseBodyRecordFiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeRecordFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecordFiles, recordFiles_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordFiles, recordFiles_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRecordFileResponseBody() = default ;
    DescribeRecordFileResponseBody(const DescribeRecordFileResponseBody &) = default ;
    DescribeRecordFileResponseBody(DescribeRecordFileResponseBody &&) = default ;
    DescribeRecordFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordFileResponseBody() = default ;
    DescribeRecordFileResponseBody& operator=(const DescribeRecordFileResponseBody &) = default ;
    DescribeRecordFileResponseBody& operator=(DescribeRecordFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordFiles_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // recordFiles Field Functions 
    bool hasRecordFiles() const { return this->recordFiles_ != nullptr;};
    void deleteRecordFiles() { this->recordFiles_ = nullptr;};
    inline const vector<DescribeRecordFileResponseBodyRecordFiles> & recordFiles() const { DARABONBA_PTR_GET_CONST(recordFiles_, vector<DescribeRecordFileResponseBodyRecordFiles>) };
    inline vector<DescribeRecordFileResponseBodyRecordFiles> recordFiles() { DARABONBA_PTR_GET(recordFiles_, vector<DescribeRecordFileResponseBodyRecordFiles>) };
    inline DescribeRecordFileResponseBody& setRecordFiles(const vector<DescribeRecordFileResponseBodyRecordFiles> & recordFiles) { DARABONBA_PTR_SET_VALUE(recordFiles_, recordFiles) };
    inline DescribeRecordFileResponseBody& setRecordFiles(vector<DescribeRecordFileResponseBodyRecordFiles> && recordFiles) { DARABONBA_PTR_SET_RVALUE(recordFiles_, recordFiles) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRecordFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRecordFileResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<DescribeRecordFileResponseBodyRecordFiles>> recordFiles_ = nullptr;
    // RequestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
