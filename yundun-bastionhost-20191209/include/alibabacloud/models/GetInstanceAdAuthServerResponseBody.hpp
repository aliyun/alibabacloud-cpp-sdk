// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEADAUTHSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEADAUTHSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInstanceADAuthServerResponseBodyAD.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetInstanceADAuthServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceADAuthServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AD, AD_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceADAuthServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AD, AD_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceADAuthServerResponseBody() = default ;
    GetInstanceADAuthServerResponseBody(const GetInstanceADAuthServerResponseBody &) = default ;
    GetInstanceADAuthServerResponseBody(GetInstanceADAuthServerResponseBody &&) = default ;
    GetInstanceADAuthServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceADAuthServerResponseBody() = default ;
    GetInstanceADAuthServerResponseBody& operator=(const GetInstanceADAuthServerResponseBody &) = default ;
    GetInstanceADAuthServerResponseBody& operator=(GetInstanceADAuthServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->AD_ == nullptr
        && return this->requestId_ == nullptr; };
    // AD Field Functions 
    bool hasAD() const { return this->AD_ != nullptr;};
    void deleteAD() { this->AD_ = nullptr;};
    inline const GetInstanceADAuthServerResponseBodyAD & AD() const { DARABONBA_PTR_GET_CONST(AD_, GetInstanceADAuthServerResponseBodyAD) };
    inline GetInstanceADAuthServerResponseBodyAD AD() { DARABONBA_PTR_GET(AD_, GetInstanceADAuthServerResponseBodyAD) };
    inline GetInstanceADAuthServerResponseBody& setAD(const GetInstanceADAuthServerResponseBodyAD & AD) { DARABONBA_PTR_SET_VALUE(AD_, AD) };
    inline GetInstanceADAuthServerResponseBody& setAD(GetInstanceADAuthServerResponseBodyAD && AD) { DARABONBA_PTR_SET_RVALUE(AD_, AD) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceADAuthServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The settings of AD authentication.
    std::shared_ptr<GetInstanceADAuthServerResponseBodyAD> AD_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
