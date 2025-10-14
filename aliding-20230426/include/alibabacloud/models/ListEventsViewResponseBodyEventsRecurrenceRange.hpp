// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSVIEWRESPONSEBODYEVENTSRECURRENCERANGE_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSVIEWRESPONSEBODYEVENTSRECURRENCERANGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListEventsViewResponseBodyEventsRecurrenceRange : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventsViewResponseBodyEventsRecurrenceRange& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(NumberOfOccurrences, numberOfOccurrences_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventsViewResponseBodyEventsRecurrenceRange& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(NumberOfOccurrences, numberOfOccurrences_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListEventsViewResponseBodyEventsRecurrenceRange() = default ;
    ListEventsViewResponseBodyEventsRecurrenceRange(const ListEventsViewResponseBodyEventsRecurrenceRange &) = default ;
    ListEventsViewResponseBodyEventsRecurrenceRange(ListEventsViewResponseBodyEventsRecurrenceRange &&) = default ;
    ListEventsViewResponseBodyEventsRecurrenceRange(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventsViewResponseBodyEventsRecurrenceRange() = default ;
    ListEventsViewResponseBodyEventsRecurrenceRange& operator=(const ListEventsViewResponseBodyEventsRecurrenceRange &) = default ;
    ListEventsViewResponseBodyEventsRecurrenceRange& operator=(ListEventsViewResponseBodyEventsRecurrenceRange &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && return this->numberOfOccurrences_ == nullptr && return this->type_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline ListEventsViewResponseBodyEventsRecurrenceRange& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // numberOfOccurrences Field Functions 
    bool hasNumberOfOccurrences() const { return this->numberOfOccurrences_ != nullptr;};
    void deleteNumberOfOccurrences() { this->numberOfOccurrences_ = nullptr;};
    inline int32_t numberOfOccurrences() const { DARABONBA_PTR_GET_DEFAULT(numberOfOccurrences_, 0) };
    inline ListEventsViewResponseBodyEventsRecurrenceRange& setNumberOfOccurrences(int32_t numberOfOccurrences) { DARABONBA_PTR_SET_VALUE(numberOfOccurrences_, numberOfOccurrences) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListEventsViewResponseBodyEventsRecurrenceRange& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> endDate_ = nullptr;
    std::shared_ptr<int32_t> numberOfOccurrences_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
