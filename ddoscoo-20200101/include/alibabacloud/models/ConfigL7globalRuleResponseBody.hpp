// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGL7GLOBALRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONFIGL7GLOBALRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ConfigL7GlobalRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigL7GlobalRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigL7GlobalRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ConfigL7GlobalRuleResponseBody() = default ;
    ConfigL7GlobalRuleResponseBody(const ConfigL7GlobalRuleResponseBody &) = default ;
    ConfigL7GlobalRuleResponseBody(ConfigL7GlobalRuleResponseBody &&) = default ;
    ConfigL7GlobalRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigL7GlobalRuleResponseBody() = default ;
    ConfigL7GlobalRuleResponseBody& operator=(const ConfigL7GlobalRuleResponseBody &) = default ;
    ConfigL7GlobalRuleResponseBody& operator=(ConfigL7GlobalRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ConfigL7GlobalRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
