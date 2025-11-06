// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVIEWLAYOUTREQUESTPANES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVIEWLAYOUTREQUESTPANES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyViewLayoutRequestPanesImages.hpp>
#include <alibabacloud/models/ModifyViewLayoutRequestPanesTexts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyViewLayoutRequestPanes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyViewLayoutRequestPanes& obj) { 
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(PaneCropMode, paneCropMode_);
      DARABONBA_PTR_TO_JSON(PaneId, paneId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Texts, texts_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyViewLayoutRequestPanes& obj) { 
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(PaneCropMode, paneCropMode_);
      DARABONBA_PTR_FROM_JSON(PaneId, paneId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Texts, texts_);
    };
    ModifyViewLayoutRequestPanes() = default ;
    ModifyViewLayoutRequestPanes(const ModifyViewLayoutRequestPanes &) = default ;
    ModifyViewLayoutRequestPanes(ModifyViewLayoutRequestPanes &&) = default ;
    ModifyViewLayoutRequestPanes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyViewLayoutRequestPanes() = default ;
    ModifyViewLayoutRequestPanes& operator=(const ModifyViewLayoutRequestPanes &) = default ;
    ModifyViewLayoutRequestPanes& operator=(ModifyViewLayoutRequestPanes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->images_ == nullptr
        && return this->paneCropMode_ == nullptr && return this->paneId_ == nullptr && return this->source_ == nullptr && return this->sourceType_ == nullptr && return this->texts_ == nullptr; };
    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<Models::ModifyViewLayoutRequestPanesImages> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<Models::ModifyViewLayoutRequestPanesImages>) };
    inline vector<Models::ModifyViewLayoutRequestPanesImages> images() { DARABONBA_PTR_GET(images_, vector<Models::ModifyViewLayoutRequestPanesImages>) };
    inline ModifyViewLayoutRequestPanes& setImages(const vector<Models::ModifyViewLayoutRequestPanesImages> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline ModifyViewLayoutRequestPanes& setImages(vector<Models::ModifyViewLayoutRequestPanesImages> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // paneCropMode Field Functions 
    bool hasPaneCropMode() const { return this->paneCropMode_ != nullptr;};
    void deletePaneCropMode() { this->paneCropMode_ = nullptr;};
    inline int32_t paneCropMode() const { DARABONBA_PTR_GET_DEFAULT(paneCropMode_, 0) };
    inline ModifyViewLayoutRequestPanes& setPaneCropMode(int32_t paneCropMode) { DARABONBA_PTR_SET_VALUE(paneCropMode_, paneCropMode) };


    // paneId Field Functions 
    bool hasPaneId() const { return this->paneId_ != nullptr;};
    void deletePaneId() { this->paneId_ = nullptr;};
    inline string paneId() const { DARABONBA_PTR_GET_DEFAULT(paneId_, "") };
    inline ModifyViewLayoutRequestPanes& setPaneId(string paneId) { DARABONBA_PTR_SET_VALUE(paneId_, paneId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ModifyViewLayoutRequestPanes& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ModifyViewLayoutRequestPanes& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // texts Field Functions 
    bool hasTexts() const { return this->texts_ != nullptr;};
    void deleteTexts() { this->texts_ = nullptr;};
    inline const vector<Models::ModifyViewLayoutRequestPanesTexts> & texts() const { DARABONBA_PTR_GET_CONST(texts_, vector<Models::ModifyViewLayoutRequestPanesTexts>) };
    inline vector<Models::ModifyViewLayoutRequestPanesTexts> texts() { DARABONBA_PTR_GET(texts_, vector<Models::ModifyViewLayoutRequestPanesTexts>) };
    inline ModifyViewLayoutRequestPanes& setTexts(const vector<Models::ModifyViewLayoutRequestPanesTexts> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
    inline ModifyViewLayoutRequestPanes& setTexts(vector<Models::ModifyViewLayoutRequestPanesTexts> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


  protected:
    std::shared_ptr<vector<Models::ModifyViewLayoutRequestPanesImages>> images_ = nullptr;
    std::shared_ptr<int32_t> paneCropMode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> paneId_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
    std::shared_ptr<vector<Models::ModifyViewLayoutRequestPanesTexts>> texts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
