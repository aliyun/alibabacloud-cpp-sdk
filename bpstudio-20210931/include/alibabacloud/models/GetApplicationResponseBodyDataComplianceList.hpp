// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYDATACOMPLIANCELIST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYDATACOMPLIANCELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetApplicationResponseBodyDataComplianceListRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetApplicationResponseBodyDataComplianceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationResponseBodyDataComplianceList& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceCode, resourceCode_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationResponseBodyDataComplianceList& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceCode, resourceCode_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    GetApplicationResponseBodyDataComplianceList() = default ;
    GetApplicationResponseBodyDataComplianceList(const GetApplicationResponseBodyDataComplianceList &) = default ;
    GetApplicationResponseBodyDataComplianceList(GetApplicationResponseBodyDataComplianceList &&) = default ;
    GetApplicationResponseBodyDataComplianceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationResponseBodyDataComplianceList() = default ;
    GetApplicationResponseBodyDataComplianceList& operator=(const GetApplicationResponseBodyDataComplianceList &) = default ;
    GetApplicationResponseBodyDataComplianceList& operator=(GetApplicationResponseBodyDataComplianceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceCode_ == nullptr
        && return this->resourceName_ == nullptr && return this->rules_ == nullptr; };
    // resourceCode Field Functions 
    bool hasResourceCode() const { return this->resourceCode_ != nullptr;};
    void deleteResourceCode() { this->resourceCode_ = nullptr;};
    inline string resourceCode() const { DARABONBA_PTR_GET_DEFAULT(resourceCode_, "") };
    inline GetApplicationResponseBodyDataComplianceList& setResourceCode(string resourceCode) { DARABONBA_PTR_SET_VALUE(resourceCode_, resourceCode) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline GetApplicationResponseBodyDataComplianceList& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::GetApplicationResponseBodyDataComplianceListRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::GetApplicationResponseBodyDataComplianceListRules>) };
    inline vector<Models::GetApplicationResponseBodyDataComplianceListRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::GetApplicationResponseBodyDataComplianceListRules>) };
    inline GetApplicationResponseBodyDataComplianceList& setRules(const vector<Models::GetApplicationResponseBodyDataComplianceListRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline GetApplicationResponseBodyDataComplianceList& setRules(vector<Models::GetApplicationResponseBodyDataComplianceListRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    std::shared_ptr<string> resourceCode_ = nullptr;
    std::shared_ptr<string> resourceName_ = nullptr;
    std::shared_ptr<vector<Models::GetApplicationResponseBodyDataComplianceListRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
