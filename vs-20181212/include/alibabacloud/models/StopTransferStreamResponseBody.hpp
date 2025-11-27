// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPTRANSFERSTREAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STOPTRANSFERSTREAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class StopTransferStreamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopTransferStreamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StopTransferStreamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StopTransferStreamResponseBody() = default ;
    StopTransferStreamResponseBody(const StopTransferStreamResponseBody &) = default ;
    StopTransferStreamResponseBody(StopTransferStreamResponseBody &&) = default ;
    StopTransferStreamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopTransferStreamResponseBody() = default ;
    StopTransferStreamResponseBody& operator=(const StopTransferStreamResponseBody &) = default ;
    StopTransferStreamResponseBody& operator=(StopTransferStreamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StopTransferStreamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
