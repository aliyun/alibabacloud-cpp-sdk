// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDINGTALKSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDINGTALKSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyDingTalkStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDingTalkStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDingTalkStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ModifyDingTalkStatusRequest() = default ;
    ModifyDingTalkStatusRequest(const ModifyDingTalkStatusRequest &) = default ;
    ModifyDingTalkStatusRequest(ModifyDingTalkStatusRequest &&) = default ;
    ModifyDingTalkStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDingTalkStatusRequest() = default ;
    ModifyDingTalkStatusRequest& operator=(const ModifyDingTalkStatusRequest &) = default ;
    ModifyDingTalkStatusRequest& operator=(ModifyDingTalkStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ids_ == nullptr
        && this->status_ == nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string getIds() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline ModifyDingTalkStatusRequest& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ModifyDingTalkStatusRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The notification IDs of DingTalk chatbots. Separate multiple IDs with commas (,).
    // 
    // >  You can call the [DescribeDingTalk](~~DescribeDingTalk~~) operation to query the notification IDs.
    // 
    // This parameter is required.
    shared_ptr<string> ids_ {};
    // The notification status of a DingTalk chatbot. Valid values:
    // 
    // *   **0**: disabled
    // *   **1**: enabled
    // 
    // This parameter is required.
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
