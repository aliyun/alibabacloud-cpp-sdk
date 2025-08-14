// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSITROUTERCIDRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSITROUTERCIDRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateTransitRouterCidrResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransitRouterCidrResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TransitRouterCidrId, transitRouterCidrId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransitRouterCidrResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterCidrId, transitRouterCidrId_);
    };
    CreateTransitRouterCidrResponseBody() = default ;
    CreateTransitRouterCidrResponseBody(const CreateTransitRouterCidrResponseBody &) = default ;
    CreateTransitRouterCidrResponseBody(CreateTransitRouterCidrResponseBody &&) = default ;
    CreateTransitRouterCidrResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransitRouterCidrResponseBody() = default ;
    CreateTransitRouterCidrResponseBody& operator=(const CreateTransitRouterCidrResponseBody &) = default ;
    CreateTransitRouterCidrResponseBody& operator=(CreateTransitRouterCidrResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->transitRouterCidrId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTransitRouterCidrResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transitRouterCidrId Field Functions 
    bool hasTransitRouterCidrId() const { return this->transitRouterCidrId_ != nullptr;};
    void deleteTransitRouterCidrId() { this->transitRouterCidrId_ = nullptr;};
    inline string transitRouterCidrId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterCidrId_, "") };
    inline CreateTransitRouterCidrResponseBody& setTransitRouterCidrId(string transitRouterCidrId) { DARABONBA_PTR_SET_VALUE(transitRouterCidrId_, transitRouterCidrId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the CIDR block.
    std::shared_ptr<string> transitRouterCidrId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
