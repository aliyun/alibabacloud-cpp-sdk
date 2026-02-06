// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVODTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVODTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetVodTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVodTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VodTemplateInfo, vodTemplateInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetVodTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VodTemplateInfo, vodTemplateInfo_);
    };
    GetVodTemplateResponseBody() = default ;
    GetVodTemplateResponseBody(const GetVodTemplateResponseBody &) = default ;
    GetVodTemplateResponseBody(GetVodTemplateResponseBody &&) = default ;
    GetVodTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVodTemplateResponseBody() = default ;
    GetVodTemplateResponseBody& operator=(const GetVodTemplateResponseBody &) = default ;
    GetVodTemplateResponseBody& operator=(GetVodTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VodTemplateInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VodTemplateInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
        DARABONBA_PTR_TO_JSON(VodTemplateId, vodTemplateId_);
      };
      friend void from_json(const Darabonba::Json& j, VodTemplateInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
        DARABONBA_PTR_FROM_JSON(VodTemplateId, vodTemplateId_);
      };
      VodTemplateInfo() = default ;
      VodTemplateInfo(const VodTemplateInfo &) = default ;
      VodTemplateInfo(VodTemplateInfo &&) = default ;
      VodTemplateInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VodTemplateInfo() = default ;
      VodTemplateInfo& operator=(const VodTemplateInfo &) = default ;
      VodTemplateInfo& operator=(VodTemplateInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->isDefault_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr && this->templateConfig_ == nullptr && this->templateType_ == nullptr
        && this->vodTemplateId_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline VodTemplateInfo& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline string getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
      inline VodTemplateInfo& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline VodTemplateInfo& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline VodTemplateInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // templateConfig Field Functions 
      bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
      void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
      inline string getTemplateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
      inline VodTemplateInfo& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline VodTemplateInfo& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


      // vodTemplateId Field Functions 
      bool hasVodTemplateId() const { return this->vodTemplateId_ != nullptr;};
      void deleteVodTemplateId() { this->vodTemplateId_ = nullptr;};
      inline string getVodTemplateId() const { DARABONBA_PTR_GET_DEFAULT(vodTemplateId_, "") };
      inline VodTemplateInfo& setVodTemplateId(string vodTemplateId) { DARABONBA_PTR_SET_VALUE(vodTemplateId_, vodTemplateId) };


    protected:
      // The time when the template was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // Indicates whether the template is the default one. Valid values:
      // 
      // *   **Default**: The template is the default one.
      // *   **NotDefault**: The template is not the default one.
      shared_ptr<string> isDefault_ {};
      // The time when the template was modified. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> modifyTime_ {};
      // The name of the template.
      shared_ptr<string> name_ {};
      // The detailed configurations of the template. The value is a JSON-formatted string. For more information about the data structure, see the "SnapshotTemplateConfig" section of the [Media processing parameters](https://help.aliyun.com/document_detail/98618.html) topic.
      shared_ptr<string> templateConfig_ {};
      // The type of the template. Valid values:
      // 
      // *   **Snapshot**
      // *   **DynamicImage**
      shared_ptr<string> templateType_ {};
      // The ID of the template.
      shared_ptr<string> vodTemplateId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->vodTemplateInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVodTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vodTemplateInfo Field Functions 
    bool hasVodTemplateInfo() const { return this->vodTemplateInfo_ != nullptr;};
    void deleteVodTemplateInfo() { this->vodTemplateInfo_ = nullptr;};
    inline const GetVodTemplateResponseBody::VodTemplateInfo & getVodTemplateInfo() const { DARABONBA_PTR_GET_CONST(vodTemplateInfo_, GetVodTemplateResponseBody::VodTemplateInfo) };
    inline GetVodTemplateResponseBody::VodTemplateInfo getVodTemplateInfo() { DARABONBA_PTR_GET(vodTemplateInfo_, GetVodTemplateResponseBody::VodTemplateInfo) };
    inline GetVodTemplateResponseBody& setVodTemplateInfo(const GetVodTemplateResponseBody::VodTemplateInfo & vodTemplateInfo) { DARABONBA_PTR_SET_VALUE(vodTemplateInfo_, vodTemplateInfo) };
    inline GetVodTemplateResponseBody& setVodTemplateInfo(GetVodTemplateResponseBody::VodTemplateInfo && vodTemplateInfo) { DARABONBA_PTR_SET_RVALUE(vodTemplateInfo_, vodTemplateInfo) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the snapshot template.
    shared_ptr<GetVodTemplateResponseBody::VodTemplateInfo> vodTemplateInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
