// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSINSTANCECREATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ONSINSTANCECREATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsInstanceCreateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsInstanceCreateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OnsInstanceCreateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OnsInstanceCreateResponseBody() = default ;
    OnsInstanceCreateResponseBody(const OnsInstanceCreateResponseBody &) = default ;
    OnsInstanceCreateResponseBody(OnsInstanceCreateResponseBody &&) = default ;
    OnsInstanceCreateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsInstanceCreateResponseBody() = default ;
    OnsInstanceCreateResponseBody& operator=(const OnsInstanceCreateResponseBody &) = default ;
    OnsInstanceCreateResponseBody& operator=(OnsInstanceCreateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->instanceType_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline int32_t getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, 0) };
      inline Data& setInstanceType(int32_t instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    protected:
      // The ID of the instance that you created.
      shared_ptr<string> instanceId_ {};
      // The edition of the instance that you created. Valid value:
      // 
      // *   **1**: Standard Edition instances
      shared_ptr<int32_t> instanceType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const OnsInstanceCreateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, OnsInstanceCreateResponseBody::Data) };
    inline OnsInstanceCreateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, OnsInstanceCreateResponseBody::Data) };
    inline OnsInstanceCreateResponseBody& setData(const OnsInstanceCreateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline OnsInstanceCreateResponseBody& setData(OnsInstanceCreateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OnsInstanceCreateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The result returned.
    shared_ptr<OnsInstanceCreateResponseBody::Data> data_ {};
    // The ID of the request. This parameter is a common parameter. Each request has a unique ID. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
