// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECYCLETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECYCLETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateCycleTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCycleTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCycleTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCycleTaskResponseBody() = default ;
    CreateCycleTaskResponseBody(const CreateCycleTaskResponseBody &) = default ;
    CreateCycleTaskResponseBody(CreateCycleTaskResponseBody &&) = default ;
    CreateCycleTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCycleTaskResponseBody() = default ;
    CreateCycleTaskResponseBody& operator=(const CreateCycleTaskResponseBody &) = default ;
    CreateCycleTaskResponseBody& operator=(CreateCycleTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && this->requestId_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline CreateCycleTaskResponseBody& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCycleTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the task configuration.
    shared_ptr<string> configId_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
