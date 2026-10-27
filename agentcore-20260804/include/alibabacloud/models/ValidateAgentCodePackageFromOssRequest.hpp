// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATEAGENTCODEPACKAGEFROMOSSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATEAGENTCODEPACKAGEFROMOSSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ValidateAgentCodePackageFromOssRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateAgentCodePackageFromOssRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateAgentCodePackageFromOssRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ValidateAgentCodePackageFromOssRequest() = default ;
    ValidateAgentCodePackageFromOssRequest(const ValidateAgentCodePackageFromOssRequest &) = default ;
    ValidateAgentCodePackageFromOssRequest(ValidateAgentCodePackageFromOssRequest &&) = default ;
    ValidateAgentCodePackageFromOssRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateAgentCodePackageFromOssRequest() = default ;
    ValidateAgentCodePackageFromOssRequest& operator=(const ValidateAgentCodePackageFromOssRequest &) = default ;
    ValidateAgentCodePackageFromOssRequest& operator=(ValidateAgentCodePackageFromOssRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(ossBucketName, ossBucketName_);
        DARABONBA_PTR_TO_JSON(ossObjectName, ossObjectName_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(ossBucketName, ossBucketName_);
        DARABONBA_PTR_FROM_JSON(ossObjectName, ossObjectName_);
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
      virtual bool empty() const override { return this->ossBucketName_ == nullptr
        && this->ossObjectName_ == nullptr; };
      // ossBucketName Field Functions 
      bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
      void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
      inline string getOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
      inline Body& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


      // ossObjectName Field Functions 
      bool hasOssObjectName() const { return this->ossObjectName_ != nullptr;};
      void deleteOssObjectName() { this->ossObjectName_ = nullptr;};
      inline string getOssObjectName() const { DARABONBA_PTR_GET_DEFAULT(ossObjectName_, "") };
      inline Body& setOssObjectName(string ossObjectName) { DARABONBA_PTR_SET_VALUE(ossObjectName_, ossObjectName) };


    protected:
      // The name of the source OSS bucket.
      // 
      // This parameter is required.
      shared_ptr<string> ossBucketName_ {};
      // The full object key of the source code package.
      // 
      // This parameter is required.
      shared_ptr<string> ossObjectName_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ValidateAgentCodePackageFromOssRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, ValidateAgentCodePackageFromOssRequest::Body) };
    inline ValidateAgentCodePackageFromOssRequest::Body getBody() { DARABONBA_PTR_GET(body_, ValidateAgentCodePackageFromOssRequest::Body) };
    inline ValidateAgentCodePackageFromOssRequest& setBody(const ValidateAgentCodePackageFromOssRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ValidateAgentCodePackageFromOssRequest& setBody(ValidateAgentCodePackageFromOssRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body.
    // 
    // This parameter is required.
    shared_ptr<ValidateAgentCodePackageFromOssRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
