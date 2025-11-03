// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHAVIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEHAVIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateHaVipResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHaVipResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HaVipId, haVipId_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHaVipResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HaVipId, haVipId_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateHaVipResponseBody() = default ;
    CreateHaVipResponseBody(const CreateHaVipResponseBody &) = default ;
    CreateHaVipResponseBody(CreateHaVipResponseBody &&) = default ;
    CreateHaVipResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHaVipResponseBody() = default ;
    CreateHaVipResponseBody& operator=(const CreateHaVipResponseBody &) = default ;
    CreateHaVipResponseBody& operator=(CreateHaVipResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->haVipId_ == nullptr
        && return this->ipAddress_ == nullptr && return this->requestId_ == nullptr; };
    // haVipId Field Functions 
    bool hasHaVipId() const { return this->haVipId_ != nullptr;};
    void deleteHaVipId() { this->haVipId_ = nullptr;};
    inline string haVipId() const { DARABONBA_PTR_GET_DEFAULT(haVipId_, "") };
    inline CreateHaVipResponseBody& setHaVipId(string haVipId) { DARABONBA_PTR_SET_VALUE(haVipId_, haVipId) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline CreateHaVipResponseBody& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateHaVipResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the HaVip.
    std::shared_ptr<string> haVipId_ = nullptr;
    // The IP address of the HaVip.
    std::shared_ptr<string> ipAddress_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
