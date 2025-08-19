// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDGECLUSTERADDEDGEMACHINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EDGECLUSTERADDEDGEMACHINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class EdgeClusterAddEdgeMachineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EdgeClusterAddEdgeMachineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(edge_machine_id, edgeMachineId_);
      DARABONBA_PTR_TO_JSON(request_id, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, EdgeClusterAddEdgeMachineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(edge_machine_id, edgeMachineId_);
      DARABONBA_PTR_FROM_JSON(request_id, requestId_);
    };
    EdgeClusterAddEdgeMachineResponseBody() = default ;
    EdgeClusterAddEdgeMachineResponseBody(const EdgeClusterAddEdgeMachineResponseBody &) = default ;
    EdgeClusterAddEdgeMachineResponseBody(EdgeClusterAddEdgeMachineResponseBody &&) = default ;
    EdgeClusterAddEdgeMachineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EdgeClusterAddEdgeMachineResponseBody() = default ;
    EdgeClusterAddEdgeMachineResponseBody& operator=(const EdgeClusterAddEdgeMachineResponseBody &) = default ;
    EdgeClusterAddEdgeMachineResponseBody& operator=(EdgeClusterAddEdgeMachineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->edgeMachineId_ != nullptr
        && this->requestId_ != nullptr; };
    // edgeMachineId Field Functions 
    bool hasEdgeMachineId() const { return this->edgeMachineId_ != nullptr;};
    void deleteEdgeMachineId() { this->edgeMachineId_ = nullptr;};
    inline string edgeMachineId() const { DARABONBA_PTR_GET_DEFAULT(edgeMachineId_, "") };
    inline EdgeClusterAddEdgeMachineResponseBody& setEdgeMachineId(string edgeMachineId) { DARABONBA_PTR_SET_VALUE(edgeMachineId_, edgeMachineId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EdgeClusterAddEdgeMachineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the cloud-native box.
    std::shared_ptr<string> edgeMachineId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
