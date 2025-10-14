// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUPPORTLINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUPPORTLINESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSupportLinesResponseBodyRecordLines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeSupportLinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSupportLinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecordLines, recordLines_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSupportLinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordLines, recordLines_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSupportLinesResponseBody() = default ;
    DescribeSupportLinesResponseBody(const DescribeSupportLinesResponseBody &) = default ;
    DescribeSupportLinesResponseBody(DescribeSupportLinesResponseBody &&) = default ;
    DescribeSupportLinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSupportLinesResponseBody() = default ;
    DescribeSupportLinesResponseBody& operator=(const DescribeSupportLinesResponseBody &) = default ;
    DescribeSupportLinesResponseBody& operator=(DescribeSupportLinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordLines_ == nullptr
        && return this->requestId_ == nullptr; };
    // recordLines Field Functions 
    bool hasRecordLines() const { return this->recordLines_ != nullptr;};
    void deleteRecordLines() { this->recordLines_ = nullptr;};
    inline const DescribeSupportLinesResponseBodyRecordLines & recordLines() const { DARABONBA_PTR_GET_CONST(recordLines_, DescribeSupportLinesResponseBodyRecordLines) };
    inline DescribeSupportLinesResponseBodyRecordLines recordLines() { DARABONBA_PTR_GET(recordLines_, DescribeSupportLinesResponseBodyRecordLines) };
    inline DescribeSupportLinesResponseBody& setRecordLines(const DescribeSupportLinesResponseBodyRecordLines & recordLines) { DARABONBA_PTR_SET_VALUE(recordLines_, recordLines) };
    inline DescribeSupportLinesResponseBody& setRecordLines(DescribeSupportLinesResponseBodyRecordLines && recordLines) { DARABONBA_PTR_SET_RVALUE(recordLines_, recordLines) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSupportLinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The Alibaba Cloud DNS lines.
    std::shared_ptr<DescribeSupportLinesResponseBodyRecordLines> recordLines_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
