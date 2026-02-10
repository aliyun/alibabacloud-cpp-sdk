// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHONEYPOTSUSPSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHONEYPOTSUSPSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeHoneyPotSuspStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHoneyPotSuspStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuspHoneyPotStatisticsResponse, suspHoneyPotStatisticsResponse_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHoneyPotSuspStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuspHoneyPotStatisticsResponse, suspHoneyPotStatisticsResponse_);
    };
    DescribeHoneyPotSuspStatisticsResponseBody() = default ;
    DescribeHoneyPotSuspStatisticsResponseBody(const DescribeHoneyPotSuspStatisticsResponseBody &) = default ;
    DescribeHoneyPotSuspStatisticsResponseBody(DescribeHoneyPotSuspStatisticsResponseBody &&) = default ;
    DescribeHoneyPotSuspStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHoneyPotSuspStatisticsResponseBody() = default ;
    DescribeHoneyPotSuspStatisticsResponseBody& operator=(const DescribeHoneyPotSuspStatisticsResponseBody &) = default ;
    DescribeHoneyPotSuspStatisticsResponseBody& operator=(DescribeHoneyPotSuspStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SuspHoneyPotStatisticsResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SuspHoneyPotStatisticsResponse& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
      };
      friend void from_json(const Darabonba::Json& j, SuspHoneyPotStatisticsResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
      };
      SuspHoneyPotStatisticsResponse() = default ;
      SuspHoneyPotStatisticsResponse(const SuspHoneyPotStatisticsResponse &) = default ;
      SuspHoneyPotStatisticsResponse(SuspHoneyPotStatisticsResponse &&) = default ;
      SuspHoneyPotStatisticsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SuspHoneyPotStatisticsResponse() = default ;
      SuspHoneyPotStatisticsResponse& operator=(const SuspHoneyPotStatisticsResponse &) = default ;
      SuspHoneyPotStatisticsResponse& operator=(SuspHoneyPotStatisticsResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->type_ == nullptr && this->vpcId_ == nullptr && this->vpcName_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline SuspHoneyPotStatisticsResponse& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline SuspHoneyPotStatisticsResponse& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline SuspHoneyPotStatisticsResponse& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline SuspHoneyPotStatisticsResponse& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline SuspHoneyPotStatisticsResponse& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcName Field Functions 
      bool hasVpcName() const { return this->vpcName_ != nullptr;};
      void deleteVpcName() { this->vpcName_ = nullptr;};
      inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
      inline SuspHoneyPotStatisticsResponse& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


    protected:
      // The total number of alerts that are generated for the asset.
      shared_ptr<int32_t> count_ {};
      // The ID of the server.
      // 
      // > This parameter is returned only when **StatisticsKeyType** is set to **uuid**.
      shared_ptr<string> instanceId_ {};
      // The name of the server.
      // 
      // > This parameter is returned only when **StatisticsKeyType** is set to **uuid**.
      shared_ptr<string> instanceName_ {};
      // The type of the asset. Valid values:
      // 
      // *   **vpcInstanceId**: VPC
      // *   **uuid**: server
      shared_ptr<string> type_ {};
      // The ID of the VPC.
      // 
      // > This parameter is returned only when **StatisticsKeyType** is set to **vpcInstanceId**.
      shared_ptr<string> vpcId_ {};
      // The name of the VPC.
      // 
      // > This parameter is returned only when **StatisticsKeyType** is set to **vpcInstanceId**.
      shared_ptr<string> vpcName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->suspHoneyPotStatisticsResponse_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHoneyPotSuspStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // suspHoneyPotStatisticsResponse Field Functions 
    bool hasSuspHoneyPotStatisticsResponse() const { return this->suspHoneyPotStatisticsResponse_ != nullptr;};
    void deleteSuspHoneyPotStatisticsResponse() { this->suspHoneyPotStatisticsResponse_ = nullptr;};
    inline const vector<DescribeHoneyPotSuspStatisticsResponseBody::SuspHoneyPotStatisticsResponse> & getSuspHoneyPotStatisticsResponse() const { DARABONBA_PTR_GET_CONST(suspHoneyPotStatisticsResponse_, vector<DescribeHoneyPotSuspStatisticsResponseBody::SuspHoneyPotStatisticsResponse>) };
    inline vector<DescribeHoneyPotSuspStatisticsResponseBody::SuspHoneyPotStatisticsResponse> getSuspHoneyPotStatisticsResponse() { DARABONBA_PTR_GET(suspHoneyPotStatisticsResponse_, vector<DescribeHoneyPotSuspStatisticsResponseBody::SuspHoneyPotStatisticsResponse>) };
    inline DescribeHoneyPotSuspStatisticsResponseBody& setSuspHoneyPotStatisticsResponse(const vector<DescribeHoneyPotSuspStatisticsResponseBody::SuspHoneyPotStatisticsResponse> & suspHoneyPotStatisticsResponse) { DARABONBA_PTR_SET_VALUE(suspHoneyPotStatisticsResponse_, suspHoneyPotStatisticsResponse) };
    inline DescribeHoneyPotSuspStatisticsResponseBody& setSuspHoneyPotStatisticsResponse(vector<DescribeHoneyPotSuspStatisticsResponseBody::SuspHoneyPotStatisticsResponse> && suspHoneyPotStatisticsResponse) { DARABONBA_PTR_SET_RVALUE(suspHoneyPotStatisticsResponse_, suspHoneyPotStatisticsResponse) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // An array that consists of the top 5 VPCs or assets for which alerts are most frequently generated.
    shared_ptr<vector<DescribeHoneyPotSuspStatisticsResponseBody::SuspHoneyPotStatisticsResponse>> suspHoneyPotStatisticsResponse_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
