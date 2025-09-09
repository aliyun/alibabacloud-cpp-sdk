// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCESREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCESREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServiceInstancesRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstancesRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstancesRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListServiceInstancesRequestFilter() = default ;
    ListServiceInstancesRequestFilter(const ListServiceInstancesRequestFilter &) = default ;
    ListServiceInstancesRequestFilter(ListServiceInstancesRequestFilter &&) = default ;
    ListServiceInstancesRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstancesRequestFilter() = default ;
    ListServiceInstancesRequestFilter& operator=(const ListServiceInstancesRequestFilter &) = default ;
    ListServiceInstancesRequestFilter& operator=(ListServiceInstancesRequestFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->value_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListServiceInstancesRequestFilter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<string> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
    inline vector<string> value() { DARABONBA_PTR_GET(value_, vector<string>) };
    inline ListServiceInstancesRequestFilter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline ListServiceInstancesRequestFilter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The parameter name of the filter. You can specify one or more filters. Valid values:
    // 
    // *   Name: The service name. If you want to perform a fuzzy match, specify the service name in the *xxx* format. For example, if the service name is My Service, you can set the filter value to *My* or *Service*.
    // *   ServiceInstanceId: The ID of the service instance.
    // *   ServiceId: The service ID.
    // *   UserId: The user ID.
    // *   Version: The service version.
    // *   Status: The status of the service instance.
    // *   DeployType: The deployment type of the service.
    // *   ServiceType: The service type.
    // *   OperationStartTimeBefore: The time before the hosted O\\&M starts.
    // *   OperationStartTimeAfter: The time after the hosted O\\&M starts.
    // *   OperationEndTimeBefore: The time before the hosted O\\&M ends.
    // *   OperationEndTimeAfter: The time after the hosted O\\&M ends.
    // *   OperatedServiceInstanceId: The ID of the hosted O\\&M instance that belongs to a private service.
    // *   OperationServiceInstanceId: The ID of the hosted O\\&M service instance that belongs to a hosted O\\&M service.
    // *   EnableInstanceOps: Whether the hosted O\\&M feature is enabled for service instances.
    std::shared_ptr<string> name_ = nullptr;
    // The parameter values of the filter.
    std::shared_ptr<vector<string>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
