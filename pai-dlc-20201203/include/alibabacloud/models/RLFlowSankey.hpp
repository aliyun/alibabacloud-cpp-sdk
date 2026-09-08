// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLFLOWSANKEY_HPP_
#define ALIBABACLOUD_MODELS_RLFLOWSANKEY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RLFlowSankeyColumn.hpp>
#include <alibabacloud/models/RLFlowSankeyExit.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLFlowSankey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLFlowSankey& obj) { 
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(Exits, exits_);
    };
    friend void from_json(const Darabonba::Json& j, RLFlowSankey& obj) { 
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(Exits, exits_);
    };
    RLFlowSankey() = default ;
    RLFlowSankey(const RLFlowSankey &) = default ;
    RLFlowSankey(RLFlowSankey &&) = default ;
    RLFlowSankey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLFlowSankey() = default ;
    RLFlowSankey& operator=(const RLFlowSankey &) = default ;
    RLFlowSankey& operator=(RLFlowSankey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columns_ == nullptr
        && this->exits_ == nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<RLFlowSankeyColumn> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<RLFlowSankeyColumn>) };
    inline vector<RLFlowSankeyColumn> getColumns() { DARABONBA_PTR_GET(columns_, vector<RLFlowSankeyColumn>) };
    inline RLFlowSankey& setColumns(const vector<RLFlowSankeyColumn> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline RLFlowSankey& setColumns(vector<RLFlowSankeyColumn> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // exits Field Functions 
    bool hasExits() const { return this->exits_ != nullptr;};
    void deleteExits() { this->exits_ = nullptr;};
    inline const vector<RLFlowSankeyExit> & getExits() const { DARABONBA_PTR_GET_CONST(exits_, vector<RLFlowSankeyExit>) };
    inline vector<RLFlowSankeyExit> getExits() { DARABONBA_PTR_GET(exits_, vector<RLFlowSankeyExit>) };
    inline RLFlowSankey& setExits(const vector<RLFlowSankeyExit> & exits) { DARABONBA_PTR_SET_VALUE(exits_, exits) };
    inline RLFlowSankey& setExits(vector<RLFlowSankeyExit> && exits) { DARABONBA_PTR_SET_RVALUE(exits_, exits) };


  protected:
    // The five columns of the main chain.
    shared_ptr<vector<RLFlowSankeyColumn>> columns_ {};
    // The outflow edges of each column.
    shared_ptr<vector<RLFlowSankeyExit>> exits_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
