// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETONCALLSCHEDULESDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETONCALLSCHEDULESDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetOnCallSchedulesDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOnCallSchedulesDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetOnCallSchedulesDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetOnCallSchedulesDetailRequest() = default ;
    GetOnCallSchedulesDetailRequest(const GetOnCallSchedulesDetailRequest &) = default ;
    GetOnCallSchedulesDetailRequest(GetOnCallSchedulesDetailRequest &&) = default ;
    GetOnCallSchedulesDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOnCallSchedulesDetailRequest() = default ;
    GetOnCallSchedulesDetailRequest& operator=(const GetOnCallSchedulesDetailRequest &) = default ;
    GetOnCallSchedulesDetailRequest& operator=(GetOnCallSchedulesDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->id_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetOnCallSchedulesDetailRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetOnCallSchedulesDetailRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetOnCallSchedulesDetailRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The date on which the shift ends. Format: `yyyy-MM-dd`.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the scheduling policy.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The date from which the shift starts. Format: `yyyy-MM-dd`.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
