// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TERMEDITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TERMEDITREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TermEditRequestExt.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class TermEditRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TermEditRequest& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(ext, ext_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(sourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(targetLanguage, targetLanguage_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, TermEditRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(ext, ext_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(sourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(targetLanguage, targetLanguage_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    TermEditRequest() = default ;
    TermEditRequest(const TermEditRequest &) = default ;
    TermEditRequest(TermEditRequest &&) = default ;
    TermEditRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TermEditRequest() = default ;
    TermEditRequest& operator=(const TermEditRequest &) = default ;
    TermEditRequest& operator=(TermEditRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->ext_ != nullptr && this->scene_ != nullptr && this->sourceLanguage_ != nullptr && this->targetLanguage_ != nullptr && this->workspaceId_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline TermEditRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline const TermEditRequestExt & ext() const { DARABONBA_PTR_GET_CONST(ext_, TermEditRequestExt) };
    inline TermEditRequestExt ext() { DARABONBA_PTR_GET(ext_, TermEditRequestExt) };
    inline TermEditRequest& setExt(const TermEditRequestExt & ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };
    inline TermEditRequest& setExt(TermEditRequestExt && ext) { DARABONBA_PTR_SET_RVALUE(ext_, ext) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline TermEditRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string sourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline TermEditRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string targetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline TermEditRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline TermEditRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> action_ = nullptr;
    // This parameter is required.
    std::shared_ptr<TermEditRequestExt> ext_ = nullptr;
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
