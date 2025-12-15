// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEQUEUESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEQUEUESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class DeleteQueuesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteQueuesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(QueueNames, queueNames_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteQueuesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(QueueNames, queueNames_);
    };
    DeleteQueuesRequest() = default ;
    DeleteQueuesRequest(const DeleteQueuesRequest &) = default ;
    DeleteQueuesRequest(DeleteQueuesRequest &&) = default ;
    DeleteQueuesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteQueuesRequest() = default ;
    DeleteQueuesRequest& operator=(const DeleteQueuesRequest &) = default ;
    DeleteQueuesRequest& operator=(DeleteQueuesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->queueNames_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DeleteQueuesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // queueNames Field Functions 
    bool hasQueueNames() const { return this->queueNames_ != nullptr;};
    void deleteQueueNames() { this->queueNames_ = nullptr;};
    inline const vector<string> & queueNames() const { DARABONBA_PTR_GET_CONST(queueNames_, vector<string>) };
    inline vector<string> queueNames() { DARABONBA_PTR_GET(queueNames_, vector<string>) };
    inline DeleteQueuesRequest& setQueueNames(const vector<string> & queueNames) { DARABONBA_PTR_SET_VALUE(queueNames_, queueNames) };
    inline DeleteQueuesRequest& setQueueNames(vector<string> && queueNames) { DARABONBA_PTR_SET_RVALUE(queueNames_, queueNames) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The queues that you want to delete.
    std::shared_ptr<vector<string>> queueNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
