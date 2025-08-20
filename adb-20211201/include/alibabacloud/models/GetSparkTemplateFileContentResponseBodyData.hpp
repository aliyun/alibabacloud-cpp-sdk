// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKTEMPLATEFILECONTENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKTEMPLATEFILECONTENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkTemplateFileContentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkTemplateFileContentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkTemplateFileContentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetSparkTemplateFileContentResponseBodyData() = default ;
    GetSparkTemplateFileContentResponseBodyData(const GetSparkTemplateFileContentResponseBodyData &) = default ;
    GetSparkTemplateFileContentResponseBodyData(GetSparkTemplateFileContentResponseBodyData &&) = default ;
    GetSparkTemplateFileContentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkTemplateFileContentResponseBodyData() = default ;
    GetSparkTemplateFileContentResponseBodyData& operator=(const GetSparkTemplateFileContentResponseBodyData &) = default ;
    GetSparkTemplateFileContentResponseBodyData& operator=(GetSparkTemplateFileContentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appType_ != nullptr
        && this->content_ != nullptr && this->id_ != nullptr && this->resourceGroupName_ != nullptr && this->type_ != nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline GetSparkTemplateFileContentResponseBodyData& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetSparkTemplateFileContentResponseBodyData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetSparkTemplateFileContentResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline GetSparkTemplateFileContentResponseBodyData& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetSparkTemplateFileContentResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The application type. Valid values:
    // 
    // *   **SQL**
    // *   **STREAMING**
    // *   **BATCH**
    std::shared_ptr<string> appType_ = nullptr;
    // The content of the application template.
    std::shared_ptr<string> content_ = nullptr;
    // The application template ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the resource group.
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    // The file type. Valid values:
    // 
    // *   **folder**
    // *   **file**
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
