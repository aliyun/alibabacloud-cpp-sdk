// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class UpdateDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UpdateModel, updateModel_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UpdateModel, updateModel_);
    };
    UpdateDataSourceRequest() = default ;
    UpdateDataSourceRequest(const UpdateDataSourceRequest &) = default ;
    UpdateDataSourceRequest(UpdateDataSourceRequest &&) = default ;
    UpdateDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataSourceRequest() = default ;
    UpdateDataSourceRequest& operator=(const UpdateDataSourceRequest &) = default ;
    UpdateDataSourceRequest& operator=(UpdateDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->updateModel_ == nullptr; };
    // updateModel Field Functions 
    bool hasUpdateModel() const { return this->updateModel_ != nullptr;};
    void deleteUpdateModel() { this->updateModel_ = nullptr;};
    inline string updateModel() const { DARABONBA_PTR_GET_DEFAULT(updateModel_, "") };
    inline UpdateDataSourceRequest& setUpdateModel(string updateModel) { DARABONBA_PTR_SET_VALUE(updateModel_, updateModel) };


  protected:
    // Refer to the example JSON for parameter values. The parameters are explained as follows:
    // 
    // - dsId  --  Required  --  Data source ID
    // - userId -- Optional -- User identity for modifying the data source, quickbi\\"s userId. If provided, it will use the current userId for modification.
    // - dsType -- Required -- Data source type, not allowed to be modified, just pass the data source type.
    // - showName -- Optional -- Display name of the data source.
    // - address -- Optional -- Database connection string (domain or IP)
    // - port -- Optional -- Port
    // - schema --  Optional --  Database schema, only required for databases that support schemas. Example: sqlserver uses dbo by default; mysql does not support schemas.
    // - instance -- Optional -- Instance db
    // - username -- Optional -- Database username/ak
    // - password -- Optional -- Database key
    // - config -- Optional -- Additional database configuration items. Note that this data should be consistent with the different config parameters passed during creation for different data sources. Fields that do not need to be modified do not require parameters. For fields where parameters are passed, the default is to modify according to the passed parameters (including empty strings).
    // 
    // This parameter is required.
    std::shared_ptr<string> updateModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
