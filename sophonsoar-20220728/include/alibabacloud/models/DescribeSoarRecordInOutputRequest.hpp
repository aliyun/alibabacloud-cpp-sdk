// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARRECORDINOUTPUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARRECORDINOUTPUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeSoarRecordInOutputRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarRecordInOutputRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionUuid, actionUuid_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarRecordInOutputRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionUuid, actionUuid_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeSoarRecordInOutputRequest() = default ;
    DescribeSoarRecordInOutputRequest(const DescribeSoarRecordInOutputRequest &) = default ;
    DescribeSoarRecordInOutputRequest(DescribeSoarRecordInOutputRequest &&) = default ;
    DescribeSoarRecordInOutputRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarRecordInOutputRequest() = default ;
    DescribeSoarRecordInOutputRequest& operator=(const DescribeSoarRecordInOutputRequest &) = default ;
    DescribeSoarRecordInOutputRequest& operator=(DescribeSoarRecordInOutputRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionUuid_ == nullptr
        && return this->lang_ == nullptr; };
    // actionUuid Field Functions 
    bool hasActionUuid() const { return this->actionUuid_ != nullptr;};
    void deleteActionUuid() { this->actionUuid_ = nullptr;};
    inline string actionUuid() const { DARABONBA_PTR_GET_DEFAULT(actionUuid_, "") };
    inline DescribeSoarRecordInOutputRequest& setActionUuid(string actionUuid) { DARABONBA_PTR_SET_VALUE(actionUuid_, actionUuid) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeSoarRecordInOutputRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The UUID of the component action.
    // 
    // >  You can call the [DescribeSoarTaskAndActions](~~DescribeSoarTaskAndActions~~) operation to query the UUIDs of component actions.
    // 
    // This parameter is required.
    std::shared_ptr<string> actionUuid_ = nullptr;
    // The language of the content within the request and the response. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
