// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTARTLOGSTASHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTARTLOGSTASHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class RestartLogstashRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestartLogstashRequest& obj) { 
      DARABONBA_PTR_TO_JSON(batchCount, batchCount_);
      DARABONBA_PTR_TO_JSON(blueGreenDep, blueGreenDep_);
      DARABONBA_PTR_TO_JSON(nodeTypes, nodeTypes_);
      DARABONBA_PTR_TO_JSON(nodes, nodes_);
      DARABONBA_PTR_TO_JSON(restartType, restartType_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(force, force_);
    };
    friend void from_json(const Darabonba::Json& j, RestartLogstashRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(batchCount, batchCount_);
      DARABONBA_PTR_FROM_JSON(blueGreenDep, blueGreenDep_);
      DARABONBA_PTR_FROM_JSON(nodeTypes, nodeTypes_);
      DARABONBA_PTR_FROM_JSON(nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(restartType, restartType_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(force, force_);
    };
    RestartLogstashRequest() = default ;
    RestartLogstashRequest(const RestartLogstashRequest &) = default ;
    RestartLogstashRequest(RestartLogstashRequest &&) = default ;
    RestartLogstashRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestartLogstashRequest() = default ;
    RestartLogstashRequest& operator=(const RestartLogstashRequest &) = default ;
    RestartLogstashRequest& operator=(RestartLogstashRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->batchCount_ != nullptr
        && this->blueGreenDep_ != nullptr && this->nodeTypes_ != nullptr && this->nodes_ != nullptr && this->restartType_ != nullptr && this->clientToken_ != nullptr
        && this->force_ != nullptr; };
    // batchCount Field Functions 
    bool hasBatchCount() const { return this->batchCount_ != nullptr;};
    void deleteBatchCount() { this->batchCount_ = nullptr;};
    inline double batchCount() const { DARABONBA_PTR_GET_DEFAULT(batchCount_, 0.0) };
    inline RestartLogstashRequest& setBatchCount(double batchCount) { DARABONBA_PTR_SET_VALUE(batchCount_, batchCount) };


    // blueGreenDep Field Functions 
    bool hasBlueGreenDep() const { return this->blueGreenDep_ != nullptr;};
    void deleteBlueGreenDep() { this->blueGreenDep_ = nullptr;};
    inline bool blueGreenDep() const { DARABONBA_PTR_GET_DEFAULT(blueGreenDep_, false) };
    inline RestartLogstashRequest& setBlueGreenDep(bool blueGreenDep) { DARABONBA_PTR_SET_VALUE(blueGreenDep_, blueGreenDep) };


    // nodeTypes Field Functions 
    bool hasNodeTypes() const { return this->nodeTypes_ != nullptr;};
    void deleteNodeTypes() { this->nodeTypes_ = nullptr;};
    inline const vector<string> & nodeTypes() const { DARABONBA_PTR_GET_CONST(nodeTypes_, vector<string>) };
    inline vector<string> nodeTypes() { DARABONBA_PTR_GET(nodeTypes_, vector<string>) };
    inline RestartLogstashRequest& setNodeTypes(const vector<string> & nodeTypes) { DARABONBA_PTR_SET_VALUE(nodeTypes_, nodeTypes) };
    inline RestartLogstashRequest& setNodeTypes(vector<string> && nodeTypes) { DARABONBA_PTR_SET_RVALUE(nodeTypes_, nodeTypes) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<string> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<string>) };
    inline vector<string> nodes() { DARABONBA_PTR_GET(nodes_, vector<string>) };
    inline RestartLogstashRequest& setNodes(const vector<string> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline RestartLogstashRequest& setNodes(vector<string> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // restartType Field Functions 
    bool hasRestartType() const { return this->restartType_ != nullptr;};
    void deleteRestartType() { this->restartType_ = nullptr;};
    inline string restartType() const { DARABONBA_PTR_GET_DEFAULT(restartType_, "") };
    inline RestartLogstashRequest& setRestartType(string restartType) { DARABONBA_PTR_SET_VALUE(restartType_, restartType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RestartLogstashRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool force() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline RestartLogstashRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


  protected:
    std::shared_ptr<double> batchCount_ = nullptr;
    std::shared_ptr<bool> blueGreenDep_ = nullptr;
    std::shared_ptr<vector<string>> nodeTypes_ = nullptr;
    std::shared_ptr<vector<string>> nodes_ = nullptr;
    std::shared_ptr<string> restartType_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<bool> force_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
