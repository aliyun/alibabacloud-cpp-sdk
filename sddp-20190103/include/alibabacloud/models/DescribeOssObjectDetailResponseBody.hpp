// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeOssObjectDetailResponseBodyOssObjectDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeOssObjectDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssObjectDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OssObjectDetail, ossObjectDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssObjectDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OssObjectDetail, ossObjectDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeOssObjectDetailResponseBody() = default ;
    DescribeOssObjectDetailResponseBody(const DescribeOssObjectDetailResponseBody &) = default ;
    DescribeOssObjectDetailResponseBody(DescribeOssObjectDetailResponseBody &&) = default ;
    DescribeOssObjectDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssObjectDetailResponseBody() = default ;
    DescribeOssObjectDetailResponseBody& operator=(const DescribeOssObjectDetailResponseBody &) = default ;
    DescribeOssObjectDetailResponseBody& operator=(DescribeOssObjectDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ossObjectDetail_ != nullptr
        && this->requestId_ != nullptr; };
    // ossObjectDetail Field Functions 
    bool hasOssObjectDetail() const { return this->ossObjectDetail_ != nullptr;};
    void deleteOssObjectDetail() { this->ossObjectDetail_ = nullptr;};
    inline const DescribeOssObjectDetailResponseBodyOssObjectDetail & ossObjectDetail() const { DARABONBA_PTR_GET_CONST(ossObjectDetail_, DescribeOssObjectDetailResponseBodyOssObjectDetail) };
    inline DescribeOssObjectDetailResponseBodyOssObjectDetail ossObjectDetail() { DARABONBA_PTR_GET(ossObjectDetail_, DescribeOssObjectDetailResponseBodyOssObjectDetail) };
    inline DescribeOssObjectDetailResponseBody& setOssObjectDetail(const DescribeOssObjectDetailResponseBodyOssObjectDetail & ossObjectDetail) { DARABONBA_PTR_SET_VALUE(ossObjectDetail_, ossObjectDetail) };
    inline DescribeOssObjectDetailResponseBody& setOssObjectDetail(DescribeOssObjectDetailResponseBodyOssObjectDetail && ossObjectDetail) { DARABONBA_PTR_SET_RVALUE(ossObjectDetail_, ossObjectDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOssObjectDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the OSS object.
    std::shared_ptr<DescribeOssObjectDetailResponseBodyOssObjectDetail> ossObjectDetail_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
