// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETONCALLSCHEDULESDETAILRESPONSEBODYDATARENDEREDLAYERENTRIES_HPP_
#define ALIBABACLOUD_MODELS_GETONCALLSCHEDULESDETAILRESPONSEBODYDATARENDEREDLAYERENTRIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntriesSimpleContact.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries& obj) { 
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(SimpleContact, simpleContact_);
    };
    friend void from_json(const Darabonba::Json& j, GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(SimpleContact, simpleContact_);
    };
    GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries() = default ;
    GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries(const GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries &) = default ;
    GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries(GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries &&) = default ;
    GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries() = default ;
    GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries& operator=(const GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries &) = default ;
    GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries& operator=(GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->start_ != nullptr
        && this->end_ != nullptr && this->simpleContact_ != nullptr; };
    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline string start() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
    inline GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline string end() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
    inline GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // simpleContact Field Functions 
    bool hasSimpleContact() const { return this->simpleContact_ != nullptr;};
    void deleteSimpleContact() { this->simpleContact_ = nullptr;};
    inline const Models::GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntriesSimpleContact & simpleContact() const { DARABONBA_PTR_GET_CONST(simpleContact_, Models::GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntriesSimpleContact) };
    inline Models::GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntriesSimpleContact simpleContact() { DARABONBA_PTR_GET(simpleContact_, Models::GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntriesSimpleContact) };
    inline GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries& setSimpleContact(const Models::GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntriesSimpleContact & simpleContact) { DARABONBA_PTR_SET_VALUE(simpleContact_, simpleContact) };
    inline GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntries& setSimpleContact(Models::GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntriesSimpleContact && simpleContact) { DARABONBA_PTR_SET_RVALUE(simpleContact_, simpleContact) };


  protected:
    // The date from which the scheduled user was supposed to start shift work.
    std::shared_ptr<string> start_ = nullptr;
    // The date on which the scheduled user was supposed to complete shift work.
    std::shared_ptr<string> end_ = nullptr;
    // The information about the scheduled user.
    std::shared_ptr<Models::GetOnCallSchedulesDetailResponseBodyDataRenderedLayerEntriesSimpleContact> simpleContact_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
