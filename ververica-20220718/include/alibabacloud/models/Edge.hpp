// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDGE_HPP_
#define ALIBABACLOUD_MODELS_EDGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Relation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class Edge : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Edge& obj) { 
      DARABONBA_PTR_TO_JSON(columnLineage, columnLineage_);
      DARABONBA_PTR_TO_JSON(tableLineage, tableLineage_);
    };
    friend void from_json(const Darabonba::Json& j, Edge& obj) { 
      DARABONBA_PTR_FROM_JSON(columnLineage, columnLineage_);
      DARABONBA_PTR_FROM_JSON(tableLineage, tableLineage_);
    };
    Edge() = default ;
    Edge(const Edge &) = default ;
    Edge(Edge &&) = default ;
    Edge(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Edge() = default ;
    Edge& operator=(const Edge &) = default ;
    Edge& operator=(Edge &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnLineage_ == nullptr
        && return this->tableLineage_ == nullptr; };
    // columnLineage Field Functions 
    bool hasColumnLineage() const { return this->columnLineage_ != nullptr;};
    void deleteColumnLineage() { this->columnLineage_ = nullptr;};
    inline const vector<Relation> & columnLineage() const { DARABONBA_PTR_GET_CONST(columnLineage_, vector<Relation>) };
    inline vector<Relation> columnLineage() { DARABONBA_PTR_GET(columnLineage_, vector<Relation>) };
    inline Edge& setColumnLineage(const vector<Relation> & columnLineage) { DARABONBA_PTR_SET_VALUE(columnLineage_, columnLineage) };
    inline Edge& setColumnLineage(vector<Relation> && columnLineage) { DARABONBA_PTR_SET_RVALUE(columnLineage_, columnLineage) };


    // tableLineage Field Functions 
    bool hasTableLineage() const { return this->tableLineage_ != nullptr;};
    void deleteTableLineage() { this->tableLineage_ = nullptr;};
    inline const vector<Relation> & tableLineage() const { DARABONBA_PTR_GET_CONST(tableLineage_, vector<Relation>) };
    inline vector<Relation> tableLineage() { DARABONBA_PTR_GET(tableLineage_, vector<Relation>) };
    inline Edge& setTableLineage(const vector<Relation> & tableLineage) { DARABONBA_PTR_SET_VALUE(tableLineage_, tableLineage) };
    inline Edge& setTableLineage(vector<Relation> && tableLineage) { DARABONBA_PTR_SET_RVALUE(tableLineage_, tableLineage) };


  protected:
    std::shared_ptr<vector<Relation>> columnLineage_ = nullptr;
    std::shared_ptr<vector<Relation>> tableLineage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
