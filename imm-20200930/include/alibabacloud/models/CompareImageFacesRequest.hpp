// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPAREIMAGEFACESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPAREIMAGEFACESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CredentialConfig.hpp>
#include <alibabacloud/models/CompareImageFacesRequestSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CompareImageFacesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareImageFacesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, CompareImageFacesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    CompareImageFacesRequest() = default ;
    CompareImageFacesRequest(const CompareImageFacesRequest &) = default ;
    CompareImageFacesRequest(CompareImageFacesRequest &&) = default ;
    CompareImageFacesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareImageFacesRequest() = default ;
    CompareImageFacesRequest& operator=(const CompareImageFacesRequest &) = default ;
    CompareImageFacesRequest& operator=(CompareImageFacesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->credentialConfig_ != nullptr
        && this->projectName_ != nullptr && this->source_ != nullptr; };
    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & credentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig credentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline CompareImageFacesRequest& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline CompareImageFacesRequest& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CompareImageFacesRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const CompareImageFacesRequestSource & source() const { DARABONBA_PTR_GET_CONST(source_, CompareImageFacesRequestSource) };
    inline CompareImageFacesRequestSource source() { DARABONBA_PTR_GET(source_, CompareImageFacesRequestSource) };
    inline CompareImageFacesRequest& setSource(const CompareImageFacesRequestSource & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline CompareImageFacesRequest& setSource(CompareImageFacesRequestSource && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


  protected:
    // **If you have no special requirements, leave this parameter empty.**
    // 
    // The authorization chain settings. For more information, see [Use authorization chains to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    std::shared_ptr<CredentialConfig> credentialConfig_ = nullptr;
    // The name of the project. For more information, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The URLs of the two images for compression.
    std::shared_ptr<CompareImageFacesRequestSource> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
