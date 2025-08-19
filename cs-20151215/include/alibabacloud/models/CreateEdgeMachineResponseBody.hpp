// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEDGEMACHINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEEDGEMACHINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateEdgeMachineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEdgeMachineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(edge_machine_id, edgeMachineId_);
      DARABONBA_PTR_TO_JSON(request_id, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEdgeMachineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(edge_machine_id, edgeMachineId_);
      DARABONBA_PTR_FROM_JSON(request_id, requestId_);
    };
    CreateEdgeMachineResponseBody() = default ;
    CreateEdgeMachineResponseBody(const CreateEdgeMachineResponseBody &) = default ;
    CreateEdgeMachineResponseBody(CreateEdgeMachineResponseBody &&) = default ;
    CreateEdgeMachineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEdgeMachineResponseBody() = default ;
    CreateEdgeMachineResponseBody& operator=(const CreateEdgeMachineResponseBody &) = default ;
    CreateEdgeMachineResponseBody& operator=(CreateEdgeMachineResponseBody &&) = default ;
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
    inline CreateEdgeMachineResponseBody& setEdgeMachineId(string edgeMachineId) { DARABONBA_PTR_SET_VALUE(edgeMachineId_, edgeMachineId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateEdgeMachineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


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
