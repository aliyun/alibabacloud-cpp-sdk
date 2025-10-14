// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALENDARSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCALENDARSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListCalendarsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCalendarsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Request, requestShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListCalendarsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Request, requestShrink_);
    };
    ListCalendarsShrinkRequest() = default ;
    ListCalendarsShrinkRequest(const ListCalendarsShrinkRequest &) = default ;
    ListCalendarsShrinkRequest(ListCalendarsShrinkRequest &&) = default ;
    ListCalendarsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCalendarsShrinkRequest() = default ;
    ListCalendarsShrinkRequest& operator=(const ListCalendarsShrinkRequest &) = default ;
    ListCalendarsShrinkRequest& operator=(ListCalendarsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestShrink_ == nullptr; };
    // requestShrink Field Functions 
    bool hasRequestShrink() const { return this->requestShrink_ != nullptr;};
    void deleteRequestShrink() { this->requestShrink_ = nullptr;};
    inline string requestShrink() const { DARABONBA_PTR_GET_DEFAULT(requestShrink_, "") };
    inline ListCalendarsShrinkRequest& setRequestShrink(string requestShrink) { DARABONBA_PTR_SET_VALUE(requestShrink_, requestShrink) };


  protected:
    std::shared_ptr<string> requestShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
