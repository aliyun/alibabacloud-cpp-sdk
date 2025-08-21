// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVCIESCHEDULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVCIESCHEDULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeServcieScheduleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServcieScheduleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(PodConfigName, podConfigName_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServcieScheduleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(PodConfigName, podConfigName_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeServcieScheduleRequest() = default ;
    DescribeServcieScheduleRequest(const DescribeServcieScheduleRequest &) = default ;
    DescribeServcieScheduleRequest(DescribeServcieScheduleRequest &&) = default ;
    DescribeServcieScheduleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServcieScheduleRequest() = default ;
    DescribeServcieScheduleRequest& operator=(const DescribeServcieScheduleRequest &) = default ;
    DescribeServcieScheduleRequest& operator=(DescribeServcieScheduleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->podConfigName_ != nullptr && this->uuid_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeServcieScheduleRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // podConfigName Field Functions 
    bool hasPodConfigName() const { return this->podConfigName_ != nullptr;};
    void deletePodConfigName() { this->podConfigName_ = nullptr;};
    inline string podConfigName() const { DARABONBA_PTR_GET_DEFAULT(podConfigName_, "") };
    inline DescribeServcieScheduleRequest& setPodConfigName(string podConfigName) { DARABONBA_PTR_SET_VALUE(podConfigName_, podConfigName) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeServcieScheduleRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter does not take effect.
    std::shared_ptr<string> podConfigName_ = nullptr;
    // The unique ID of the device.
    // 
    // This parameter is required.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
