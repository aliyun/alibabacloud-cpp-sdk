// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCENARIOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCENARIOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateScenarioRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScenarioRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ScenarioName, scenarioName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScenarioRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ScenarioName, scenarioName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateScenarioRequest() = default ;
    CreateScenarioRequest(const CreateScenarioRequest &) = default ;
    CreateScenarioRequest(CreateScenarioRequest &&) = default ;
    CreateScenarioRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScenarioRequest() = default ;
    CreateScenarioRequest& operator=(const CreateScenarioRequest &) = default ;
    CreateScenarioRequest& operator=(CreateScenarioRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->scenarioName_ != nullptr && this->tid_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateScenarioRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // scenarioName Field Functions 
    bool hasScenarioName() const { return this->scenarioName_ != nullptr;};
    void deleteScenarioName() { this->scenarioName_ = nullptr;};
    inline string scenarioName() const { DARABONBA_PTR_GET_DEFAULT(scenarioName_, "") };
    inline CreateScenarioRequest& setScenarioName(string scenarioName) { DARABONBA_PTR_SET_VALUE(scenarioName_, scenarioName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateScenarioRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The description of the business scenario.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the business scenario.
    // 
    // This parameter is required.
    std::shared_ptr<string> scenarioName_ = nullptr;
    // The ID of the tenant.
    // 
    // > To view the ID of the tenant, move the pointer over the profile picture in the upper-right corner of the Data Management (DMS) console. For more information, see the "View information about the current tenant" section of the [Manage DMS tenants](https://help.aliyun.com/document_detail/181330.html) topic.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
