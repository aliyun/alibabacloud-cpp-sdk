// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSINSTANCEBASEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ONSINSTANCEBASEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsInstanceBaseInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsInstanceBaseInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceBaseInfo, instanceBaseInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OnsInstanceBaseInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceBaseInfo, instanceBaseInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OnsInstanceBaseInfoResponseBody() = default ;
    OnsInstanceBaseInfoResponseBody(const OnsInstanceBaseInfoResponseBody &) = default ;
    OnsInstanceBaseInfoResponseBody(OnsInstanceBaseInfoResponseBody &&) = default ;
    OnsInstanceBaseInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsInstanceBaseInfoResponseBody() = default ;
    OnsInstanceBaseInfoResponseBody& operator=(const OnsInstanceBaseInfoResponseBody &) = default ;
    OnsInstanceBaseInfoResponseBody& operator=(OnsInstanceBaseInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceBaseInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceBaseInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
        DARABONBA_PTR_TO_JSON(IndependentNaming, independentNaming_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(MaxTps, maxTps_);
        DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(SupportClassic, supportClassic_);
        DARABONBA_PTR_TO_JSON(TopicCapacity, topicCapacity_);
        DARABONBA_PTR_TO_JSON(spInstanceId, spInstanceId_);
        DARABONBA_PTR_TO_JSON(spInstanceType, spInstanceType_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceBaseInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
        DARABONBA_PTR_FROM_JSON(IndependentNaming, independentNaming_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(MaxTps, maxTps_);
        DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(SupportClassic, supportClassic_);
        DARABONBA_PTR_FROM_JSON(TopicCapacity, topicCapacity_);
        DARABONBA_PTR_FROM_JSON(spInstanceId, spInstanceId_);
        DARABONBA_PTR_FROM_JSON(spInstanceType, spInstanceType_);
      };
      InstanceBaseInfo() = default ;
      InstanceBaseInfo(const InstanceBaseInfo &) = default ;
      InstanceBaseInfo(InstanceBaseInfo &&) = default ;
      InstanceBaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceBaseInfo() = default ;
      InstanceBaseInfo& operator=(const InstanceBaseInfo &) = default ;
      InstanceBaseInfo& operator=(InstanceBaseInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Endpoints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
          DARABONBA_PTR_TO_JSON(HttpInternalEndpoint, httpInternalEndpoint_);
          DARABONBA_PTR_TO_JSON(HttpInternetEndpoint, httpInternetEndpoint_);
          DARABONBA_PTR_TO_JSON(HttpInternetSecureEndpoint, httpInternetSecureEndpoint_);
          DARABONBA_PTR_TO_JSON(TcpEndpoint, tcpEndpoint_);
          DARABONBA_PTR_TO_JSON(TcpInternetEndpoint, tcpInternetEndpoint_);
        };
        friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
          DARABONBA_PTR_FROM_JSON(HttpInternalEndpoint, httpInternalEndpoint_);
          DARABONBA_PTR_FROM_JSON(HttpInternetEndpoint, httpInternetEndpoint_);
          DARABONBA_PTR_FROM_JSON(HttpInternetSecureEndpoint, httpInternetSecureEndpoint_);
          DARABONBA_PTR_FROM_JSON(TcpEndpoint, tcpEndpoint_);
          DARABONBA_PTR_FROM_JSON(TcpInternetEndpoint, tcpInternetEndpoint_);
        };
        Endpoints() = default ;
        Endpoints(const Endpoints &) = default ;
        Endpoints(Endpoints &&) = default ;
        Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Endpoints() = default ;
        Endpoints& operator=(const Endpoints &) = default ;
        Endpoints& operator=(Endpoints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->httpInternalEndpoint_ == nullptr
        && this->httpInternetEndpoint_ == nullptr && this->httpInternetSecureEndpoint_ == nullptr && this->tcpEndpoint_ == nullptr && this->tcpInternetEndpoint_ == nullptr; };
        // httpInternalEndpoint Field Functions 
        bool hasHttpInternalEndpoint() const { return this->httpInternalEndpoint_ != nullptr;};
        void deleteHttpInternalEndpoint() { this->httpInternalEndpoint_ = nullptr;};
        inline string getHttpInternalEndpoint() const { DARABONBA_PTR_GET_DEFAULT(httpInternalEndpoint_, "") };
        inline Endpoints& setHttpInternalEndpoint(string httpInternalEndpoint) { DARABONBA_PTR_SET_VALUE(httpInternalEndpoint_, httpInternalEndpoint) };


        // httpInternetEndpoint Field Functions 
        bool hasHttpInternetEndpoint() const { return this->httpInternetEndpoint_ != nullptr;};
        void deleteHttpInternetEndpoint() { this->httpInternetEndpoint_ = nullptr;};
        inline string getHttpInternetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(httpInternetEndpoint_, "") };
        inline Endpoints& setHttpInternetEndpoint(string httpInternetEndpoint) { DARABONBA_PTR_SET_VALUE(httpInternetEndpoint_, httpInternetEndpoint) };


        // httpInternetSecureEndpoint Field Functions 
        bool hasHttpInternetSecureEndpoint() const { return this->httpInternetSecureEndpoint_ != nullptr;};
        void deleteHttpInternetSecureEndpoint() { this->httpInternetSecureEndpoint_ = nullptr;};
        inline string getHttpInternetSecureEndpoint() const { DARABONBA_PTR_GET_DEFAULT(httpInternetSecureEndpoint_, "") };
        inline Endpoints& setHttpInternetSecureEndpoint(string httpInternetSecureEndpoint) { DARABONBA_PTR_SET_VALUE(httpInternetSecureEndpoint_, httpInternetSecureEndpoint) };


        // tcpEndpoint Field Functions 
        bool hasTcpEndpoint() const { return this->tcpEndpoint_ != nullptr;};
        void deleteTcpEndpoint() { this->tcpEndpoint_ = nullptr;};
        inline string getTcpEndpoint() const { DARABONBA_PTR_GET_DEFAULT(tcpEndpoint_, "") };
        inline Endpoints& setTcpEndpoint(string tcpEndpoint) { DARABONBA_PTR_SET_VALUE(tcpEndpoint_, tcpEndpoint) };


        // tcpInternetEndpoint Field Functions 
        bool hasTcpInternetEndpoint() const { return this->tcpInternetEndpoint_ != nullptr;};
        void deleteTcpInternetEndpoint() { this->tcpInternetEndpoint_ = nullptr;};
        inline string getTcpInternetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(tcpInternetEndpoint_, "") };
        inline Endpoints& setTcpInternetEndpoint(string tcpInternetEndpoint) { DARABONBA_PTR_SET_VALUE(tcpInternetEndpoint_, tcpInternetEndpoint) };


      protected:
        // The private HTTP endpoint of the instance.
        shared_ptr<string> httpInternalEndpoint_ {};
        // The public HTTP endpoint of the instance.
        shared_ptr<string> httpInternetEndpoint_ {};
        // The public HTTPS endpoint of the instance.
        shared_ptr<string> httpInternetSecureEndpoint_ {};
        // The private TCP endpoint of the instance.
        shared_ptr<string> tcpEndpoint_ {};
        // The public TCP endpoint of the instance.
        // 
        // *   Only instances that are deployed in the China (Chengdu), China (Qingdao), or China (Shenzhen) region can be accessed by using public TCP endpoints.
        // 
        // *   Before you use a public TCP endpoint, make sure that your client SDK meets the following requirements:
        // 
        //     *   TCP client SDK for Java: V2.0.0.Final or later For more information, see [Release notes for the SDK for Java](https://help.aliyun.com/document_detail/325569.html).
        //     *   TCP client SDK for C++: V3.0.0 or later For more information, see [Release notes for the SDK for C++](https://help.aliyun.com/document_detail/325570.html).
        // 
        // *   You are charged for Internet traffic when you use a public TCP endpoint. For more information, see [Internet traffic fee](https://help.aliyun.com/document_detail/325571.html).
        shared_ptr<string> tcpInternetEndpoint_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->endpoints_ == nullptr && this->independentNaming_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceStatus_ == nullptr
        && this->instanceType_ == nullptr && this->maxTps_ == nullptr && this->releaseTime_ == nullptr && this->remark_ == nullptr && this->supportClassic_ == nullptr
        && this->topicCapacity_ == nullptr && this->spInstanceId_ == nullptr && this->spInstanceType_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline InstanceBaseInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // endpoints Field Functions 
      bool hasEndpoints() const { return this->endpoints_ != nullptr;};
      void deleteEndpoints() { this->endpoints_ = nullptr;};
      inline const InstanceBaseInfo::Endpoints & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, InstanceBaseInfo::Endpoints) };
      inline InstanceBaseInfo::Endpoints getEndpoints() { DARABONBA_PTR_GET(endpoints_, InstanceBaseInfo::Endpoints) };
      inline InstanceBaseInfo& setEndpoints(const InstanceBaseInfo::Endpoints & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
      inline InstanceBaseInfo& setEndpoints(InstanceBaseInfo::Endpoints && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


      // independentNaming Field Functions 
      bool hasIndependentNaming() const { return this->independentNaming_ != nullptr;};
      void deleteIndependentNaming() { this->independentNaming_ = nullptr;};
      inline bool getIndependentNaming() const { DARABONBA_PTR_GET_DEFAULT(independentNaming_, false) };
      inline InstanceBaseInfo& setIndependentNaming(bool independentNaming) { DARABONBA_PTR_SET_VALUE(independentNaming_, independentNaming) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceBaseInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline InstanceBaseInfo& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // instanceStatus Field Functions 
      bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
      void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
      inline int32_t getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, 0) };
      inline InstanceBaseInfo& setInstanceStatus(int32_t instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline int32_t getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, 0) };
      inline InstanceBaseInfo& setInstanceType(int32_t instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // maxTps Field Functions 
      bool hasMaxTps() const { return this->maxTps_ != nullptr;};
      void deleteMaxTps() { this->maxTps_ = nullptr;};
      inline int64_t getMaxTps() const { DARABONBA_PTR_GET_DEFAULT(maxTps_, 0L) };
      inline InstanceBaseInfo& setMaxTps(int64_t maxTps) { DARABONBA_PTR_SET_VALUE(maxTps_, maxTps) };


      // releaseTime Field Functions 
      bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
      void deleteReleaseTime() { this->releaseTime_ = nullptr;};
      inline int64_t getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, 0L) };
      inline InstanceBaseInfo& setReleaseTime(int64_t releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline InstanceBaseInfo& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // supportClassic Field Functions 
      bool hasSupportClassic() const { return this->supportClassic_ != nullptr;};
      void deleteSupportClassic() { this->supportClassic_ = nullptr;};
      inline int32_t getSupportClassic() const { DARABONBA_PTR_GET_DEFAULT(supportClassic_, 0) };
      inline InstanceBaseInfo& setSupportClassic(int32_t supportClassic) { DARABONBA_PTR_SET_VALUE(supportClassic_, supportClassic) };


      // topicCapacity Field Functions 
      bool hasTopicCapacity() const { return this->topicCapacity_ != nullptr;};
      void deleteTopicCapacity() { this->topicCapacity_ = nullptr;};
      inline int32_t getTopicCapacity() const { DARABONBA_PTR_GET_DEFAULT(topicCapacity_, 0) };
      inline InstanceBaseInfo& setTopicCapacity(int32_t topicCapacity) { DARABONBA_PTR_SET_VALUE(topicCapacity_, topicCapacity) };


      // spInstanceId Field Functions 
      bool hasSpInstanceId() const { return this->spInstanceId_ != nullptr;};
      void deleteSpInstanceId() { this->spInstanceId_ = nullptr;};
      inline string getSpInstanceId() const { DARABONBA_PTR_GET_DEFAULT(spInstanceId_, "") };
      inline InstanceBaseInfo& setSpInstanceId(string spInstanceId) { DARABONBA_PTR_SET_VALUE(spInstanceId_, spInstanceId) };


      // spInstanceType Field Functions 
      bool hasSpInstanceType() const { return this->spInstanceType_ != nullptr;};
      void deleteSpInstanceType() { this->spInstanceType_ = nullptr;};
      inline int32_t getSpInstanceType() const { DARABONBA_PTR_GET_DEFAULT(spInstanceType_, 0) };
      inline InstanceBaseInfo& setSpInstanceType(int32_t spInstanceType) { DARABONBA_PTR_SET_VALUE(spInstanceType_, spInstanceType) };


    protected:
      // The time when the instance was created. The value of this parameter is a UNIX timestamp in milliseconds.
      shared_ptr<string> createTime_ {};
      // The endpoints used to access ApsaraMQ for RocketMQ over different protocols.
      shared_ptr<InstanceBaseInfo::Endpoints> endpoints_ {};
      // Indicates whether the instance uses a namespace. Valid values:
      // 
      // *   **true**: The instance uses a separate namespace. The name of each resource must be unique in the instance. The names of resources in different instances can be the same.
      // *   **false**: The instance does not use a separate namespace. The name of each resource must be globally unique within the instance and across all instances.
      shared_ptr<bool> independentNaming_ {};
      // The ID of the instance
      shared_ptr<string> instanceId_ {};
      // The name of the instance.
      // 
      // The name must be 3 to 64 characters in length and can contain letters, digits, hyphens (-), and underscores (_).
      shared_ptr<string> instanceName_ {};
      // The status of the instance. Valid values:
      // 
      // *   **0**: The instance is being deployed. This value is valid only for Enterprise Platinum Edition instances.
      // *   **2**: The instance has overdue payments. This value is valid only for Standard Edition instances.
      // *   **5**: The instance is running. This value is valid for Standard Edition instances and Enterprise Platinum Edition instances.
      // *   **7**: The instance is being upgraded and is running. This value is valid only for Enterprise Platinum Edition instances.
      shared_ptr<int32_t> instanceStatus_ {};
      // The instance type. Valid values:
      // 
      // *   **1**: Standard Edition instances that use the pay-as-you-go billing method.
      // *   **2**: Enterprise Platinum Edition instances that use the subscription billing method.
      // 
      // For information about the editions and specifications of ApsaraMQ for RocketMQ instances, see [Instance editions](https://help.aliyun.com/document_detail/185261.html).
      shared_ptr<int32_t> instanceType_ {};
      // The maximum messaging transactions per second (TPS). Valid values: 5000, 10000, 20000, 50000, 100000, 200000, 300000, 500000, 800000, and 1000000.
      // 
      // You can view the details about messaging TPS on the buy page of ApsaraMQ for RocketMQ.
      // 
      // > This parameter is available only to the ApsaraMQ for RocketMQ Enterprise Platinum Edition instances.
      shared_ptr<int64_t> maxTps_ {};
      // The time when the Enterprise Platinum Edition instance expires.
      shared_ptr<int64_t> releaseTime_ {};
      // The description of the instance.
      shared_ptr<string> remark_ {};
      shared_ptr<int32_t> supportClassic_ {};
      // The maximum number of topics that can be created on the instance. Valid values: 25, 50, 100, 300, and 500.
      // 
      // > This parameter is available only to the ApsaraMQ for RocketMQ Enterprise Platinum Edition instances.
      shared_ptr<int32_t> topicCapacity_ {};
      // The commodity ID of the instance.
      shared_ptr<string> spInstanceId_ {};
      // The commodity type of the instance.
      shared_ptr<int32_t> spInstanceType_ {};
    };

    virtual bool empty() const override { return this->instanceBaseInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceBaseInfo Field Functions 
    bool hasInstanceBaseInfo() const { return this->instanceBaseInfo_ != nullptr;};
    void deleteInstanceBaseInfo() { this->instanceBaseInfo_ = nullptr;};
    inline const OnsInstanceBaseInfoResponseBody::InstanceBaseInfo & getInstanceBaseInfo() const { DARABONBA_PTR_GET_CONST(instanceBaseInfo_, OnsInstanceBaseInfoResponseBody::InstanceBaseInfo) };
    inline OnsInstanceBaseInfoResponseBody::InstanceBaseInfo getInstanceBaseInfo() { DARABONBA_PTR_GET(instanceBaseInfo_, OnsInstanceBaseInfoResponseBody::InstanceBaseInfo) };
    inline OnsInstanceBaseInfoResponseBody& setInstanceBaseInfo(const OnsInstanceBaseInfoResponseBody::InstanceBaseInfo & instanceBaseInfo) { DARABONBA_PTR_SET_VALUE(instanceBaseInfo_, instanceBaseInfo) };
    inline OnsInstanceBaseInfoResponseBody& setInstanceBaseInfo(OnsInstanceBaseInfoResponseBody::InstanceBaseInfo && instanceBaseInfo) { DARABONBA_PTR_SET_RVALUE(instanceBaseInfo_, instanceBaseInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OnsInstanceBaseInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the instance.
    shared_ptr<OnsInstanceBaseInfoResponseBody::InstanceBaseInfo> instanceBaseInfo_ {};
    // The ID of the request. This parameter is a common parameter. Each request has a unique ID. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
