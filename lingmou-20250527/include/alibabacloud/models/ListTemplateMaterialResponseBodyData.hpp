// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATEMATERIALRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATEMATERIALRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class ListTemplateMaterialResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplateMaterialResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(bizType, bizType_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
      DARABONBA_PTR_TO_JSON(templateName, templateName_);
      DARABONBA_PTR_TO_JSON(templateURL, templateURL_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplateMaterialResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(bizType, bizType_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
      DARABONBA_PTR_FROM_JSON(templateName, templateName_);
      DARABONBA_PTR_FROM_JSON(templateURL, templateURL_);
    };
    ListTemplateMaterialResponseBodyData() = default ;
    ListTemplateMaterialResponseBodyData(const ListTemplateMaterialResponseBodyData &) = default ;
    ListTemplateMaterialResponseBodyData(ListTemplateMaterialResponseBodyData &&) = default ;
    ListTemplateMaterialResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplateMaterialResponseBodyData() = default ;
    ListTemplateMaterialResponseBodyData& operator=(const ListTemplateMaterialResponseBodyData &) = default ;
    ListTemplateMaterialResponseBodyData& operator=(ListTemplateMaterialResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && return this->templateId_ == nullptr && return this->templateName_ == nullptr && return this->templateURL_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline ListTemplateMaterialResponseBodyData& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListTemplateMaterialResponseBodyData& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListTemplateMaterialResponseBodyData& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string templateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline ListTemplateMaterialResponseBodyData& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


  protected:
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
    std::shared_ptr<string> templateURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
