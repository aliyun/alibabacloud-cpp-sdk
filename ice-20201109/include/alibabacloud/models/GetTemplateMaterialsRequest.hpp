// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEMATERIALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEMATERIALSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetTemplateMaterialsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateMaterialsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileList, fileList_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateMaterialsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileList, fileList_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    GetTemplateMaterialsRequest() = default ;
    GetTemplateMaterialsRequest(const GetTemplateMaterialsRequest &) = default ;
    GetTemplateMaterialsRequest(GetTemplateMaterialsRequest &&) = default ;
    GetTemplateMaterialsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateMaterialsRequest() = default ;
    GetTemplateMaterialsRequest& operator=(const GetTemplateMaterialsRequest &) = default ;
    GetTemplateMaterialsRequest& operator=(GetTemplateMaterialsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileList_ == nullptr
        && return this->templateId_ == nullptr; };
    // fileList Field Functions 
    bool hasFileList() const { return this->fileList_ != nullptr;};
    void deleteFileList() { this->fileList_ = nullptr;};
    inline string fileList() const { DARABONBA_PTR_GET_DEFAULT(fileList_, "") };
    inline GetTemplateMaterialsRequest& setFileList(string fileList) { DARABONBA_PTR_SET_VALUE(fileList_, fileList) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetTemplateMaterialsRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The materials that you want to query.
    std::shared_ptr<string> fileList_ = nullptr;
    // The template ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
