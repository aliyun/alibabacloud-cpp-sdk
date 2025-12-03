// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHIGHDEFINATIONMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHIGHDEFINATIONMONITORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class ModifyHighDefinationMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHighDefinationMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHighDefinationMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ModifyHighDefinationMonitorResponseBody() = default ;
    ModifyHighDefinationMonitorResponseBody(const ModifyHighDefinationMonitorResponseBody &) = default ;
    ModifyHighDefinationMonitorResponseBody(ModifyHighDefinationMonitorResponseBody &&) = default ;
    ModifyHighDefinationMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHighDefinationMonitorResponseBody() = default ;
    ModifyHighDefinationMonitorResponseBody& operator=(const ModifyHighDefinationMonitorResponseBody &) = default ;
    ModifyHighDefinationMonitorResponseBody& operator=(ModifyHighDefinationMonitorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyHighDefinationMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ModifyHighDefinationMonitorResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the call is successful. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
