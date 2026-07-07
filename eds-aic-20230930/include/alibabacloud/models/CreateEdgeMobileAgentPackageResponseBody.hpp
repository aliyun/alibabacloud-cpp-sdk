// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEDGEMOBILEAGENTPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEEDGEMOBILEAGENTPACKAGERESPONSEBODY_HPP_
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
  class CreateEdgeMobileAgentPackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEdgeMobileAgentPackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(PackageIds, packageIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEdgeMobileAgentPackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(PackageIds, packageIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateEdgeMobileAgentPackageResponseBody() = default ;
    CreateEdgeMobileAgentPackageResponseBody(const CreateEdgeMobileAgentPackageResponseBody &) = default ;
    CreateEdgeMobileAgentPackageResponseBody(CreateEdgeMobileAgentPackageResponseBody &&) = default ;
    CreateEdgeMobileAgentPackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEdgeMobileAgentPackageResponseBody() = default ;
    CreateEdgeMobileAgentPackageResponseBody& operator=(const CreateEdgeMobileAgentPackageResponseBody &) = default ;
    CreateEdgeMobileAgentPackageResponseBody& operator=(CreateEdgeMobileAgentPackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderId_ == nullptr
        && this->packageIds_ == nullptr && this->requestId_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline CreateEdgeMobileAgentPackageResponseBody& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // packageIds Field Functions 
    bool hasPackageIds() const { return this->packageIds_ != nullptr;};
    void deletePackageIds() { this->packageIds_ = nullptr;};
    inline const vector<string> & getPackageIds() const { DARABONBA_PTR_GET_CONST(packageIds_, vector<string>) };
    inline vector<string> getPackageIds() { DARABONBA_PTR_GET(packageIds_, vector<string>) };
    inline CreateEdgeMobileAgentPackageResponseBody& setPackageIds(const vector<string> & packageIds) { DARABONBA_PTR_SET_VALUE(packageIds_, packageIds) };
    inline CreateEdgeMobileAgentPackageResponseBody& setPackageIds(vector<string> && packageIds) { DARABONBA_PTR_SET_RVALUE(packageIds_, packageIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateEdgeMobileAgentPackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The order ID.
    shared_ptr<int64_t> orderId_ {};
    // The list of package IDs.
    shared_ptr<vector<string>> packageIds_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
