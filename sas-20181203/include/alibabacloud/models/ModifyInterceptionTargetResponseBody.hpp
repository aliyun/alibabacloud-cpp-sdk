// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINTERCEPTIONTARGETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINTERCEPTIONTARGETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyInterceptionTargetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInterceptionTargetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInterceptionTargetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ModifyInterceptionTargetResponseBody() = default ;
    ModifyInterceptionTargetResponseBody(const ModifyInterceptionTargetResponseBody &) = default ;
    ModifyInterceptionTargetResponseBody(ModifyInterceptionTargetResponseBody &&) = default ;
    ModifyInterceptionTargetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInterceptionTargetResponseBody() = default ;
    ModifyInterceptionTargetResponseBody& operator=(const ModifyInterceptionTargetResponseBody &) = default ;
    ModifyInterceptionTargetResponseBody& operator=(ModifyInterceptionTargetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyInterceptionTargetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool result() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline ModifyInterceptionTargetResponseBody& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
