// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskInstanceCount, riskInstanceCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskInstanceCount, riskInstanceCount_);
    };
    DescribeImageStatisticsResponseBody() = default ;
    DescribeImageStatisticsResponseBody(const DescribeImageStatisticsResponseBody &) = default ;
    DescribeImageStatisticsResponseBody(DescribeImageStatisticsResponseBody &&) = default ;
    DescribeImageStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageStatisticsResponseBody() = default ;
    DescribeImageStatisticsResponseBody& operator=(const DescribeImageStatisticsResponseBody &) = default ;
    DescribeImageStatisticsResponseBody& operator=(DescribeImageStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceCount_ == nullptr
        && this->requestId_ == nullptr && this->riskInstanceCount_ == nullptr; };
    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline DescribeImageStatisticsResponseBody& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskInstanceCount Field Functions 
    bool hasRiskInstanceCount() const { return this->riskInstanceCount_ != nullptr;};
    void deleteRiskInstanceCount() { this->riskInstanceCount_ = nullptr;};
    inline int32_t getRiskInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(riskInstanceCount_, 0) };
    inline DescribeImageStatisticsResponseBody& setRiskInstanceCount(int32_t riskInstanceCount) { DARABONBA_PTR_SET_VALUE(riskInstanceCount_, riskInstanceCount) };


  protected:
    // The number of container images in your assets. Only Container Registry Enterprise Edition instances are counted.
    shared_ptr<int32_t> instanceCount_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The number of container images that have security risks. Only Container Registry Enterprise Edition instances are counted.
    shared_ptr<int32_t> riskInstanceCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
