// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECTVERTICALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECTVERTICALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class RectVerticalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RectVerticalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CountDetectDoor, countDetectDoor_);
      DARABONBA_PTR_TO_JSON(DetectDoor, detectDoor_);
      DARABONBA_PTR_TO_JSON(SubSceneId, subSceneId_);
      DARABONBA_PTR_TO_JSON(VerticalRect, verticalRect_);
    };
    friend void from_json(const Darabonba::Json& j, RectVerticalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CountDetectDoor, countDetectDoor_);
      DARABONBA_PTR_FROM_JSON(DetectDoor, detectDoor_);
      DARABONBA_PTR_FROM_JSON(SubSceneId, subSceneId_);
      DARABONBA_PTR_FROM_JSON(VerticalRect, verticalRect_);
    };
    RectVerticalRequest() = default ;
    RectVerticalRequest(const RectVerticalRequest &) = default ;
    RectVerticalRequest(RectVerticalRequest &&) = default ;
    RectVerticalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RectVerticalRequest() = default ;
    RectVerticalRequest& operator=(const RectVerticalRequest &) = default ;
    RectVerticalRequest& operator=(RectVerticalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->countDetectDoor_ == nullptr
        && return this->detectDoor_ == nullptr && return this->subSceneId_ == nullptr && return this->verticalRect_ == nullptr; };
    // countDetectDoor Field Functions 
    bool hasCountDetectDoor() const { return this->countDetectDoor_ != nullptr;};
    void deleteCountDetectDoor() { this->countDetectDoor_ = nullptr;};
    inline int32_t countDetectDoor() const { DARABONBA_PTR_GET_DEFAULT(countDetectDoor_, 0) };
    inline RectVerticalRequest& setCountDetectDoor(int32_t countDetectDoor) { DARABONBA_PTR_SET_VALUE(countDetectDoor_, countDetectDoor) };


    // detectDoor Field Functions 
    bool hasDetectDoor() const { return this->detectDoor_ != nullptr;};
    void deleteDetectDoor() { this->detectDoor_ = nullptr;};
    inline bool detectDoor() const { DARABONBA_PTR_GET_DEFAULT(detectDoor_, false) };
    inline RectVerticalRequest& setDetectDoor(bool detectDoor) { DARABONBA_PTR_SET_VALUE(detectDoor_, detectDoor) };


    // subSceneId Field Functions 
    bool hasSubSceneId() const { return this->subSceneId_ != nullptr;};
    void deleteSubSceneId() { this->subSceneId_ = nullptr;};
    inline string subSceneId() const { DARABONBA_PTR_GET_DEFAULT(subSceneId_, "") };
    inline RectVerticalRequest& setSubSceneId(string subSceneId) { DARABONBA_PTR_SET_VALUE(subSceneId_, subSceneId) };


    // verticalRect Field Functions 
    bool hasVerticalRect() const { return this->verticalRect_ != nullptr;};
    void deleteVerticalRect() { this->verticalRect_ = nullptr;};
    inline string verticalRect() const { DARABONBA_PTR_GET_DEFAULT(verticalRect_, "") };
    inline RectVerticalRequest& setVerticalRect(string verticalRect) { DARABONBA_PTR_SET_VALUE(verticalRect_, verticalRect) };


  protected:
    std::shared_ptr<int32_t> countDetectDoor_ = nullptr;
    std::shared_ptr<bool> detectDoor_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> subSceneId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> verticalRect_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
