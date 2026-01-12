// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTENSORBOARDSHAREDURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTENSORBOARDSHAREDURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetTensorboardSharedUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTensorboardSharedUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TensorboardSharedUrl, tensorboardSharedUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetTensorboardSharedUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TensorboardSharedUrl, tensorboardSharedUrl_);
    };
    GetTensorboardSharedUrlResponseBody() = default ;
    GetTensorboardSharedUrlResponseBody(const GetTensorboardSharedUrlResponseBody &) = default ;
    GetTensorboardSharedUrlResponseBody(GetTensorboardSharedUrlResponseBody &&) = default ;
    GetTensorboardSharedUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTensorboardSharedUrlResponseBody() = default ;
    GetTensorboardSharedUrlResponseBody& operator=(const GetTensorboardSharedUrlResponseBody &) = default ;
    GetTensorboardSharedUrlResponseBody& operator=(GetTensorboardSharedUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tensorboardSharedUrl_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTensorboardSharedUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tensorboardSharedUrl Field Functions 
    bool hasTensorboardSharedUrl() const { return this->tensorboardSharedUrl_ != nullptr;};
    void deleteTensorboardSharedUrl() { this->tensorboardSharedUrl_ = nullptr;};
    inline string getTensorboardSharedUrl() const { DARABONBA_PTR_GET_DEFAULT(tensorboardSharedUrl_, "") };
    inline GetTensorboardSharedUrlResponseBody& setTensorboardSharedUrl(string tensorboardSharedUrl) { DARABONBA_PTR_SET_VALUE(tensorboardSharedUrl_, tensorboardSharedUrl) };


  protected:
    // The request ID which is used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // The shareable link of the TensorBoard task.
    shared_ptr<string> tensorboardSharedUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
