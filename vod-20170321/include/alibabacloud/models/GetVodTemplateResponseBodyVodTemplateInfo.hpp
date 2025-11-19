// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVODTEMPLATERESPONSEBODYVODTEMPLATEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETVODTEMPLATERESPONSEBODYVODTEMPLATEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetVodTemplateResponseBodyVodTemplateInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVodTemplateResponseBodyVodTemplateInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(VodTemplateId, vodTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVodTemplateResponseBodyVodTemplateInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(VodTemplateId, vodTemplateId_);
    };
    GetVodTemplateResponseBodyVodTemplateInfo() = default ;
    GetVodTemplateResponseBodyVodTemplateInfo(const GetVodTemplateResponseBodyVodTemplateInfo &) = default ;
    GetVodTemplateResponseBodyVodTemplateInfo(GetVodTemplateResponseBodyVodTemplateInfo &&) = default ;
    GetVodTemplateResponseBodyVodTemplateInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVodTemplateResponseBodyVodTemplateInfo() = default ;
    GetVodTemplateResponseBodyVodTemplateInfo& operator=(const GetVodTemplateResponseBodyVodTemplateInfo &) = default ;
    GetVodTemplateResponseBodyVodTemplateInfo& operator=(GetVodTemplateResponseBodyVodTemplateInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->isDefault_ == nullptr && return this->modifyTime_ == nullptr && return this->name_ == nullptr && return this->templateConfig_ == nullptr && return this->templateType_ == nullptr
        && return this->vodTemplateId_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetVodTemplateResponseBodyVodTemplateInfo& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline string isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
    inline GetVodTemplateResponseBodyVodTemplateInfo& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline GetVodTemplateResponseBodyVodTemplateInfo& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetVodTemplateResponseBodyVodTemplateInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline string templateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
    inline GetVodTemplateResponseBodyVodTemplateInfo& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline GetVodTemplateResponseBodyVodTemplateInfo& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // vodTemplateId Field Functions 
    bool hasVodTemplateId() const { return this->vodTemplateId_ != nullptr;};
    void deleteVodTemplateId() { this->vodTemplateId_ = nullptr;};
    inline string vodTemplateId() const { DARABONBA_PTR_GET_DEFAULT(vodTemplateId_, "") };
    inline GetVodTemplateResponseBodyVodTemplateInfo& setVodTemplateId(string vodTemplateId) { DARABONBA_PTR_SET_VALUE(vodTemplateId_, vodTemplateId) };


  protected:
    // The time when the template was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // Indicates whether the template is the default one. Valid values:
    // 
    // *   **Default**: The template is the default one.
    // *   **NotDefault**: The template is not the default one.
    std::shared_ptr<string> isDefault_ = nullptr;
    // The time when the template was modified. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The name of the template.
    std::shared_ptr<string> name_ = nullptr;
    // The detailed configurations of the template. The value is a JSON-formatted string. For more information about the data structure, see the "SnapshotTemplateConfig" section of the [Media processing parameters](https://help.aliyun.com/document_detail/98618.html) topic.
    std::shared_ptr<string> templateConfig_ = nullptr;
    // The type of the template. Valid values:
    // 
    // *   **Snapshot**
    // *   **DynamicImage**
    std::shared_ptr<string> templateType_ = nullptr;
    // The ID of the template.
    std::shared_ptr<string> vodTemplateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
