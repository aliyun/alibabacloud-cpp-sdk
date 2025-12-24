// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGERPLAYBOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRIGGERPLAYBOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class TriggerPlaybookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TriggerPlaybookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InputParam, inputParam_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
    };
    friend void from_json(const Darabonba::Json& j, TriggerPlaybookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InputParam, inputParam_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
    };
    TriggerPlaybookRequest() = default ;
    TriggerPlaybookRequest(const TriggerPlaybookRequest &) = default ;
    TriggerPlaybookRequest(TriggerPlaybookRequest &&) = default ;
    TriggerPlaybookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TriggerPlaybookRequest() = default ;
    TriggerPlaybookRequest& operator=(const TriggerPlaybookRequest &) = default ;
    TriggerPlaybookRequest& operator=(TriggerPlaybookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputParam_ == nullptr
        && return this->playbookUuid_ == nullptr; };
    // inputParam Field Functions 
    bool hasInputParam() const { return this->inputParam_ != nullptr;};
    void deleteInputParam() { this->inputParam_ = nullptr;};
    inline string inputParam() const { DARABONBA_PTR_GET_DEFAULT(inputParam_, "") };
    inline TriggerPlaybookRequest& setInputParam(string inputParam) { DARABONBA_PTR_SET_VALUE(inputParam_, inputParam) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline TriggerPlaybookRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


  protected:
    // The input parameters of the playbook.
    // 
    // This parameter is required.
    std::shared_ptr<string> inputParam_ = nullptr;
    // The playbook UUID.
    // 
    // >  You can call the [DescribePlaybooks](~~DescribePlaybooks~~) operation to query the playbook UUID.
    // 
    // This parameter is required.
    std::shared_ptr<string> playbookUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
