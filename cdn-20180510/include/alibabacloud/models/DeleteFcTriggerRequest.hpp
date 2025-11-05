// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFCTRIGGERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFCTRIGGERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DeleteFCTriggerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFCTriggerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TriggerARN, triggerARN_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFCTriggerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TriggerARN, triggerARN_);
    };
    DeleteFCTriggerRequest() = default ;
    DeleteFCTriggerRequest(const DeleteFCTriggerRequest &) = default ;
    DeleteFCTriggerRequest(DeleteFCTriggerRequest &&) = default ;
    DeleteFCTriggerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFCTriggerRequest() = default ;
    DeleteFCTriggerRequest& operator=(const DeleteFCTriggerRequest &) = default ;
    DeleteFCTriggerRequest& operator=(DeleteFCTriggerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->triggerARN_ == nullptr; };
    // triggerARN Field Functions 
    bool hasTriggerARN() const { return this->triggerARN_ != nullptr;};
    void deleteTriggerARN() { this->triggerARN_ = nullptr;};
    inline string triggerARN() const { DARABONBA_PTR_GET_DEFAULT(triggerARN_, "") };
    inline DeleteFCTriggerRequest& setTriggerARN(string triggerARN) { DARABONBA_PTR_SET_VALUE(triggerARN_, triggerARN) };


  protected:
    // The trigger that corresponds to the Function Compute service.
    // 
    // This parameter is required.
    std::shared_ptr<string> triggerARN_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
