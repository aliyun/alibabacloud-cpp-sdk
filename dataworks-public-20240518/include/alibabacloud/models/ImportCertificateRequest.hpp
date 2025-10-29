// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ImportCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateFile, certificateFile_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateFile, certificateFile_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ImportCertificateRequest() = default ;
    ImportCertificateRequest(const ImportCertificateRequest &) = default ;
    ImportCertificateRequest(ImportCertificateRequest &&) = default ;
    ImportCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportCertificateRequest() = default ;
    ImportCertificateRequest& operator=(const ImportCertificateRequest &) = default ;
    ImportCertificateRequest& operator=(ImportCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateFile_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->projectId_ == nullptr; };
    // certificateFile Field Functions 
    bool hasCertificateFile() const { return this->certificateFile_ != nullptr;};
    void deleteCertificateFile() { this->certificateFile_ = nullptr;};
    inline string certificateFile() const { DARABONBA_PTR_GET_DEFAULT(certificateFile_, "") };
    inline ImportCertificateRequest& setCertificateFile(string certificateFile) { DARABONBA_PTR_SET_VALUE(certificateFile_, certificateFile) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ImportCertificateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ImportCertificateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ImportCertificateRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The certificate file to upload. Upload method: Upload the file by creating an InputStream.
    // 
    // This parameter is required.
    std::shared_ptr<string> certificateFile_ = nullptr;
    // The description of the task.
    std::shared_ptr<string> description_ = nullptr;
    // The certificate file name. In a project workspace, certificate file names must be unique.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the workspace to which the certificate file belongs.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
