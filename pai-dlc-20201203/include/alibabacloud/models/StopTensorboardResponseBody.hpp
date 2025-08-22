// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPTENSORBOARDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STOPTENSORBOARDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class StopTensorboardResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopTensorboardResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TensorboardId, tensorboardId_);
    };
    friend void from_json(const Darabonba::Json& j, StopTensorboardResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TensorboardId, tensorboardId_);
    };
    StopTensorboardResponseBody() = default ;
    StopTensorboardResponseBody(const StopTensorboardResponseBody &) = default ;
    StopTensorboardResponseBody(StopTensorboardResponseBody &&) = default ;
    StopTensorboardResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopTensorboardResponseBody() = default ;
    StopTensorboardResponseBody& operator=(const StopTensorboardResponseBody &) = default ;
    StopTensorboardResponseBody& operator=(StopTensorboardResponseBody &&) = default ;
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
    inline StopTensorboardResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tensorboardId Field Functions 
    bool hasTensorboardId() const { return this->tensorboardId_ != nullptr;};
    void deleteTensorboardId() { this->tensorboardId_ = nullptr;};
    inline string tensorboardId() const { DARABONBA_PTR_GET_DEFAULT(tensorboardId_, "") };
    inline StopTensorboardResponseBody& setTensorboardId(string tensorboardId) { DARABONBA_PTR_SET_VALUE(tensorboardId_, tensorboardId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the TensorBoard instance.
    std::shared_ptr<string> tensorboardId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
