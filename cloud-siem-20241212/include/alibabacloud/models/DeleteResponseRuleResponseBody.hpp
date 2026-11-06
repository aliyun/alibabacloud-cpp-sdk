// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERESPONSERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETERESPONSERULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class DeleteResponseRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteResponseRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteResponseRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteResponseRuleResponseBody() = default ;
    DeleteResponseRuleResponseBody(const DeleteResponseRuleResponseBody &) = default ;
    DeleteResponseRuleResponseBody(DeleteResponseRuleResponseBody &&) = default ;
    DeleteResponseRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteResponseRuleResponseBody() = default ;
    DeleteResponseRuleResponseBody& operator=(const DeleteResponseRuleResponseBody &) = default ;
    DeleteResponseRuleResponseBody& operator=(DeleteResponseRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteResponseRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
