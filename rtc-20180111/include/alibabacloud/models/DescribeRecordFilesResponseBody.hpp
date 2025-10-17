// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRecordFilesResponseBodyRecordFiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRecordFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecordFiles, recordFiles_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordFiles, recordFiles_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeRecordFilesResponseBody() = default ;
    DescribeRecordFilesResponseBody(const DescribeRecordFilesResponseBody &) = default ;
    DescribeRecordFilesResponseBody(DescribeRecordFilesResponseBody &&) = default ;
    DescribeRecordFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordFilesResponseBody() = default ;
    DescribeRecordFilesResponseBody& operator=(const DescribeRecordFilesResponseBody &) = default ;
    DescribeRecordFilesResponseBody& operator=(DescribeRecordFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordFiles_ == nullptr
        && return this->requestId_ == nullptr && return this->totalNum_ == nullptr && return this->totalPage_ == nullptr; };
    // recordFiles Field Functions 
    bool hasRecordFiles() const { return this->recordFiles_ != nullptr;};
    void deleteRecordFiles() { this->recordFiles_ = nullptr;};
    inline const vector<DescribeRecordFilesResponseBodyRecordFiles> & recordFiles() const { DARABONBA_PTR_GET_CONST(recordFiles_, vector<DescribeRecordFilesResponseBodyRecordFiles>) };
    inline vector<DescribeRecordFilesResponseBodyRecordFiles> recordFiles() { DARABONBA_PTR_GET(recordFiles_, vector<DescribeRecordFilesResponseBodyRecordFiles>) };
    inline DescribeRecordFilesResponseBody& setRecordFiles(const vector<DescribeRecordFilesResponseBodyRecordFiles> & recordFiles) { DARABONBA_PTR_SET_VALUE(recordFiles_, recordFiles) };
    inline DescribeRecordFilesResponseBody& setRecordFiles(vector<DescribeRecordFilesResponseBodyRecordFiles> && recordFiles) { DARABONBA_PTR_SET_RVALUE(recordFiles_, recordFiles) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRecordFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline DescribeRecordFilesResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int64_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
    inline DescribeRecordFilesResponseBody& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    std::shared_ptr<vector<DescribeRecordFilesResponseBodyRecordFiles>> recordFiles_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalNum_ = nullptr;
    std::shared_ptr<int64_t> totalPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
