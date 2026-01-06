// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEGROUPSPECRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEGROUPSPECRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeResourceGroupSpecResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceGroupSpecResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Specs, specs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceGroupSpecResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Specs, specs_);
    };
    DescribeResourceGroupSpecResponseBody() = default ;
    DescribeResourceGroupSpecResponseBody(const DescribeResourceGroupSpecResponseBody &) = default ;
    DescribeResourceGroupSpecResponseBody(DescribeResourceGroupSpecResponseBody &&) = default ;
    DescribeResourceGroupSpecResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceGroupSpecResponseBody() = default ;
    DescribeResourceGroupSpecResponseBody& operator=(const DescribeResourceGroupSpecResponseBody &) = default ;
    DescribeResourceGroupSpecResponseBody& operator=(DescribeResourceGroupSpecResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Specs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Specs& obj) { 
        DARABONBA_PTR_TO_JSON(AllocateUnits, allocateUnits_);
        DARABONBA_PTR_TO_JSON(MaxQuantity, maxQuantity_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Specs& obj) { 
        DARABONBA_PTR_FROM_JSON(AllocateUnits, allocateUnits_);
        DARABONBA_PTR_FROM_JSON(MaxQuantity, maxQuantity_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Specs() = default ;
      Specs(const Specs &) = default ;
      Specs(Specs &&) = default ;
      Specs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Specs() = default ;
      Specs& operator=(const Specs &) = default ;
      Specs& operator=(Specs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allocateUnits_ == nullptr
        && this->maxQuantity_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
      // allocateUnits Field Functions 
      bool hasAllocateUnits() const { return this->allocateUnits_ != nullptr;};
      void deleteAllocateUnits() { this->allocateUnits_ = nullptr;};
      inline const vector<string> & getAllocateUnits() const { DARABONBA_PTR_GET_CONST(allocateUnits_, vector<string>) };
      inline vector<string> getAllocateUnits() { DARABONBA_PTR_GET(allocateUnits_, vector<string>) };
      inline Specs& setAllocateUnits(const vector<string> & allocateUnits) { DARABONBA_PTR_SET_VALUE(allocateUnits_, allocateUnits) };
      inline Specs& setAllocateUnits(vector<string> && allocateUnits) { DARABONBA_PTR_SET_RVALUE(allocateUnits_, allocateUnits) };


      // maxQuantity Field Functions 
      bool hasMaxQuantity() const { return this->maxQuantity_ != nullptr;};
      void deleteMaxQuantity() { this->maxQuantity_ = nullptr;};
      inline int32_t getMaxQuantity() const { DARABONBA_PTR_GET_DEFAULT(maxQuantity_, 0) };
      inline Specs& setMaxQuantity(int32_t maxQuantity) { DARABONBA_PTR_SET_VALUE(maxQuantity_, maxQuantity) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Specs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Specs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The allocation units supported by this specification.
      shared_ptr<vector<string>> allocateUnits_ {};
      // The maximum number of resource groups that can be used with this specification.
      shared_ptr<int32_t> maxQuantity_ {};
      // The name of the specification.
      shared_ptr<string> name_ {};
      // The resource type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->specs_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourceGroupSpecResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // specs Field Functions 
    bool hasSpecs() const { return this->specs_ != nullptr;};
    void deleteSpecs() { this->specs_ = nullptr;};
    inline const vector<DescribeResourceGroupSpecResponseBody::Specs> & getSpecs() const { DARABONBA_PTR_GET_CONST(specs_, vector<DescribeResourceGroupSpecResponseBody::Specs>) };
    inline vector<DescribeResourceGroupSpecResponseBody::Specs> getSpecs() { DARABONBA_PTR_GET(specs_, vector<DescribeResourceGroupSpecResponseBody::Specs>) };
    inline DescribeResourceGroupSpecResponseBody& setSpecs(const vector<DescribeResourceGroupSpecResponseBody::Specs> & specs) { DARABONBA_PTR_SET_VALUE(specs_, specs) };
    inline DescribeResourceGroupSpecResponseBody& setSpecs(vector<DescribeResourceGroupSpecResponseBody::Specs> && specs) { DARABONBA_PTR_SET_RVALUE(specs_, specs) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried specifications.
    shared_ptr<vector<DescribeResourceGroupSpecResponseBody::Specs>> specs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
