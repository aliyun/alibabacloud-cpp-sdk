// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBOOTANDANTIUNINSTALLPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBOOTANDANTIUNINSTALLPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateBootAndAntiUninstallPolicyResponseBodyStrategy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateBootAndAntiUninstallPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBootAndAntiUninstallPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBootAndAntiUninstallPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
    };
    UpdateBootAndAntiUninstallPolicyResponseBody() = default ;
    UpdateBootAndAntiUninstallPolicyResponseBody(const UpdateBootAndAntiUninstallPolicyResponseBody &) = default ;
    UpdateBootAndAntiUninstallPolicyResponseBody(UpdateBootAndAntiUninstallPolicyResponseBody &&) = default ;
    UpdateBootAndAntiUninstallPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBootAndAntiUninstallPolicyResponseBody() = default ;
    UpdateBootAndAntiUninstallPolicyResponseBody& operator=(const UpdateBootAndAntiUninstallPolicyResponseBody &) = default ;
    UpdateBootAndAntiUninstallPolicyResponseBody& operator=(UpdateBootAndAntiUninstallPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->strategy_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateBootAndAntiUninstallPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline const UpdateBootAndAntiUninstallPolicyResponseBodyStrategy & strategy() const { DARABONBA_PTR_GET_CONST(strategy_, UpdateBootAndAntiUninstallPolicyResponseBodyStrategy) };
    inline UpdateBootAndAntiUninstallPolicyResponseBodyStrategy strategy() { DARABONBA_PTR_GET(strategy_, UpdateBootAndAntiUninstallPolicyResponseBodyStrategy) };
    inline UpdateBootAndAntiUninstallPolicyResponseBody& setStrategy(const UpdateBootAndAntiUninstallPolicyResponseBodyStrategy & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
    inline UpdateBootAndAntiUninstallPolicyResponseBody& setStrategy(UpdateBootAndAntiUninstallPolicyResponseBodyStrategy && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<UpdateBootAndAntiUninstallPolicyResponseBodyStrategy> strategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
