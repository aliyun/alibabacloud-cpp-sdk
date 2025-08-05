// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetTableInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(schemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(schemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetTableInfoRequest() = default ;
    GetTableInfoRequest(const GetTableInfoRequest &) = default ;
    GetTableInfoRequest(GetTableInfoRequest &&) = default ;
    GetTableInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableInfoRequest() = default ;
    GetTableInfoRequest& operator=(const GetTableInfoRequest &) = default ;
    GetTableInfoRequest& operator=(GetTableInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->schemaName_ != nullptr
        && this->type_ != nullptr; };
    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline GetTableInfoRequest& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetTableInfoRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the schema to which the table or view belongs.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The type of the table or view that you want to view. Valid values:
    // 
    // *   **internal**: internal table
    // *   **external**: external table
    // *   **view**: view
    // *   **materializedView**: [materialize view](https://www.alibabacloud.com/help/maxcompute/user-guide/materialized-view-operations)
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
