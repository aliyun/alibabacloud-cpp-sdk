// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCONTAINERPLUGINRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCONTAINERPLUGINRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyContainerPluginRuleResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyContainerPluginRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyContainerPluginRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyContainerPluginRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyContainerPluginRuleResponseBody() = default ;
    ModifyContainerPluginRuleResponseBody(const ModifyContainerPluginRuleResponseBody &) = default ;
    ModifyContainerPluginRuleResponseBody(ModifyContainerPluginRuleResponseBody &&) = default ;
    ModifyContainerPluginRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyContainerPluginRuleResponseBody() = default ;
    ModifyContainerPluginRuleResponseBody& operator=(const ModifyContainerPluginRuleResponseBody &) = default ;
    ModifyContainerPluginRuleResponseBody& operator=(ModifyContainerPluginRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModifyContainerPluginRuleResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ModifyContainerPluginRuleResponseBodyData) };
    inline ModifyContainerPluginRuleResponseBodyData data() { DARABONBA_PTR_GET(data_, ModifyContainerPluginRuleResponseBodyData) };
    inline ModifyContainerPluginRuleResponseBody& setData(const ModifyContainerPluginRuleResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModifyContainerPluginRuleResponseBody& setData(ModifyContainerPluginRuleResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyContainerPluginRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The defense rule against container escapes.
    std::shared_ptr<ModifyContainerPluginRuleResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
