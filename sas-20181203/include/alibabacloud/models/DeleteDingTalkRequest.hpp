// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDINGTALKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDINGTALKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteDingTalkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDingTalkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDingTalkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
    };
    DeleteDingTalkRequest() = default ;
    DeleteDingTalkRequest(const DeleteDingTalkRequest &) = default ;
    DeleteDingTalkRequest(DeleteDingTalkRequest &&) = default ;
    DeleteDingTalkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDingTalkRequest() = default ;
    DeleteDingTalkRequest& operator=(const DeleteDingTalkRequest &) = default ;
    DeleteDingTalkRequest& operator=(DeleteDingTalkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ids_ != nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string ids() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline DeleteDingTalkRequest& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


  protected:
    // The ID of the notification from the DingTalk chatbot. Separate multiple IDs with commas (,).
    // 
    // >  You can call the [DescribeDingTalk](~~DescribeDingTalk~~) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> ids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
