// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTANCEHEALERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSTANCEHEALERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InstanceHealerResponseBodyInstanceHealerModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class InstanceHealerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstanceHealerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceHealerModel, instanceHealerModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, InstanceHealerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceHealerModel, instanceHealerModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    InstanceHealerResponseBody() = default ;
    InstanceHealerResponseBody(const InstanceHealerResponseBody &) = default ;
    InstanceHealerResponseBody(InstanceHealerResponseBody &&) = default ;
    InstanceHealerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstanceHealerResponseBody() = default ;
    InstanceHealerResponseBody& operator=(const InstanceHealerResponseBody &) = default ;
    InstanceHealerResponseBody& operator=(InstanceHealerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceHealerModel_ == nullptr
        && return this->requestId_ == nullptr; };
    // instanceHealerModel Field Functions 
    bool hasInstanceHealerModel() const { return this->instanceHealerModel_ != nullptr;};
    void deleteInstanceHealerModel() { this->instanceHealerModel_ = nullptr;};
    inline const InstanceHealerResponseBodyInstanceHealerModel & instanceHealerModel() const { DARABONBA_PTR_GET_CONST(instanceHealerModel_, InstanceHealerResponseBodyInstanceHealerModel) };
    inline InstanceHealerResponseBodyInstanceHealerModel instanceHealerModel() { DARABONBA_PTR_GET(instanceHealerModel_, InstanceHealerResponseBodyInstanceHealerModel) };
    inline InstanceHealerResponseBody& setInstanceHealerModel(const InstanceHealerResponseBodyInstanceHealerModel & instanceHealerModel) { DARABONBA_PTR_SET_VALUE(instanceHealerModel_, instanceHealerModel) };
    inline InstanceHealerResponseBody& setInstanceHealerModel(InstanceHealerResponseBodyInstanceHealerModel && instanceHealerModel) { DARABONBA_PTR_SET_RVALUE(instanceHealerModel_, instanceHealerModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InstanceHealerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<InstanceHealerResponseBodyInstanceHealerModel> instanceHealerModel_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
