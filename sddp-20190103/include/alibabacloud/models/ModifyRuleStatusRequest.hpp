// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRULESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRULESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class ModifyRuleStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRuleStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRuleStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ModifyRuleStatusRequest() = default ;
    ModifyRuleStatusRequest(const ModifyRuleStatusRequest &) = default ;
    ModifyRuleStatusRequest(ModifyRuleStatusRequest &&) = default ;
    ModifyRuleStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRuleStatusRequest() = default ;
    ModifyRuleStatusRequest& operator=(const ModifyRuleStatusRequest &) = default ;
    ModifyRuleStatusRequest& operator=(ModifyRuleStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->ids_ == nullptr && this->lang_ == nullptr && this->status_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ModifyRuleStatusRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string getIds() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline ModifyRuleStatusRequest& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyRuleStatusRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ModifyRuleStatusRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the sensitive data detection rule.
    // 
    // > You can query the ID of the sensitive data detection rule by calling the **DescribeRules** operation.
    shared_ptr<int64_t> id_ {};
    // The ID of the sensitive data detection rule. Separate multiple IDs with commas (,).
    // 
    // > You can query the ID of the sensitive data detection rule by calling the **DescribeRules** operation.
    shared_ptr<string> ids_ {};
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // Specifies whether to enable or disable the sensitive data detection rule. Valid values:
    // 
    // *   **0**: disables the sensitive data detection rule.
    // *   **1**: enables the sensitive data detection rule.
    // 
    // This parameter is required.
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
