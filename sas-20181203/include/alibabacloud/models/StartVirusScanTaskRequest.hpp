// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTVIRUSSCANTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTVIRUSSCANTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class StartVirusScanTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartVirusScanTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TargetInfo, targetInfo_);
    };
    friend void from_json(const Darabonba::Json& j, StartVirusScanTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetInfo, targetInfo_);
    };
    StartVirusScanTaskRequest() = default ;
    StartVirusScanTaskRequest(const StartVirusScanTaskRequest &) = default ;
    StartVirusScanTaskRequest(StartVirusScanTaskRequest &&) = default ;
    StartVirusScanTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartVirusScanTaskRequest() = default ;
    StartVirusScanTaskRequest& operator=(const StartVirusScanTaskRequest &) = default ;
    StartVirusScanTaskRequest& operator=(StartVirusScanTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->targetInfo_ == nullptr; };
    // targetInfo Field Functions 
    bool hasTargetInfo() const { return this->targetInfo_ != nullptr;};
    void deleteTargetInfo() { this->targetInfo_ = nullptr;};
    inline string targetInfo() const { DARABONBA_PTR_GET_DEFAULT(targetInfo_, "") };
    inline StartVirusScanTaskRequest& setTargetInfo(string targetInfo) { DARABONBA_PTR_SET_VALUE(targetInfo_, targetInfo) };


  protected:
    // The asset on which you want to perform a virus scan task. You can select servers or server groups to scan for viruses. The value is a string that consists of JSON arrays. Each element in a JSON array is a JSON struct that contains the following fields:
    // 
    // *   **type**: the type of the asset on which you want to perform a virus scan task. Valid values:
    // 
    //     *   **groupId**: server group.
    //     *   **uuid**: server.
    // 
    // *   **name**: the name of the server or server group.
    // 
    // *   **target**: the asset on which you want to perform a virus scan task. Valid values:
    // 
    //     *   If you set **type** to **groupId**, you must set this field to the ID of the server group. You can call the [DescribeAllGroups](~~DescribeAllGroups~~) operation to query the IDs of server groups.
    //     *   If you set **type** to **uuid**, you must set this field to the UUID of the server. You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of servers.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
