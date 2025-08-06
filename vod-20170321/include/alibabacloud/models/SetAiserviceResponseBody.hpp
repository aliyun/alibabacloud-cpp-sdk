// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAISERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETAISERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SetAIServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAIServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedTypes, failedTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessTypes, successTypes_);
    };
    friend void from_json(const Darabonba::Json& j, SetAIServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedTypes, failedTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessTypes, successTypes_);
    };
    SetAIServiceResponseBody() = default ;
    SetAIServiceResponseBody(const SetAIServiceResponseBody &) = default ;
    SetAIServiceResponseBody(SetAIServiceResponseBody &&) = default ;
    SetAIServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAIServiceResponseBody() = default ;
    SetAIServiceResponseBody& operator=(const SetAIServiceResponseBody &) = default ;
    SetAIServiceResponseBody& operator=(SetAIServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedTypes_ != nullptr
        && this->requestId_ != nullptr && this->successTypes_ != nullptr; };
    // failedTypes Field Functions 
    bool hasFailedTypes() const { return this->failedTypes_ != nullptr;};
    void deleteFailedTypes() { this->failedTypes_ = nullptr;};
    inline string failedTypes() const { DARABONBA_PTR_GET_DEFAULT(failedTypes_, "") };
    inline SetAIServiceResponseBody& setFailedTypes(string failedTypes) { DARABONBA_PTR_SET_VALUE(failedTypes_, failedTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetAIServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successTypes Field Functions 
    bool hasSuccessTypes() const { return this->successTypes_ != nullptr;};
    void deleteSuccessTypes() { this->successTypes_ = nullptr;};
    inline string successTypes() const { DARABONBA_PTR_GET_DEFAULT(successTypes_, "") };
    inline SetAIServiceResponseBody& setSuccessTypes(string successTypes) { DARABONBA_PTR_SET_VALUE(successTypes_, successTypes) };


  protected:
    std::shared_ptr<string> failedTypes_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> successTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
