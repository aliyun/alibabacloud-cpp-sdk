// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESERVEDNODEPOOLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERESERVEDNODEPOOLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class CreateReservedNodePoolResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReservedNodePoolResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ReservedNodePoolId, reservedNodePoolId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReservedNodePoolResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ReservedNodePoolId, reservedNodePoolId_);
    };
    CreateReservedNodePoolResponseBody() = default ;
    CreateReservedNodePoolResponseBody(const CreateReservedNodePoolResponseBody &) = default ;
    CreateReservedNodePoolResponseBody(CreateReservedNodePoolResponseBody &&) = default ;
    CreateReservedNodePoolResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReservedNodePoolResponseBody() = default ;
    CreateReservedNodePoolResponseBody& operator=(const CreateReservedNodePoolResponseBody &) = default ;
    CreateReservedNodePoolResponseBody& operator=(CreateReservedNodePoolResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->reservedNodePoolId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateReservedNodePoolResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reservedNodePoolId Field Functions 
    bool hasReservedNodePoolId() const { return this->reservedNodePoolId_ != nullptr;};
    void deleteReservedNodePoolId() { this->reservedNodePoolId_ = nullptr;};
    inline string getReservedNodePoolId() const { DARABONBA_PTR_GET_DEFAULT(reservedNodePoolId_, "") };
    inline CreateReservedNodePoolResponseBody& setReservedNodePoolId(string reservedNodePoolId) { DARABONBA_PTR_SET_VALUE(reservedNodePoolId_, reservedNodePoolId) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> reservedNodePoolId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
