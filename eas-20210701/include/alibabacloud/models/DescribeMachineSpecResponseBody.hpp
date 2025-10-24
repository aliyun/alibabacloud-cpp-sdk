// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMACHINESPECRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMACHINESPECRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMachineSpecResponseBodyInstanceMetas.hpp>
#include <alibabacloud/models/DescribeMachineSpecResponseBodyTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeMachineSpecResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMachineSpecResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceMetas, instanceMetas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Types, types_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMachineSpecResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceMetas, instanceMetas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Types, types_);
    };
    DescribeMachineSpecResponseBody() = default ;
    DescribeMachineSpecResponseBody(const DescribeMachineSpecResponseBody &) = default ;
    DescribeMachineSpecResponseBody(DescribeMachineSpecResponseBody &&) = default ;
    DescribeMachineSpecResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMachineSpecResponseBody() = default ;
    DescribeMachineSpecResponseBody& operator=(const DescribeMachineSpecResponseBody &) = default ;
    DescribeMachineSpecResponseBody& operator=(DescribeMachineSpecResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceMetas_ == nullptr
        && return this->requestId_ == nullptr && return this->types_ == nullptr; };
    // instanceMetas Field Functions 
    bool hasInstanceMetas() const { return this->instanceMetas_ != nullptr;};
    void deleteInstanceMetas() { this->instanceMetas_ = nullptr;};
    inline const vector<DescribeMachineSpecResponseBodyInstanceMetas> & instanceMetas() const { DARABONBA_PTR_GET_CONST(instanceMetas_, vector<DescribeMachineSpecResponseBodyInstanceMetas>) };
    inline vector<DescribeMachineSpecResponseBodyInstanceMetas> instanceMetas() { DARABONBA_PTR_GET(instanceMetas_, vector<DescribeMachineSpecResponseBodyInstanceMetas>) };
    inline DescribeMachineSpecResponseBody& setInstanceMetas(const vector<DescribeMachineSpecResponseBodyInstanceMetas> & instanceMetas) { DARABONBA_PTR_SET_VALUE(instanceMetas_, instanceMetas) };
    inline DescribeMachineSpecResponseBody& setInstanceMetas(vector<DescribeMachineSpecResponseBodyInstanceMetas> && instanceMetas) { DARABONBA_PTR_SET_RVALUE(instanceMetas_, instanceMetas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMachineSpecResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline const vector<DescribeMachineSpecResponseBodyTypes> & types() const { DARABONBA_PTR_GET_CONST(types_, vector<DescribeMachineSpecResponseBodyTypes>) };
    inline vector<DescribeMachineSpecResponseBodyTypes> types() { DARABONBA_PTR_GET(types_, vector<DescribeMachineSpecResponseBodyTypes>) };
    inline DescribeMachineSpecResponseBody& setTypes(const vector<DescribeMachineSpecResponseBodyTypes> & types) { DARABONBA_PTR_SET_VALUE(types_, types) };
    inline DescribeMachineSpecResponseBody& setTypes(vector<DescribeMachineSpecResponseBodyTypes> && types) { DARABONBA_PTR_SET_RVALUE(types_, types) };


  protected:
    // The instance types when the resources are specified.
    std::shared_ptr<vector<DescribeMachineSpecResponseBodyInstanceMetas>> instanceMetas_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The values that can be supported when the number of CPUs and memory size are specified for deployment.
    std::shared_ptr<vector<DescribeMachineSpecResponseBodyTypes>> types_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
