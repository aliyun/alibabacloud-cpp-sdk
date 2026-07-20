// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERSIONCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERSIONCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class DescribeVersionConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVersionConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SdkRequest, sdkRequest_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVersionConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SdkRequest, sdkRequest_);
    };
    DescribeVersionConfigRequest() = default ;
    DescribeVersionConfigRequest(const DescribeVersionConfigRequest &) = default ;
    DescribeVersionConfigRequest(DescribeVersionConfigRequest &&) = default ;
    DescribeVersionConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVersionConfigRequest() = default ;
    DescribeVersionConfigRequest& operator=(const DescribeVersionConfigRequest &) = default ;
    DescribeVersionConfigRequest& operator=(DescribeVersionConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SdkRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SdkRequest& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
        DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      };
      friend void from_json(const Darabonba::Json& j, SdkRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
        DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      };
      SdkRequest() = default ;
      SdkRequest(const SdkRequest &) = default ;
      SdkRequest(SdkRequest &&) = default ;
      SdkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SdkRequest() = default ;
      SdkRequest& operator=(const SdkRequest &) = default ;
      SdkRequest& operator=(SdkRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resourceDirectoryAccountId_ == nullptr
        && this->sourceIp_ == nullptr; };
      // resourceDirectoryAccountId Field Functions 
      bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
      void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
      inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
      inline SdkRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


      // sourceIp Field Functions 
      bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
      void deleteSourceIp() { this->sourceIp_ = nullptr;};
      inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
      inline SdkRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    protected:
      shared_ptr<int64_t> resourceDirectoryAccountId_ {};
      shared_ptr<string> sourceIp_ {};
    };

    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->sdkRequest_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeVersionConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sdkRequest Field Functions 
    bool hasSdkRequest() const { return this->sdkRequest_ != nullptr;};
    void deleteSdkRequest() { this->sdkRequest_ = nullptr;};
    inline const DescribeVersionConfigRequest::SdkRequest & getSdkRequest() const { DARABONBA_PTR_GET_CONST(sdkRequest_, DescribeVersionConfigRequest::SdkRequest) };
    inline DescribeVersionConfigRequest::SdkRequest getSdkRequest() { DARABONBA_PTR_GET(sdkRequest_, DescribeVersionConfigRequest::SdkRequest) };
    inline DescribeVersionConfigRequest& setSdkRequest(const DescribeVersionConfigRequest::SdkRequest & sdkRequest) { DARABONBA_PTR_SET_VALUE(sdkRequest_, sdkRequest) };
    inline DescribeVersionConfigRequest& setSdkRequest(DescribeVersionConfigRequest::SdkRequest && sdkRequest) { DARABONBA_PTR_SET_RVALUE(sdkRequest_, sdkRequest) };


  protected:
    shared_ptr<string> regionId_ {};
    shared_ptr<DescribeVersionConfigRequest::SdkRequest> sdkRequest_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
