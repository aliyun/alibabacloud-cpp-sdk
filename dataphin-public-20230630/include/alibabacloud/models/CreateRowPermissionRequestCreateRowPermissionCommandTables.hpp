// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROWPERMISSIONREQUESTCREATEROWPERMISSIONCOMMANDTABLES_HPP_
#define ALIBABACLOUD_MODELS_CREATEROWPERMISSIONREQUESTCREATEROWPERMISSIONCOMMANDTABLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateRowPermissionRequestCreateRowPermissionCommandTables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRowPermissionRequestCreateRowPermissionCommandTables& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(MappingColumnName, mappingColumnName_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRowPermissionRequestCreateRowPermissionCommandTables& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(MappingColumnName, mappingColumnName_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    CreateRowPermissionRequestCreateRowPermissionCommandTables() = default ;
    CreateRowPermissionRequestCreateRowPermissionCommandTables(const CreateRowPermissionRequestCreateRowPermissionCommandTables &) = default ;
    CreateRowPermissionRequestCreateRowPermissionCommandTables(CreateRowPermissionRequestCreateRowPermissionCommandTables &&) = default ;
    CreateRowPermissionRequestCreateRowPermissionCommandTables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRowPermissionRequestCreateRowPermissionCommandTables() = default ;
    CreateRowPermissionRequestCreateRowPermissionCommandTables& operator=(const CreateRowPermissionRequestCreateRowPermissionCommandTables &) = default ;
    CreateRowPermissionRequestCreateRowPermissionCommandTables& operator=(CreateRowPermissionRequestCreateRowPermissionCommandTables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnName_ != nullptr
        && this->mappingColumnName_ != nullptr && this->resourceId_ != nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline CreateRowPermissionRequestCreateRowPermissionCommandTables& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // mappingColumnName Field Functions 
    bool hasMappingColumnName() const { return this->mappingColumnName_ != nullptr;};
    void deleteMappingColumnName() { this->mappingColumnName_ = nullptr;};
    inline string mappingColumnName() const { DARABONBA_PTR_GET_DEFAULT(mappingColumnName_, "") };
    inline CreateRowPermissionRequestCreateRowPermissionCommandTables& setMappingColumnName(string mappingColumnName) { DARABONBA_PTR_SET_VALUE(mappingColumnName_, mappingColumnName) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CreateRowPermissionRequestCreateRowPermissionCommandTables& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> columnName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mappingColumnName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
