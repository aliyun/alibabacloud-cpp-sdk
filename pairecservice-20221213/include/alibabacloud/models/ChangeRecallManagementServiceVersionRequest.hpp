// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGERECALLMANAGEMENTSERVICEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGERECALLMANAGEMENTSERVICEVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ChangeRecallManagementServiceVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeRecallManagementServiceVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RecallManagementServiceVersionId, recallManagementServiceVersionId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeRecallManagementServiceVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RecallManagementServiceVersionId, recallManagementServiceVersionId_);
    };
    ChangeRecallManagementServiceVersionRequest() = default ;
    ChangeRecallManagementServiceVersionRequest(const ChangeRecallManagementServiceVersionRequest &) = default ;
    ChangeRecallManagementServiceVersionRequest(ChangeRecallManagementServiceVersionRequest &&) = default ;
    ChangeRecallManagementServiceVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeRecallManagementServiceVersionRequest() = default ;
    ChangeRecallManagementServiceVersionRequest& operator=(const ChangeRecallManagementServiceVersionRequest &) = default ;
    ChangeRecallManagementServiceVersionRequest& operator=(ChangeRecallManagementServiceVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->recallManagementServiceVersionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ChangeRecallManagementServiceVersionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // recallManagementServiceVersionId Field Functions 
    bool hasRecallManagementServiceVersionId() const { return this->recallManagementServiceVersionId_ != nullptr;};
    void deleteRecallManagementServiceVersionId() { this->recallManagementServiceVersionId_ = nullptr;};
    inline string getRecallManagementServiceVersionId() const { DARABONBA_PTR_GET_DEFAULT(recallManagementServiceVersionId_, "") };
    inline ChangeRecallManagementServiceVersionRequest& setRecallManagementServiceVersionId(string recallManagementServiceVersionId) { DARABONBA_PTR_SET_VALUE(recallManagementServiceVersionId_, recallManagementServiceVersionId) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> recallManagementServiceVersionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
