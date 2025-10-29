// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMRECORDINDEXFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMRECORDINDEXFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveStreamRecordIndexFileResponseBodyRecordIndexInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamRecordIndexFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamRecordIndexFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecordIndexInfo, recordIndexInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamRecordIndexFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordIndexInfo, recordIndexInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveStreamRecordIndexFileResponseBody() = default ;
    DescribeLiveStreamRecordIndexFileResponseBody(const DescribeLiveStreamRecordIndexFileResponseBody &) = default ;
    DescribeLiveStreamRecordIndexFileResponseBody(DescribeLiveStreamRecordIndexFileResponseBody &&) = default ;
    DescribeLiveStreamRecordIndexFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamRecordIndexFileResponseBody() = default ;
    DescribeLiveStreamRecordIndexFileResponseBody& operator=(const DescribeLiveStreamRecordIndexFileResponseBody &) = default ;
    DescribeLiveStreamRecordIndexFileResponseBody& operator=(DescribeLiveStreamRecordIndexFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordIndexInfo_ == nullptr
        && return this->requestId_ == nullptr; };
    // recordIndexInfo Field Functions 
    bool hasRecordIndexInfo() const { return this->recordIndexInfo_ != nullptr;};
    void deleteRecordIndexInfo() { this->recordIndexInfo_ = nullptr;};
    inline const DescribeLiveStreamRecordIndexFileResponseBodyRecordIndexInfo & recordIndexInfo() const { DARABONBA_PTR_GET_CONST(recordIndexInfo_, DescribeLiveStreamRecordIndexFileResponseBodyRecordIndexInfo) };
    inline DescribeLiveStreamRecordIndexFileResponseBodyRecordIndexInfo recordIndexInfo() { DARABONBA_PTR_GET(recordIndexInfo_, DescribeLiveStreamRecordIndexFileResponseBodyRecordIndexInfo) };
    inline DescribeLiveStreamRecordIndexFileResponseBody& setRecordIndexInfo(const DescribeLiveStreamRecordIndexFileResponseBodyRecordIndexInfo & recordIndexInfo) { DARABONBA_PTR_SET_VALUE(recordIndexInfo_, recordIndexInfo) };
    inline DescribeLiveStreamRecordIndexFileResponseBody& setRecordIndexInfo(DescribeLiveStreamRecordIndexFileResponseBodyRecordIndexInfo && recordIndexInfo) { DARABONBA_PTR_SET_RVALUE(recordIndexInfo_, recordIndexInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamRecordIndexFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the index file.
    std::shared_ptr<DescribeLiveStreamRecordIndexFileResponseBodyRecordIndexInfo> recordIndexInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
