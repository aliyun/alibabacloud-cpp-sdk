// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAINODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAINODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeleteAINodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAINodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAINodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
    };
    DeleteAINodesRequest() = default ;
    DeleteAINodesRequest(const DeleteAINodesRequest &) = default ;
    DeleteAINodesRequest(DeleteAINodesRequest &&) = default ;
    DeleteAINodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAINodesRequest() = default ;
    DeleteAINodesRequest& operator=(const DeleteAINodesRequest &) = default ;
    DeleteAINodesRequest& operator=(DeleteAINodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->DBNodeId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DeleteAINodesRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBNodeId Field Functions 
    bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
    void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
    inline const vector<string> & getDBNodeId() const { DARABONBA_PTR_GET_CONST(DBNodeId_, vector<string>) };
    inline vector<string> getDBNodeId() { DARABONBA_PTR_GET(DBNodeId_, vector<string>) };
    inline DeleteAINodesRequest& setDBNodeId(const vector<string> & DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };
    inline DeleteAINodesRequest& setDBNodeId(vector<string> && DBNodeId) { DARABONBA_PTR_SET_RVALUE(DBNodeId_, DBNodeId) };


  protected:
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<vector<string>> DBNodeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
