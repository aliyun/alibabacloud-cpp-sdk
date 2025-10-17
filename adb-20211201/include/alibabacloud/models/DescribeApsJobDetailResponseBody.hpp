// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSJOBDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSJOBDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApsJobDetailResponseBodyAPSJobDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsJobDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsJobDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(APSJobDetail, APSJobDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsJobDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(APSJobDetail, APSJobDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApsJobDetailResponseBody() = default ;
    DescribeApsJobDetailResponseBody(const DescribeApsJobDetailResponseBody &) = default ;
    DescribeApsJobDetailResponseBody(DescribeApsJobDetailResponseBody &&) = default ;
    DescribeApsJobDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsJobDetailResponseBody() = default ;
    DescribeApsJobDetailResponseBody& operator=(const DescribeApsJobDetailResponseBody &) = default ;
    DescribeApsJobDetailResponseBody& operator=(DescribeApsJobDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->APSJobDetail_ == nullptr
        && return this->requestId_ == nullptr; };
    // APSJobDetail Field Functions 
    bool hasAPSJobDetail() const { return this->APSJobDetail_ != nullptr;};
    void deleteAPSJobDetail() { this->APSJobDetail_ = nullptr;};
    inline const DescribeApsJobDetailResponseBodyAPSJobDetail & APSJobDetail() const { DARABONBA_PTR_GET_CONST(APSJobDetail_, DescribeApsJobDetailResponseBodyAPSJobDetail) };
    inline DescribeApsJobDetailResponseBodyAPSJobDetail APSJobDetail() { DARABONBA_PTR_GET(APSJobDetail_, DescribeApsJobDetailResponseBodyAPSJobDetail) };
    inline DescribeApsJobDetailResponseBody& setAPSJobDetail(const DescribeApsJobDetailResponseBodyAPSJobDetail & APSJobDetail) { DARABONBA_PTR_SET_VALUE(APSJobDetail_, APSJobDetail) };
    inline DescribeApsJobDetailResponseBody& setAPSJobDetail(DescribeApsJobDetailResponseBodyAPSJobDetail && APSJobDetail) { DARABONBA_PTR_SET_RVALUE(APSJobDetail_, APSJobDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApsJobDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried job.
    std::shared_ptr<DescribeApsJobDetailResponseBodyAPSJobDetail> APSJobDetail_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
