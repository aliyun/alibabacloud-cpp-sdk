// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETABLEADDCOLUMNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETABLEADDCOLUMNREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateTableAddColumnRequestColumn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateTableAddColumnRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTableAddColumnRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Column, column_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTableAddColumnRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Column, column_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
    };
    UpdateTableAddColumnRequest() = default ;
    UpdateTableAddColumnRequest(const UpdateTableAddColumnRequest &) = default ;
    UpdateTableAddColumnRequest(UpdateTableAddColumnRequest &&) = default ;
    UpdateTableAddColumnRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTableAddColumnRequest() = default ;
    UpdateTableAddColumnRequest& operator=(const UpdateTableAddColumnRequest &) = default ;
    UpdateTableAddColumnRequest& operator=(UpdateTableAddColumnRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->column_ != nullptr
        && this->tableGuid_ != nullptr; };
    // column Field Functions 
    bool hasColumn() const { return this->column_ != nullptr;};
    void deleteColumn() { this->column_ = nullptr;};
    inline const vector<UpdateTableAddColumnRequestColumn> & column() const { DARABONBA_PTR_GET_CONST(column_, vector<UpdateTableAddColumnRequestColumn>) };
    inline vector<UpdateTableAddColumnRequestColumn> column() { DARABONBA_PTR_GET(column_, vector<UpdateTableAddColumnRequestColumn>) };
    inline UpdateTableAddColumnRequest& setColumn(const vector<UpdateTableAddColumnRequestColumn> & column) { DARABONBA_PTR_SET_VALUE(column_, column) };
    inline UpdateTableAddColumnRequest& setColumn(vector<UpdateTableAddColumnRequestColumn> && column) { DARABONBA_PTR_SET_RVALUE(column_, column) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string tableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline UpdateTableAddColumnRequest& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


  protected:
    // The fields.
    // 
    // This parameter is required.
    std::shared_ptr<vector<UpdateTableAddColumnRequestColumn>> column_ = nullptr;
    // The globally unique identifier (GUID) of the MaxCompute table. Specify the GUID in the odps.projectName.tableName format.
    // 
    // This parameter is required.
    std::shared_ptr<string> tableGuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
