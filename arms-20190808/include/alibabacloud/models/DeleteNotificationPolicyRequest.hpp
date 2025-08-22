// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENOTIFICATIONPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENOTIFICATIONPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeleteNotificationPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNotificationPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNotificationPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    DeleteNotificationPolicyRequest() = default ;
    DeleteNotificationPolicyRequest(const DeleteNotificationPolicyRequest &) = default ;
    DeleteNotificationPolicyRequest(DeleteNotificationPolicyRequest &&) = default ;
    DeleteNotificationPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNotificationPolicyRequest() = default ;
    DeleteNotificationPolicyRequest& operator=(const DeleteNotificationPolicyRequest &) = default ;
    DeleteNotificationPolicyRequest& operator=(DeleteNotificationPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteNotificationPolicyRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The ID of the notification policy.
    // 
    // For more information about how to obtain the ID of a notification policy, see [ListNotificationPolicies](https://help.aliyun.com/document_detail/2612375.html).
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
