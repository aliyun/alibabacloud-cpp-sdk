// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVODTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVODTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListVodTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVodTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VodTemplateInfoList, vodTemplateInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, ListVodTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VodTemplateInfoList, vodTemplateInfoList_);
    };
    ListVodTemplateResponseBody() = default ;
    ListVodTemplateResponseBody(const ListVodTemplateResponseBody &) = default ;
    ListVodTemplateResponseBody(ListVodTemplateResponseBody &&) = default ;
    ListVodTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVodTemplateResponseBody() = default ;
    ListVodTemplateResponseBody& operator=(const ListVodTemplateResponseBody &) = default ;
    ListVodTemplateResponseBody& operator=(ListVodTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VodTemplateInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VodTemplateInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
        DARABONBA_PTR_TO_JSON(VodTemplateId, vodTemplateId_);
      };
      friend void from_json(const Darabonba::Json& j, VodTemplateInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
        DARABONBA_PTR_FROM_JSON(VodTemplateId, vodTemplateId_);
      };
      VodTemplateInfoList() = default ;
      VodTemplateInfoList(const VodTemplateInfoList &) = default ;
      VodTemplateInfoList(VodTemplateInfoList &&) = default ;
      VodTemplateInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VodTemplateInfoList() = default ;
      VodTemplateInfoList& operator=(const VodTemplateInfoList &) = default ;
      VodTemplateInfoList& operator=(VodTemplateInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->creationTime_ == nullptr && this->isDefault_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr && this->templateConfig_ == nullptr
        && this->templateType_ == nullptr && this->vodTemplateId_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline VodTemplateInfoList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline VodTemplateInfoList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline string getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
      inline VodTemplateInfoList& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline VodTemplateInfoList& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline VodTemplateInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // templateConfig Field Functions 
      bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
      void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
      inline string getTemplateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
      inline VodTemplateInfoList& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline VodTemplateInfoList& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


      // vodTemplateId Field Functions 
      bool hasVodTemplateId() const { return this->vodTemplateId_ != nullptr;};
      void deleteVodTemplateId() { this->vodTemplateId_ = nullptr;};
      inline string getVodTemplateId() const { DARABONBA_PTR_GET_DEFAULT(vodTemplateId_, "") };
      inline VodTemplateInfoList& setVodTemplateId(string vodTemplateId) { DARABONBA_PTR_SET_VALUE(vodTemplateId_, vodTemplateId) };


    protected:
      // The ID of the application.
      shared_ptr<string> appId_ {};
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
        && this->vodTemplateInfoList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVodTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vodTemplateInfoList Field Functions 
    bool hasVodTemplateInfoList() const { return this->vodTemplateInfoList_ != nullptr;};
    void deleteVodTemplateInfoList() { this->vodTemplateInfoList_ = nullptr;};
    inline const vector<ListVodTemplateResponseBody::VodTemplateInfoList> & getVodTemplateInfoList() const { DARABONBA_PTR_GET_CONST(vodTemplateInfoList_, vector<ListVodTemplateResponseBody::VodTemplateInfoList>) };
    inline vector<ListVodTemplateResponseBody::VodTemplateInfoList> getVodTemplateInfoList() { DARABONBA_PTR_GET(vodTemplateInfoList_, vector<ListVodTemplateResponseBody::VodTemplateInfoList>) };
    inline ListVodTemplateResponseBody& setVodTemplateInfoList(const vector<ListVodTemplateResponseBody::VodTemplateInfoList> & vodTemplateInfoList) { DARABONBA_PTR_SET_VALUE(vodTemplateInfoList_, vodTemplateInfoList) };
    inline ListVodTemplateResponseBody& setVodTemplateInfoList(vector<ListVodTemplateResponseBody::VodTemplateInfoList> && vodTemplateInfoList) { DARABONBA_PTR_SET_RVALUE(vodTemplateInfoList_, vodTemplateInfoList) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The snapshot templates.
    shared_ptr<vector<ListVodTemplateResponseBody::VodTemplateInfoList>> vodTemplateInfoList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
