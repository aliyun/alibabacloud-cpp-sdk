// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSRUNOPTIONSBATCHWINDOW_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSRUNOPTIONSBATCHWINDOW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow& obj) { 
      DARABONBA_PTR_TO_JSON(CountBasedWindow, countBasedWindow_);
      DARABONBA_PTR_TO_JSON(TimeBasedWindow, timeBasedWindow_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow& obj) { 
      DARABONBA_PTR_FROM_JSON(CountBasedWindow, countBasedWindow_);
      DARABONBA_PTR_FROM_JSON(TimeBasedWindow, timeBasedWindow_);
    };
    ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow(const ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow(ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow &&) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow& operator=(const ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow& operator=(ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->countBasedWindow_ != nullptr
        && this->timeBasedWindow_ != nullptr; };
    // countBasedWindow Field Functions 
    bool hasCountBasedWindow() const { return this->countBasedWindow_ != nullptr;};
    void deleteCountBasedWindow() { this->countBasedWindow_ = nullptr;};
    inline int32_t countBasedWindow() const { DARABONBA_PTR_GET_DEFAULT(countBasedWindow_, 0) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow& setCountBasedWindow(int32_t countBasedWindow) { DARABONBA_PTR_SET_VALUE(countBasedWindow_, countBasedWindow) };


    // timeBasedWindow Field Functions 
    bool hasTimeBasedWindow() const { return this->timeBasedWindow_ != nullptr;};
    void deleteTimeBasedWindow() { this->timeBasedWindow_ = nullptr;};
    inline int32_t timeBasedWindow() const { DARABONBA_PTR_GET_DEFAULT(timeBasedWindow_, 0) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsRunOptionsBatchWindow& setTimeBasedWindow(int32_t timeBasedWindow) { DARABONBA_PTR_SET_VALUE(timeBasedWindow_, timeBasedWindow) };


  protected:
    // The maximum number of events that are allowed in the batch window. When this threshold is reached, data in the window is pushed to the downstream service. When multiple batch windows exist, data is pushed if triggering conditions are met in one of the windows.
    std::shared_ptr<int32_t> countBasedWindow_ = nullptr;
    // The maximum period of time during which events are allowed in the batch window. Unit: seconds. When this threshold is reached, data in the window is pushed to the downstream service. When multiple batch windows exist, data is pushed if triggering conditions are met in one of the windows.
    std::shared_ptr<int32_t> timeBasedWindow_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
