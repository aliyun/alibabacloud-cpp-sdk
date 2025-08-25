// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCASESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddCasesRequestCaseList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class AddCasesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCasesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_TO_JSON(CaseList, caseList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCasesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_FROM_JSON(CaseList, caseList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    AddCasesRequest() = default ;
    AddCasesRequest(const AddCasesRequest &) = default ;
    AddCasesRequest(AddCasesRequest &&) = default ;
    AddCasesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCasesRequest() = default ;
    AddCasesRequest& operator=(const AddCasesRequest &) = default ;
    AddCasesRequest& operator=(AddCasesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->campaignId_ != nullptr
        && this->caseList_ != nullptr && this->instanceId_ != nullptr; };
    // campaignId Field Functions 
    bool hasCampaignId() const { return this->campaignId_ != nullptr;};
    void deleteCampaignId() { this->campaignId_ = nullptr;};
    inline string campaignId() const { DARABONBA_PTR_GET_DEFAULT(campaignId_, "") };
    inline AddCasesRequest& setCampaignId(string campaignId) { DARABONBA_PTR_SET_VALUE(campaignId_, campaignId) };


    // caseList Field Functions 
    bool hasCaseList() const { return this->caseList_ != nullptr;};
    void deleteCaseList() { this->caseList_ = nullptr;};
    inline const vector<AddCasesRequestCaseList> & caseList() const { DARABONBA_PTR_GET_CONST(caseList_, vector<AddCasesRequestCaseList>) };
    inline vector<AddCasesRequestCaseList> caseList() { DARABONBA_PTR_GET(caseList_, vector<AddCasesRequestCaseList>) };
    inline AddCasesRequest& setCaseList(const vector<AddCasesRequestCaseList> & caseList) { DARABONBA_PTR_SET_VALUE(caseList_, caseList) };
    inline AddCasesRequest& setCaseList(vector<AddCasesRequestCaseList> && caseList) { DARABONBA_PTR_SET_RVALUE(caseList_, caseList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddCasesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> campaignId_ = nullptr;
    std::shared_ptr<vector<AddCasesRequestCaseList>> caseList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
