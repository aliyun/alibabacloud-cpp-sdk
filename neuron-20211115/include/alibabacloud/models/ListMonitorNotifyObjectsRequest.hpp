// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMONITORNOTIFYOBJECTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMONITORNOTIFYOBJECTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ListMonitorNotifyObjectsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMonitorNotifyObjectsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(webhookType, webhookType_);
    };
    friend void from_json(const Darabonba::Json& j, ListMonitorNotifyObjectsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(webhookType, webhookType_);
    };
    ListMonitorNotifyObjectsRequest() = default ;
    ListMonitorNotifyObjectsRequest(const ListMonitorNotifyObjectsRequest &) = default ;
    ListMonitorNotifyObjectsRequest(ListMonitorNotifyObjectsRequest &&) = default ;
    ListMonitorNotifyObjectsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMonitorNotifyObjectsRequest() = default ;
    ListMonitorNotifyObjectsRequest& operator=(const ListMonitorNotifyObjectsRequest &) = default ;
    ListMonitorNotifyObjectsRequest& operator=(ListMonitorNotifyObjectsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enterpriseId_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr && this->webhookType_ == nullptr; };
    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline ListMonitorNotifyObjectsRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMonitorNotifyObjectsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ListMonitorNotifyObjectsRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // webhookType Field Functions 
    bool hasWebhookType() const { return this->webhookType_ != nullptr;};
    void deleteWebhookType() { this->webhookType_ = nullptr;};
    inline string getWebhookType() const { DARABONBA_PTR_GET_DEFAULT(webhookType_, "") };
    inline ListMonitorNotifyObjectsRequest& setWebhookType(string webhookType) { DARABONBA_PTR_SET_VALUE(webhookType_, webhookType) };


  protected:
    shared_ptr<int64_t> enterpriseId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int32_t> type_ {};
    shared_ptr<string> webhookType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
