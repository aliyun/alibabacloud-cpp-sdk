// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKRECALLMANAGEMENTSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKRECALLMANAGEMENTSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CheckRecallManagementServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckRecallManagementServiceRequest& obj) { 
      DARABONBA_ANY_TO_JSON(ContextParams, contextParams_);
      DARABONBA_PTR_TO_JSON(ExposureList, exposureList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RecallManagementServiceVersionId, recallManagementServiceVersionId_);
      DARABONBA_ANY_TO_JSON(Recalls, recalls_);
      DARABONBA_PTR_TO_JSON(RetainFields, retainFields_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, CheckRecallManagementServiceRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(ContextParams, contextParams_);
      DARABONBA_PTR_FROM_JSON(ExposureList, exposureList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RecallManagementServiceVersionId, recallManagementServiceVersionId_);
      DARABONBA_ANY_FROM_JSON(Recalls, recalls_);
      DARABONBA_PTR_FROM_JSON(RetainFields, retainFields_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    CheckRecallManagementServiceRequest() = default ;
    CheckRecallManagementServiceRequest(const CheckRecallManagementServiceRequest &) = default ;
    CheckRecallManagementServiceRequest(CheckRecallManagementServiceRequest &&) = default ;
    CheckRecallManagementServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckRecallManagementServiceRequest() = default ;
    CheckRecallManagementServiceRequest& operator=(const CheckRecallManagementServiceRequest &) = default ;
    CheckRecallManagementServiceRequest& operator=(CheckRecallManagementServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contextParams_ == nullptr
        && this->exposureList_ == nullptr && this->instanceId_ == nullptr && this->recallManagementServiceVersionId_ == nullptr && this->recalls_ == nullptr && this->retainFields_ == nullptr
        && this->uid_ == nullptr; };
    // contextParams Field Functions 
    bool hasContextParams() const { return this->contextParams_ != nullptr;};
    void deleteContextParams() { this->contextParams_ = nullptr;};
    inline     const Darabonba::Json & getContextParams() const { DARABONBA_GET(contextParams_) };
    Darabonba::Json & getContextParams() { DARABONBA_GET(contextParams_) };
    inline CheckRecallManagementServiceRequest& setContextParams(const Darabonba::Json & contextParams) { DARABONBA_SET_VALUE(contextParams_, contextParams) };
    inline CheckRecallManagementServiceRequest& setContextParams(Darabonba::Json && contextParams) { DARABONBA_SET_RVALUE(contextParams_, contextParams) };


    // exposureList Field Functions 
    bool hasExposureList() const { return this->exposureList_ != nullptr;};
    void deleteExposureList() { this->exposureList_ = nullptr;};
    inline const vector<string> & getExposureList() const { DARABONBA_PTR_GET_CONST(exposureList_, vector<string>) };
    inline vector<string> getExposureList() { DARABONBA_PTR_GET(exposureList_, vector<string>) };
    inline CheckRecallManagementServiceRequest& setExposureList(const vector<string> & exposureList) { DARABONBA_PTR_SET_VALUE(exposureList_, exposureList) };
    inline CheckRecallManagementServiceRequest& setExposureList(vector<string> && exposureList) { DARABONBA_PTR_SET_RVALUE(exposureList_, exposureList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CheckRecallManagementServiceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // recallManagementServiceVersionId Field Functions 
    bool hasRecallManagementServiceVersionId() const { return this->recallManagementServiceVersionId_ != nullptr;};
    void deleteRecallManagementServiceVersionId() { this->recallManagementServiceVersionId_ = nullptr;};
    inline string getRecallManagementServiceVersionId() const { DARABONBA_PTR_GET_DEFAULT(recallManagementServiceVersionId_, "") };
    inline CheckRecallManagementServiceRequest& setRecallManagementServiceVersionId(string recallManagementServiceVersionId) { DARABONBA_PTR_SET_VALUE(recallManagementServiceVersionId_, recallManagementServiceVersionId) };


    // recalls Field Functions 
    bool hasRecalls() const { return this->recalls_ != nullptr;};
    void deleteRecalls() { this->recalls_ = nullptr;};
    inline     const Darabonba::Json & getRecalls() const { DARABONBA_GET(recalls_) };
    Darabonba::Json & getRecalls() { DARABONBA_GET(recalls_) };
    inline CheckRecallManagementServiceRequest& setRecalls(const Darabonba::Json & recalls) { DARABONBA_SET_VALUE(recalls_, recalls) };
    inline CheckRecallManagementServiceRequest& setRecalls(Darabonba::Json && recalls) { DARABONBA_SET_RVALUE(recalls_, recalls) };


    // retainFields Field Functions 
    bool hasRetainFields() const { return this->retainFields_ != nullptr;};
    void deleteRetainFields() { this->retainFields_ = nullptr;};
    inline const vector<string> & getRetainFields() const { DARABONBA_PTR_GET_CONST(retainFields_, vector<string>) };
    inline vector<string> getRetainFields() { DARABONBA_PTR_GET(retainFields_, vector<string>) };
    inline CheckRecallManagementServiceRequest& setRetainFields(const vector<string> & retainFields) { DARABONBA_PTR_SET_VALUE(retainFields_, retainFields) };
    inline CheckRecallManagementServiceRequest& setRetainFields(vector<string> && retainFields) { DARABONBA_PTR_SET_RVALUE(retainFields_, retainFields) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline CheckRecallManagementServiceRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // The context parameters.
    Darabonba::Json contextParams_ {};
    // The exposure list.
    shared_ptr<vector<string>> exposureList_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The recall management service version ID.
    shared_ptr<string> recallManagementServiceVersionId_ {};
    // The recall data details.
    Darabonba::Json recalls_ {};
    // The retained fields.
    shared_ptr<vector<string>> retainFields_ {};
    // The user ID.
    shared_ptr<string> uid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
