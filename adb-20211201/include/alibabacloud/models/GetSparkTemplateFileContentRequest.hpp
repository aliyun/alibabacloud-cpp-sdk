// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKTEMPLATEFILECONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKTEMPLATEFILECONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkTemplateFileContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkTemplateFileContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkTemplateFileContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    GetSparkTemplateFileContentRequest() = default ;
    GetSparkTemplateFileContentRequest(const GetSparkTemplateFileContentRequest &) = default ;
    GetSparkTemplateFileContentRequest(GetSparkTemplateFileContentRequest &&) = default ;
    GetSparkTemplateFileContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkTemplateFileContentRequest() = default ;
    GetSparkTemplateFileContentRequest& operator=(const GetSparkTemplateFileContentRequest &) = default ;
    GetSparkTemplateFileContentRequest& operator=(GetSparkTemplateFileContentRequest &&) = default ;
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
    inline GetSparkTemplateFileContentRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetSparkTemplateFileContentRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
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
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
