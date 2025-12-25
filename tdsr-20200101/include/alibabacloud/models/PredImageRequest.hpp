// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREDIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PREDIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class PredImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PredImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CorrectVertical, correctVertical_);
      DARABONBA_PTR_TO_JSON(CountDetectDoor, countDetectDoor_);
      DARABONBA_PTR_TO_JSON(DetectDoor, detectDoor_);
      DARABONBA_PTR_TO_JSON(SubSceneId, subSceneId_);
    };
    friend void from_json(const Darabonba::Json& j, PredImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CorrectVertical, correctVertical_);
      DARABONBA_PTR_FROM_JSON(CountDetectDoor, countDetectDoor_);
      DARABONBA_PTR_FROM_JSON(DetectDoor, detectDoor_);
      DARABONBA_PTR_FROM_JSON(SubSceneId, subSceneId_);
    };
    PredImageRequest() = default ;
    PredImageRequest(const PredImageRequest &) = default ;
    PredImageRequest(PredImageRequest &&) = default ;
    PredImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PredImageRequest() = default ;
    PredImageRequest& operator=(const PredImageRequest &) = default ;
    PredImageRequest& operator=(PredImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->correctVertical_ == nullptr
        && return this->countDetectDoor_ == nullptr && return this->detectDoor_ == nullptr && return this->subSceneId_ == nullptr; };
    // correctVertical Field Functions 
    bool hasCorrectVertical() const { return this->correctVertical_ != nullptr;};
    void deleteCorrectVertical() { this->correctVertical_ = nullptr;};
    inline bool correctVertical() const { DARABONBA_PTR_GET_DEFAULT(correctVertical_, false) };
    inline PredImageRequest& setCorrectVertical(bool correctVertical) { DARABONBA_PTR_SET_VALUE(correctVertical_, correctVertical) };


    // countDetectDoor Field Functions 
    bool hasCountDetectDoor() const { return this->countDetectDoor_ != nullptr;};
    void deleteCountDetectDoor() { this->countDetectDoor_ = nullptr;};
    inline int64_t countDetectDoor() const { DARABONBA_PTR_GET_DEFAULT(countDetectDoor_, 0L) };
    inline PredImageRequest& setCountDetectDoor(int64_t countDetectDoor) { DARABONBA_PTR_SET_VALUE(countDetectDoor_, countDetectDoor) };


    // detectDoor Field Functions 
    bool hasDetectDoor() const { return this->detectDoor_ != nullptr;};
    void deleteDetectDoor() { this->detectDoor_ = nullptr;};
    inline bool detectDoor() const { DARABONBA_PTR_GET_DEFAULT(detectDoor_, false) };
    inline PredImageRequest& setDetectDoor(bool detectDoor) { DARABONBA_PTR_SET_VALUE(detectDoor_, detectDoor) };


    // subSceneId Field Functions 
    bool hasSubSceneId() const { return this->subSceneId_ != nullptr;};
    void deleteSubSceneId() { this->subSceneId_ = nullptr;};
    inline string subSceneId() const { DARABONBA_PTR_GET_DEFAULT(subSceneId_, "") };
    inline PredImageRequest& setSubSceneId(string subSceneId) { DARABONBA_PTR_SET_VALUE(subSceneId_, subSceneId) };


  protected:
    // This parameter is required.
    std::shared_ptr<bool> correctVertical_ = nullptr;
    std::shared_ptr<int64_t> countDetectDoor_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> detectDoor_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> subSceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
