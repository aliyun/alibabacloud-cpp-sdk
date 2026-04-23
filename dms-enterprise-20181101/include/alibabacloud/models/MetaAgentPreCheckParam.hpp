// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METAAGENTPRECHECKPARAM_HPP_
#define ALIBABACLOUD_MODELS_METAAGENTPRECHECKPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class MetaAgentPreCheckParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetaAgentPreCheckParam& obj) { 
      DARABONBA_PTR_TO_JSON(DbIds, dbIds_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Supplement, supplement_);
      DARABONBA_PTR_TO_JSON(TableNames, tableNames_);
    };
    friend void from_json(const Darabonba::Json& j, MetaAgentPreCheckParam& obj) { 
      DARABONBA_PTR_FROM_JSON(DbIds, dbIds_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Supplement, supplement_);
      DARABONBA_PTR_FROM_JSON(TableNames, tableNames_);
    };
    MetaAgentPreCheckParam() = default ;
    MetaAgentPreCheckParam(const MetaAgentPreCheckParam &) = default ;
    MetaAgentPreCheckParam(MetaAgentPreCheckParam &&) = default ;
    MetaAgentPreCheckParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetaAgentPreCheckParam() = default ;
    MetaAgentPreCheckParam& operator=(const MetaAgentPreCheckParam &) = default ;
    MetaAgentPreCheckParam& operator=(MetaAgentPreCheckParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbIds_ == nullptr
        && this->description_ == nullptr && this->instanceIds_ == nullptr && this->supplement_ == nullptr && this->tableNames_ == nullptr; };
    // dbIds Field Functions 
    bool hasDbIds() const { return this->dbIds_ != nullptr;};
    void deleteDbIds() { this->dbIds_ = nullptr;};
    inline string getDbIds() const { DARABONBA_PTR_GET_DEFAULT(dbIds_, "") };
    inline MetaAgentPreCheckParam& setDbIds(string dbIds) { DARABONBA_PTR_SET_VALUE(dbIds_, dbIds) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline MetaAgentPreCheckParam& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline MetaAgentPreCheckParam& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // supplement Field Functions 
    bool hasSupplement() const { return this->supplement_ != nullptr;};
    void deleteSupplement() { this->supplement_ = nullptr;};
    inline string getSupplement() const { DARABONBA_PTR_GET_DEFAULT(supplement_, "") };
    inline MetaAgentPreCheckParam& setSupplement(string supplement) { DARABONBA_PTR_SET_VALUE(supplement_, supplement) };


    // tableNames Field Functions 
    bool hasTableNames() const { return this->tableNames_ != nullptr;};
    void deleteTableNames() { this->tableNames_ = nullptr;};
    inline string getTableNames() const { DARABONBA_PTR_GET_DEFAULT(tableNames_, "") };
    inline MetaAgentPreCheckParam& setTableNames(string tableNames) { DARABONBA_PTR_SET_VALUE(tableNames_, tableNames) };


  protected:
    shared_ptr<string> dbIds_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> instanceIds_ {};
    shared_ptr<string> supplement_ {};
    shared_ptr<string> tableNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
