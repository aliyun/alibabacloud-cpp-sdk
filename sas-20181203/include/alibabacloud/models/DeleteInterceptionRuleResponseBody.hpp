// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINTERCEPTIONRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEINTERCEPTIONRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteInterceptionRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInterceptionRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInterceptionRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteInterceptionRuleResponseBody() = default ;
    DeleteInterceptionRuleResponseBody(const DeleteInterceptionRuleResponseBody &) = default ;
    DeleteInterceptionRuleResponseBody(DeleteInterceptionRuleResponseBody &&) = default ;
    DeleteInterceptionRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInterceptionRuleResponseBody() = default ;
    DeleteInterceptionRuleResponseBody& operator=(const DeleteInterceptionRuleResponseBody &) = default ;
    DeleteInterceptionRuleResponseBody& operator=(DeleteInterceptionRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteInterceptionRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
