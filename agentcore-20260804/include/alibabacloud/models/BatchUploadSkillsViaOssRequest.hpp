// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPLOADSKILLSVIAOSSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPLOADSKILLSVIAOSSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class BatchUploadSkillsViaOssRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUploadSkillsViaOssRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUploadSkillsViaOssRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    BatchUploadSkillsViaOssRequest() = default ;
    BatchUploadSkillsViaOssRequest(const BatchUploadSkillsViaOssRequest &) = default ;
    BatchUploadSkillsViaOssRequest(BatchUploadSkillsViaOssRequest &&) = default ;
    BatchUploadSkillsViaOssRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUploadSkillsViaOssRequest() = default ;
    BatchUploadSkillsViaOssRequest& operator=(const BatchUploadSkillsViaOssRequest &) = default ;
    BatchUploadSkillsViaOssRequest& operator=(BatchUploadSkillsViaOssRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(ossObjectName, ossObjectName_);
        DARABONBA_PTR_TO_JSON(overwrite, overwrite_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(ossObjectName, ossObjectName_);
        DARABONBA_PTR_FROM_JSON(overwrite, overwrite_);
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
      virtual bool empty() const override { return this->ossObjectName_ == nullptr
        && this->overwrite_ == nullptr; };
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


    protected:
      // The OSS object name (path).
      // 
      // This parameter is required.
      shared_ptr<string> ossObjectName_ {};
      // Specifies whether to overwrite an existing Skill. Default value: false.
      shared_ptr<bool> overwrite_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const BatchUploadSkillsViaOssRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, BatchUploadSkillsViaOssRequest::Body) };
    inline BatchUploadSkillsViaOssRequest::Body getBody() { DARABONBA_PTR_GET(body_, BatchUploadSkillsViaOssRequest::Body) };
    inline BatchUploadSkillsViaOssRequest& setBody(const BatchUploadSkillsViaOssRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline BatchUploadSkillsViaOssRequest& setBody(BatchUploadSkillsViaOssRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body.
    shared_ptr<BatchUploadSkillsViaOssRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
