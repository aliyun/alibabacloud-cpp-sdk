// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODE_HPP_
#define ALIBABACLOUD_MODELS_NODE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LineageTable.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class Node : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Node& obj) { 
      DARABONBA_PTR_TO_JSON(catalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(connector, connector_);
      DARABONBA_PTR_TO_JSON(databaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isTemporary, isTemporary_);
      DARABONBA_PTR_TO_JSON(tables, tables_);
    };
    friend void from_json(const Darabonba::Json& j, Node& obj) { 
      DARABONBA_PTR_FROM_JSON(catalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(connector, connector_);
      DARABONBA_PTR_FROM_JSON(databaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isTemporary, isTemporary_);
      DARABONBA_PTR_FROM_JSON(tables, tables_);
    };
    Node() = default ;
    Node(const Node &) = default ;
    Node(Node &&) = default ;
    Node(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Node() = default ;
    Node& operator=(const Node &) = default ;
    Node& operator=(Node &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogName_ == nullptr
        && return this->connector_ == nullptr && return this->databaseName_ == nullptr && return this->id_ == nullptr && return this->isTemporary_ == nullptr && return this->tables_ == nullptr; };
    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string catalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline Node& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // connector Field Functions 
    bool hasConnector() const { return this->connector_ != nullptr;};
    void deleteConnector() { this->connector_ = nullptr;};
    inline string connector() const { DARABONBA_PTR_GET_DEFAULT(connector_, "") };
    inline Node& setConnector(string connector) { DARABONBA_PTR_SET_VALUE(connector_, connector) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline Node& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline Node& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isTemporary Field Functions 
    bool hasIsTemporary() const { return this->isTemporary_ != nullptr;};
    void deleteIsTemporary() { this->isTemporary_ = nullptr;};
    inline bool isTemporary() const { DARABONBA_PTR_GET_DEFAULT(isTemporary_, false) };
    inline Node& setIsTemporary(bool isTemporary) { DARABONBA_PTR_SET_VALUE(isTemporary_, isTemporary) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<LineageTable> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<LineageTable>) };
    inline vector<LineageTable> tables() { DARABONBA_PTR_GET(tables_, vector<LineageTable>) };
    inline Node& setTables(const vector<LineageTable> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline Node& setTables(vector<LineageTable> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


  protected:
    std::shared_ptr<string> catalogName_ = nullptr;
    std::shared_ptr<string> connector_ = nullptr;
    std::shared_ptr<string> databaseName_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<bool> isTemporary_ = nullptr;
    std::shared_ptr<vector<LineageTable>> tables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
