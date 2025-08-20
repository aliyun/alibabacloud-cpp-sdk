// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESPARKTEMPLATEFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESPARKTEMPLATEFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DeleteSparkTemplateFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSparkTemplateFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSparkTemplateFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    DeleteSparkTemplateFileRequest() = default ;
    DeleteSparkTemplateFileRequest(const DeleteSparkTemplateFileRequest &) = default ;
    DeleteSparkTemplateFileRequest(DeleteSparkTemplateFileRequest &&) = default ;
    DeleteSparkTemplateFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSparkTemplateFileRequest() = default ;
    DeleteSparkTemplateFileRequest& operator=(const DeleteSparkTemplateFileRequest &) = default ;
    DeleteSparkTemplateFileRequest& operator=(DeleteSparkTemplateFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->id_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DeleteSparkTemplateFileRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteSparkTemplateFileRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The ID of the template file to be deleted.
    // 
    // >  You can call the [GetSparkTemplateFullTree](https://help.aliyun.com/document_detail/456205.html) operation to query all template file IDs.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
