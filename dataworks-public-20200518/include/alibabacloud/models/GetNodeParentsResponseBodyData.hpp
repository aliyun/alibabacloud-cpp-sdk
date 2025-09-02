// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODEPARENTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETNODEPARENTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetNodeParentsResponseBodyDataNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetNodeParentsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeParentsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeParentsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
    };
    GetNodeParentsResponseBodyData() = default ;
    GetNodeParentsResponseBodyData(const GetNodeParentsResponseBodyData &) = default ;
    GetNodeParentsResponseBodyData(GetNodeParentsResponseBodyData &&) = default ;
    GetNodeParentsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeParentsResponseBodyData() = default ;
    GetNodeParentsResponseBodyData& operator=(const GetNodeParentsResponseBodyData &) = default ;
    GetNodeParentsResponseBodyData& operator=(GetNodeParentsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodes_ != nullptr; };
    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::GetNodeParentsResponseBodyDataNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::GetNodeParentsResponseBodyDataNodes>) };
    inline vector<Models::GetNodeParentsResponseBodyDataNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::GetNodeParentsResponseBodyDataNodes>) };
    inline GetNodeParentsResponseBodyData& setNodes(const vector<Models::GetNodeParentsResponseBodyDataNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline GetNodeParentsResponseBodyData& setNodes(vector<Models::GetNodeParentsResponseBodyDataNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


  protected:
    // The ancestor nodes.
    std::shared_ptr<vector<Models::GetNodeParentsResponseBodyDataNodes>> nodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
