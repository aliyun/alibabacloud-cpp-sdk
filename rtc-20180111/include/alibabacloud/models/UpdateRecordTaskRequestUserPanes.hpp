// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERECORDTASKREQUESTUSERPANES_HPP_
#define ALIBABACLOUD_MODELS_UPDATERECORDTASKREQUESTUSERPANES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateRecordTaskRequestUserPanesImages.hpp>
#include <alibabacloud/models/UpdateRecordTaskRequestUserPanesTexts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class UpdateRecordTaskRequestUserPanes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRecordTaskRequestUserPanes& obj) { 
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(PaneId, paneId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Texts, texts_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRecordTaskRequestUserPanes& obj) { 
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(PaneId, paneId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Texts, texts_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    UpdateRecordTaskRequestUserPanes() = default ;
    UpdateRecordTaskRequestUserPanes(const UpdateRecordTaskRequestUserPanes &) = default ;
    UpdateRecordTaskRequestUserPanes(UpdateRecordTaskRequestUserPanes &&) = default ;
    UpdateRecordTaskRequestUserPanes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRecordTaskRequestUserPanes() = default ;
    UpdateRecordTaskRequestUserPanes& operator=(const UpdateRecordTaskRequestUserPanes &) = default ;
    UpdateRecordTaskRequestUserPanes& operator=(UpdateRecordTaskRequestUserPanes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->images_ == nullptr
        && return this->paneId_ == nullptr && return this->sourceType_ == nullptr && return this->texts_ == nullptr && return this->userId_ == nullptr; };
    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<Models::UpdateRecordTaskRequestUserPanesImages> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<Models::UpdateRecordTaskRequestUserPanesImages>) };
    inline vector<Models::UpdateRecordTaskRequestUserPanesImages> images() { DARABONBA_PTR_GET(images_, vector<Models::UpdateRecordTaskRequestUserPanesImages>) };
    inline UpdateRecordTaskRequestUserPanes& setImages(const vector<Models::UpdateRecordTaskRequestUserPanesImages> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline UpdateRecordTaskRequestUserPanes& setImages(vector<Models::UpdateRecordTaskRequestUserPanesImages> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // paneId Field Functions 
    bool hasPaneId() const { return this->paneId_ != nullptr;};
    void deletePaneId() { this->paneId_ = nullptr;};
    inline int32_t paneId() const { DARABONBA_PTR_GET_DEFAULT(paneId_, 0) };
    inline UpdateRecordTaskRequestUserPanes& setPaneId(int32_t paneId) { DARABONBA_PTR_SET_VALUE(paneId_, paneId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdateRecordTaskRequestUserPanes& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // texts Field Functions 
    bool hasTexts() const { return this->texts_ != nullptr;};
    void deleteTexts() { this->texts_ = nullptr;};
    inline const vector<Models::UpdateRecordTaskRequestUserPanesTexts> & texts() const { DARABONBA_PTR_GET_CONST(texts_, vector<Models::UpdateRecordTaskRequestUserPanesTexts>) };
    inline vector<Models::UpdateRecordTaskRequestUserPanesTexts> texts() { DARABONBA_PTR_GET(texts_, vector<Models::UpdateRecordTaskRequestUserPanesTexts>) };
    inline UpdateRecordTaskRequestUserPanes& setTexts(const vector<Models::UpdateRecordTaskRequestUserPanesTexts> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
    inline UpdateRecordTaskRequestUserPanes& setTexts(vector<Models::UpdateRecordTaskRequestUserPanesTexts> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UpdateRecordTaskRequestUserPanes& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<vector<Models::UpdateRecordTaskRequestUserPanesImages>> images_ = nullptr;
    std::shared_ptr<int32_t> paneId_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
    std::shared_ptr<vector<Models::UpdateRecordTaskRequestUserPanesTexts>> texts_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
