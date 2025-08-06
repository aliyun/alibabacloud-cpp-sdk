// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSRESPONSEBODYEVENTSORIGINSTART_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSRESPONSEBODYEVENTSORIGINSTART_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListEventsResponseBodyEventsOriginStart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventsResponseBodyEventsOriginStart& obj) { 
      DARABONBA_PTR_TO_JSON(DateTime, dateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventsResponseBodyEventsOriginStart& obj) { 
      DARABONBA_PTR_FROM_JSON(DateTime, dateTime_);
    };
    ListEventsResponseBodyEventsOriginStart() = default ;
    ListEventsResponseBodyEventsOriginStart(const ListEventsResponseBodyEventsOriginStart &) = default ;
    ListEventsResponseBodyEventsOriginStart(ListEventsResponseBodyEventsOriginStart &&) = default ;
    ListEventsResponseBodyEventsOriginStart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventsResponseBodyEventsOriginStart() = default ;
    ListEventsResponseBodyEventsOriginStart& operator=(const ListEventsResponseBodyEventsOriginStart &) = default ;
    ListEventsResponseBodyEventsOriginStart& operator=(ListEventsResponseBodyEventsOriginStart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dateTime_ != nullptr; };
    // dateTime Field Functions 
    bool hasDateTime() const { return this->dateTime_ != nullptr;};
    void deleteDateTime() { this->dateTime_ = nullptr;};
    inline string dateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
    inline ListEventsResponseBodyEventsOriginStart& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


  protected:
    std::shared_ptr<string> dateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
