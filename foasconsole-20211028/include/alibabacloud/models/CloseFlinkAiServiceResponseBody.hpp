// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOSEFLINKAISERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOSEFLINKAISERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class CloseFlinkAiServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloseFlinkAiServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CloseFlinkAiServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CloseFlinkAiServiceResponseBody() = default ;
    CloseFlinkAiServiceResponseBody(const CloseFlinkAiServiceResponseBody &) = default ;
    CloseFlinkAiServiceResponseBody(CloseFlinkAiServiceResponseBody &&) = default ;
    CloseFlinkAiServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloseFlinkAiServiceResponseBody() = default ;
    CloseFlinkAiServiceResponseBody& operator=(const CloseFlinkAiServiceResponseBody &) = default ;
    CloseFlinkAiServiceResponseBody& operator=(CloseFlinkAiServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloseFlinkAiServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CloseFlinkAiServiceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
