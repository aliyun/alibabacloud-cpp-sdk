// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTANCEHEALERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSTANCEHEALERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class InstanceHealerModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceHealerModel& obj) { 
        DARABONBA_PTR_TO_JSON(Result, result_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceHealerModel& obj) { 
        DARABONBA_PTR_FROM_JSON(Result, result_);
      };
      InstanceHealerModel() = default ;
      InstanceHealerModel(const InstanceHealerModel &) = default ;
      InstanceHealerModel(InstanceHealerModel &&) = default ;
      InstanceHealerModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceHealerModel() = default ;
      InstanceHealerModel& operator=(const InstanceHealerModel &) = default ;
      InstanceHealerModel& operator=(InstanceHealerModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->result_ == nullptr; };
      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline InstanceHealerModel& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    protected:
      shared_ptr<string> result_ {};
    };

    virtual bool empty() const override { return this->instanceHealerModel_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceHealerModel Field Functions 
    bool hasInstanceHealerModel() const { return this->instanceHealerModel_ != nullptr;};
    void deleteInstanceHealerModel() { this->instanceHealerModel_ = nullptr;};
    inline const InstanceHealerResponseBody::InstanceHealerModel & getInstanceHealerModel() const { DARABONBA_PTR_GET_CONST(instanceHealerModel_, InstanceHealerResponseBody::InstanceHealerModel) };
    inline InstanceHealerResponseBody::InstanceHealerModel getInstanceHealerModel() { DARABONBA_PTR_GET(instanceHealerModel_, InstanceHealerResponseBody::InstanceHealerModel) };
    inline InstanceHealerResponseBody& setInstanceHealerModel(const InstanceHealerResponseBody::InstanceHealerModel & instanceHealerModel) { DARABONBA_PTR_SET_VALUE(instanceHealerModel_, instanceHealerModel) };
    inline InstanceHealerResponseBody& setInstanceHealerModel(InstanceHealerResponseBody::InstanceHealerModel && instanceHealerModel) { DARABONBA_PTR_SET_RVALUE(instanceHealerModel_, instanceHealerModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InstanceHealerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<InstanceHealerResponseBody::InstanceHealerModel> instanceHealerModel_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
