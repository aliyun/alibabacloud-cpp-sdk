// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RetrieveResponseBodyDataNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class RetrieveResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
    };
    RetrieveResponseBodyData() = default ;
    RetrieveResponseBodyData(const RetrieveResponseBodyData &) = default ;
    RetrieveResponseBodyData(RetrieveResponseBodyData &&) = default ;
    RetrieveResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveResponseBodyData() = default ;
    RetrieveResponseBodyData& operator=(const RetrieveResponseBodyData &) = default ;
    RetrieveResponseBodyData& operator=(RetrieveResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodes_ != nullptr; };
    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::RetrieveResponseBodyDataNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::RetrieveResponseBodyDataNodes>) };
    inline vector<Models::RetrieveResponseBodyDataNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::RetrieveResponseBodyDataNodes>) };
    inline RetrieveResponseBodyData& setNodes(const vector<Models::RetrieveResponseBodyDataNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline RetrieveResponseBodyData& setNodes(vector<Models::RetrieveResponseBodyDataNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


  protected:
    // The list of queried chunks.
    std::shared_ptr<vector<Models::RetrieveResponseBodyDataNodes>> nodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
