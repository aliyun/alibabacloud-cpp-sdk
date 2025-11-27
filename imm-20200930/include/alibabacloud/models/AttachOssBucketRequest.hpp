// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHOSSBUCKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHOSSBUCKETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class AttachOSSBucketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachOSSBucketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(OSSBucket, OSSBucket_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, AttachOSSBucketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(OSSBucket, OSSBucket_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    AttachOSSBucketRequest() = default ;
    AttachOSSBucketRequest(const AttachOSSBucketRequest &) = default ;
    AttachOSSBucketRequest(AttachOSSBucketRequest &&) = default ;
    AttachOSSBucketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachOSSBucketRequest() = default ;
    AttachOSSBucketRequest& operator=(const AttachOSSBucketRequest &) = default ;
    AttachOSSBucketRequest& operator=(AttachOSSBucketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->OSSBucket_ == nullptr && return this->projectName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AttachOSSBucketRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // OSSBucket Field Functions 
    bool hasOSSBucket() const { return this->OSSBucket_ != nullptr;};
    void deleteOSSBucket() { this->OSSBucket_ = nullptr;};
    inline string OSSBucket() const { DARABONBA_PTR_GET_DEFAULT(OSSBucket_, "") };
    inline AttachOSSBucketRequest& setOSSBucket(string OSSBucket) { DARABONBA_PTR_SET_VALUE(OSSBucket_, OSSBucket) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline AttachOSSBucketRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The description of the binding. The description must be 1 to 128 characters in length. By default, no description is applied.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the OSS bucket in the same region as the project.
    // 
    // This parameter is required.
    std::shared_ptr<string> OSSBucket_ = nullptr;
    // The name of the project. For information about how to create a project, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
