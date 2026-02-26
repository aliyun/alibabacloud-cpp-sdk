// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPAREIMAGEFACESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPAREIMAGEFACESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CredentialConfig.hpp>
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
    class Source : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Source& obj) { 
        DARABONBA_PTR_TO_JSON(URI1, URI1_);
        DARABONBA_PTR_TO_JSON(URI2, URI2_);
      };
      friend void from_json(const Darabonba::Json& j, Source& obj) { 
        DARABONBA_PTR_FROM_JSON(URI1, URI1_);
        DARABONBA_PTR_FROM_JSON(URI2, URI2_);
      };
      Source() = default ;
      Source(const Source &) = default ;
      Source(Source &&) = default ;
      Source(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Source() = default ;
      Source& operator=(const Source &) = default ;
      Source& operator=(Source &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->URI1_ == nullptr
        && this->URI2_ == nullptr; };
      // URI1 Field Functions 
      bool hasURI1() const { return this->URI1_ != nullptr;};
      void deleteURI1() { this->URI1_ = nullptr;};
      inline string getURI1() const { DARABONBA_PTR_GET_DEFAULT(URI1_, "") };
      inline Source& setURI1(string URI1) { DARABONBA_PTR_SET_VALUE(URI1_, URI1) };


      // URI2 Field Functions 
      bool hasURI2() const { return this->URI2_ != nullptr;};
      void deleteURI2() { this->URI2_ = nullptr;};
      inline string getURI2() const { DARABONBA_PTR_GET_DEFAULT(URI2_, "") };
      inline Source& setURI2(string URI2) { DARABONBA_PTR_SET_VALUE(URI2_, URI2) };


    protected:
      // The OSS URL of the image file.
      // 
      // Specify the URL in the `oss://<bucket>/<object>` format. `<bucket>` specifies the name of the OSS bucket that is in the same region as the current project. `<object>` specifies path of the object with the extension included.
      shared_ptr<string> URI1_ {};
      // The OSS URL of the image file.
      // 
      // Specify the URL in the `oss://<bucket>/<object>` format. `<bucket>` specifies the name of the OSS bucket that is in the same region as the current project, and `<object>` specifies the path of the object with the extension included.
      shared_ptr<string> URI2_ {};
    };

    virtual bool empty() const override { return this->credentialConfig_ == nullptr
        && this->projectName_ == nullptr && this->source_ == nullptr; };
    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & getCredentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig getCredentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline CompareImageFacesRequest& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline CompareImageFacesRequest& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CompareImageFacesRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const CompareImageFacesRequest::Source & getSource() const { DARABONBA_PTR_GET_CONST(source_, CompareImageFacesRequest::Source) };
    inline CompareImageFacesRequest::Source getSource() { DARABONBA_PTR_GET(source_, CompareImageFacesRequest::Source) };
    inline CompareImageFacesRequest& setSource(const CompareImageFacesRequest::Source & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline CompareImageFacesRequest& setSource(CompareImageFacesRequest::Source && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


  protected:
    // **If you have no special requirements, leave this parameter empty.**
    // 
    // The authorization chain settings. For more information, see [Use authorization chains to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    shared_ptr<CredentialConfig> credentialConfig_ {};
    // The name of the project. For more information, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The URLs of the two images for compression.
    shared_ptr<CompareImageFacesRequest::Source> source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
