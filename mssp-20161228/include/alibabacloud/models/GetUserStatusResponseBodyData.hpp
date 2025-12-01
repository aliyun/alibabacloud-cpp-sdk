// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERSTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETUSERSTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetUserStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerType, customerType_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerType, customerType_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetUserStatusResponseBodyData() = default ;
    GetUserStatusResponseBodyData(const GetUserStatusResponseBodyData &) = default ;
    GetUserStatusResponseBodyData(GetUserStatusResponseBodyData &&) = default ;
    GetUserStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserStatusResponseBodyData() = default ;
    GetUserStatusResponseBodyData& operator=(const GetUserStatusResponseBodyData &) = default ;
    GetUserStatusResponseBodyData& operator=(GetUserStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerType_ == nullptr
        && return this->endDate_ == nullptr && return this->instanceId_ == nullptr && return this->startDate_ == nullptr && return this->status_ == nullptr && return this->version_ == nullptr; };
    // customerType Field Functions 
    bool hasCustomerType() const { return this->customerType_ != nullptr;};
    void deleteCustomerType() { this->customerType_ = nullptr;};
    inline string customerType() const { DARABONBA_PTR_GET_DEFAULT(customerType_, "") };
    inline GetUserStatusResponseBodyData& setCustomerType(string customerType) { DARABONBA_PTR_SET_VALUE(customerType_, customerType) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline GetUserStatusResponseBodyData& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetUserStatusResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline GetUserStatusResponseBodyData& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetUserStatusResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetUserStatusResponseBodyData& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Customer type.
    std::shared_ptr<string> customerType_ = nullptr;
    // End date.
    std::shared_ptr<string> endDate_ = nullptr;
    // Instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Start date.
    std::shared_ptr<string> startDate_ = nullptr;
    // Status.
    std::shared_ptr<string> status_ = nullptr;
    // Version.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
