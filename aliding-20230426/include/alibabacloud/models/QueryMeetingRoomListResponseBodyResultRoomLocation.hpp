// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEETINGROOMLISTRESPONSEBODYRESULTROOMLOCATION_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEETINGROOMLISTRESPONSEBODYRESULTROOMLOCATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryMeetingRoomListResponseBodyResultRoomLocation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMeetingRoomListResponseBodyResultRoomLocation& obj) { 
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMeetingRoomListResponseBodyResultRoomLocation& obj) { 
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    QueryMeetingRoomListResponseBodyResultRoomLocation() = default ;
    QueryMeetingRoomListResponseBodyResultRoomLocation(const QueryMeetingRoomListResponseBodyResultRoomLocation &) = default ;
    QueryMeetingRoomListResponseBodyResultRoomLocation(QueryMeetingRoomListResponseBodyResultRoomLocation &&) = default ;
    QueryMeetingRoomListResponseBodyResultRoomLocation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMeetingRoomListResponseBodyResultRoomLocation() = default ;
    QueryMeetingRoomListResponseBodyResultRoomLocation& operator=(const QueryMeetingRoomListResponseBodyResultRoomLocation &) = default ;
    QueryMeetingRoomListResponseBodyResultRoomLocation& operator=(QueryMeetingRoomListResponseBodyResultRoomLocation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desc_ == nullptr
        && return this->title_ == nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline QueryMeetingRoomListResponseBodyResultRoomLocation& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline QueryMeetingRoomListResponseBodyResultRoomLocation& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
