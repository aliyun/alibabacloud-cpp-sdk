// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPEFAMILIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPEFAMILIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceTypeFamiliesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTypeFamiliesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceTypeFamilies, instanceTypeFamilies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTypeFamiliesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamilies, instanceTypeFamilies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceTypeFamiliesResponseBody() = default ;
    DescribeInstanceTypeFamiliesResponseBody(const DescribeInstanceTypeFamiliesResponseBody &) = default ;
    DescribeInstanceTypeFamiliesResponseBody(DescribeInstanceTypeFamiliesResponseBody &&) = default ;
    DescribeInstanceTypeFamiliesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTypeFamiliesResponseBody() = default ;
    DescribeInstanceTypeFamiliesResponseBody& operator=(const DescribeInstanceTypeFamiliesResponseBody &) = default ;
    DescribeInstanceTypeFamiliesResponseBody& operator=(DescribeInstanceTypeFamiliesResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Generation, generation_);
          DARABONBA_PTR_TO_JSON(InstanceTypeFamilyId, instanceTypeFamilyId_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceTypeFamily& obj) { 
          DARABONBA_PTR_FROM_JSON(Generation, generation_);
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
        virtual bool empty() const override { return this->generation_ == nullptr
        && this->instanceTypeFamilyId_ == nullptr; };
        // generation Field Functions 
        bool hasGeneration() const { return this->generation_ != nullptr;};
        void deleteGeneration() { this->generation_ = nullptr;};
        inline string getGeneration() const { DARABONBA_PTR_GET_DEFAULT(generation_, "") };
        inline InstanceTypeFamily& setGeneration(string generation) { DARABONBA_PTR_SET_VALUE(generation_, generation) };


        // instanceTypeFamilyId Field Functions 
        bool hasInstanceTypeFamilyId() const { return this->instanceTypeFamilyId_ != nullptr;};
        void deleteInstanceTypeFamilyId() { this->instanceTypeFamilyId_ = nullptr;};
        inline string getInstanceTypeFamilyId() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamilyId_, "") };
        inline InstanceTypeFamily& setInstanceTypeFamilyId(string instanceTypeFamilyId) { DARABONBA_PTR_SET_VALUE(instanceTypeFamilyId_, instanceTypeFamilyId) };


      protected:
        // The series of the instance family.
        shared_ptr<string> generation_ {};
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
      shared_ptr<vector<InstanceTypeFamilies::InstanceTypeFamily>> instanceTypeFamily_ {};
    };

    virtual bool empty() const override { return this->instanceTypeFamilies_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceTypeFamilies Field Functions 
    bool hasInstanceTypeFamilies() const { return this->instanceTypeFamilies_ != nullptr;};
    void deleteInstanceTypeFamilies() { this->instanceTypeFamilies_ = nullptr;};
    inline const DescribeInstanceTypeFamiliesResponseBody::InstanceTypeFamilies & getInstanceTypeFamilies() const { DARABONBA_PTR_GET_CONST(instanceTypeFamilies_, DescribeInstanceTypeFamiliesResponseBody::InstanceTypeFamilies) };
    inline DescribeInstanceTypeFamiliesResponseBody::InstanceTypeFamilies getInstanceTypeFamilies() { DARABONBA_PTR_GET(instanceTypeFamilies_, DescribeInstanceTypeFamiliesResponseBody::InstanceTypeFamilies) };
    inline DescribeInstanceTypeFamiliesResponseBody& setInstanceTypeFamilies(const DescribeInstanceTypeFamiliesResponseBody::InstanceTypeFamilies & instanceTypeFamilies) { DARABONBA_PTR_SET_VALUE(instanceTypeFamilies_, instanceTypeFamilies) };
    inline DescribeInstanceTypeFamiliesResponseBody& setInstanceTypeFamilies(DescribeInstanceTypeFamiliesResponseBody::InstanceTypeFamilies && instanceTypeFamilies) { DARABONBA_PTR_SET_RVALUE(instanceTypeFamilies_, instanceTypeFamilies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceTypeFamiliesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance families.
    shared_ptr<DescribeInstanceTypeFamiliesResponseBody::InstanceTypeFamilies> instanceTypeFamilies_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
