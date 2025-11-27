// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPAREIMAGEFACESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPAREIMAGEFACESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CompareImageFacesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareImageFacesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Source, sourceShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CompareImageFacesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Source, sourceShrink_);
    };
    CompareImageFacesShrinkRequest() = default ;
    CompareImageFacesShrinkRequest(const CompareImageFacesShrinkRequest &) = default ;
    CompareImageFacesShrinkRequest(CompareImageFacesShrinkRequest &&) = default ;
    CompareImageFacesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareImageFacesShrinkRequest() = default ;
    CompareImageFacesShrinkRequest& operator=(const CompareImageFacesShrinkRequest &) = default ;
    CompareImageFacesShrinkRequest& operator=(CompareImageFacesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialConfigShrink_ == nullptr
        && return this->projectName_ == nullptr && return this->sourceShrink_ == nullptr; };
    // credentialConfigShrink Field Functions 
    bool hasCredentialConfigShrink() const { return this->credentialConfigShrink_ != nullptr;};
    void deleteCredentialConfigShrink() { this->credentialConfigShrink_ = nullptr;};
    inline string credentialConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialConfigShrink_, "") };
    inline CompareImageFacesShrinkRequest& setCredentialConfigShrink(string credentialConfigShrink) { DARABONBA_PTR_SET_VALUE(credentialConfigShrink_, credentialConfigShrink) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CompareImageFacesShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sourceShrink Field Functions 
    bool hasSourceShrink() const { return this->sourceShrink_ != nullptr;};
    void deleteSourceShrink() { this->sourceShrink_ = nullptr;};
    inline string sourceShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceShrink_, "") };
    inline CompareImageFacesShrinkRequest& setSourceShrink(string sourceShrink) { DARABONBA_PTR_SET_VALUE(sourceShrink_, sourceShrink) };


  protected:
    // **If you have no special requirements, leave this parameter empty.**
    // 
    // The authorization chain settings. For more information, see [Use authorization chains to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    std::shared_ptr<string> credentialConfigShrink_ = nullptr;
    // The name of the project. For more information, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The URLs of the two images for compression.
    std::shared_ptr<string> sourceShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
