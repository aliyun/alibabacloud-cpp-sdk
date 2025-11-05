// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECDNDELIVERTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECDNDELIVERTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DeleteCdnDeliverTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCdnDeliverTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliverId, deliverId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCdnDeliverTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliverId, deliverId_);
    };
    DeleteCdnDeliverTaskRequest() = default ;
    DeleteCdnDeliverTaskRequest(const DeleteCdnDeliverTaskRequest &) = default ;
    DeleteCdnDeliverTaskRequest(DeleteCdnDeliverTaskRequest &&) = default ;
    DeleteCdnDeliverTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCdnDeliverTaskRequest() = default ;
    DeleteCdnDeliverTaskRequest& operator=(const DeleteCdnDeliverTaskRequest &) = default ;
    DeleteCdnDeliverTaskRequest& operator=(DeleteCdnDeliverTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliverId_ == nullptr; };
    // deliverId Field Functions 
    bool hasDeliverId() const { return this->deliverId_ != nullptr;};
    void deleteDeliverId() { this->deliverId_ = nullptr;};
    inline int64_t deliverId() const { DARABONBA_PTR_GET_DEFAULT(deliverId_, 0L) };
    inline DeleteCdnDeliverTaskRequest& setDeliverId(int64_t deliverId) { DARABONBA_PTR_SET_VALUE(deliverId_, deliverId) };


  protected:
    // The ID of the tracking task that you want to delete. You can call the [DescribeCdnDeliverList](https://help.aliyun.com/document_detail/270877.html) operation to query task IDs.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> deliverId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
