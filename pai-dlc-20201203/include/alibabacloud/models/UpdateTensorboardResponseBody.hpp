// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETENSORBOARDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATETENSORBOARDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class UpdateTensorboardResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTensorboardResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TensorboardId, tensorboardId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTensorboardResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TensorboardId, tensorboardId_);
    };
    UpdateTensorboardResponseBody() = default ;
    UpdateTensorboardResponseBody(const UpdateTensorboardResponseBody &) = default ;
    UpdateTensorboardResponseBody(UpdateTensorboardResponseBody &&) = default ;
    UpdateTensorboardResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTensorboardResponseBody() = default ;
    UpdateTensorboardResponseBody& operator=(const UpdateTensorboardResponseBody &) = default ;
    UpdateTensorboardResponseBody& operator=(UpdateTensorboardResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tensorboardId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateTensorboardResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tensorboardId Field Functions 
    bool hasTensorboardId() const { return this->tensorboardId_ != nullptr;};
    void deleteTensorboardId() { this->tensorboardId_ = nullptr;};
    inline string getTensorboardId() const { DARABONBA_PTR_GET_DEFAULT(tensorboardId_, "") };
    inline UpdateTensorboardResponseBody& setTensorboardId(string tensorboardId) { DARABONBA_PTR_SET_VALUE(tensorboardId_, tensorboardId) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the TensorBoard instance.
    shared_ptr<string> tensorboardId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
