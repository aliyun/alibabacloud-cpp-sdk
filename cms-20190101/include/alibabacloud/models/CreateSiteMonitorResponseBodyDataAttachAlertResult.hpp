// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESITEMONITORRESPONSEBODYDATAATTACHALERTRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATESITEMONITORRESPONSEBODYDATAATTACHALERTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateSiteMonitorResponseBodyDataAttachAlertResultContact.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateSiteMonitorResponseBodyDataAttachAlertResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSiteMonitorResponseBodyDataAttachAlertResult& obj) { 
      DARABONBA_PTR_TO_JSON(Contact, contact_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSiteMonitorResponseBodyDataAttachAlertResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Contact, contact_);
    };
    CreateSiteMonitorResponseBodyDataAttachAlertResult() = default ;
    CreateSiteMonitorResponseBodyDataAttachAlertResult(const CreateSiteMonitorResponseBodyDataAttachAlertResult &) = default ;
    CreateSiteMonitorResponseBodyDataAttachAlertResult(CreateSiteMonitorResponseBodyDataAttachAlertResult &&) = default ;
    CreateSiteMonitorResponseBodyDataAttachAlertResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSiteMonitorResponseBodyDataAttachAlertResult() = default ;
    CreateSiteMonitorResponseBodyDataAttachAlertResult& operator=(const CreateSiteMonitorResponseBodyDataAttachAlertResult &) = default ;
    CreateSiteMonitorResponseBodyDataAttachAlertResult& operator=(CreateSiteMonitorResponseBodyDataAttachAlertResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contact_ != nullptr; };
    // contact Field Functions 
    bool hasContact() const { return this->contact_ != nullptr;};
    void deleteContact() { this->contact_ = nullptr;};
    inline const vector<Models::CreateSiteMonitorResponseBodyDataAttachAlertResultContact> & contact() const { DARABONBA_PTR_GET_CONST(contact_, vector<Models::CreateSiteMonitorResponseBodyDataAttachAlertResultContact>) };
    inline vector<Models::CreateSiteMonitorResponseBodyDataAttachAlertResultContact> contact() { DARABONBA_PTR_GET(contact_, vector<Models::CreateSiteMonitorResponseBodyDataAttachAlertResultContact>) };
    inline CreateSiteMonitorResponseBodyDataAttachAlertResult& setContact(const vector<Models::CreateSiteMonitorResponseBodyDataAttachAlertResultContact> & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
    inline CreateSiteMonitorResponseBodyDataAttachAlertResult& setContact(vector<Models::CreateSiteMonitorResponseBodyDataAttachAlertResultContact> && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


  protected:
    std::shared_ptr<vector<Models::CreateSiteMonitorResponseBodyDataAttachAlertResultContact>> contact_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
