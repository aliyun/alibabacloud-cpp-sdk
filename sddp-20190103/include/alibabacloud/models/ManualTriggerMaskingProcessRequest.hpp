// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANUALTRIGGERMASKINGPROCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MANUALTRIGGERMASKINGPROCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class ManualTriggerMaskingProcessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManualTriggerMaskingProcessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, ManualTriggerMaskingProcessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    ManualTriggerMaskingProcessRequest() = default ;
    ManualTriggerMaskingProcessRequest(const ManualTriggerMaskingProcessRequest &) = default ;
    ManualTriggerMaskingProcessRequest(ManualTriggerMaskingProcessRequest &&) = default ;
    ManualTriggerMaskingProcessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManualTriggerMaskingProcessRequest() = default ;
    ManualTriggerMaskingProcessRequest& operator=(const ManualTriggerMaskingProcessRequest &) = default ;
    ManualTriggerMaskingProcessRequest& operator=(ManualTriggerMaskingProcessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->lang_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ManualTriggerMaskingProcessRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ManualTriggerMaskingProcessRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The ID of the de-identification task.
    // 
    // The ID of the de-identification task is a string. You can call the DescribeDataMaskingTasks operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The language of the content within the request and response, default value zh_cn. Valid values:
    // 
    // *   **zh_cn**: Chinese
    // *   **en_us**: English
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
