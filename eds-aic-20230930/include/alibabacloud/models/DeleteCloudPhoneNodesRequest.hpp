// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECLOUDPHONENODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECLOUDPHONENODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DeleteCloudPhoneNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCloudPhoneNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCloudPhoneNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
    };
    DeleteCloudPhoneNodesRequest() = default ;
    DeleteCloudPhoneNodesRequest(const DeleteCloudPhoneNodesRequest &) = default ;
    DeleteCloudPhoneNodesRequest(DeleteCloudPhoneNodesRequest &&) = default ;
    DeleteCloudPhoneNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCloudPhoneNodesRequest() = default ;
    DeleteCloudPhoneNodesRequest& operator=(const DeleteCloudPhoneNodesRequest &) = default ;
    DeleteCloudPhoneNodesRequest& operator=(DeleteCloudPhoneNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeIds_ == nullptr; };
    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline const vector<string> & nodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
    inline vector<string> nodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
    inline DeleteCloudPhoneNodesRequest& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
    inline DeleteCloudPhoneNodesRequest& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


  protected:
    // The cloud phone matrix IDs.
    std::shared_ptr<vector<string>> nodeIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
