// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENEWPROJECTEIPMONITORDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENEWPROJECTEIPMONITORDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNewProjectEipMonitorDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNewProjectEipMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EipMonitorDatas, eipMonitorDatas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNewProjectEipMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EipMonitorDatas, eipMonitorDatas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNewProjectEipMonitorDataResponseBody() = default ;
    DescribeNewProjectEipMonitorDataResponseBody(const DescribeNewProjectEipMonitorDataResponseBody &) = default ;
    DescribeNewProjectEipMonitorDataResponseBody(DescribeNewProjectEipMonitorDataResponseBody &&) = default ;
    DescribeNewProjectEipMonitorDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNewProjectEipMonitorDataResponseBody() = default ;
    DescribeNewProjectEipMonitorDataResponseBody& operator=(const DescribeNewProjectEipMonitorDataResponseBody &) = default ;
    DescribeNewProjectEipMonitorDataResponseBody& operator=(DescribeNewProjectEipMonitorDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eipMonitorDatas_ == nullptr
        && return this->requestId_ == nullptr; };
    // eipMonitorDatas Field Functions 
    bool hasEipMonitorDatas() const { return this->eipMonitorDatas_ != nullptr;};
    void deleteEipMonitorDatas() { this->eipMonitorDatas_ = nullptr;};
    inline const DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatas & eipMonitorDatas() const { DARABONBA_PTR_GET_CONST(eipMonitorDatas_, DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatas) };
    inline DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatas eipMonitorDatas() { DARABONBA_PTR_GET(eipMonitorDatas_, DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatas) };
    inline DescribeNewProjectEipMonitorDataResponseBody& setEipMonitorDatas(const DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatas & eipMonitorDatas) { DARABONBA_PTR_SET_VALUE(eipMonitorDatas_, eipMonitorDatas) };
    inline DescribeNewProjectEipMonitorDataResponseBody& setEipMonitorDatas(DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatas && eipMonitorDatas) { DARABONBA_PTR_SET_RVALUE(eipMonitorDatas_, eipMonitorDatas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNewProjectEipMonitorDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatas> eipMonitorDatas_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
