// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMRECORDCONTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMRECORDCONTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveStreamRecordContentResponseBodyRecordContentInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamRecordContentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamRecordContentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecordContentInfoList, recordContentInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamRecordContentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordContentInfoList, recordContentInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveStreamRecordContentResponseBody() = default ;
    DescribeLiveStreamRecordContentResponseBody(const DescribeLiveStreamRecordContentResponseBody &) = default ;
    DescribeLiveStreamRecordContentResponseBody(DescribeLiveStreamRecordContentResponseBody &&) = default ;
    DescribeLiveStreamRecordContentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamRecordContentResponseBody() = default ;
    DescribeLiveStreamRecordContentResponseBody& operator=(const DescribeLiveStreamRecordContentResponseBody &) = default ;
    DescribeLiveStreamRecordContentResponseBody& operator=(DescribeLiveStreamRecordContentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->recordContentInfoList_ != nullptr
        && this->requestId_ != nullptr; };
    // recordContentInfoList Field Functions 
    bool hasRecordContentInfoList() const { return this->recordContentInfoList_ != nullptr;};
    void deleteRecordContentInfoList() { this->recordContentInfoList_ = nullptr;};
    inline const DescribeLiveStreamRecordContentResponseBodyRecordContentInfoList & recordContentInfoList() const { DARABONBA_PTR_GET_CONST(recordContentInfoList_, DescribeLiveStreamRecordContentResponseBodyRecordContentInfoList) };
    inline DescribeLiveStreamRecordContentResponseBodyRecordContentInfoList recordContentInfoList() { DARABONBA_PTR_GET(recordContentInfoList_, DescribeLiveStreamRecordContentResponseBodyRecordContentInfoList) };
    inline DescribeLiveStreamRecordContentResponseBody& setRecordContentInfoList(const DescribeLiveStreamRecordContentResponseBodyRecordContentInfoList & recordContentInfoList) { DARABONBA_PTR_SET_VALUE(recordContentInfoList_, recordContentInfoList) };
    inline DescribeLiveStreamRecordContentResponseBody& setRecordContentInfoList(DescribeLiveStreamRecordContentResponseBodyRecordContentInfoList && recordContentInfoList) { DARABONBA_PTR_SET_RVALUE(recordContentInfoList_, recordContentInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamRecordContentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request.
    std::shared_ptr<DescribeLiveStreamRecordContentResponseBodyRecordContentInfoList> recordContentInfoList_ = nullptr;
    // The end of the time range to query. The time range that is specified by the StartTime and EndTime parameters cannot exceed 4 days. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
