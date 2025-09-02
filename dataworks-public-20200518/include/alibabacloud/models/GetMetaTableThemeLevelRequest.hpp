// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLETHEMELEVELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLETHEMELEVELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaTableThemeLevelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableThemeLevelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableThemeLevelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
    };
    GetMetaTableThemeLevelRequest() = default ;
    GetMetaTableThemeLevelRequest(const GetMetaTableThemeLevelRequest &) = default ;
    GetMetaTableThemeLevelRequest(GetMetaTableThemeLevelRequest &&) = default ;
    GetMetaTableThemeLevelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableThemeLevelRequest() = default ;
    GetMetaTableThemeLevelRequest& operator=(const GetMetaTableThemeLevelRequest &) = default ;
    GetMetaTableThemeLevelRequest& operator=(GetMetaTableThemeLevelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSourceType_ != nullptr
        && this->tableGuid_ != nullptr; };
    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline GetMetaTableThemeLevelRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string tableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline GetMetaTableThemeLevelRequest& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


  protected:
    // The type of the data source. Set the value to odps.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataSourceType_ = nullptr;
    // The GUID of the metatable. Specify the GUID in the format of odps.${projectName}.${tableName}.
    // 
    // This parameter is required.
    std::shared_ptr<string> tableGuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
