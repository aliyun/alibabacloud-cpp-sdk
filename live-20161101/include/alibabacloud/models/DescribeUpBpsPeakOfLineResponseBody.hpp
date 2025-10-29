// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPBPSPEAKOFLINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPBPSPEAKOFLINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeUpBpsPeakOfLineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpBpsPeakOfLineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DescribeUpBpsPeakOfLines, describeUpBpsPeakOfLines_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpBpsPeakOfLineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DescribeUpBpsPeakOfLines, describeUpBpsPeakOfLines_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUpBpsPeakOfLineResponseBody() = default ;
    DescribeUpBpsPeakOfLineResponseBody(const DescribeUpBpsPeakOfLineResponseBody &) = default ;
    DescribeUpBpsPeakOfLineResponseBody(DescribeUpBpsPeakOfLineResponseBody &&) = default ;
    DescribeUpBpsPeakOfLineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpBpsPeakOfLineResponseBody() = default ;
    DescribeUpBpsPeakOfLineResponseBody& operator=(const DescribeUpBpsPeakOfLineResponseBody &) = default ;
    DescribeUpBpsPeakOfLineResponseBody& operator=(DescribeUpBpsPeakOfLineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->describeUpBpsPeakOfLines_ == nullptr
        && return this->requestId_ == nullptr; };
    // describeUpBpsPeakOfLines Field Functions 
    bool hasDescribeUpBpsPeakOfLines() const { return this->describeUpBpsPeakOfLines_ != nullptr;};
    void deleteDescribeUpBpsPeakOfLines() { this->describeUpBpsPeakOfLines_ = nullptr;};
    inline const DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLines & describeUpBpsPeakOfLines() const { DARABONBA_PTR_GET_CONST(describeUpBpsPeakOfLines_, DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLines) };
    inline DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLines describeUpBpsPeakOfLines() { DARABONBA_PTR_GET(describeUpBpsPeakOfLines_, DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLines) };
    inline DescribeUpBpsPeakOfLineResponseBody& setDescribeUpBpsPeakOfLines(const DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLines & describeUpBpsPeakOfLines) { DARABONBA_PTR_SET_VALUE(describeUpBpsPeakOfLines_, describeUpBpsPeakOfLines) };
    inline DescribeUpBpsPeakOfLineResponseBody& setDescribeUpBpsPeakOfLines(DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLines && describeUpBpsPeakOfLines) { DARABONBA_PTR_SET_RVALUE(describeUpBpsPeakOfLines_, describeUpBpsPeakOfLines) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUpBpsPeakOfLineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about peak inbound bandwidth of the leased line on each day.
    std::shared_ptr<DescribeUpBpsPeakOfLineResponseBodyDescribeUpBpsPeakOfLines> describeUpBpsPeakOfLines_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
