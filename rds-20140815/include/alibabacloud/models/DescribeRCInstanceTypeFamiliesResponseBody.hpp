// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCETYPEFAMILIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCETYPEFAMILIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceTypeFamiliesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceTypeFamiliesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceTypeFamilies, instanceTypeFamilies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceTypeFamiliesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamilies, instanceTypeFamilies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRCInstanceTypeFamiliesResponseBody() = default ;
    DescribeRCInstanceTypeFamiliesResponseBody(const DescribeRCInstanceTypeFamiliesResponseBody &) = default ;
    DescribeRCInstanceTypeFamiliesResponseBody(DescribeRCInstanceTypeFamiliesResponseBody &&) = default ;
    DescribeRCInstanceTypeFamiliesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceTypeFamiliesResponseBody() = default ;
    DescribeRCInstanceTypeFamiliesResponseBody& operator=(const DescribeRCInstanceTypeFamiliesResponseBody &) = default ;
    DescribeRCInstanceTypeFamiliesResponseBody& operator=(DescribeRCInstanceTypeFamiliesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceTypeFamilies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceTypeFamilies& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceTypeFamilies& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
      };
      InstanceTypeFamilies() = default ;
      InstanceTypeFamilies(const InstanceTypeFamilies &) = default ;
      InstanceTypeFamilies(InstanceTypeFamilies &&) = default ;
      InstanceTypeFamilies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceTypeFamilies() = default ;
      InstanceTypeFamilies& operator=(const InstanceTypeFamilies &) = default ;
      InstanceTypeFamilies& operator=(InstanceTypeFamilies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceTypeFamily : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceTypeFamily& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceTypeFamilyDesc, instanceTypeFamilyDesc_);
          DARABONBA_PTR_TO_JSON(InstanceTypeFamilyId, instanceTypeFamilyId_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceTypeFamily& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceTypeFamilyDesc, instanceTypeFamilyDesc_);
          DARABONBA_PTR_FROM_JSON(InstanceTypeFamilyId, instanceTypeFamilyId_);
        };
        InstanceTypeFamily() = default ;
        InstanceTypeFamily(const InstanceTypeFamily &) = default ;
        InstanceTypeFamily(InstanceTypeFamily &&) = default ;
        InstanceTypeFamily(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceTypeFamily() = default ;
        InstanceTypeFamily& operator=(const InstanceTypeFamily &) = default ;
        InstanceTypeFamily& operator=(InstanceTypeFamily &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceTypeFamilyDesc_ == nullptr
        && this->instanceTypeFamilyId_ == nullptr; };
        // instanceTypeFamilyDesc Field Functions 
        bool hasInstanceTypeFamilyDesc() const { return this->instanceTypeFamilyDesc_ != nullptr;};
        void deleteInstanceTypeFamilyDesc() { this->instanceTypeFamilyDesc_ = nullptr;};
        inline string getInstanceTypeFamilyDesc() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamilyDesc_, "") };
        inline InstanceTypeFamily& setInstanceTypeFamilyDesc(string instanceTypeFamilyDesc) { DARABONBA_PTR_SET_VALUE(instanceTypeFamilyDesc_, instanceTypeFamilyDesc) };


        // instanceTypeFamilyId Field Functions 
        bool hasInstanceTypeFamilyId() const { return this->instanceTypeFamilyId_ != nullptr;};
        void deleteInstanceTypeFamilyId() { this->instanceTypeFamilyId_ = nullptr;};
        inline string getInstanceTypeFamilyId() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamilyId_, "") };
        inline InstanceTypeFamily& setInstanceTypeFamilyId(string instanceTypeFamilyId) { DARABONBA_PTR_SET_VALUE(instanceTypeFamilyId_, instanceTypeFamilyId) };


      protected:
        // The description of the instance family.
        shared_ptr<string> instanceTypeFamilyDesc_ {};
        // The ID of the instance family.
        shared_ptr<string> instanceTypeFamilyId_ {};
      };

      virtual bool empty() const override { return this->instanceTypeFamily_ == nullptr; };
      // instanceTypeFamily Field Functions 
      bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
      void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
      inline const vector<InstanceTypeFamilies::InstanceTypeFamily> & getInstanceTypeFamily() const { DARABONBA_PTR_GET_CONST(instanceTypeFamily_, vector<InstanceTypeFamilies::InstanceTypeFamily>) };
      inline vector<InstanceTypeFamilies::InstanceTypeFamily> getInstanceTypeFamily() { DARABONBA_PTR_GET(instanceTypeFamily_, vector<InstanceTypeFamilies::InstanceTypeFamily>) };
      inline InstanceTypeFamilies& setInstanceTypeFamily(const vector<InstanceTypeFamilies::InstanceTypeFamily> & instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };
      inline InstanceTypeFamilies& setInstanceTypeFamily(vector<InstanceTypeFamilies::InstanceTypeFamily> && instanceTypeFamily) { DARABONBA_PTR_SET_RVALUE(instanceTypeFamily_, instanceTypeFamily) };


    protected:
      // The instance family.
      shared_ptr<vector<InstanceTypeFamilies::InstanceTypeFamily>> instanceTypeFamily_ {};
    };

    virtual bool empty() const override { return this->instanceTypeFamilies_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceTypeFamilies Field Functions 
    bool hasInstanceTypeFamilies() const { return this->instanceTypeFamilies_ != nullptr;};
    void deleteInstanceTypeFamilies() { this->instanceTypeFamilies_ = nullptr;};
    inline const DescribeRCInstanceTypeFamiliesResponseBody::InstanceTypeFamilies & getInstanceTypeFamilies() const { DARABONBA_PTR_GET_CONST(instanceTypeFamilies_, DescribeRCInstanceTypeFamiliesResponseBody::InstanceTypeFamilies) };
    inline DescribeRCInstanceTypeFamiliesResponseBody::InstanceTypeFamilies getInstanceTypeFamilies() { DARABONBA_PTR_GET(instanceTypeFamilies_, DescribeRCInstanceTypeFamiliesResponseBody::InstanceTypeFamilies) };
    inline DescribeRCInstanceTypeFamiliesResponseBody& setInstanceTypeFamilies(const DescribeRCInstanceTypeFamiliesResponseBody::InstanceTypeFamilies & instanceTypeFamilies) { DARABONBA_PTR_SET_VALUE(instanceTypeFamilies_, instanceTypeFamilies) };
    inline DescribeRCInstanceTypeFamiliesResponseBody& setInstanceTypeFamilies(DescribeRCInstanceTypeFamiliesResponseBody::InstanceTypeFamilies && instanceTypeFamilies) { DARABONBA_PTR_SET_RVALUE(instanceTypeFamilies_, instanceTypeFamilies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCInstanceTypeFamiliesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance families.
    shared_ptr<DescribeRCInstanceTypeFamiliesResponseBody::InstanceTypeFamilies> instanceTypeFamilies_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
