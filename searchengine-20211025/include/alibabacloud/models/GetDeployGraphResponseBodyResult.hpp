// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPLOYGRAPHRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETDEPLOYGRAPHRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDeployGraphResponseBodyResultGraph.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetDeployGraphResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeployGraphResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(graph, graph_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeployGraphResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(graph, graph_);
    };
    GetDeployGraphResponseBodyResult() = default ;
    GetDeployGraphResponseBodyResult(const GetDeployGraphResponseBodyResult &) = default ;
    GetDeployGraphResponseBodyResult(GetDeployGraphResponseBodyResult &&) = default ;
    GetDeployGraphResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeployGraphResponseBodyResult() = default ;
    GetDeployGraphResponseBodyResult& operator=(const GetDeployGraphResponseBodyResult &) = default ;
    GetDeployGraphResponseBodyResult& operator=(GetDeployGraphResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->graph_ != nullptr; };
    // graph Field Functions 
    bool hasGraph() const { return this->graph_ != nullptr;};
    void deleteGraph() { this->graph_ = nullptr;};
    inline const Models::GetDeployGraphResponseBodyResultGraph & graph() const { DARABONBA_PTR_GET_CONST(graph_, Models::GetDeployGraphResponseBodyResultGraph) };
    inline Models::GetDeployGraphResponseBodyResultGraph graph() { DARABONBA_PTR_GET(graph_, Models::GetDeployGraphResponseBodyResultGraph) };
    inline GetDeployGraphResponseBodyResult& setGraph(const Models::GetDeployGraphResponseBodyResultGraph & graph) { DARABONBA_PTR_SET_VALUE(graph_, graph) };
    inline GetDeployGraphResponseBodyResult& setGraph(Models::GetDeployGraphResponseBodyResultGraph && graph) { DARABONBA_PTR_SET_RVALUE(graph_, graph) };


  protected:
    // The deployment information.
    std::shared_ptr<Models::GetDeployGraphResponseBodyResultGraph> graph_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
