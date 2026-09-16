// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKBUSINESSHOURSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKBUSINESSHOURSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class CheckBusinessHoursRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckBusinessHoursRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, CheckBusinessHoursRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    CheckBusinessHoursRequest() = default ;
    CheckBusinessHoursRequest(const CheckBusinessHoursRequest &) = default ;
    CheckBusinessHoursRequest(CheckBusinessHoursRequest &&) = default ;
    CheckBusinessHoursRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckBusinessHoursRequest() = default ;
    CheckBusinessHoursRequest& operator=(const CheckBusinessHoursRequest &) = default ;
    CheckBusinessHoursRequest& operator=(CheckBusinessHoursRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->time_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CheckBusinessHoursRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline CheckBusinessHoursRequest& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<int64_t> time_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
