// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBClusterNodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterNodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterNodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterNodeResponseBody() = default ;
    DescribeDBClusterNodeResponseBody(const DescribeDBClusterNodeResponseBody &) = default ;
    DescribeDBClusterNodeResponseBody(DescribeDBClusterNodeResponseBody &&) = default ;
    DescribeDBClusterNodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterNodeResponseBody() = default ;
    DescribeDBClusterNodeResponseBody& operator=(const DescribeDBClusterNodeResponseBody &) = default ;
    DescribeDBClusterNodeResponseBody& operator=(DescribeDBClusterNodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Nodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      Nodes() = default ;
      Nodes(const Nodes &) = default ;
      Nodes(Nodes &&) = default ;
      Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Nodes() = default ;
      Nodes& operator=(const Nodes &) = default ;
      Nodes& operator=(Nodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Nodes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The name of the node.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->nodes_ == nullptr && this->requestId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBClusterNodeResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<DescribeDBClusterNodeResponseBody::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<DescribeDBClusterNodeResponseBody::Nodes>) };
    inline vector<DescribeDBClusterNodeResponseBody::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<DescribeDBClusterNodeResponseBody::Nodes>) };
    inline DescribeDBClusterNodeResponseBody& setNodes(const vector<DescribeDBClusterNodeResponseBody::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline DescribeDBClusterNodeResponseBody& setNodes(vector<DescribeDBClusterNodeResponseBody::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterNodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance ID.
    shared_ptr<string> DBClusterId_ {};
    // The name of the node.
    shared_ptr<vector<DescribeDBClusterNodeResponseBody::Nodes>> nodes_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
