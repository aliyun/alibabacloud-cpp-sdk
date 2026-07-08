// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSUPLOADPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOSSUPLOADPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetOssUploadPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssUploadPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Scenario, scenario_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssUploadPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
    };
    GetOssUploadPolicyRequest() = default ;
    GetOssUploadPolicyRequest(const GetOssUploadPolicyRequest &) = default ;
    GetOssUploadPolicyRequest(GetOssUploadPolicyRequest &&) = default ;
    GetOssUploadPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssUploadPolicyRequest() = default ;
    GetOssUploadPolicyRequest& operator=(const GetOssUploadPolicyRequest &) = default ;
    GetOssUploadPolicyRequest& operator=(GetOssUploadPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scenario_ == nullptr; };
    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline GetOssUploadPolicyRequest& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


  protected:
    // The scenario, such as knowledge.
    shared_ptr<string> scenario_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
