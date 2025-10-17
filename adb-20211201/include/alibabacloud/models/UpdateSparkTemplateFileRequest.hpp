// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESPARKTEMPLATEFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESPARKTEMPLATEFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class UpdateSparkTemplateFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSparkTemplateFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSparkTemplateFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
    };
    UpdateSparkTemplateFileRequest() = default ;
    UpdateSparkTemplateFileRequest(const UpdateSparkTemplateFileRequest &) = default ;
    UpdateSparkTemplateFileRequest(UpdateSparkTemplateFileRequest &&) = default ;
    UpdateSparkTemplateFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSparkTemplateFileRequest() = default ;
    UpdateSparkTemplateFileRequest& operator=(const UpdateSparkTemplateFileRequest &) = default ;
    UpdateSparkTemplateFileRequest& operator=(UpdateSparkTemplateFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->DBClusterId_ == nullptr && return this->id_ == nullptr && return this->resourceGroupName_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateSparkTemplateFileRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline UpdateSparkTemplateFileRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateSparkTemplateFileRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline UpdateSparkTemplateFileRequest& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


  protected:
    // The template data to be updated.
    // 
    // >  If you do not specify this parameter, the application template is not updated. For information about how to configure a Spark application template, see [Configure a Spark application](https://help.aliyun.com/document_detail/452402.html).
    std::shared_ptr<string> content_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The application template ID.
    // 
    // >  You can call the [GetSparkTemplateFullTree](https://help.aliyun.com/document_detail/456205.html) operation to query the application template ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the job resource group.
    std::shared_ptr<string> resourceGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
