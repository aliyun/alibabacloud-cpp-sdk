// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SINKOSSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_SINKOSSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class SinkOSSParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SinkOSSParameters& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(CompressionType, compressionType_);
      DARABONBA_PTR_TO_JSON(ContentTransform, contentTransform_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(PathFormat, pathFormat_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(RotateIntervalMs, rotateIntervalMs_);
      DARABONBA_PTR_TO_JSON(RotateSizeBytes, rotateSizeBytes_);
      DARABONBA_PTR_TO_JSON(SSLEnabled, SSLEnabled_);
      DARABONBA_PTR_TO_JSON(TaskConcurrency, taskConcurrency_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, SinkOSSParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(CompressionType, compressionType_);
      DARABONBA_PTR_FROM_JSON(ContentTransform, contentTransform_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(PathFormat, pathFormat_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(RotateIntervalMs, rotateIntervalMs_);
      DARABONBA_PTR_FROM_JSON(RotateSizeBytes, rotateSizeBytes_);
      DARABONBA_PTR_FROM_JSON(SSLEnabled, SSLEnabled_);
      DARABONBA_PTR_FROM_JSON(TaskConcurrency, taskConcurrency_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
    };
    SinkOSSParameters() = default ;
    SinkOSSParameters(const SinkOSSParameters &) = default ;
    SinkOSSParameters(SinkOSSParameters &&) = default ;
    SinkOSSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SinkOSSParameters() = default ;
    SinkOSSParameters& operator=(const SinkOSSParameters &) = default ;
    SinkOSSParameters& operator=(SinkOSSParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ContentTransform : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContentTransform& obj) { 
        DARABONBA_PTR_TO_JSON(Form, form_);
        DARABONBA_PTR_TO_JSON(Template, template_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ContentTransform& obj) { 
        DARABONBA_PTR_FROM_JSON(Form, form_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      ContentTransform() = default ;
      ContentTransform(const ContentTransform &) = default ;
      ContentTransform(ContentTransform &&) = default ;
      ContentTransform(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContentTransform() = default ;
      ContentTransform& operator=(const ContentTransform &) = default ;
      ContentTransform& operator=(ContentTransform &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
      // form Field Functions 
      bool hasForm() const { return this->form_ != nullptr;};
      void deleteForm() { this->form_ = nullptr;};
      inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
      inline ContentTransform& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline ContentTransform& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline ContentTransform& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> form_ {};
      shared_ptr<string> template_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->compressionType_ == nullptr && this->contentTransform_ == nullptr && this->endpoint_ == nullptr && this->pathFormat_ == nullptr && this->regionId_ == nullptr
        && this->roleArn_ == nullptr && this->rotateIntervalMs_ == nullptr && this->rotateSizeBytes_ == nullptr && this->SSLEnabled_ == nullptr && this->taskConcurrency_ == nullptr
        && this->timeZone_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline SinkOSSParameters& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // compressionType Field Functions 
    bool hasCompressionType() const { return this->compressionType_ != nullptr;};
    void deleteCompressionType() { this->compressionType_ = nullptr;};
    inline string getCompressionType() const { DARABONBA_PTR_GET_DEFAULT(compressionType_, "") };
    inline SinkOSSParameters& setCompressionType(string compressionType) { DARABONBA_PTR_SET_VALUE(compressionType_, compressionType) };


    // contentTransform Field Functions 
    bool hasContentTransform() const { return this->contentTransform_ != nullptr;};
    void deleteContentTransform() { this->contentTransform_ = nullptr;};
    inline const SinkOSSParameters::ContentTransform & getContentTransform() const { DARABONBA_PTR_GET_CONST(contentTransform_, SinkOSSParameters::ContentTransform) };
    inline SinkOSSParameters::ContentTransform getContentTransform() { DARABONBA_PTR_GET(contentTransform_, SinkOSSParameters::ContentTransform) };
    inline SinkOSSParameters& setContentTransform(const SinkOSSParameters::ContentTransform & contentTransform) { DARABONBA_PTR_SET_VALUE(contentTransform_, contentTransform) };
    inline SinkOSSParameters& setContentTransform(SinkOSSParameters::ContentTransform && contentTransform) { DARABONBA_PTR_SET_RVALUE(contentTransform_, contentTransform) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline SinkOSSParameters& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // pathFormat Field Functions 
    bool hasPathFormat() const { return this->pathFormat_ != nullptr;};
    void deletePathFormat() { this->pathFormat_ = nullptr;};
    inline string getPathFormat() const { DARABONBA_PTR_GET_DEFAULT(pathFormat_, "") };
    inline SinkOSSParameters& setPathFormat(string pathFormat) { DARABONBA_PTR_SET_VALUE(pathFormat_, pathFormat) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SinkOSSParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline SinkOSSParameters& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // rotateIntervalMs Field Functions 
    bool hasRotateIntervalMs() const { return this->rotateIntervalMs_ != nullptr;};
    void deleteRotateIntervalMs() { this->rotateIntervalMs_ = nullptr;};
    inline string getRotateIntervalMs() const { DARABONBA_PTR_GET_DEFAULT(rotateIntervalMs_, "") };
    inline SinkOSSParameters& setRotateIntervalMs(string rotateIntervalMs) { DARABONBA_PTR_SET_VALUE(rotateIntervalMs_, rotateIntervalMs) };


    // rotateSizeBytes Field Functions 
    bool hasRotateSizeBytes() const { return this->rotateSizeBytes_ != nullptr;};
    void deleteRotateSizeBytes() { this->rotateSizeBytes_ = nullptr;};
    inline string getRotateSizeBytes() const { DARABONBA_PTR_GET_DEFAULT(rotateSizeBytes_, "") };
    inline SinkOSSParameters& setRotateSizeBytes(string rotateSizeBytes) { DARABONBA_PTR_SET_VALUE(rotateSizeBytes_, rotateSizeBytes) };


    // SSLEnabled Field Functions 
    bool hasSSLEnabled() const { return this->SSLEnabled_ != nullptr;};
    void deleteSSLEnabled() { this->SSLEnabled_ = nullptr;};
    inline bool getSSLEnabled() const { DARABONBA_PTR_GET_DEFAULT(SSLEnabled_, false) };
    inline SinkOSSParameters& setSSLEnabled(bool SSLEnabled) { DARABONBA_PTR_SET_VALUE(SSLEnabled_, SSLEnabled) };


    // taskConcurrency Field Functions 
    bool hasTaskConcurrency() const { return this->taskConcurrency_ != nullptr;};
    void deleteTaskConcurrency() { this->taskConcurrency_ = nullptr;};
    inline string getTaskConcurrency() const { DARABONBA_PTR_GET_DEFAULT(taskConcurrency_, "") };
    inline SinkOSSParameters& setTaskConcurrency(string taskConcurrency) { DARABONBA_PTR_SET_VALUE(taskConcurrency_, taskConcurrency) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline SinkOSSParameters& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    shared_ptr<string> bucketName_ {};
    shared_ptr<string> compressionType_ {};
    shared_ptr<SinkOSSParameters::ContentTransform> contentTransform_ {};
    shared_ptr<string> endpoint_ {};
    shared_ptr<string> pathFormat_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> roleArn_ {};
    shared_ptr<string> rotateIntervalMs_ {};
    shared_ptr<string> rotateSizeBytes_ {};
    shared_ptr<bool> SSLEnabled_ {};
    shared_ptr<string> taskConcurrency_ {};
    shared_ptr<string> timeZone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
