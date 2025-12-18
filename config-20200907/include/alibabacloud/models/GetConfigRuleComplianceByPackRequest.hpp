// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONFIGRULECOMPLIANCEBYPACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONFIGRULECOMPLIANCEBYPACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetConfigRuleComplianceByPackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConfigRuleComplianceByPackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConfigRuleComplianceByPackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
    };
    GetConfigRuleComplianceByPackRequest() = default ;
    GetConfigRuleComplianceByPackRequest(const GetConfigRuleComplianceByPackRequest &) = default ;
    GetConfigRuleComplianceByPackRequest(GetConfigRuleComplianceByPackRequest &&) = default ;
    GetConfigRuleComplianceByPackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConfigRuleComplianceByPackRequest() = default ;
    GetConfigRuleComplianceByPackRequest& operator=(const GetConfigRuleComplianceByPackRequest &) = default ;
    GetConfigRuleComplianceByPackRequest& operator=(GetConfigRuleComplianceByPackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliancePackId_ == nullptr; };
    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string compliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline GetConfigRuleComplianceByPackRequest& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


  protected:
    // The ID of the compliance package.
    // 
    // For more information about how to obtain the ID of a compliance package, see [ListCompliancePacks](https://help.aliyun.com/document_detail/263332.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> compliancePackId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
