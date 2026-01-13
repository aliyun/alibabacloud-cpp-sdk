// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAINODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDAINODEREQUEST_HPP_
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
  class AddAINodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAINodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AINodePoolId, AINodePoolId_);
      DARABONBA_PTR_TO_JSON(AINodeSpecInfos, AINodeSpecInfos_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, AddAINodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AINodePoolId, AINodePoolId_);
      DARABONBA_PTR_FROM_JSON(AINodeSpecInfos, AINodeSpecInfos_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
    };
    AddAINodeRequest() = default ;
    AddAINodeRequest(const AddAINodeRequest &) = default ;
    AddAINodeRequest(AddAINodeRequest &&) = default ;
    AddAINodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAINodeRequest() = default ;
    AddAINodeRequest& operator=(const AddAINodeRequest &) = default ;
    AddAINodeRequest& operator=(AddAINodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AINodeSpecInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AINodeSpecInfos& obj) { 
        DARABONBA_PTR_TO_JSON(NodeNum, nodeNum_);
        DARABONBA_PTR_TO_JSON(NodeSpec, nodeSpec_);
      };
      friend void from_json(const Darabonba::Json& j, AINodeSpecInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeNum, nodeNum_);
        DARABONBA_PTR_FROM_JSON(NodeSpec, nodeSpec_);
      };
      AINodeSpecInfos() = default ;
      AINodeSpecInfos(const AINodeSpecInfos &) = default ;
      AINodeSpecInfos(AINodeSpecInfos &&) = default ;
      AINodeSpecInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AINodeSpecInfos() = default ;
      AINodeSpecInfos& operator=(const AINodeSpecInfos &) = default ;
      AINodeSpecInfos& operator=(AINodeSpecInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->nodeNum_ == nullptr
        && this->nodeSpec_ == nullptr; };
      // nodeNum Field Functions 
      bool hasNodeNum() const { return this->nodeNum_ != nullptr;};
      void deleteNodeNum() { this->nodeNum_ = nullptr;};
      inline string getNodeNum() const { DARABONBA_PTR_GET_DEFAULT(nodeNum_, "") };
      inline AINodeSpecInfos& setNodeNum(string nodeNum) { DARABONBA_PTR_SET_VALUE(nodeNum_, nodeNum) };


      // nodeSpec Field Functions 
      bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
      void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
      inline string getNodeSpec() const { DARABONBA_PTR_GET_DEFAULT(nodeSpec_, "") };
      inline AINodeSpecInfos& setNodeSpec(string nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };


    protected:
      // The number of AI nodes.
      // 
      // This parameter is required.
      shared_ptr<string> nodeNum_ {};
      // The AI node specifications.
      // 
      //     ADB.AIStandard.1
      //     ADB.AIMedium.1
      //     ADB.AILarge.1
      //     ADB.AIStandard.2
      //     ADB.AIMedium.2
      //     ADB.AILarge.2
      //     ADB.AIXLarge.2
      //     ADB.AIStandard.6
      //     ADB.AIMedium.6
      //     ADB.AILarge.6
      //     ADB.AIXLarge.6
      //     ADB.AIStandard.3
      //     ADB.AIMedium.3
      //     ADB.AILarge.3
      //     ADB.AIXLarge.3
      //     ADB.AIStandard.4
      //     ADB.AIMedium.4
      //     ADB.AILarge.4
      //     ADB.AIXLarge.4
      //     ADB.AIStandard.5
      //     ADB.AIMedium.5
      //     ADB.AILarge.5
      //     ADB.AIXLarge.5
      //     ADB.AIStandard.8
      //     ADB.AIMedium.8
      //     ADB.AILarge.8
      //     ADB.AIXLarge.8
      //     ADB.AI2XLarge.8
      // 
      // This parameter is required.
      shared_ptr<string> nodeSpec_ {};
    };

    virtual bool empty() const override { return this->AINodePoolId_ == nullptr
        && this->AINodeSpecInfos_ == nullptr && this->DBInstanceId_ == nullptr; };
    // AINodePoolId Field Functions 
    bool hasAINodePoolId() const { return this->AINodePoolId_ != nullptr;};
    void deleteAINodePoolId() { this->AINodePoolId_ = nullptr;};
    inline string getAINodePoolId() const { DARABONBA_PTR_GET_DEFAULT(AINodePoolId_, "") };
    inline AddAINodeRequest& setAINodePoolId(string AINodePoolId) { DARABONBA_PTR_SET_VALUE(AINodePoolId_, AINodePoolId) };


    // AINodeSpecInfos Field Functions 
    bool hasAINodeSpecInfos() const { return this->AINodeSpecInfos_ != nullptr;};
    void deleteAINodeSpecInfos() { this->AINodeSpecInfos_ = nullptr;};
    inline const vector<AddAINodeRequest::AINodeSpecInfos> & getAINodeSpecInfos() const { DARABONBA_PTR_GET_CONST(AINodeSpecInfos_, vector<AddAINodeRequest::AINodeSpecInfos>) };
    inline vector<AddAINodeRequest::AINodeSpecInfos> getAINodeSpecInfos() { DARABONBA_PTR_GET(AINodeSpecInfos_, vector<AddAINodeRequest::AINodeSpecInfos>) };
    inline AddAINodeRequest& setAINodeSpecInfos(const vector<AddAINodeRequest::AINodeSpecInfos> & aINodeSpecInfos) { DARABONBA_PTR_SET_VALUE(AINodeSpecInfos_, aINodeSpecInfos) };
    inline AddAINodeRequest& setAINodeSpecInfos(vector<AddAINodeRequest::AINodeSpecInfos> && aINodeSpecInfos) { DARABONBA_PTR_SET_RVALUE(AINodeSpecInfos_, aINodeSpecInfos) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline AddAINodeRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


  protected:
    // The ID of the resource pool to which the AI node belongs.
    shared_ptr<string> AINodePoolId_ {};
    // The AI node specifications.
    // 
    // This parameter is required.
    shared_ptr<vector<AddAINodeRequest::AINodeSpecInfos>> AINodeSpecInfos_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
