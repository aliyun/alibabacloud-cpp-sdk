// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PATCHEVENTRESPONSEBODYLOCATION_HPP_
#define ALIBABACLOUD_MODELS_PATCHEVENTRESPONSEBODYLOCATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class PatchEventResponseBodyLocation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PatchEventResponseBodyLocation& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(MeetingRooms, meetingRooms_);
    };
    friend void from_json(const Darabonba::Json& j, PatchEventResponseBodyLocation& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(MeetingRooms, meetingRooms_);
    };
    PatchEventResponseBodyLocation() = default ;
    PatchEventResponseBodyLocation(const PatchEventResponseBodyLocation &) = default ;
    PatchEventResponseBodyLocation(PatchEventResponseBodyLocation &&) = default ;
    PatchEventResponseBodyLocation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PatchEventResponseBodyLocation() = default ;
    PatchEventResponseBodyLocation& operator=(const PatchEventResponseBodyLocation &) = default ;
    PatchEventResponseBodyLocation& operator=(PatchEventResponseBodyLocation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && return this->meetingRooms_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline PatchEventResponseBodyLocation& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // meetingRooms Field Functions 
    bool hasMeetingRooms() const { return this->meetingRooms_ != nullptr;};
    void deleteMeetingRooms() { this->meetingRooms_ = nullptr;};
    inline const vector<string> & meetingRooms() const { DARABONBA_PTR_GET_CONST(meetingRooms_, vector<string>) };
    inline vector<string> meetingRooms() { DARABONBA_PTR_GET(meetingRooms_, vector<string>) };
    inline PatchEventResponseBodyLocation& setMeetingRooms(const vector<string> & meetingRooms) { DARABONBA_PTR_SET_VALUE(meetingRooms_, meetingRooms) };
    inline PatchEventResponseBodyLocation& setMeetingRooms(vector<string> && meetingRooms) { DARABONBA_PTR_SET_RVALUE(meetingRooms_, meetingRooms) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<vector<string>> meetingRooms_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
