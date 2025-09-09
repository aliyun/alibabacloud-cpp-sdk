// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOSTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHOSTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetHostResponseBodyHost.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetHostResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHostResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHostResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetHostResponseBody() = default ;
    GetHostResponseBody(const GetHostResponseBody &) = default ;
    GetHostResponseBody(GetHostResponseBody &&) = default ;
    GetHostResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHostResponseBody() = default ;
    GetHostResponseBody& operator=(const GetHostResponseBody &) = default ;
    GetHostResponseBody& operator=(GetHostResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->host_ != nullptr
        && this->requestId_ != nullptr; };
    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline const GetHostResponseBodyHost & host() const { DARABONBA_PTR_GET_CONST(host_, GetHostResponseBodyHost) };
    inline GetHostResponseBodyHost host() { DARABONBA_PTR_GET(host_, GetHostResponseBodyHost) };
    inline GetHostResponseBody& setHost(const GetHostResponseBodyHost & host) { DARABONBA_PTR_SET_VALUE(host_, host) };
    inline GetHostResponseBody& setHost(GetHostResponseBodyHost && host) { DARABONBA_PTR_SET_RVALUE(host_, host) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHostResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned information about the host.
    std::shared_ptr<GetHostResponseBodyHost> host_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
