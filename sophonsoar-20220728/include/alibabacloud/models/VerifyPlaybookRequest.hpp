// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYPLAYBOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYPLAYBOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class VerifyPlaybookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyPlaybookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_TO_JSON(TaskFlow, taskFlow_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyPlaybookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_FROM_JSON(TaskFlow, taskFlow_);
    };
    VerifyPlaybookRequest() = default ;
    VerifyPlaybookRequest(const VerifyPlaybookRequest &) = default ;
    VerifyPlaybookRequest(VerifyPlaybookRequest &&) = default ;
    VerifyPlaybookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyPlaybookRequest() = default ;
    VerifyPlaybookRequest& operator=(const VerifyPlaybookRequest &) = default ;
    VerifyPlaybookRequest& operator=(VerifyPlaybookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->playbookUuid_ == nullptr
        && return this->taskFlow_ == nullptr; };
    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline VerifyPlaybookRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // taskFlow Field Functions 
    bool hasTaskFlow() const { return this->taskFlow_ != nullptr;};
    void deleteTaskFlow() { this->taskFlow_ = nullptr;};
    inline string taskFlow() const { DARABONBA_PTR_GET_DEFAULT(taskFlow_, "") };
    inline VerifyPlaybookRequest& setTaskFlow(string taskFlow) { DARABONBA_PTR_SET_VALUE(taskFlow_, taskFlow) };


  protected:
    // The playbook UUID.
    // 
    // >  You can call the [DescribePlaybooks](~~DescribePlaybooks~~) operation to query the playbook UUID.
    std::shared_ptr<string> playbookUuid_ = nullptr;
    // The XML configuration of the playbook.
    std::shared_ptr<string> taskFlow_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
