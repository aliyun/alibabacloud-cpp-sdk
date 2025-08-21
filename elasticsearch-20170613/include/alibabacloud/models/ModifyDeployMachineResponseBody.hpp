// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDEPLOYMACHINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDEPLOYMACHINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ModifyDeployMachineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDeployMachineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDeployMachineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ModifyDeployMachineResponseBody() = default ;
    ModifyDeployMachineResponseBody(const ModifyDeployMachineResponseBody &) = default ;
    ModifyDeployMachineResponseBody(ModifyDeployMachineResponseBody &&) = default ;
    ModifyDeployMachineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDeployMachineResponseBody() = default ;
    ModifyDeployMachineResponseBody& operator=(const ModifyDeployMachineResponseBody &) = default ;
    ModifyDeployMachineResponseBody& operator=(ModifyDeployMachineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyDeployMachineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool result() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline ModifyDeployMachineResponseBody& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the ECS instances are changed. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
