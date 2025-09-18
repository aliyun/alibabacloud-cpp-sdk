// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTREAMTAGLISTRESPONSEBODYSTREAMTAGLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSTREAMTAGLISTRESPONSEBODYSTREAMTAGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetStreamTagListResponseBodyStreamTagList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStreamTagListResponseBodyStreamTagList& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, GetStreamTagListResponseBodyStreamTagList& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    GetStreamTagListResponseBodyStreamTagList() = default ;
    GetStreamTagListResponseBodyStreamTagList(const GetStreamTagListResponseBodyStreamTagList &) = default ;
    GetStreamTagListResponseBodyStreamTagList(GetStreamTagListResponseBodyStreamTagList &&) = default ;
    GetStreamTagListResponseBodyStreamTagList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStreamTagListResponseBodyStreamTagList() = default ;
    GetStreamTagListResponseBodyStreamTagList& operator=(const GetStreamTagListResponseBodyStreamTagList &) = default ;
    GetStreamTagListResponseBodyStreamTagList& operator=(GetStreamTagListResponseBodyStreamTagList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->startTime_ != nullptr && this->userData_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetStreamTagListResponseBodyStreamTagList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetStreamTagListResponseBodyStreamTagList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetStreamTagListResponseBodyStreamTagList& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
