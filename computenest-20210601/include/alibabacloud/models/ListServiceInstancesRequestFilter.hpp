// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCESREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCESREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
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
    // The parameter name of the filter. You can specify one or more parameter names to query services. Valid values:
    // 
    // - Name：Query by service name.
    // - ServiceInstanceName：Query by service  instance name.
    // - ServiceInstanceId：Query by service  instance ID.
    // - ServiceId：Query by service ID.
    // - Version：Query by service version.
    // - Status：Query by service status.
    // - DeployType: Query by service deployType.
    // - ServiceType：Query by service deployType.
    std::shared_ptr<string> name_ = nullptr;
    // The parameter values of the filter.
    std::shared_ptr<vector<string>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
