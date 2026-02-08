// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTMATERIALFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTMATERIALFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ExportMaterialFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportMaterialFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(FileIds, fileIds_);
    };
    friend void from_json(const Darabonba::Json& j, ExportMaterialFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(FileIds, fileIds_);
    };
    ExportMaterialFileRequest() = default ;
    ExportMaterialFileRequest(const ExportMaterialFileRequest &) = default ;
    ExportMaterialFileRequest(ExportMaterialFileRequest &&) = default ;
    ExportMaterialFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportMaterialFileRequest() = default ;
    ExportMaterialFileRequest& operator=(const ExportMaterialFileRequest &) = default ;
    ExportMaterialFileRequest& operator=(ExportMaterialFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->fileIds_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline ExportMaterialFileRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // fileIds Field Functions 
    bool hasFileIds() const { return this->fileIds_ != nullptr;};
    void deleteFileIds() { this->fileIds_ = nullptr;};
    inline const vector<string> & getFileIds() const { DARABONBA_PTR_GET_CONST(fileIds_, vector<string>) };
    inline vector<string> getFileIds() { DARABONBA_PTR_GET(fileIds_, vector<string>) };
    inline ExportMaterialFileRequest& setFileIds(const vector<string> & fileIds) { DARABONBA_PTR_SET_VALUE(fileIds_, fileIds) };
    inline ExportMaterialFileRequest& setFileIds(vector<string> && fileIds) { DARABONBA_PTR_SET_RVALUE(fileIds_, fileIds) };


  protected:
    // This parameter is required.
    shared_ptr<string> bizId_ {};
    // This parameter is required.
    shared_ptr<vector<string>> fileIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
