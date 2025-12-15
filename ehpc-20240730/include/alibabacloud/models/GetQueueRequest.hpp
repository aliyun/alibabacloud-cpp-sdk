// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUEUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUEUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetQueueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
    };
    GetQueueRequest() = default ;
    GetQueueRequest(const GetQueueRequest &) = default ;
    GetQueueRequest(GetQueueRequest &&) = default ;
    GetQueueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueueRequest() = default ;
    GetQueueRequest& operator=(const GetQueueRequest &) = default ;
    GetQueueRequest& operator=(GetQueueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->queueName_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetQueueRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline GetQueueRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


  protected:
    // The cluster ID.
    // 
    // You can call the [ListClusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The queue name.
    std::shared_ptr<string> queueName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
