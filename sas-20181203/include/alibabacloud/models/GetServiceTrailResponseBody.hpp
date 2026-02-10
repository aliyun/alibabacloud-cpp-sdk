// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICETRAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICETRAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetServiceTrailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceTrailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceTrail, serviceTrail_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceTrailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceTrail, serviceTrail_);
    };
    GetServiceTrailResponseBody() = default ;
    GetServiceTrailResponseBody(const GetServiceTrailResponseBody &) = default ;
    GetServiceTrailResponseBody(GetServiceTrailResponseBody &&) = default ;
    GetServiceTrailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceTrailResponseBody() = default ;
    GetServiceTrailResponseBody& operator=(const GetServiceTrailResponseBody &) = default ;
    GetServiceTrailResponseBody& operator=(GetServiceTrailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServiceTrail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceTrail& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceTrail& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      ServiceTrail() = default ;
      ServiceTrail(const ServiceTrail &) = default ;
      ServiceTrail(ServiceTrail &&) = default ;
      ServiceTrail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceTrail() = default ;
      ServiceTrail& operator=(const ServiceTrail &) = default ;
      ServiceTrail& operator=(ServiceTrail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->config_ == nullptr
        && this->createTime_ == nullptr && this->updateTime_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline ServiceTrail& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ServiceTrail& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline ServiceTrail& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The status of the service trail. Valid values:
      // 
      // *   **on:**
      // *   **off:**
      shared_ptr<string> config_ {};
      // The timestamp generated when the service trail was created. Unit: milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The timestamp generated when the service trail was last updated. Unit: milliseconds.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->serviceTrail_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceTrailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceTrail Field Functions 
    bool hasServiceTrail() const { return this->serviceTrail_ != nullptr;};
    void deleteServiceTrail() { this->serviceTrail_ = nullptr;};
    inline const GetServiceTrailResponseBody::ServiceTrail & getServiceTrail() const { DARABONBA_PTR_GET_CONST(serviceTrail_, GetServiceTrailResponseBody::ServiceTrail) };
    inline GetServiceTrailResponseBody::ServiceTrail getServiceTrail() { DARABONBA_PTR_GET(serviceTrail_, GetServiceTrailResponseBody::ServiceTrail) };
    inline GetServiceTrailResponseBody& setServiceTrail(const GetServiceTrailResponseBody::ServiceTrail & serviceTrail) { DARABONBA_PTR_SET_VALUE(serviceTrail_, serviceTrail) };
    inline GetServiceTrailResponseBody& setServiceTrail(GetServiceTrailResponseBody::ServiceTrail && serviceTrail) { DARABONBA_PTR_SET_RVALUE(serviceTrail_, serviceTrail) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The configurations of the service trail.
    shared_ptr<GetServiceTrailResponseBody::ServiceTrail> serviceTrail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
