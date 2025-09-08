// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DeleteNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    DeleteNodeRequest() = default ;
    DeleteNodeRequest(const DeleteNodeRequest &) = default ;
    DeleteNodeRequest(DeleteNodeRequest &&) = default ;
    DeleteNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNodeRequest() = default ;
    DeleteNodeRequest& operator=(const DeleteNodeRequest &) = default ;
    DeleteNodeRequest& operator=(DeleteNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeId_ != nullptr; };
    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DeleteNodeRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
