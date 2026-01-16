// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECLUSTERNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECLUSTERNODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteClusterNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteClusterNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteClusterNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
    };
    DeleteClusterNodesRequest() = default ;
    DeleteClusterNodesRequest(const DeleteClusterNodesRequest &) = default ;
    DeleteClusterNodesRequest(DeleteClusterNodesRequest &&) = default ;
    DeleteClusterNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteClusterNodesRequest() = default ;
    DeleteClusterNodesRequest& operator=(const DeleteClusterNodesRequest &) = default ;
    DeleteClusterNodesRequest& operator=(DeleteClusterNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->nodes_ == nullptr; };
      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<string> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<string>) };
      inline vector<string> getNodes() { DARABONBA_PTR_GET(nodes_, vector<string>) };
      inline Body& setNodes(const vector<string> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline Body& setNodes(vector<string> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    protected:
      // This parameter is required.
      shared_ptr<vector<string>> nodes_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->clusterId_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeleteClusterNodesRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, DeleteClusterNodesRequest::Body) };
    inline DeleteClusterNodesRequest::Body getBody() { DARABONBA_PTR_GET(body_, DeleteClusterNodesRequest::Body) };
    inline DeleteClusterNodesRequest& setBody(const DeleteClusterNodesRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeleteClusterNodesRequest& setBody(DeleteClusterNodesRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DeleteClusterNodesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    // This parameter is required.
    shared_ptr<DeleteClusterNodesRequest::Body> body_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
