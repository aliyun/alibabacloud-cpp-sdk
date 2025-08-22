// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETENSORBOARDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETETENSORBOARDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class DeleteTensorboardResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTensorboardResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TensorboardId, tensorboardId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTensorboardResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TensorboardId, tensorboardId_);
    };
    DeleteTensorboardResponseBody() = default ;
    DeleteTensorboardResponseBody(const DeleteTensorboardResponseBody &) = default ;
    DeleteTensorboardResponseBody(DeleteTensorboardResponseBody &&) = default ;
    DeleteTensorboardResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTensorboardResponseBody() = default ;
    DeleteTensorboardResponseBody& operator=(const DeleteTensorboardResponseBody &) = default ;
    DeleteTensorboardResponseBody& operator=(DeleteTensorboardResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->tensorboardId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteTensorboardResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tensorboardId Field Functions 
    bool hasTensorboardId() const { return this->tensorboardId_ != nullptr;};
    void deleteTensorboardId() { this->tensorboardId_ = nullptr;};
    inline string tensorboardId() const { DARABONBA_PTR_GET_DEFAULT(tensorboardId_, "") };
    inline DeleteTensorboardResponseBody& setTensorboardId(string tensorboardId) { DARABONBA_PTR_SET_VALUE(tensorboardId_, tensorboardId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The TensorBoard ID.
    std::shared_ptr<string> tensorboardId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
