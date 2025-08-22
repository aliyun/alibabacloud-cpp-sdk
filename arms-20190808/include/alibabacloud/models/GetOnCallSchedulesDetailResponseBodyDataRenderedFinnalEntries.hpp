// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETONCALLSCHEDULESDETAILRESPONSEBODYDATARENDEREDFINNALENTRIES_HPP_
#define ALIBABACLOUD_MODELS_GETONCALLSCHEDULESDETAILRESPONSEBODYDATARENDEREDFINNALENTRIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntriesSimpleContact.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries& obj) { 
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(SimpleContact, simpleContact_);
      DARABONBA_PTR_TO_JSON(Start, start_);
    };
    friend void from_json(const Darabonba::Json& j, GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(SimpleContact, simpleContact_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
    };
    GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries() = default ;
    GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries(const GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries &) = default ;
    GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries(GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries &&) = default ;
    GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries() = default ;
    GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries& operator=(const GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries &) = default ;
    GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries& operator=(GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries &&) = default ;
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
    inline GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // simpleContact Field Functions 
    bool hasSimpleContact() const { return this->simpleContact_ != nullptr;};
    void deleteSimpleContact() { this->simpleContact_ = nullptr;};
    inline const Models::GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntriesSimpleContact & simpleContact() const { DARABONBA_PTR_GET_CONST(simpleContact_, Models::GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntriesSimpleContact) };
    inline Models::GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntriesSimpleContact simpleContact() { DARABONBA_PTR_GET(simpleContact_, Models::GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntriesSimpleContact) };
    inline GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries& setSimpleContact(const Models::GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntriesSimpleContact & simpleContact) { DARABONBA_PTR_SET_VALUE(simpleContact_, simpleContact) };
    inline GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries& setSimpleContact(Models::GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntriesSimpleContact && simpleContact) { DARABONBA_PTR_SET_RVALUE(simpleContact_, simpleContact) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline string start() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
    inline GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntries& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    // The date on which the user completed shift work.
    std::shared_ptr<string> end_ = nullptr;
    // The information about the user on duty.
    std::shared_ptr<Models::GetOnCallSchedulesDetailResponseBodyDataRenderedFinnalEntriesSimpleContact> simpleContact_ = nullptr;
    // The date from which the user started shift work.
    std::shared_ptr<string> start_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
