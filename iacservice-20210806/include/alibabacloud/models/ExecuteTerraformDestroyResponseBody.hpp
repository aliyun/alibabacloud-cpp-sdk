// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTETERRAFORMDESTROYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTETERRAFORMDESTROYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ExecuteTerraformDestroyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteTerraformDestroyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(stateId, stateId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteTerraformDestroyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(stateId, stateId_);
    };
    ExecuteTerraformDestroyResponseBody() = default ;
    ExecuteTerraformDestroyResponseBody(const ExecuteTerraformDestroyResponseBody &) = default ;
    ExecuteTerraformDestroyResponseBody(ExecuteTerraformDestroyResponseBody &&) = default ;
    ExecuteTerraformDestroyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteTerraformDestroyResponseBody() = default ;
    ExecuteTerraformDestroyResponseBody& operator=(const ExecuteTerraformDestroyResponseBody &) = default ;
    ExecuteTerraformDestroyResponseBody& operator=(ExecuteTerraformDestroyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->stateId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecuteTerraformDestroyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stateId Field Functions 
    bool hasStateId() const { return this->stateId_ != nullptr;};
    void deleteStateId() { this->stateId_ = nullptr;};
    inline string getStateId() const { DARABONBA_PTR_GET_DEFAULT(stateId_, "") };
    inline ExecuteTerraformDestroyResponseBody& setStateId(string stateId) { DARABONBA_PTR_SET_VALUE(stateId_, stateId) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> stateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
