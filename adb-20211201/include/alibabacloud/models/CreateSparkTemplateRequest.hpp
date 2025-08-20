// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESPARKTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESPARKTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateSparkTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSparkTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSparkTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateSparkTemplateRequest() = default ;
    CreateSparkTemplateRequest(const CreateSparkTemplateRequest &) = default ;
    CreateSparkTemplateRequest(CreateSparkTemplateRequest &&) = default ;
    CreateSparkTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSparkTemplateRequest() = default ;
    CreateSparkTemplateRequest& operator=(const CreateSparkTemplateRequest &) = default ;
    CreateSparkTemplateRequest& operator=(CreateSparkTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appType_ != nullptr
        && this->DBClusterId_ != nullptr && this->name_ != nullptr && this->parentId_ != nullptr && this->type_ != nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline CreateSparkTemplateRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateSparkTemplateRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSparkTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline CreateSparkTemplateRequest& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateSparkTemplateRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The application type. Valid values:
    // 
    // *   **SQL**
    // *   **STREAMING**
    // *   **BATCH**
    // 
    // >  You do not need to specify this parameter when Type is set to folder.
    std::shared_ptr<string> appType_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The name of the application template. The name can be up to 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the directory to which the application template belongs.
    // 
    // >  You can call the [GetSparkTemplateFolderTree](https://help.aliyun.com/document_detail/456218.html) operation to query the directory ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> parentId_ = nullptr;
    // The type of the application template. Valid values:
    // 
    // *   **folder**: directory.
    // *   **file**: application.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
