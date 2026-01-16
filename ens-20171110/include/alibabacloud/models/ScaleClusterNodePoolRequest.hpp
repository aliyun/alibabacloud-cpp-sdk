// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALECLUSTERNODEPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCALECLUSTERNODEPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ScaleClusterNodePoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleClusterNodePoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(NodepoolId, nodepoolId_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleClusterNodePoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(NodepoolId, nodepoolId_);
    };
    ScaleClusterNodePoolRequest() = default ;
    ScaleClusterNodePoolRequest(const ScaleClusterNodePoolRequest &) = default ;
    ScaleClusterNodePoolRequest(ScaleClusterNodePoolRequest &&) = default ;
    ScaleClusterNodePoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleClusterNodePoolRequest() = default ;
    ScaleClusterNodePoolRequest& operator=(const ScaleClusterNodePoolRequest &) = default ;
    ScaleClusterNodePoolRequest& operator=(ScaleClusterNodePoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
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
      virtual bool empty() const override { return this->count_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline Body& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    protected:
      // This parameter is required.
      shared_ptr<int32_t> count_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->clusterId_ == nullptr && this->nodepoolId_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ScaleClusterNodePoolRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, ScaleClusterNodePoolRequest::Body) };
    inline ScaleClusterNodePoolRequest::Body getBody() { DARABONBA_PTR_GET(body_, ScaleClusterNodePoolRequest::Body) };
    inline ScaleClusterNodePoolRequest& setBody(const ScaleClusterNodePoolRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ScaleClusterNodePoolRequest& setBody(ScaleClusterNodePoolRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ScaleClusterNodePoolRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // nodepoolId Field Functions 
    bool hasNodepoolId() const { return this->nodepoolId_ != nullptr;};
    void deleteNodepoolId() { this->nodepoolId_ = nullptr;};
    inline string getNodepoolId() const { DARABONBA_PTR_GET_DEFAULT(nodepoolId_, "") };
    inline ScaleClusterNodePoolRequest& setNodepoolId(string nodepoolId) { DARABONBA_PTR_SET_VALUE(nodepoolId_, nodepoolId) };


  protected:
    shared_ptr<ScaleClusterNodePoolRequest::Body> body_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // This parameter is required.
    shared_ptr<string> nodepoolId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
