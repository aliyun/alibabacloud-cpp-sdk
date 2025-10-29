// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTCERTIFICATEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTCERTIFICATEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ImportCertificateAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportCertificateAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(CertificateFile, certificateFileObject_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportCertificateAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(CertificateFile, certificateFileObject_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ImportCertificateAdvanceRequest() = default ;
    ImportCertificateAdvanceRequest(const ImportCertificateAdvanceRequest &) = default ;
    ImportCertificateAdvanceRequest(ImportCertificateAdvanceRequest &&) = default ;
    ImportCertificateAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportCertificateAdvanceRequest() = default ;
    ImportCertificateAdvanceRequest& operator=(const ImportCertificateAdvanceRequest &) = default ;
    ImportCertificateAdvanceRequest& operator=(ImportCertificateAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateFileObject_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->projectId_ == nullptr; };
    // certificateFileObject Field Functions 
    bool hasCertificateFileObject() const { return this->certificateFileObject_ != nullptr;};
    void deleteCertificateFileObject() { this->certificateFileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> certificateFileObject() const { DARABONBA_GET(certificateFileObject_) };
    inline ImportCertificateAdvanceRequest& setCertificateFileObject(shared_ptr<Darabonba::IStream> certificateFileObject) { DARABONBA_SET_VALUE(certificateFileObject_, certificateFileObject) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ImportCertificateAdvanceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ImportCertificateAdvanceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ImportCertificateAdvanceRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The certificate file to upload. Upload method: Upload the file by creating an InputStream.
    // 
    // This parameter is required.
    shared_ptr<Darabonba::IStream> certificateFileObject_ = nullptr;
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
