// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMOBILEAGENTPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMOBILEAGENTPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateMobileAgentPackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMobileAgentPackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MobileAgentPackageIds, mobileAgentPackageIds_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMobileAgentPackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MobileAgentPackageIds, mobileAgentPackageIds_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateMobileAgentPackageResponseBody() = default ;
    CreateMobileAgentPackageResponseBody(const CreateMobileAgentPackageResponseBody &) = default ;
    CreateMobileAgentPackageResponseBody(CreateMobileAgentPackageResponseBody &&) = default ;
    CreateMobileAgentPackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMobileAgentPackageResponseBody() = default ;
    CreateMobileAgentPackageResponseBody& operator=(const CreateMobileAgentPackageResponseBody &) = default ;
    CreateMobileAgentPackageResponseBody& operator=(CreateMobileAgentPackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mobileAgentPackageIds_ == nullptr
        && this->orderId_ == nullptr && this->requestId_ == nullptr; };
    // mobileAgentPackageIds Field Functions 
    bool hasMobileAgentPackageIds() const { return this->mobileAgentPackageIds_ != nullptr;};
    void deleteMobileAgentPackageIds() { this->mobileAgentPackageIds_ = nullptr;};
    inline const vector<string> & getMobileAgentPackageIds() const { DARABONBA_PTR_GET_CONST(mobileAgentPackageIds_, vector<string>) };
    inline vector<string> getMobileAgentPackageIds() { DARABONBA_PTR_GET(mobileAgentPackageIds_, vector<string>) };
    inline CreateMobileAgentPackageResponseBody& setMobileAgentPackageIds(const vector<string> & mobileAgentPackageIds) { DARABONBA_PTR_SET_VALUE(mobileAgentPackageIds_, mobileAgentPackageIds) };
    inline CreateMobileAgentPackageResponseBody& setMobileAgentPackageIds(vector<string> && mobileAgentPackageIds) { DARABONBA_PTR_SET_RVALUE(mobileAgentPackageIds_, mobileAgentPackageIds) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateMobileAgentPackageResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMobileAgentPackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of resource plan IDs.
    shared_ptr<vector<string>> mobileAgentPackageIds_ {};
    // The order ID.
    shared_ptr<string> orderId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
