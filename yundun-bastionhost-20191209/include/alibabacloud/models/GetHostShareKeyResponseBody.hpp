// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOSTSHAREKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHOSTSHAREKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetHostShareKeyResponseBodyHostShareKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetHostShareKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHostShareKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HostShareKey, hostShareKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHostShareKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HostShareKey, hostShareKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetHostShareKeyResponseBody() = default ;
    GetHostShareKeyResponseBody(const GetHostShareKeyResponseBody &) = default ;
    GetHostShareKeyResponseBody(GetHostShareKeyResponseBody &&) = default ;
    GetHostShareKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHostShareKeyResponseBody() = default ;
    GetHostShareKeyResponseBody& operator=(const GetHostShareKeyResponseBody &) = default ;
    GetHostShareKeyResponseBody& operator=(GetHostShareKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostShareKey_ == nullptr
        && return this->requestId_ == nullptr; };
    // hostShareKey Field Functions 
    bool hasHostShareKey() const { return this->hostShareKey_ != nullptr;};
    void deleteHostShareKey() { this->hostShareKey_ = nullptr;};
    inline const GetHostShareKeyResponseBodyHostShareKey & hostShareKey() const { DARABONBA_PTR_GET_CONST(hostShareKey_, GetHostShareKeyResponseBodyHostShareKey) };
    inline GetHostShareKeyResponseBodyHostShareKey hostShareKey() { DARABONBA_PTR_GET(hostShareKey_, GetHostShareKeyResponseBodyHostShareKey) };
    inline GetHostShareKeyResponseBody& setHostShareKey(const GetHostShareKeyResponseBodyHostShareKey & hostShareKey) { DARABONBA_PTR_SET_VALUE(hostShareKey_, hostShareKey) };
    inline GetHostShareKeyResponseBody& setHostShareKey(GetHostShareKeyResponseBodyHostShareKey && hostShareKey) { DARABONBA_PTR_SET_RVALUE(hostShareKey_, hostShareKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHostShareKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned information about the shared key.
    std::shared_ptr<GetHostShareKeyResponseBodyHostShareKey> hostShareKey_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
