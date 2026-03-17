// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TERMQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TERMQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class TermQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TermQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ext, ext_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(sourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(targetLanguage, targetLanguage_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, TermQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ext, ext_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(sourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(targetLanguage, targetLanguage_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    TermQueryRequest() = default ;
    TermQueryRequest(const TermQueryRequest &) = default ;
    TermQueryRequest(TermQueryRequest &&) = default ;
    TermQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TermQueryRequest() = default ;
    TermQueryRequest& operator=(const TermQueryRequest &) = default ;
    TermQueryRequest& operator=(TermQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Ext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ext& obj) { 
        DARABONBA_ANY_TO_JSON(paramMap, paramMap_);
      };
      friend void from_json(const Darabonba::Json& j, Ext& obj) { 
        DARABONBA_ANY_FROM_JSON(paramMap, paramMap_);
      };
      Ext() = default ;
      Ext(const Ext &) = default ;
      Ext(Ext &&) = default ;
      Ext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ext() = default ;
      Ext& operator=(const Ext &) = default ;
      Ext& operator=(Ext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->paramMap_ == nullptr; };
      // paramMap Field Functions 
      bool hasParamMap() const { return this->paramMap_ != nullptr;};
      void deleteParamMap() { this->paramMap_ = nullptr;};
      inline       const Darabonba::Json & getParamMap() const { DARABONBA_GET(paramMap_) };
      Darabonba::Json & getParamMap() { DARABONBA_GET(paramMap_) };
      inline Ext& setParamMap(const Darabonba::Json & paramMap) { DARABONBA_SET_VALUE(paramMap_, paramMap) };
      inline Ext& setParamMap(Darabonba::Json && paramMap) { DARABONBA_SET_RVALUE(paramMap_, paramMap) };


    protected:
      Darabonba::Json paramMap_ {};
    };

    virtual bool empty() const override { return this->ext_ == nullptr
        && this->scene_ == nullptr && this->sourceLanguage_ == nullptr && this->targetLanguage_ == nullptr && this->text_ == nullptr && this->workspaceId_ == nullptr; };
    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline const TermQueryRequest::Ext & getExt() const { DARABONBA_PTR_GET_CONST(ext_, TermQueryRequest::Ext) };
    inline TermQueryRequest::Ext getExt() { DARABONBA_PTR_GET(ext_, TermQueryRequest::Ext) };
    inline TermQueryRequest& setExt(const TermQueryRequest::Ext & ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };
    inline TermQueryRequest& setExt(TermQueryRequest::Ext && ext) { DARABONBA_PTR_SET_RVALUE(ext_, ext) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline TermQueryRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline TermQueryRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string getTargetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline TermQueryRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline TermQueryRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline TermQueryRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<TermQueryRequest::Ext> ext_ {};
    // This parameter is required.
    shared_ptr<string> scene_ {};
    // This parameter is required.
    shared_ptr<string> sourceLanguage_ {};
    // This parameter is required.
    shared_ptr<string> targetLanguage_ {};
    shared_ptr<string> text_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
