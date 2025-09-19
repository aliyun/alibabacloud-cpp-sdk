// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDAUTHTOMACHINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BINDAUTHTOMACHINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class BindAuthToMachineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAuthToMachineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BindCount, bindCount_);
      DARABONBA_PTR_TO_JSON(InsufficientCoreCount, insufficientCoreCount_);
      DARABONBA_PTR_TO_JSON(InsufficientEcsCount, insufficientEcsCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(UnBindCount, unBindCount_);
    };
    friend void from_json(const Darabonba::Json& j, BindAuthToMachineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BindCount, bindCount_);
      DARABONBA_PTR_FROM_JSON(InsufficientCoreCount, insufficientCoreCount_);
      DARABONBA_PTR_FROM_JSON(InsufficientEcsCount, insufficientEcsCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(UnBindCount, unBindCount_);
    };
    BindAuthToMachineResponseBody() = default ;
    BindAuthToMachineResponseBody(const BindAuthToMachineResponseBody &) = default ;
    BindAuthToMachineResponseBody(BindAuthToMachineResponseBody &&) = default ;
    BindAuthToMachineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindAuthToMachineResponseBody() = default ;
    BindAuthToMachineResponseBody& operator=(const BindAuthToMachineResponseBody &) = default ;
    BindAuthToMachineResponseBody& operator=(BindAuthToMachineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindCount_ != nullptr
        && this->insufficientCoreCount_ != nullptr && this->insufficientEcsCount_ != nullptr && this->requestId_ != nullptr && this->resultCode_ != nullptr && this->unBindCount_ != nullptr; };
    // bindCount Field Functions 
    bool hasBindCount() const { return this->bindCount_ != nullptr;};
    void deleteBindCount() { this->bindCount_ = nullptr;};
    inline int32_t bindCount() const { DARABONBA_PTR_GET_DEFAULT(bindCount_, 0) };
    inline BindAuthToMachineResponseBody& setBindCount(int32_t bindCount) { DARABONBA_PTR_SET_VALUE(bindCount_, bindCount) };


    // insufficientCoreCount Field Functions 
    bool hasInsufficientCoreCount() const { return this->insufficientCoreCount_ != nullptr;};
    void deleteInsufficientCoreCount() { this->insufficientCoreCount_ = nullptr;};
    inline int32_t insufficientCoreCount() const { DARABONBA_PTR_GET_DEFAULT(insufficientCoreCount_, 0) };
    inline BindAuthToMachineResponseBody& setInsufficientCoreCount(int32_t insufficientCoreCount) { DARABONBA_PTR_SET_VALUE(insufficientCoreCount_, insufficientCoreCount) };


    // insufficientEcsCount Field Functions 
    bool hasInsufficientEcsCount() const { return this->insufficientEcsCount_ != nullptr;};
    void deleteInsufficientEcsCount() { this->insufficientEcsCount_ = nullptr;};
    inline int32_t insufficientEcsCount() const { DARABONBA_PTR_GET_DEFAULT(insufficientEcsCount_, 0) };
    inline BindAuthToMachineResponseBody& setInsufficientEcsCount(int32_t insufficientEcsCount) { DARABONBA_PTR_SET_VALUE(insufficientEcsCount_, insufficientEcsCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BindAuthToMachineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline int32_t resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, 0) };
    inline BindAuthToMachineResponseBody& setResultCode(int32_t resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // unBindCount Field Functions 
    bool hasUnBindCount() const { return this->unBindCount_ != nullptr;};
    void deleteUnBindCount() { this->unBindCount_ = nullptr;};
    inline int32_t unBindCount() const { DARABONBA_PTR_GET_DEFAULT(unBindCount_, 0) };
    inline BindAuthToMachineResponseBody& setUnBindCount(int32_t unBindCount) { DARABONBA_PTR_SET_VALUE(unBindCount_, unBindCount) };


  protected:
    // The number of bound servers.
    std::shared_ptr<int32_t> bindCount_ = nullptr;
    // The shortage in the quota for cores of servers that can be protected.
    std::shared_ptr<int32_t> insufficientCoreCount_ = nullptr;
    // The shortage in the quota for servers that can be protected.
    std::shared_ptr<int32_t> insufficientEcsCount_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status code that indicates the result. Valid values:
    // 
    // *   **0**: The servers are bound to or unbound from Security Center.
    // *   **1**: The values that you specified for the parameters are invalid.
    // *   **2**: The quota for servers that can be protected is insufficient.
    // *   **3**: The quota for cores of servers that can be protected is insufficient.
    std::shared_ptr<int32_t> resultCode_ = nullptr;
    // The number of unbound servers.
    std::shared_ptr<int32_t> unBindCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
