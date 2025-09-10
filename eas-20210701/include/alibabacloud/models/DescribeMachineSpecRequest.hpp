// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMACHINESPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMACHINESPECREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeMachineSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMachineSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMachineSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
    };
    DescribeMachineSpecRequest() = default ;
    DescribeMachineSpecRequest(const DescribeMachineSpecRequest &) = default ;
    DescribeMachineSpecRequest(DescribeMachineSpecRequest &&) = default ;
    DescribeMachineSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMachineSpecRequest() = default ;
    DescribeMachineSpecRequest& operator=(const DescribeMachineSpecRequest &) = default ;
    DescribeMachineSpecRequest& operator=(DescribeMachineSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceTypes_ != nullptr; };
    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline DescribeMachineSpecRequest& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline DescribeMachineSpecRequest& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


  protected:
    // This parameter is deprecated.
    std::shared_ptr<vector<string>> instanceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
