// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENATIPCIDRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENATIPCIDRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateNatIpCidrResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNatIpCidrResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NatIpCidrId, natIpCidrId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNatIpCidrResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NatIpCidrId, natIpCidrId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateNatIpCidrResponseBody() = default ;
    CreateNatIpCidrResponseBody(const CreateNatIpCidrResponseBody &) = default ;
    CreateNatIpCidrResponseBody(CreateNatIpCidrResponseBody &&) = default ;
    CreateNatIpCidrResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNatIpCidrResponseBody() = default ;
    CreateNatIpCidrResponseBody& operator=(const CreateNatIpCidrResponseBody &) = default ;
    CreateNatIpCidrResponseBody& operator=(CreateNatIpCidrResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->natIpCidrId_ != nullptr
        && this->requestId_ != nullptr; };
    // natIpCidrId Field Functions 
    bool hasNatIpCidrId() const { return this->natIpCidrId_ != nullptr;};
    void deleteNatIpCidrId() { this->natIpCidrId_ = nullptr;};
    inline string natIpCidrId() const { DARABONBA_PTR_GET_DEFAULT(natIpCidrId_, "") };
    inline CreateNatIpCidrResponseBody& setNatIpCidrId(string natIpCidrId) { DARABONBA_PTR_SET_VALUE(natIpCidrId_, natIpCidrId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateNatIpCidrResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the NAT CIDR block.
    std::shared_ptr<string> natIpCidrId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
