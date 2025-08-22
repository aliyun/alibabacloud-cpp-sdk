// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESILENCEPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETESILENCEPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeleteSilencePolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSilencePolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSilencePolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteSilencePolicyResponseBody() = default ;
    DeleteSilencePolicyResponseBody(const DeleteSilencePolicyResponseBody &) = default ;
    DeleteSilencePolicyResponseBody(DeleteSilencePolicyResponseBody &&) = default ;
    DeleteSilencePolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSilencePolicyResponseBody() = default ;
    DeleteSilencePolicyResponseBody& operator=(const DeleteSilencePolicyResponseBody &) = default ;
    DeleteSilencePolicyResponseBody& operator=(DeleteSilencePolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isSuccess_ != nullptr
        && this->requestId_ != nullptr; };
    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline DeleteSilencePolicyResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteSilencePolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the silence policy was deleted successfully. Valid values:
    // 
    // *   `true`: The silence policy was deleted successfully.
    // *   `false`: The silence policy failed to be deleted.
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The operation that you want to perform. Set the value to **DeleteSilencePolicy**.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
