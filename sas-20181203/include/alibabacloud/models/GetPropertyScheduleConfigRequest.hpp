// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROPERTYSCHEDULECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPROPERTYSCHEDULECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetPropertyScheduleConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPropertyScheduleConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetPropertyScheduleConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    GetPropertyScheduleConfigRequest() = default ;
    GetPropertyScheduleConfigRequest(const GetPropertyScheduleConfigRequest &) = default ;
    GetPropertyScheduleConfigRequest(GetPropertyScheduleConfigRequest &&) = default ;
    GetPropertyScheduleConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPropertyScheduleConfigRequest() = default ;
    GetPropertyScheduleConfigRequest& operator=(const GetPropertyScheduleConfigRequest &) = default ;
    GetPropertyScheduleConfigRequest& operator=(GetPropertyScheduleConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && return this->uuid_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetPropertyScheduleConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetPropertyScheduleConfigRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The type of the asset fingerprints. Valid values:
    // 
    // *   **scheduler_port_period**: listening port
    // *   **scheduler_process_period**: running process
    // *   **scheduler_account_period**: account
    // *   **scheduler_software_period**: software
    // *   **scheduler_cron_period**: scheduled task
    // *   **scheduler_sca_period**: middleware
    // *   **scheduler_autorun_period**: startup item
    // *   **scheduler_lkm_period**: kernel module
    // *   **scheduler_sca_proxy_period**: website
    std::shared_ptr<string> type_ = nullptr;
    // The UUID of the server.
    // 
    // >  You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of servers.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
