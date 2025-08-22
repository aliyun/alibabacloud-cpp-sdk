// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDCDNDELIVERTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDCDNDELIVERTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DeleteDcdnDeliverTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDcdnDeliverTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliverId, deliverId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDcdnDeliverTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliverId, deliverId_);
    };
    DeleteDcdnDeliverTaskRequest() = default ;
    DeleteDcdnDeliverTaskRequest(const DeleteDcdnDeliverTaskRequest &) = default ;
    DeleteDcdnDeliverTaskRequest(DeleteDcdnDeliverTaskRequest &&) = default ;
    DeleteDcdnDeliverTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDcdnDeliverTaskRequest() = default ;
    DeleteDcdnDeliverTaskRequest& operator=(const DeleteDcdnDeliverTaskRequest &) = default ;
    DeleteDcdnDeliverTaskRequest& operator=(DeleteDcdnDeliverTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deliverId_ != nullptr; };
    // deliverId Field Functions 
    bool hasDeliverId() const { return this->deliverId_ != nullptr;};
    void deleteDeliverId() { this->deliverId_ = nullptr;};
    inline int64_t deliverId() const { DARABONBA_PTR_GET_DEFAULT(deliverId_, 0L) };
    inline DeleteDcdnDeliverTaskRequest& setDeliverId(int64_t deliverId) { DARABONBA_PTR_SET_VALUE(deliverId_, deliverId) };


  protected:
    // The IDs of the tracking tasks that you want to delete. You can call the [DescribeCdnDeliverList](https://help.aliyun.com/document_detail/270043.html) operation to query task IDs.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> deliverId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
