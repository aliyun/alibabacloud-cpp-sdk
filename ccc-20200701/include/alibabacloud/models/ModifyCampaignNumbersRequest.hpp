// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCAMPAIGNNUMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCAMPAIGNNUMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ModifyCampaignNumbersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCampaignNumbersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_TO_JSON(InstGroupId, instGroupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NumberList, numberList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCampaignNumbersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_FROM_JSON(InstGroupId, instGroupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NumberList, numberList_);
    };
    ModifyCampaignNumbersRequest() = default ;
    ModifyCampaignNumbersRequest(const ModifyCampaignNumbersRequest &) = default ;
    ModifyCampaignNumbersRequest(ModifyCampaignNumbersRequest &&) = default ;
    ModifyCampaignNumbersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCampaignNumbersRequest() = default ;
    ModifyCampaignNumbersRequest& operator=(const ModifyCampaignNumbersRequest &) = default ;
    ModifyCampaignNumbersRequest& operator=(ModifyCampaignNumbersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->campaignId_ == nullptr
        && return this->instGroupId_ == nullptr && return this->instanceId_ == nullptr && return this->numberList_ == nullptr; };
    // campaignId Field Functions 
    bool hasCampaignId() const { return this->campaignId_ != nullptr;};
    void deleteCampaignId() { this->campaignId_ = nullptr;};
    inline string campaignId() const { DARABONBA_PTR_GET_DEFAULT(campaignId_, "") };
    inline ModifyCampaignNumbersRequest& setCampaignId(string campaignId) { DARABONBA_PTR_SET_VALUE(campaignId_, campaignId) };


    // instGroupId Field Functions 
    bool hasInstGroupId() const { return this->instGroupId_ != nullptr;};
    void deleteInstGroupId() { this->instGroupId_ = nullptr;};
    inline string instGroupId() const { DARABONBA_PTR_GET_DEFAULT(instGroupId_, "") };
    inline ModifyCampaignNumbersRequest& setInstGroupId(string instGroupId) { DARABONBA_PTR_SET_VALUE(instGroupId_, instGroupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyCampaignNumbersRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // numberList Field Functions 
    bool hasNumberList() const { return this->numberList_ != nullptr;};
    void deleteNumberList() { this->numberList_ = nullptr;};
    inline const vector<string> & numberList() const { DARABONBA_PTR_GET_CONST(numberList_, vector<string>) };
    inline vector<string> numberList() { DARABONBA_PTR_GET(numberList_, vector<string>) };
    inline ModifyCampaignNumbersRequest& setNumberList(const vector<string> & numberList) { DARABONBA_PTR_SET_VALUE(numberList_, numberList) };
    inline ModifyCampaignNumbersRequest& setNumberList(vector<string> && numberList) { DARABONBA_PTR_SET_RVALUE(numberList_, numberList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> campaignId_ = nullptr;
    std::shared_ptr<string> instGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<vector<string>> numberList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
