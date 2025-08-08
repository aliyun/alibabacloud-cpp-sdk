// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESCENARIOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESCENARIOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DeleteScenarioRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteScenarioRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteScenarioRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    DeleteScenarioRequest() = default ;
    DeleteScenarioRequest(const DeleteScenarioRequest &) = default ;
    DeleteScenarioRequest(DeleteScenarioRequest &&) = default ;
    DeleteScenarioRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteScenarioRequest() = default ;
    DeleteScenarioRequest& operator=(const DeleteScenarioRequest &) = default ;
    DeleteScenarioRequest& operator=(DeleteScenarioRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->scenarioId_ != nullptr
        && this->tid_ != nullptr; };
    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline int64_t scenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, 0L) };
    inline DeleteScenarioRequest& setScenarioId(int64_t scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline DeleteScenarioRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the business scenario.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> scenarioId_ = nullptr;
    // The ID of the tenant.
    // 
    // >  To view the ID of the tenant, move the pointer over the profile picture in the upper-right corner of the Data Management (DMS) console. For more information, see the "View information about the current tenant" section of the [Manage DMS tenants](https://help.aliyun.com/document_detail/181330.html) topic.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
