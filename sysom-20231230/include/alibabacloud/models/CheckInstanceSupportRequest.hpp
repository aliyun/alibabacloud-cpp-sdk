// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKINSTANCESUPPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKINSTANCESUPPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class CheckInstanceSupportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckInstanceSupportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(instances, instances_);
      DARABONBA_PTR_TO_JSON(region, region_);
    };
    friend void from_json(const Darabonba::Json& j, CheckInstanceSupportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(instances, instances_);
      DARABONBA_PTR_FROM_JSON(region, region_);
    };
    CheckInstanceSupportRequest() = default ;
    CheckInstanceSupportRequest(const CheckInstanceSupportRequest &) = default ;
    CheckInstanceSupportRequest(CheckInstanceSupportRequest &&) = default ;
    CheckInstanceSupportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckInstanceSupportRequest() = default ;
    CheckInstanceSupportRequest& operator=(const CheckInstanceSupportRequest &) = default ;
    CheckInstanceSupportRequest& operator=(CheckInstanceSupportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instances_ != nullptr
        && this->region_ != nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<string> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<string>) };
    inline vector<string> instances() { DARABONBA_PTR_GET(instances_, vector<string>) };
    inline CheckInstanceSupportRequest& setInstances(const vector<string> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline CheckInstanceSupportRequest& setInstances(vector<string> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CheckInstanceSupportRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    std::shared_ptr<vector<string>> instances_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
