// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LAUNCHSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LAUNCHSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class LaunchServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LaunchServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceLaunchResultType, serviceLaunchResultType_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, LaunchServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceLaunchResultType, serviceLaunchResultType_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    LaunchServiceResponseBody() = default ;
    LaunchServiceResponseBody(const LaunchServiceResponseBody &) = default ;
    LaunchServiceResponseBody(LaunchServiceResponseBody &&) = default ;
    LaunchServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LaunchServiceResponseBody() = default ;
    LaunchServiceResponseBody& operator=(const LaunchServiceResponseBody &) = default ;
    LaunchServiceResponseBody& operator=(LaunchServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->serviceLaunchResultType_ != nullptr && this->version_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LaunchServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceLaunchResultType Field Functions 
    bool hasServiceLaunchResultType() const { return this->serviceLaunchResultType_ != nullptr;};
    void deleteServiceLaunchResultType() { this->serviceLaunchResultType_ = nullptr;};
    inline string serviceLaunchResultType() const { DARABONBA_PTR_GET_DEFAULT(serviceLaunchResultType_, "") };
    inline LaunchServiceResponseBody& setServiceLaunchResultType(string serviceLaunchResultType) { DARABONBA_PTR_SET_VALUE(serviceLaunchResultType_, serviceLaunchResultType) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline LaunchServiceResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The mode of the service online. Valid Type
    // 
    // - PublishNewVersion: Launch new version
    // - PublishOfflineVersion:  The offline version is online again.
    // - UpdateLatestVersion: Update the latest version online
    std::shared_ptr<string> serviceLaunchResultType_ = nullptr;
    // The service version.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
