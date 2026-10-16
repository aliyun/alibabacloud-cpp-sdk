// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCANSBOMEXPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCANSBOMEXPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CodeSec20260401
{
namespace Models
{
  class CreateScanSbomExportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScanSbomExportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(format, format_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScanSbomExportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(format, format_);
    };
    CreateScanSbomExportRequest() = default ;
    CreateScanSbomExportRequest(const CreateScanSbomExportRequest &) = default ;
    CreateScanSbomExportRequest(CreateScanSbomExportRequest &&) = default ;
    CreateScanSbomExportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScanSbomExportRequest() = default ;
    CreateScanSbomExportRequest& operator=(const CreateScanSbomExportRequest &) = default ;
    CreateScanSbomExportRequest& operator=(CreateScanSbomExportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && this->format_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateScanSbomExportRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline CreateScanSbomExportRequest& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


  protected:
    // The file name (including the extension) for the downloaded file. The file name is signed into the Content-Disposition header of the URL. If you leave this parameter empty, the backend generates a file name in the format of project name-sbom-<format>.<extension>. If the file name contains control characters or path separators (/ or \\), or if the length exceeds 255 characters, a 400 InvalidFileName error is returned.
    shared_ptr<string> fileName_ {};
    // Valid values:
    // * cyclonedx-json
    // * spdx-json
    // 
    // This parameter is required.
    shared_ptr<string> format_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CodeSec20260401
#endif
