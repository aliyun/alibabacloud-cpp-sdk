// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROWPERMISSIONRESPONSEBODYPAGERESULTDATATABLES_HPP_
#define ALIBABACLOUD_MODELS_LISTROWPERMISSIONRESPONSEBODYPAGERESULTDATATABLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListRowPermissionResponseBodyPageResultDataTables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRowPermissionResponseBodyPageResultDataTables& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(MappingColumnName, mappingColumnName_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRowPermissionResponseBodyPageResultDataTables& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(MappingColumnName, mappingColumnName_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    ListRowPermissionResponseBodyPageResultDataTables() = default ;
    ListRowPermissionResponseBodyPageResultDataTables(const ListRowPermissionResponseBodyPageResultDataTables &) = default ;
    ListRowPermissionResponseBodyPageResultDataTables(ListRowPermissionResponseBodyPageResultDataTables &&) = default ;
    ListRowPermissionResponseBodyPageResultDataTables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRowPermissionResponseBodyPageResultDataTables() = default ;
    ListRowPermissionResponseBodyPageResultDataTables& operator=(const ListRowPermissionResponseBodyPageResultDataTables &) = default ;
    ListRowPermissionResponseBodyPageResultDataTables& operator=(ListRowPermissionResponseBodyPageResultDataTables &&) = default ;
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
    inline ListRowPermissionResponseBodyPageResultDataTables& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // mappingColumnName Field Functions 
    bool hasMappingColumnName() const { return this->mappingColumnName_ != nullptr;};
    void deleteMappingColumnName() { this->mappingColumnName_ = nullptr;};
    inline string mappingColumnName() const { DARABONBA_PTR_GET_DEFAULT(mappingColumnName_, "") };
    inline ListRowPermissionResponseBodyPageResultDataTables& setMappingColumnName(string mappingColumnName) { DARABONBA_PTR_SET_VALUE(mappingColumnName_, mappingColumnName) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListRowPermissionResponseBodyPageResultDataTables& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    std::shared_ptr<string> columnName_ = nullptr;
    std::shared_ptr<string> mappingColumnName_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
