// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEDGECONTAINERAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEEDGECONTAINERAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeleteEdgeContainerAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEdgeContainerAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEdgeContainerAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    DeleteEdgeContainerAppResponseBody() = default ;
    DeleteEdgeContainerAppResponseBody(const DeleteEdgeContainerAppResponseBody &) = default ;
    DeleteEdgeContainerAppResponseBody(DeleteEdgeContainerAppResponseBody &&) = default ;
    DeleteEdgeContainerAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEdgeContainerAppResponseBody() = default ;
    DeleteEdgeContainerAppResponseBody& operator=(const DeleteEdgeContainerAppResponseBody &) = default ;
    DeleteEdgeContainerAppResponseBody& operator=(DeleteEdgeContainerAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->state_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteEdgeContainerAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DeleteEdgeContainerAppResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Specifies whether the deletion is successful.
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
