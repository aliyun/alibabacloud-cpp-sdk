// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERISKLEVELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERISKLEVELSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceRiskLevelsRequestInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInstanceRiskLevelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceRiskLevelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceRiskLevelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeInstanceRiskLevelsRequest() = default ;
    DescribeInstanceRiskLevelsRequest(const DescribeInstanceRiskLevelsRequest &) = default ;
    DescribeInstanceRiskLevelsRequest(DescribeInstanceRiskLevelsRequest &&) = default ;
    DescribeInstanceRiskLevelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceRiskLevelsRequest() = default ;
    DescribeInstanceRiskLevelsRequest& operator=(const DescribeInstanceRiskLevelsRequest &) = default ;
    DescribeInstanceRiskLevelsRequest& operator=(DescribeInstanceRiskLevelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instances_ != nullptr
        && this->lang_ != nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<DescribeInstanceRiskLevelsRequestInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<DescribeInstanceRiskLevelsRequestInstances>) };
    inline vector<DescribeInstanceRiskLevelsRequestInstances> instances() { DARABONBA_PTR_GET(instances_, vector<DescribeInstanceRiskLevelsRequestInstances>) };
    inline DescribeInstanceRiskLevelsRequest& setInstances(const vector<DescribeInstanceRiskLevelsRequestInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeInstanceRiskLevelsRequest& setInstances(vector<DescribeInstanceRiskLevelsRequestInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeInstanceRiskLevelsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The information about the instances.
    std::shared_ptr<vector<DescribeInstanceRiskLevelsRequestInstances>> instances_ = nullptr;
    // The language of the content within the response. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
