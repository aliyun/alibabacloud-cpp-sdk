// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEIPMONITORDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEIPMONITORDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEipMonitorDataResponseBodyEipMonitorDatas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeEipMonitorDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEipMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EipMonitorDatas, eipMonitorDatas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEipMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EipMonitorDatas, eipMonitorDatas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEipMonitorDataResponseBody() = default ;
    DescribeEipMonitorDataResponseBody(const DescribeEipMonitorDataResponseBody &) = default ;
    DescribeEipMonitorDataResponseBody(DescribeEipMonitorDataResponseBody &&) = default ;
    DescribeEipMonitorDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEipMonitorDataResponseBody() = default ;
    DescribeEipMonitorDataResponseBody& operator=(const DescribeEipMonitorDataResponseBody &) = default ;
    DescribeEipMonitorDataResponseBody& operator=(DescribeEipMonitorDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eipMonitorDatas_ != nullptr
        && this->requestId_ != nullptr; };
    // eipMonitorDatas Field Functions 
    bool hasEipMonitorDatas() const { return this->eipMonitorDatas_ != nullptr;};
    void deleteEipMonitorDatas() { this->eipMonitorDatas_ = nullptr;};
    inline const DescribeEipMonitorDataResponseBodyEipMonitorDatas & eipMonitorDatas() const { DARABONBA_PTR_GET_CONST(eipMonitorDatas_, DescribeEipMonitorDataResponseBodyEipMonitorDatas) };
    inline DescribeEipMonitorDataResponseBodyEipMonitorDatas eipMonitorDatas() { DARABONBA_PTR_GET(eipMonitorDatas_, DescribeEipMonitorDataResponseBodyEipMonitorDatas) };
    inline DescribeEipMonitorDataResponseBody& setEipMonitorDatas(const DescribeEipMonitorDataResponseBodyEipMonitorDatas & eipMonitorDatas) { DARABONBA_PTR_SET_VALUE(eipMonitorDatas_, eipMonitorDatas) };
    inline DescribeEipMonitorDataResponseBody& setEipMonitorDatas(DescribeEipMonitorDataResponseBodyEipMonitorDatas && eipMonitorDatas) { DARABONBA_PTR_SET_RVALUE(eipMonitorDatas_, eipMonitorDatas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEipMonitorDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The detailed information about the monitoring data of the EIP.
    std::shared_ptr<DescribeEipMonitorDataResponseBodyEipMonitorDatas> eipMonitorDatas_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
