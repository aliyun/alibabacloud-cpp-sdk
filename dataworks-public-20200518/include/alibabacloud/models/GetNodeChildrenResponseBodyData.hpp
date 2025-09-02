// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODECHILDRENRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETNODECHILDRENRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetNodeChildrenResponseBodyDataNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetNodeChildrenResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeChildrenResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeChildrenResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
    };
    GetNodeChildrenResponseBodyData() = default ;
    GetNodeChildrenResponseBodyData(const GetNodeChildrenResponseBodyData &) = default ;
    GetNodeChildrenResponseBodyData(GetNodeChildrenResponseBodyData &&) = default ;
    GetNodeChildrenResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeChildrenResponseBodyData() = default ;
    GetNodeChildrenResponseBodyData& operator=(const GetNodeChildrenResponseBodyData &) = default ;
    GetNodeChildrenResponseBodyData& operator=(GetNodeChildrenResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodes_ != nullptr; };
    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::GetNodeChildrenResponseBodyDataNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::GetNodeChildrenResponseBodyDataNodes>) };
    inline vector<Models::GetNodeChildrenResponseBodyDataNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::GetNodeChildrenResponseBodyDataNodes>) };
    inline GetNodeChildrenResponseBodyData& setNodes(const vector<Models::GetNodeChildrenResponseBodyDataNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline GetNodeChildrenResponseBodyData& setNodes(vector<Models::GetNodeChildrenResponseBodyDataNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


  protected:
    // The descendant nodes.
    std::shared_ptr<vector<Models::GetNodeChildrenResponseBodyDataNodes>> nodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
