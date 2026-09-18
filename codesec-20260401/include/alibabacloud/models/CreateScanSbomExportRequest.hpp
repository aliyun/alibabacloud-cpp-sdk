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
    // 选填。指定下载落盘的文件名（含扩展名），会签进下载地址的 Content-Disposition。
    // 留空时后端按 `项目名-sbom-<format>.<扩展名>` 生成默认值。
    // 不得含控制字符或路径分隔符（`/`、`\`）、长度不超过 255，否则 → 400 **`InvalidFileName`**。
    shared_ptr<string> fileName_ {};
    // 闭合枚举，须是该次扫描 **`artifacts`** 里 **`status=success`** 的 **`artifact_kind`**。
    // 未知值 → 400 **`InvalidArtifactFormat`**，且绝不参与 OSS key 构造。
    // 
    // This parameter is required.
    shared_ptr<string> format_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CodeSec20260401
#endif
