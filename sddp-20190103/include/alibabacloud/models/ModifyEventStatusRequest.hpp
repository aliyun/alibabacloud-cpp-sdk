// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYEVENTSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYEVENTSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class ModifyEventStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEventStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Backed, backed_);
      DARABONBA_PTR_TO_JSON(DealReason, dealReason_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEventStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Backed, backed_);
      DARABONBA_PTR_FROM_JSON(DealReason, dealReason_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ModifyEventStatusRequest() = default ;
    ModifyEventStatusRequest(const ModifyEventStatusRequest &) = default ;
    ModifyEventStatusRequest(ModifyEventStatusRequest &&) = default ;
    ModifyEventStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEventStatusRequest() = default ;
    ModifyEventStatusRequest& operator=(const ModifyEventStatusRequest &) = default ;
    ModifyEventStatusRequest& operator=(ModifyEventStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backed_ == nullptr
        && this->dealReason_ == nullptr && this->id_ == nullptr && this->lang_ == nullptr && this->status_ == nullptr; };
    // backed Field Functions 
    bool hasBacked() const { return this->backed_ != nullptr;};
    void deleteBacked() { this->backed_ = nullptr;};
    inline bool getBacked() const { DARABONBA_PTR_GET_DEFAULT(backed_, false) };
    inline ModifyEventStatusRequest& setBacked(bool backed) { DARABONBA_PTR_SET_VALUE(backed_, backed) };


    // dealReason Field Functions 
    bool hasDealReason() const { return this->dealReason_ != nullptr;};
    void deleteDealReason() { this->dealReason_ = nullptr;};
    inline string getDealReason() const { DARABONBA_PTR_GET_DEFAULT(dealReason_, "") };
    inline ModifyEventStatusRequest& setDealReason(string dealReason) { DARABONBA_PTR_SET_VALUE(dealReason_, dealReason) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ModifyEventStatusRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyEventStatusRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ModifyEventStatusRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Specifies whether to enhance the detection of the anomalous activity. Enhancing detection improves accuracy and increases the alert rate for anomalous activities.
    // 
    // - **true**: Yes.
    // 
    // - **false**: No.
    shared_ptr<bool> backed_ {};
    // The reason for handling the anomalous activity.
    shared_ptr<string> dealReason_ {};
    // The unique ID of the anomalous activity.
    // 
    // > To handle an anomalous activity, you must provide its unique ID. You can obtain this ID by calling the **DescribeEvents** operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The language of the request and response. The default value is **zh_cn**. Valid values:
    // 
    // - **zh_cn**: Chinese.
    // 
    // - **en_us**: English.
    shared_ptr<string> lang_ {};
    // The operation to perform on the anomalous activity.
    // 
    // - **1**: Mark as false positive.
    // 
    // - **2**: Confirm and handle the anomalous activity.
    // 
    // This parameter is required.
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
