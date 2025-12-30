// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOORDINATETICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCOORDINATETICKETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class GetCoordinateTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCoordinateTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CoId, coId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, GetCoordinateTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CoId, coId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    GetCoordinateTicketRequest() = default ;
    GetCoordinateTicketRequest(const GetCoordinateTicketRequest &) = default ;
    GetCoordinateTicketRequest(GetCoordinateTicketRequest &&) = default ;
    GetCoordinateTicketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCoordinateTicketRequest() = default ;
    GetCoordinateTicketRequest& operator=(const GetCoordinateTicketRequest &) = default ;
    GetCoordinateTicketRequest& operator=(GetCoordinateTicketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coId_ == nullptr
        && this->endUserId_ == nullptr && this->regionId_ == nullptr && this->taskId_ == nullptr && this->userType_ == nullptr; };
    // coId Field Functions 
    bool hasCoId() const { return this->coId_ != nullptr;};
    void deleteCoId() { this->coId_ = nullptr;};
    inline string getCoId() const { DARABONBA_PTR_GET_DEFAULT(coId_, "") };
    inline GetCoordinateTicketRequest& setCoId(string coId) { DARABONBA_PTR_SET_VALUE(coId_, coId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline GetCoordinateTicketRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetCoordinateTicketRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetCoordinateTicketRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline GetCoordinateTicketRequest& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // The ID of the stream collaboration. You can obtain the value of this parameter based on the value of `Coid` that is returned by the `ApplyCoordinationForMonitoring` operation.
    // 
    // This parameter is required.
    shared_ptr<string> coId_ {};
    // The name of the convenience user account. If you initiate the request as an administrator, you do not need to specify this parameter.
    shared_ptr<string> endUserId_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/436773.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the cloud computer connection task. The first time you initiate the request, you do not need to specify the ID of the cloud computer connection task. If no ticket is returned after you initiate the first request, you must specify the value of taskId that is returned for the first request in the subsequent request.
    shared_ptr<string> taskId_ {};
    // The type of the user.
    // 
    // Set the value to TENANT_ADMIN.
    // 
    // *   The value of
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     TENANT_ADMIN
    // 
    //     <!-- -->
    // 
    //     specifies an administrator.
    // 
    // This parameter is required.
    shared_ptr<string> userType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
