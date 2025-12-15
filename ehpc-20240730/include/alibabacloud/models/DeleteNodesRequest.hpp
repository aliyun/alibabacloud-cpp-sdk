// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class DeleteNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
    };
    DeleteNodesRequest() = default ;
    DeleteNodesRequest(const DeleteNodesRequest &) = default ;
    DeleteNodesRequest(DeleteNodesRequest &&) = default ;
    DeleteNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNodesRequest() = default ;
    DeleteNodesRequest& operator=(const DeleteNodesRequest &) = default ;
    DeleteNodesRequest& operator=(DeleteNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->instanceIds_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DeleteNodesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DeleteNodesRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DeleteNodesRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


  protected:
    // The cluster ID. You can call the [listclusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The instance IDs of the compute nodes that you want to delete.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
