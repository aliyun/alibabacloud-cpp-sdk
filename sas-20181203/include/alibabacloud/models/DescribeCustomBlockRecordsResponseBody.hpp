// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMBLOCKRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMBLOCKRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCustomBlockRecordsResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCustomBlockRecordsResponseBodyRecordList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCustomBlockRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomBlockRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RecordList, recordList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomBlockRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RecordList, recordList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCustomBlockRecordsResponseBody() = default ;
    DescribeCustomBlockRecordsResponseBody(const DescribeCustomBlockRecordsResponseBody &) = default ;
    DescribeCustomBlockRecordsResponseBody(DescribeCustomBlockRecordsResponseBody &&) = default ;
    DescribeCustomBlockRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomBlockRecordsResponseBody() = default ;
    DescribeCustomBlockRecordsResponseBody& operator=(const DescribeCustomBlockRecordsResponseBody &) = default ;
    DescribeCustomBlockRecordsResponseBody& operator=(DescribeCustomBlockRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && return this->recordList_ == nullptr && return this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeCustomBlockRecordsResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeCustomBlockRecordsResponseBodyPageInfo) };
    inline DescribeCustomBlockRecordsResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeCustomBlockRecordsResponseBodyPageInfo) };
    inline DescribeCustomBlockRecordsResponseBody& setPageInfo(const DescribeCustomBlockRecordsResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeCustomBlockRecordsResponseBody& setPageInfo(DescribeCustomBlockRecordsResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // recordList Field Functions 
    bool hasRecordList() const { return this->recordList_ != nullptr;};
    void deleteRecordList() { this->recordList_ = nullptr;};
    inline const vector<DescribeCustomBlockRecordsResponseBodyRecordList> & recordList() const { DARABONBA_PTR_GET_CONST(recordList_, vector<DescribeCustomBlockRecordsResponseBodyRecordList>) };
    inline vector<DescribeCustomBlockRecordsResponseBodyRecordList> recordList() { DARABONBA_PTR_GET(recordList_, vector<DescribeCustomBlockRecordsResponseBodyRecordList>) };
    inline DescribeCustomBlockRecordsResponseBody& setRecordList(const vector<DescribeCustomBlockRecordsResponseBodyRecordList> & recordList) { DARABONBA_PTR_SET_VALUE(recordList_, recordList) };
    inline DescribeCustomBlockRecordsResponseBody& setRecordList(vector<DescribeCustomBlockRecordsResponseBodyRecordList> && recordList) { DARABONBA_PTR_SET_RVALUE(recordList_, recordList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomBlockRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribeCustomBlockRecordsResponseBodyPageInfo> pageInfo_ = nullptr;
    // An array that consists of the defense rules.
    std::shared_ptr<vector<DescribeCustomBlockRecordsResponseBodyRecordList>> recordList_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
