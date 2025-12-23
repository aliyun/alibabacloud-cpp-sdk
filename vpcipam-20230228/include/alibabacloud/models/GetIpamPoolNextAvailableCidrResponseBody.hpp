// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIPAMPOOLNEXTAVAILABLECIDRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIPAMPOOLNEXTAVAILABLECIDRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class GetIpamPoolNextAvailableCidrResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIpamPoolNextAvailableCidrResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIpamPoolNextAvailableCidrResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetIpamPoolNextAvailableCidrResponseBody() = default ;
    GetIpamPoolNextAvailableCidrResponseBody(const GetIpamPoolNextAvailableCidrResponseBody &) = default ;
    GetIpamPoolNextAvailableCidrResponseBody(GetIpamPoolNextAvailableCidrResponseBody &&) = default ;
    GetIpamPoolNextAvailableCidrResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIpamPoolNextAvailableCidrResponseBody() = default ;
    GetIpamPoolNextAvailableCidrResponseBody& operator=(const GetIpamPoolNextAvailableCidrResponseBody &) = default ;
    GetIpamPoolNextAvailableCidrResponseBody& operator=(GetIpamPoolNextAvailableCidrResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && return this->requestId_ == nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline GetIpamPoolNextAvailableCidrResponseBody& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIpamPoolNextAvailableCidrResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Available CIDR.
    std::shared_ptr<string> cidrBlock_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
