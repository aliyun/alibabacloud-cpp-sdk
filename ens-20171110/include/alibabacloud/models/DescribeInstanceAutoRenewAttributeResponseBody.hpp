// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAUTORENEWATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAUTORENEWATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstanceAutoRenewAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAutoRenewAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(InstanceRenewAttributes, instanceRenewAttributes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAutoRenewAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(InstanceRenewAttributes, instanceRenewAttributes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceAutoRenewAttributeResponseBody() = default ;
    DescribeInstanceAutoRenewAttributeResponseBody(const DescribeInstanceAutoRenewAttributeResponseBody &) = default ;
    DescribeInstanceAutoRenewAttributeResponseBody(DescribeInstanceAutoRenewAttributeResponseBody &&) = default ;
    DescribeInstanceAutoRenewAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAutoRenewAttributeResponseBody() = default ;
    DescribeInstanceAutoRenewAttributeResponseBody& operator=(const DescribeInstanceAutoRenewAttributeResponseBody &) = default ;
    DescribeInstanceAutoRenewAttributeResponseBody& operator=(DescribeInstanceAutoRenewAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceRenewAttributes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceRenewAttributes& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceRenewAttribute, instanceRenewAttribute_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceRenewAttributes& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceRenewAttribute, instanceRenewAttribute_);
      };
      InstanceRenewAttributes() = default ;
      InstanceRenewAttributes(const InstanceRenewAttributes &) = default ;
      InstanceRenewAttributes(InstanceRenewAttributes &&) = default ;
      InstanceRenewAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceRenewAttributes() = default ;
      InstanceRenewAttributes& operator=(const InstanceRenewAttributes &) = default ;
      InstanceRenewAttributes& operator=(InstanceRenewAttributes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceRenewAttribute : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceRenewAttribute& obj) { 
          DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceRenewAttribute& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        };
        InstanceRenewAttribute() = default ;
        InstanceRenewAttribute(const InstanceRenewAttribute &) = default ;
        InstanceRenewAttribute(InstanceRenewAttribute &&) = default ;
        InstanceRenewAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceRenewAttribute() = default ;
        InstanceRenewAttribute& operator=(const InstanceRenewAttribute &) = default ;
        InstanceRenewAttribute& operator=(InstanceRenewAttribute &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoRenewal_ == nullptr
        && this->duration_ == nullptr && this->instanceId_ == nullptr; };
        // autoRenewal Field Functions 
        bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
        void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
        inline bool getAutoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
        inline InstanceRenewAttribute& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
        inline InstanceRenewAttribute& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceRenewAttribute& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      protected:
        // The renewal type of the instance.
        // 
        // *   **true**: enables auto-renewal.
        // *   **false**: disables auto-renewal.
        shared_ptr<bool> autoRenewal_ {};
        // The unit of the auto-renewal period.
        shared_ptr<string> duration_ {};
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
      };

      virtual bool empty() const override { return this->instanceRenewAttribute_ == nullptr; };
      // instanceRenewAttribute Field Functions 
      bool hasInstanceRenewAttribute() const { return this->instanceRenewAttribute_ != nullptr;};
      void deleteInstanceRenewAttribute() { this->instanceRenewAttribute_ = nullptr;};
      inline const vector<InstanceRenewAttributes::InstanceRenewAttribute> & getInstanceRenewAttribute() const { DARABONBA_PTR_GET_CONST(instanceRenewAttribute_, vector<InstanceRenewAttributes::InstanceRenewAttribute>) };
      inline vector<InstanceRenewAttributes::InstanceRenewAttribute> getInstanceRenewAttribute() { DARABONBA_PTR_GET(instanceRenewAttribute_, vector<InstanceRenewAttributes::InstanceRenewAttribute>) };
      inline InstanceRenewAttributes& setInstanceRenewAttribute(const vector<InstanceRenewAttributes::InstanceRenewAttribute> & instanceRenewAttribute) { DARABONBA_PTR_SET_VALUE(instanceRenewAttribute_, instanceRenewAttribute) };
      inline InstanceRenewAttributes& setInstanceRenewAttribute(vector<InstanceRenewAttributes::InstanceRenewAttribute> && instanceRenewAttribute) { DARABONBA_PTR_SET_RVALUE(instanceRenewAttribute_, instanceRenewAttribute) };


    protected:
      shared_ptr<vector<InstanceRenewAttributes::InstanceRenewAttribute>> instanceRenewAttribute_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->instanceRenewAttributes_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeInstanceAutoRenewAttributeResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instanceRenewAttributes Field Functions 
    bool hasInstanceRenewAttributes() const { return this->instanceRenewAttributes_ != nullptr;};
    void deleteInstanceRenewAttributes() { this->instanceRenewAttributes_ = nullptr;};
    inline const DescribeInstanceAutoRenewAttributeResponseBody::InstanceRenewAttributes & getInstanceRenewAttributes() const { DARABONBA_PTR_GET_CONST(instanceRenewAttributes_, DescribeInstanceAutoRenewAttributeResponseBody::InstanceRenewAttributes) };
    inline DescribeInstanceAutoRenewAttributeResponseBody::InstanceRenewAttributes getInstanceRenewAttributes() { DARABONBA_PTR_GET(instanceRenewAttributes_, DescribeInstanceAutoRenewAttributeResponseBody::InstanceRenewAttributes) };
    inline DescribeInstanceAutoRenewAttributeResponseBody& setInstanceRenewAttributes(const DescribeInstanceAutoRenewAttributeResponseBody::InstanceRenewAttributes & instanceRenewAttributes) { DARABONBA_PTR_SET_VALUE(instanceRenewAttributes_, instanceRenewAttributes) };
    inline DescribeInstanceAutoRenewAttributeResponseBody& setInstanceRenewAttributes(DescribeInstanceAutoRenewAttributeResponseBody::InstanceRenewAttributes && instanceRenewAttributes) { DARABONBA_PTR_SET_RVALUE(instanceRenewAttributes_, instanceRenewAttributes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceAutoRenewAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned service code. A value of 0 indicates that the operation was successful.
    shared_ptr<int32_t> code_ {};
    // The renewal status of the instance.
    shared_ptr<DescribeInstanceAutoRenewAttributeResponseBody::InstanceRenewAttributes> instanceRenewAttributes_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
