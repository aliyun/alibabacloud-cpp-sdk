// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADSKILLVIAOSSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADSKILLVIAOSSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class UploadSkillViaOssRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadSkillViaOssRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UploadSkillViaOssRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UploadSkillViaOssRequest() = default ;
    UploadSkillViaOssRequest(const UploadSkillViaOssRequest &) = default ;
    UploadSkillViaOssRequest(UploadSkillViaOssRequest &&) = default ;
    UploadSkillViaOssRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadSkillViaOssRequest() = default ;
    UploadSkillViaOssRequest& operator=(const UploadSkillViaOssRequest &) = default ;
    UploadSkillViaOssRequest& operator=(UploadSkillViaOssRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(commitMsg, commitMsg_);
        DARABONBA_PTR_TO_JSON(ossObjectName, ossObjectName_);
        DARABONBA_PTR_TO_JSON(overwrite, overwrite_);
        DARABONBA_PTR_TO_JSON(targetVersion, targetVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(commitMsg, commitMsg_);
        DARABONBA_PTR_FROM_JSON(ossObjectName, ossObjectName_);
        DARABONBA_PTR_FROM_JSON(overwrite, overwrite_);
        DARABONBA_PTR_FROM_JSON(targetVersion, targetVersion_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->commitMsg_ == nullptr
        && this->ossObjectName_ == nullptr && this->overwrite_ == nullptr && this->targetVersion_ == nullptr; };
      // commitMsg Field Functions 
      bool hasCommitMsg() const { return this->commitMsg_ != nullptr;};
      void deleteCommitMsg() { this->commitMsg_ = nullptr;};
      inline string getCommitMsg() const { DARABONBA_PTR_GET_DEFAULT(commitMsg_, "") };
      inline Body& setCommitMsg(string commitMsg) { DARABONBA_PTR_SET_VALUE(commitMsg_, commitMsg) };


      // ossObjectName Field Functions 
      bool hasOssObjectName() const { return this->ossObjectName_ != nullptr;};
      void deleteOssObjectName() { this->ossObjectName_ = nullptr;};
      inline string getOssObjectName() const { DARABONBA_PTR_GET_DEFAULT(ossObjectName_, "") };
      inline Body& setOssObjectName(string ossObjectName) { DARABONBA_PTR_SET_VALUE(ossObjectName_, ossObjectName) };


      // overwrite Field Functions 
      bool hasOverwrite() const { return this->overwrite_ != nullptr;};
      void deleteOverwrite() { this->overwrite_ = nullptr;};
      inline bool getOverwrite() const { DARABONBA_PTR_GET_DEFAULT(overwrite_, false) };
      inline Body& setOverwrite(bool overwrite) { DARABONBA_PTR_SET_VALUE(overwrite_, overwrite) };


      // targetVersion Field Functions 
      bool hasTargetVersion() const { return this->targetVersion_ != nullptr;};
      void deleteTargetVersion() { this->targetVersion_ = nullptr;};
      inline string getTargetVersion() const { DARABONBA_PTR_GET_DEFAULT(targetVersion_, "") };
      inline Body& setTargetVersion(string targetVersion) { DARABONBA_PTR_SET_VALUE(targetVersion_, targetVersion) };


    protected:
      // The commit message. This parameter is optional.
      shared_ptr<string> commitMsg_ {};
      // The OSS object name (path).
      // 
      // This parameter is required.
      shared_ptr<string> ossObjectName_ {};
      // Specifies whether to overwrite an existing Skill. Default value: false.
      shared_ptr<bool> overwrite_ {};
      // The upload version number. This parameter is optional and used as a fallback when the ZIP package contains no version information.
      shared_ptr<string> targetVersion_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UploadSkillViaOssRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, UploadSkillViaOssRequest::Body) };
    inline UploadSkillViaOssRequest::Body getBody() { DARABONBA_PTR_GET(body_, UploadSkillViaOssRequest::Body) };
    inline UploadSkillViaOssRequest& setBody(const UploadSkillViaOssRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UploadSkillViaOssRequest& setBody(UploadSkillViaOssRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body.
    shared_ptr<UploadSkillViaOssRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
