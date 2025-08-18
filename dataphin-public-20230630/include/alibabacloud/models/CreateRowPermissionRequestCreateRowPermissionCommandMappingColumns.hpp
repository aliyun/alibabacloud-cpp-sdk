// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROWPERMISSIONREQUESTCREATEROWPERMISSIONCOMMANDMAPPINGCOLUMNS_HPP_
#define ALIBABACLOUD_MODELS_CREATEROWPERMISSIONREQUESTCREATEROWPERMISSIONCOMMANDMAPPINGCOLUMNS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateRowPermissionRequestCreateRowPermissionCommandMappingColumns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRowPermissionRequestCreateRowPermissionCommandMappingColumns& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnDesc, columnDesc_);
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRowPermissionRequestCreateRowPermissionCommandMappingColumns& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnDesc, columnDesc_);
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
    };
    CreateRowPermissionRequestCreateRowPermissionCommandMappingColumns() = default ;
    CreateRowPermissionRequestCreateRowPermissionCommandMappingColumns(const CreateRowPermissionRequestCreateRowPermissionCommandMappingColumns &) = default ;
    CreateRowPermissionRequestCreateRowPermissionCommandMappingColumns(CreateRowPermissionRequestCreateRowPermissionCommandMappingColumns &&) = default ;
    CreateRowPermissionRequestCreateRowPermissionCommandMappingColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRowPermissionRequestCreateRowPermissionCommandMappingColumns() = default ;
    CreateRowPermissionRequestCreateRowPermissionCommandMappingColumns& operator=(const CreateRowPermissionRequestCreateRowPermissionCommandMappingColumns &) = default ;
    CreateRowPermissionRequestCreateRowPermissionCommandMappingColumns& operator=(CreateRowPermissionRequestCreateRowPermissionCommandMappingColumns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnDesc_ != nullptr
        && this->columnName_ != nullptr && this->columnType_ != nullptr; };
    // columnDesc Field Functions 
    bool hasColumnDesc() const { return this->columnDesc_ != nullptr;};
    void deleteColumnDesc() { this->columnDesc_ = nullptr;};
    inline string columnDesc() const { DARABONBA_PTR_GET_DEFAULT(columnDesc_, "") };
    inline CreateRowPermissionRequestCreateRowPermissionCommandMappingColumns& setColumnDesc(string columnDesc) { DARABONBA_PTR_SET_VALUE(columnDesc_, columnDesc) };


    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline CreateRowPermissionRequestCreateRowPermissionCommandMappingColumns& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // columnType Field Functions 
    bool hasColumnType() const { return this->columnType_ != nullptr;};
    void deleteColumnType() { this->columnType_ = nullptr;};
    inline string columnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
    inline CreateRowPermissionRequestCreateRowPermissionCommandMappingColumns& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


  protected:
    std::shared_ptr<string> columnDesc_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> columnName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> columnType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
