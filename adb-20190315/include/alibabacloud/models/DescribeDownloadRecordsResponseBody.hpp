// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDownloadRecordsResponseBodyRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeDownloadRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDownloadRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDownloadRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDownloadRecordsResponseBody() = default ;
    DescribeDownloadRecordsResponseBody(const DescribeDownloadRecordsResponseBody &) = default ;
    DescribeDownloadRecordsResponseBody(DescribeDownloadRecordsResponseBody &&) = default ;
    DescribeDownloadRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDownloadRecordsResponseBody() = default ;
    DescribeDownloadRecordsResponseBody& operator=(const DescribeDownloadRecordsResponseBody &) = default ;
    DescribeDownloadRecordsResponseBody& operator=(DescribeDownloadRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->records_ != nullptr
        && this->requestId_ != nullptr; };
    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<DescribeDownloadRecordsResponseBodyRecords> & records() const { DARABONBA_PTR_GET_CONST(records_, vector<DescribeDownloadRecordsResponseBodyRecords>) };
    inline vector<DescribeDownloadRecordsResponseBodyRecords> records() { DARABONBA_PTR_GET(records_, vector<DescribeDownloadRecordsResponseBodyRecords>) };
    inline DescribeDownloadRecordsResponseBody& setRecords(const vector<DescribeDownloadRecordsResponseBodyRecords> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline DescribeDownloadRecordsResponseBody& setRecords(vector<DescribeDownloadRecordsResponseBodyRecords> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDownloadRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried download tasks.
    std::shared_ptr<vector<DescribeDownloadRecordsResponseBodyRecords>> records_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
