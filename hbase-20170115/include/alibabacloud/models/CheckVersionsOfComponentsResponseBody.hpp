// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKVERSIONSOFCOMPONENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKVERSIONSOFCOMPONENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CheckVersionsOfComponentsResponseBodyComponents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class CheckVersionsOfComponentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckVersionsOfComponentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckVersionsOfComponentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckVersionsOfComponentsResponseBody() = default ;
    CheckVersionsOfComponentsResponseBody(const CheckVersionsOfComponentsResponseBody &) = default ;
    CheckVersionsOfComponentsResponseBody(CheckVersionsOfComponentsResponseBody &&) = default ;
    CheckVersionsOfComponentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckVersionsOfComponentsResponseBody() = default ;
    CheckVersionsOfComponentsResponseBody& operator=(const CheckVersionsOfComponentsResponseBody &) = default ;
    CheckVersionsOfComponentsResponseBody& operator=(CheckVersionsOfComponentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->components_ == nullptr
        && return this->requestId_ == nullptr; };
    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const CheckVersionsOfComponentsResponseBodyComponents & components() const { DARABONBA_PTR_GET_CONST(components_, CheckVersionsOfComponentsResponseBodyComponents) };
    inline CheckVersionsOfComponentsResponseBodyComponents components() { DARABONBA_PTR_GET(components_, CheckVersionsOfComponentsResponseBodyComponents) };
    inline CheckVersionsOfComponentsResponseBody& setComponents(const CheckVersionsOfComponentsResponseBodyComponents & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline CheckVersionsOfComponentsResponseBody& setComponents(CheckVersionsOfComponentsResponseBodyComponents && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckVersionsOfComponentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<CheckVersionsOfComponentsResponseBodyComponents> components_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
