// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACESEMANTICVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPLACESEMANTICVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ReplaceSemanticViewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceSemanticViewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Definition, definition_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(ViewName, viewName_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceSemanticViewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Definition, definition_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(ViewName, viewName_);
    };
    ReplaceSemanticViewRequest() = default ;
    ReplaceSemanticViewRequest(const ReplaceSemanticViewRequest &) = default ;
    ReplaceSemanticViewRequest(ReplaceSemanticViewRequest &&) = default ;
    ReplaceSemanticViewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceSemanticViewRequest() = default ;
    ReplaceSemanticViewRequest& operator=(const ReplaceSemanticViewRequest &) = default ;
    ReplaceSemanticViewRequest& operator=(ReplaceSemanticViewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->definition_ == nullptr && this->schemaName_ == nullptr && this->viewName_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ReplaceSemanticViewRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string getDefinition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline ReplaceSemanticViewRequest& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ReplaceSemanticViewRequest& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // viewName Field Functions 
    bool hasViewName() const { return this->viewName_ != nullptr;};
    void deleteViewName() { this->viewName_ = nullptr;};
    inline string getViewName() const { DARABONBA_PTR_GET_DEFAULT(viewName_, "") };
    inline ReplaceSemanticViewRequest& setViewName(string viewName) { DARABONBA_PTR_SET_VALUE(viewName_, viewName) };


  protected:
    // The ID of the AnalyticDB for MySQL cluster.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The definition of the semantic view.
    // 
    // This parameter is required.
    shared_ptr<string> definition_ {};
    // The name of the schema.
    // 
    // This parameter is required.
    shared_ptr<string> schemaName_ {};
    // The name of the semantic view.
    // 
    // This parameter is required.
    shared_ptr<string> viewName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
