// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPBPSPEAKDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPBPSPEAKDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTraffics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeUpBpsPeakDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpBpsPeakDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DescribeUpPeakTraffics, describeUpPeakTraffics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpBpsPeakDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DescribeUpPeakTraffics, describeUpPeakTraffics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUpBpsPeakDataResponseBody() = default ;
    DescribeUpBpsPeakDataResponseBody(const DescribeUpBpsPeakDataResponseBody &) = default ;
    DescribeUpBpsPeakDataResponseBody(DescribeUpBpsPeakDataResponseBody &&) = default ;
    DescribeUpBpsPeakDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpBpsPeakDataResponseBody() = default ;
    DescribeUpBpsPeakDataResponseBody& operator=(const DescribeUpBpsPeakDataResponseBody &) = default ;
    DescribeUpBpsPeakDataResponseBody& operator=(DescribeUpBpsPeakDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->describeUpPeakTraffics_ == nullptr
        && return this->requestId_ == nullptr; };
    // describeUpPeakTraffics Field Functions 
    bool hasDescribeUpPeakTraffics() const { return this->describeUpPeakTraffics_ != nullptr;};
    void deleteDescribeUpPeakTraffics() { this->describeUpPeakTraffics_ = nullptr;};
    inline const DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTraffics & describeUpPeakTraffics() const { DARABONBA_PTR_GET_CONST(describeUpPeakTraffics_, DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTraffics) };
    inline DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTraffics describeUpPeakTraffics() { DARABONBA_PTR_GET(describeUpPeakTraffics_, DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTraffics) };
    inline DescribeUpBpsPeakDataResponseBody& setDescribeUpPeakTraffics(const DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTraffics & describeUpPeakTraffics) { DARABONBA_PTR_SET_VALUE(describeUpPeakTraffics_, describeUpPeakTraffics) };
    inline DescribeUpBpsPeakDataResponseBody& setDescribeUpPeakTraffics(DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTraffics && describeUpPeakTraffics) { DARABONBA_PTR_SET_RVALUE(describeUpPeakTraffics_, describeUpPeakTraffics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUpBpsPeakDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about peak inbound bandwidth on each day.
    std::shared_ptr<DescribeUpBpsPeakDataResponseBodyDescribeUpPeakTraffics> describeUpPeakTraffics_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
