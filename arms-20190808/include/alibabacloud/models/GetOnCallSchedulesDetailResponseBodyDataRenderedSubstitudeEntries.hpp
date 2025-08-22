// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETONCALLSCHEDULESDETAILRESPONSEBODYDATARENDEREDSUBSTITUDEENTRIES_HPP_
#define ALIBABACLOUD_MODELS_GETONCALLSCHEDULESDETAILRESPONSEBODYDATARENDEREDSUBSTITUDEENTRIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntriesSimpleContact.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries& obj) { 
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(SimpleContact, simpleContact_);
      DARABONBA_PTR_TO_JSON(Start, start_);
    };
    friend void from_json(const Darabonba::Json& j, GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(SimpleContact, simpleContact_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
    };
    GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries() = default ;
    GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries(const GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries &) = default ;
    GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries(GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries &&) = default ;
    GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries() = default ;
    GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries& operator=(const GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries &) = default ;
    GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries& operator=(GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->end_ != nullptr
        && this->simpleContact_ != nullptr && this->start_ != nullptr; };
    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline string end() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
    inline GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // simpleContact Field Functions 
    bool hasSimpleContact() const { return this->simpleContact_ != nullptr;};
    void deleteSimpleContact() { this->simpleContact_ = nullptr;};
    inline const Models::GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntriesSimpleContact & simpleContact() const { DARABONBA_PTR_GET_CONST(simpleContact_, Models::GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntriesSimpleContact) };
    inline Models::GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntriesSimpleContact simpleContact() { DARABONBA_PTR_GET(simpleContact_, Models::GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntriesSimpleContact) };
    inline GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries& setSimpleContact(const Models::GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntriesSimpleContact & simpleContact) { DARABONBA_PTR_SET_VALUE(simpleContact_, simpleContact) };
    inline GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries& setSimpleContact(Models::GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntriesSimpleContact && simpleContact) { DARABONBA_PTR_SET_RVALUE(simpleContact_, simpleContact) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline string start() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
    inline GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntries& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    // The date on which the substitute was supposed to complete shift work.
    std::shared_ptr<string> end_ = nullptr;
    // The information about the substitute.
    std::shared_ptr<Models::GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntriesSimpleContact> simpleContact_ = nullptr;
    // The date from which the substitute was supposed to start shift work.
    std::shared_ptr<string> start_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
