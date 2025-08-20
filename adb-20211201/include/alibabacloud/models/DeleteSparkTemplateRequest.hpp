// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESPARKTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESPARKTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DeleteSparkTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSparkTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSparkTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    DeleteSparkTemplateRequest() = default ;
    DeleteSparkTemplateRequest(const DeleteSparkTemplateRequest &) = default ;
    DeleteSparkTemplateRequest(DeleteSparkTemplateRequest &&) = default ;
    DeleteSparkTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSparkTemplateRequest() = default ;
    DeleteSparkTemplateRequest& operator=(const DeleteSparkTemplateRequest &) = default ;
    DeleteSparkTemplateRequest& operator=(DeleteSparkTemplateRequest &&) = default ;
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
    inline DeleteSparkTemplateRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteSparkTemplateRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The directory ID or application ID of the template files that you want to delete.
    // 
    // > 
    // 
    // *   You can call the [GetSparkTemplateFullTree](https://help.aliyun.com/document_detail/612467.html) operation to query the directory ID or application ID.
    // 
    // *   When you specify a directory ID, the directory and all template files that are included in the directory are deleted.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
