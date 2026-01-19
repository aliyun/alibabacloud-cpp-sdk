// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ABORTCASESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ABORTCASESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudCallCenter20200701
{
namespace Models
{
  class AbortCasesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AbortCasesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PhoneNumberList, phoneNumberList_);
    };
    friend void from_json(const Darabonba::Json& j, AbortCasesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumberList, phoneNumberList_);
    };
    AbortCasesRequest() = default ;
    AbortCasesRequest(const AbortCasesRequest &) = default ;
    AbortCasesRequest(AbortCasesRequest &&) = default ;
    AbortCasesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AbortCasesRequest() = default ;
    AbortCasesRequest& operator=(const AbortCasesRequest &) = default ;
    AbortCasesRequest& operator=(AbortCasesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->campaignId_ == nullptr
        && this->instanceId_ == nullptr && this->phoneNumberList_ == nullptr; };
    // campaignId Field Functions 
    bool hasCampaignId() const { return this->campaignId_ != nullptr;};
    void deleteCampaignId() { this->campaignId_ = nullptr;};
    inline string getCampaignId() const { DARABONBA_PTR_GET_DEFAULT(campaignId_, "") };
    inline AbortCasesRequest& setCampaignId(string campaignId) { DARABONBA_PTR_SET_VALUE(campaignId_, campaignId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AbortCasesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // phoneNumberList Field Functions 
    bool hasPhoneNumberList() const { return this->phoneNumberList_ != nullptr;};
    void deletePhoneNumberList() { this->phoneNumberList_ = nullptr;};
    inline const vector<string> & getPhoneNumberList() const { DARABONBA_PTR_GET_CONST(phoneNumberList_, vector<string>) };
    inline vector<string> getPhoneNumberList() { DARABONBA_PTR_GET(phoneNumberList_, vector<string>) };
    inline AbortCasesRequest& setPhoneNumberList(const vector<string> & phoneNumberList) { DARABONBA_PTR_SET_VALUE(phoneNumberList_, phoneNumberList) };
    inline AbortCasesRequest& setPhoneNumberList(vector<string> && phoneNumberList) { DARABONBA_PTR_SET_RVALUE(phoneNumberList_, phoneNumberList) };


  protected:
    shared_ptr<string> campaignId_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<vector<string>> phoneNumberList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudCallCenter20200701
#endif
