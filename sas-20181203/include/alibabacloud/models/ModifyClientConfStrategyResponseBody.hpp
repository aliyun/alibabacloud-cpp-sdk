// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLIENTCONFSTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLIENTCONFSTRATEGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyClientConfStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClientConfStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClientConfStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyClientConfStrategyResponseBody() = default ;
    ModifyClientConfStrategyResponseBody(const ModifyClientConfStrategyResponseBody &) = default ;
    ModifyClientConfStrategyResponseBody(ModifyClientConfStrategyResponseBody &&) = default ;
    ModifyClientConfStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClientConfStrategyResponseBody() = default ;
    ModifyClientConfStrategyResponseBody& operator=(const ModifyClientConfStrategyResponseBody &) = default ;
    ModifyClientConfStrategyResponseBody& operator=(ModifyClientConfStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyClientConfStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
