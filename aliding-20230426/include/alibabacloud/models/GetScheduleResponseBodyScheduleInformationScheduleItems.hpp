// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEDULERESPONSEBODYSCHEDULEINFORMATIONSCHEDULEITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEDULERESPONSEBODYSCHEDULEINFORMATIONSCHEDULEITEMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetScheduleResponseBodyScheduleInformationScheduleItemsEnd.hpp>
#include <alibabacloud/models/GetScheduleResponseBodyScheduleInformationScheduleItemsStart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetScheduleResponseBodyScheduleInformationScheduleItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScheduleResponseBodyScheduleInformationScheduleItems& obj) { 
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetScheduleResponseBodyScheduleInformationScheduleItems& obj) { 
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetScheduleResponseBodyScheduleInformationScheduleItems() = default ;
    GetScheduleResponseBodyScheduleInformationScheduleItems(const GetScheduleResponseBodyScheduleInformationScheduleItems &) = default ;
    GetScheduleResponseBodyScheduleInformationScheduleItems(GetScheduleResponseBodyScheduleInformationScheduleItems &&) = default ;
    GetScheduleResponseBodyScheduleInformationScheduleItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScheduleResponseBodyScheduleInformationScheduleItems() = default ;
    GetScheduleResponseBodyScheduleInformationScheduleItems& operator=(const GetScheduleResponseBodyScheduleInformationScheduleItems &) = default ;
    GetScheduleResponseBodyScheduleInformationScheduleItems& operator=(GetScheduleResponseBodyScheduleInformationScheduleItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->end_ == nullptr
        && return this->start_ == nullptr && return this->status_ == nullptr; };
    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline const Models::GetScheduleResponseBodyScheduleInformationScheduleItemsEnd & end() const { DARABONBA_PTR_GET_CONST(end_, Models::GetScheduleResponseBodyScheduleInformationScheduleItemsEnd) };
    inline Models::GetScheduleResponseBodyScheduleInformationScheduleItemsEnd end() { DARABONBA_PTR_GET(end_, Models::GetScheduleResponseBodyScheduleInformationScheduleItemsEnd) };
    inline GetScheduleResponseBodyScheduleInformationScheduleItems& setEnd(const Models::GetScheduleResponseBodyScheduleInformationScheduleItemsEnd & end) { DARABONBA_PTR_SET_VALUE(end_, end) };
    inline GetScheduleResponseBodyScheduleInformationScheduleItems& setEnd(Models::GetScheduleResponseBodyScheduleInformationScheduleItemsEnd && end) { DARABONBA_PTR_SET_RVALUE(end_, end) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline const Models::GetScheduleResponseBodyScheduleInformationScheduleItemsStart & start() const { DARABONBA_PTR_GET_CONST(start_, Models::GetScheduleResponseBodyScheduleInformationScheduleItemsStart) };
    inline Models::GetScheduleResponseBodyScheduleInformationScheduleItemsStart start() { DARABONBA_PTR_GET(start_, Models::GetScheduleResponseBodyScheduleInformationScheduleItemsStart) };
    inline GetScheduleResponseBodyScheduleInformationScheduleItems& setStart(const Models::GetScheduleResponseBodyScheduleInformationScheduleItemsStart & start) { DARABONBA_PTR_SET_VALUE(start_, start) };
    inline GetScheduleResponseBodyScheduleInformationScheduleItems& setStart(Models::GetScheduleResponseBodyScheduleInformationScheduleItemsStart && start) { DARABONBA_PTR_SET_RVALUE(start_, start) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetScheduleResponseBodyScheduleInformationScheduleItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<Models::GetScheduleResponseBodyScheduleInformationScheduleItemsEnd> end_ = nullptr;
    std::shared_ptr<Models::GetScheduleResponseBodyScheduleInformationScheduleItemsStart> start_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
