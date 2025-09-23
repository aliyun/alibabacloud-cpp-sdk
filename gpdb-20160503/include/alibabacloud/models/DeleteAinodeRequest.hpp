// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAINODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAINODEREQUEST_HPP_
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
  class DeleteAINodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAINodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AINodeNum, AINodeNum_);
      DARABONBA_PTR_TO_JSON(AINodePoolId, AINodePoolId_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(NodeNames, nodeNames_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAINodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AINodeNum, AINodeNum_);
      DARABONBA_PTR_FROM_JSON(AINodePoolId, AINodePoolId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(NodeNames, nodeNames_);
    };
    DeleteAINodeRequest() = default ;
    DeleteAINodeRequest(const DeleteAINodeRequest &) = default ;
    DeleteAINodeRequest(DeleteAINodeRequest &&) = default ;
    DeleteAINodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAINodeRequest() = default ;
    DeleteAINodeRequest& operator=(const DeleteAINodeRequest &) = default ;
    DeleteAINodeRequest& operator=(DeleteAINodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AINodeNum_ != nullptr
        && this->AINodePoolId_ != nullptr && this->DBInstanceId_ != nullptr && this->nodeNames_ != nullptr; };
    // AINodeNum Field Functions 
    bool hasAINodeNum() const { return this->AINodeNum_ != nullptr;};
    void deleteAINodeNum() { this->AINodeNum_ = nullptr;};
    inline int32_t AINodeNum() const { DARABONBA_PTR_GET_DEFAULT(AINodeNum_, 0) };
    inline DeleteAINodeRequest& setAINodeNum(int32_t AINodeNum) { DARABONBA_PTR_SET_VALUE(AINodeNum_, AINodeNum) };


    // AINodePoolId Field Functions 
    bool hasAINodePoolId() const { return this->AINodePoolId_ != nullptr;};
    void deleteAINodePoolId() { this->AINodePoolId_ = nullptr;};
    inline string AINodePoolId() const { DARABONBA_PTR_GET_DEFAULT(AINodePoolId_, "") };
    inline DeleteAINodeRequest& setAINodePoolId(string AINodePoolId) { DARABONBA_PTR_SET_VALUE(AINodePoolId_, AINodePoolId) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DeleteAINodeRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // nodeNames Field Functions 
    bool hasNodeNames() const { return this->nodeNames_ != nullptr;};
    void deleteNodeNames() { this->nodeNames_ = nullptr;};
    inline const vector<string> & nodeNames() const { DARABONBA_PTR_GET_CONST(nodeNames_, vector<string>) };
    inline vector<string> nodeNames() { DARABONBA_PTR_GET(nodeNames_, vector<string>) };
    inline DeleteAINodeRequest& setNodeNames(const vector<string> & nodeNames) { DARABONBA_PTR_SET_VALUE(nodeNames_, nodeNames) };
    inline DeleteAINodeRequest& setNodeNames(vector<string> && nodeNames) { DARABONBA_PTR_SET_RVALUE(nodeNames_, nodeNames) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> AINodeNum_ = nullptr;
    std::shared_ptr<string> AINodePoolId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<vector<string>> nodeNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
