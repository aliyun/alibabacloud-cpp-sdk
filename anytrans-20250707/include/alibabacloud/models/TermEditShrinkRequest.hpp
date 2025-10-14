// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TERMEDITSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TERMEDITSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class TermEditShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TermEditShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(ext, extShrink_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(sourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(targetLanguage, targetLanguage_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, TermEditShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(ext, extShrink_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(sourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(targetLanguage, targetLanguage_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    TermEditShrinkRequest() = default ;
    TermEditShrinkRequest(const TermEditShrinkRequest &) = default ;
    TermEditShrinkRequest(TermEditShrinkRequest &&) = default ;
    TermEditShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TermEditShrinkRequest() = default ;
    TermEditShrinkRequest& operator=(const TermEditShrinkRequest &) = default ;
    TermEditShrinkRequest& operator=(TermEditShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->extShrink_ == nullptr && return this->scene_ == nullptr && return this->sourceLanguage_ == nullptr && return this->targetLanguage_ == nullptr && return this->workspaceId_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline TermEditShrinkRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // extShrink Field Functions 
    bool hasExtShrink() const { return this->extShrink_ != nullptr;};
    void deleteExtShrink() { this->extShrink_ = nullptr;};
    inline string extShrink() const { DARABONBA_PTR_GET_DEFAULT(extShrink_, "") };
    inline TermEditShrinkRequest& setExtShrink(string extShrink) { DARABONBA_PTR_SET_VALUE(extShrink_, extShrink) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline TermEditShrinkRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string sourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline TermEditShrinkRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string targetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline TermEditShrinkRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline TermEditShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> action_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> extShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scene_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceLanguage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetLanguage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
