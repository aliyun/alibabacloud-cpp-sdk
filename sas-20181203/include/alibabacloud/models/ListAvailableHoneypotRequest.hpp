// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLEHONEYPOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLEHONEYPOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAvailableHoneypotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvailableHoneypotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvailableHoneypotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    ListAvailableHoneypotRequest() = default ;
    ListAvailableHoneypotRequest(const ListAvailableHoneypotRequest &) = default ;
    ListAvailableHoneypotRequest(ListAvailableHoneypotRequest &&) = default ;
    ListAvailableHoneypotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvailableHoneypotRequest() = default ;
    ListAvailableHoneypotRequest& operator=(const ListAvailableHoneypotRequest &) = default ;
    ListAvailableHoneypotRequest& operator=(ListAvailableHoneypotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeId_ == nullptr; };
    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ListAvailableHoneypotRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    // The ID of the management node to which the honeypot is deployed.
    shared_ptr<string> nodeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
