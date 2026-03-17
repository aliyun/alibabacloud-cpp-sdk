// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TERMEDITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TERMEDITREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Ext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ext& obj) { 
        DARABONBA_ANY_TO_JSON(paramMap, paramMap_);
        DARABONBA_PTR_TO_JSON(terms, terms_);
      };
      friend void from_json(const Darabonba::Json& j, Ext& obj) { 
        DARABONBA_ANY_FROM_JSON(paramMap, paramMap_);
        DARABONBA_PTR_FROM_JSON(terms, terms_);
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
      class Terms : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Terms& obj) { 
          DARABONBA_PTR_TO_JSON(src, src_);
          DARABONBA_PTR_TO_JSON(termId, termId_);
          DARABONBA_PTR_TO_JSON(tgt, tgt_);
        };
        friend void from_json(const Darabonba::Json& j, Terms& obj) { 
          DARABONBA_PTR_FROM_JSON(src, src_);
          DARABONBA_PTR_FROM_JSON(termId, termId_);
          DARABONBA_PTR_FROM_JSON(tgt, tgt_);
        };
        Terms() = default ;
        Terms(const Terms &) = default ;
        Terms(Terms &&) = default ;
        Terms(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Terms() = default ;
        Terms& operator=(const Terms &) = default ;
        Terms& operator=(Terms &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->src_ == nullptr
        && this->termId_ == nullptr && this->tgt_ == nullptr; };
        // src Field Functions 
        bool hasSrc() const { return this->src_ != nullptr;};
        void deleteSrc() { this->src_ = nullptr;};
        inline string getSrc() const { DARABONBA_PTR_GET_DEFAULT(src_, "") };
        inline Terms& setSrc(string src) { DARABONBA_PTR_SET_VALUE(src_, src) };


        // termId Field Functions 
        bool hasTermId() const { return this->termId_ != nullptr;};
        void deleteTermId() { this->termId_ = nullptr;};
        inline string getTermId() const { DARABONBA_PTR_GET_DEFAULT(termId_, "") };
        inline Terms& setTermId(string termId) { DARABONBA_PTR_SET_VALUE(termId_, termId) };


        // tgt Field Functions 
        bool hasTgt() const { return this->tgt_ != nullptr;};
        void deleteTgt() { this->tgt_ = nullptr;};
        inline string getTgt() const { DARABONBA_PTR_GET_DEFAULT(tgt_, "") };
        inline Terms& setTgt(string tgt) { DARABONBA_PTR_SET_VALUE(tgt_, tgt) };


      protected:
        // This parameter is required.
        shared_ptr<string> src_ {};
        shared_ptr<string> termId_ {};
        // This parameter is required.
        shared_ptr<string> tgt_ {};
      };

      virtual bool empty() const override { return this->paramMap_ == nullptr
        && this->terms_ == nullptr; };
      // paramMap Field Functions 
      bool hasParamMap() const { return this->paramMap_ != nullptr;};
      void deleteParamMap() { this->paramMap_ = nullptr;};
      inline       const Darabonba::Json & getParamMap() const { DARABONBA_GET(paramMap_) };
      Darabonba::Json & getParamMap() { DARABONBA_GET(paramMap_) };
      inline Ext& setParamMap(const Darabonba::Json & paramMap) { DARABONBA_SET_VALUE(paramMap_, paramMap) };
      inline Ext& setParamMap(Darabonba::Json && paramMap) { DARABONBA_SET_RVALUE(paramMap_, paramMap) };


      // terms Field Functions 
      bool hasTerms() const { return this->terms_ != nullptr;};
      void deleteTerms() { this->terms_ = nullptr;};
      inline const vector<Ext::Terms> & getTerms() const { DARABONBA_PTR_GET_CONST(terms_, vector<Ext::Terms>) };
      inline vector<Ext::Terms> getTerms() { DARABONBA_PTR_GET(terms_, vector<Ext::Terms>) };
      inline Ext& setTerms(const vector<Ext::Terms> & terms) { DARABONBA_PTR_SET_VALUE(terms_, terms) };
      inline Ext& setTerms(vector<Ext::Terms> && terms) { DARABONBA_PTR_SET_RVALUE(terms_, terms) };


    protected:
      Darabonba::Json paramMap_ {};
      // This parameter is required.
      shared_ptr<vector<Ext::Terms>> terms_ {};
    };

    virtual bool empty() const override { return this->action_ == nullptr
        && this->ext_ == nullptr && this->scene_ == nullptr && this->sourceLanguage_ == nullptr && this->targetLanguage_ == nullptr && this->workspaceId_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline TermEditRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline const TermEditRequest::Ext & getExt() const { DARABONBA_PTR_GET_CONST(ext_, TermEditRequest::Ext) };
    inline TermEditRequest::Ext getExt() { DARABONBA_PTR_GET(ext_, TermEditRequest::Ext) };
    inline TermEditRequest& setExt(const TermEditRequest::Ext & ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };
    inline TermEditRequest& setExt(TermEditRequest::Ext && ext) { DARABONBA_PTR_SET_RVALUE(ext_, ext) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline TermEditRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline TermEditRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string getTargetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline TermEditRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline TermEditRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> action_ {};
    // This parameter is required.
    shared_ptr<TermEditRequest::Ext> ext_ {};
    // This parameter is required.
    shared_ptr<string> scene_ {};
    // This parameter is required.
    shared_ptr<string> sourceLanguage_ {};
    // This parameter is required.
    shared_ptr<string> targetLanguage_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
