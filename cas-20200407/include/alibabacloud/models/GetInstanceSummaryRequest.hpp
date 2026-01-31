// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCESUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCESUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class GetInstanceSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
    };
    GetInstanceSummaryRequest() = default ;
    GetInstanceSummaryRequest(const GetInstanceSummaryRequest &) = default ;
    GetInstanceSummaryRequest(GetInstanceSummaryRequest &&) = default ;
    GetInstanceSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceSummaryRequest() = default ;
    GetInstanceSummaryRequest& operator=(const GetInstanceSummaryRequest &) = default ;
    GetInstanceSummaryRequest& operator=(GetInstanceSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceType_ == nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline GetInstanceSummaryRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


  protected:
    shared_ptr<string> instanceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
