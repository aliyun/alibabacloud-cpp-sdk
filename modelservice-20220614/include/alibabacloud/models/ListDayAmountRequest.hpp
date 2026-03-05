// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDAYAMOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDAYAMOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelService20220614
{
namespace Models
{
  class ListDayAmountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDayAmountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(SceneType, sceneType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListDayAmountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(SceneType, sceneType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListDayAmountRequest() = default ;
    ListDayAmountRequest(const ListDayAmountRequest &) = default ;
    ListDayAmountRequest(ListDayAmountRequest &&) = default ;
    ListDayAmountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDayAmountRequest() = default ;
    ListDayAmountRequest& operator=(const ListDayAmountRequest &) = default ;
    ListDayAmountRequest& operator=(ListDayAmountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->sceneType_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListDayAmountRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // sceneType Field Functions 
    bool hasSceneType() const { return this->sceneType_ != nullptr;};
    void deleteSceneType() { this->sceneType_ = nullptr;};
    inline string getSceneType() const { DARABONBA_PTR_GET_DEFAULT(sceneType_, "") };
    inline ListDayAmountRequest& setSceneType(string sceneType) { DARABONBA_PTR_SET_VALUE(sceneType_, sceneType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListDayAmountRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> endTime_ {};
    shared_ptr<string> sceneType_ {};
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelService20220614
#endif
