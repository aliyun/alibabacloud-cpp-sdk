// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTALLCODEFORUUIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTALLCODEFORUUIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetInstallCodeForUuidRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstallCodeForUuidRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstallCodeForUuidRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    GetInstallCodeForUuidRequest() = default ;
    GetInstallCodeForUuidRequest(const GetInstallCodeForUuidRequest &) = default ;
    GetInstallCodeForUuidRequest(GetInstallCodeForUuidRequest &&) = default ;
    GetInstallCodeForUuidRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstallCodeForUuidRequest() = default ;
    GetInstallCodeForUuidRequest& operator=(const GetInstallCodeForUuidRequest &) = default ;
    GetInstallCodeForUuidRequest& operator=(GetInstallCodeForUuidRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->uuid_ != nullptr; };
    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetInstallCodeForUuidRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The UUID of the server for which the client installation code is to be queried.
    // 
    // 
    // > Call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) API to obtain this parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
