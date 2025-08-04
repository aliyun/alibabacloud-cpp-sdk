// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTMPUTASKREQUESTUSERPANES_HPP_
#define ALIBABACLOUD_MODELS_STARTMPUTASKREQUESTUSERPANES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartMPUTaskRequestUserPanesImages.hpp>
#include <alibabacloud/models/StartMPUTaskRequestUserPanesTexts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartMPUTaskRequestUserPanes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartMPUTaskRequestUserPanes& obj) { 
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(PaneId, paneId_);
      DARABONBA_PTR_TO_JSON(SegmentType, segmentType_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Texts, texts_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, StartMPUTaskRequestUserPanes& obj) { 
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(PaneId, paneId_);
      DARABONBA_PTR_FROM_JSON(SegmentType, segmentType_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Texts, texts_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    StartMPUTaskRequestUserPanes() = default ;
    StartMPUTaskRequestUserPanes(const StartMPUTaskRequestUserPanes &) = default ;
    StartMPUTaskRequestUserPanes(StartMPUTaskRequestUserPanes &&) = default ;
    StartMPUTaskRequestUserPanes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartMPUTaskRequestUserPanes() = default ;
    StartMPUTaskRequestUserPanes& operator=(const StartMPUTaskRequestUserPanes &) = default ;
    StartMPUTaskRequestUserPanes& operator=(StartMPUTaskRequestUserPanes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->images_ != nullptr
        && this->paneId_ != nullptr && this->segmentType_ != nullptr && this->sourceType_ != nullptr && this->texts_ != nullptr && this->userId_ != nullptr; };
    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<Models::StartMPUTaskRequestUserPanesImages> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<Models::StartMPUTaskRequestUserPanesImages>) };
    inline vector<Models::StartMPUTaskRequestUserPanesImages> images() { DARABONBA_PTR_GET(images_, vector<Models::StartMPUTaskRequestUserPanesImages>) };
    inline StartMPUTaskRequestUserPanes& setImages(const vector<Models::StartMPUTaskRequestUserPanesImages> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline StartMPUTaskRequestUserPanes& setImages(vector<Models::StartMPUTaskRequestUserPanesImages> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // paneId Field Functions 
    bool hasPaneId() const { return this->paneId_ != nullptr;};
    void deletePaneId() { this->paneId_ = nullptr;};
    inline int32_t paneId() const { DARABONBA_PTR_GET_DEFAULT(paneId_, 0) };
    inline StartMPUTaskRequestUserPanes& setPaneId(int32_t paneId) { DARABONBA_PTR_SET_VALUE(paneId_, paneId) };


    // segmentType Field Functions 
    bool hasSegmentType() const { return this->segmentType_ != nullptr;};
    void deleteSegmentType() { this->segmentType_ = nullptr;};
    inline int32_t segmentType() const { DARABONBA_PTR_GET_DEFAULT(segmentType_, 0) };
    inline StartMPUTaskRequestUserPanes& setSegmentType(int32_t segmentType) { DARABONBA_PTR_SET_VALUE(segmentType_, segmentType) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline StartMPUTaskRequestUserPanes& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // texts Field Functions 
    bool hasTexts() const { return this->texts_ != nullptr;};
    void deleteTexts() { this->texts_ = nullptr;};
    inline const vector<Models::StartMPUTaskRequestUserPanesTexts> & texts() const { DARABONBA_PTR_GET_CONST(texts_, vector<Models::StartMPUTaskRequestUserPanesTexts>) };
    inline vector<Models::StartMPUTaskRequestUserPanesTexts> texts() { DARABONBA_PTR_GET(texts_, vector<Models::StartMPUTaskRequestUserPanesTexts>) };
    inline StartMPUTaskRequestUserPanes& setTexts(const vector<Models::StartMPUTaskRequestUserPanesTexts> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
    inline StartMPUTaskRequestUserPanes& setTexts(vector<Models::StartMPUTaskRequestUserPanesTexts> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline StartMPUTaskRequestUserPanes& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<vector<Models::StartMPUTaskRequestUserPanesImages>> images_ = nullptr;
    std::shared_ptr<int32_t> paneId_ = nullptr;
    std::shared_ptr<int32_t> segmentType_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
    std::shared_ptr<vector<Models::StartMPUTaskRequestUserPanesTexts>> texts_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
