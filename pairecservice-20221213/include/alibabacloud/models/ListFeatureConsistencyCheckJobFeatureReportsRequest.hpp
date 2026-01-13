// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBFEATUREREPORTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBFEATUREREPORTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListFeatureConsistencyCheckJobFeatureReportsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureConsistencyCheckJobFeatureReportsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LogItemId, logItemId_);
      DARABONBA_PTR_TO_JSON(LogRequestId, logRequestId_);
      DARABONBA_PTR_TO_JSON(LogUserId, logUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureConsistencyCheckJobFeatureReportsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LogItemId, logItemId_);
      DARABONBA_PTR_FROM_JSON(LogRequestId, logRequestId_);
      DARABONBA_PTR_FROM_JSON(LogUserId, logUserId_);
    };
    ListFeatureConsistencyCheckJobFeatureReportsRequest() = default ;
    ListFeatureConsistencyCheckJobFeatureReportsRequest(const ListFeatureConsistencyCheckJobFeatureReportsRequest &) = default ;
    ListFeatureConsistencyCheckJobFeatureReportsRequest(ListFeatureConsistencyCheckJobFeatureReportsRequest &&) = default ;
    ListFeatureConsistencyCheckJobFeatureReportsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureConsistencyCheckJobFeatureReportsRequest() = default ;
    ListFeatureConsistencyCheckJobFeatureReportsRequest& operator=(const ListFeatureConsistencyCheckJobFeatureReportsRequest &) = default ;
    ListFeatureConsistencyCheckJobFeatureReportsRequest& operator=(ListFeatureConsistencyCheckJobFeatureReportsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->logItemId_ == nullptr && this->logRequestId_ == nullptr && this->logUserId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListFeatureConsistencyCheckJobFeatureReportsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logItemId Field Functions 
    bool hasLogItemId() const { return this->logItemId_ != nullptr;};
    void deleteLogItemId() { this->logItemId_ = nullptr;};
    inline string getLogItemId() const { DARABONBA_PTR_GET_DEFAULT(logItemId_, "") };
    inline ListFeatureConsistencyCheckJobFeatureReportsRequest& setLogItemId(string logItemId) { DARABONBA_PTR_SET_VALUE(logItemId_, logItemId) };


    // logRequestId Field Functions 
    bool hasLogRequestId() const { return this->logRequestId_ != nullptr;};
    void deleteLogRequestId() { this->logRequestId_ = nullptr;};
    inline string getLogRequestId() const { DARABONBA_PTR_GET_DEFAULT(logRequestId_, "") };
    inline ListFeatureConsistencyCheckJobFeatureReportsRequest& setLogRequestId(string logRequestId) { DARABONBA_PTR_SET_VALUE(logRequestId_, logRequestId) };


    // logUserId Field Functions 
    bool hasLogUserId() const { return this->logUserId_ != nullptr;};
    void deleteLogUserId() { this->logUserId_ = nullptr;};
    inline string getLogUserId() const { DARABONBA_PTR_GET_DEFAULT(logUserId_, "") };
    inline ListFeatureConsistencyCheckJobFeatureReportsRequest& setLogUserId(string logUserId) { DARABONBA_PTR_SET_VALUE(logUserId_, logUserId) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> logItemId_ {};
    // This parameter is required.
    shared_ptr<string> logRequestId_ {};
    // This parameter is required.
    shared_ptr<string> logUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
