// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUEUESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUEUESREQUEST_HPP_
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
  class ListQueuesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueuesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(QueueNames, queueNames_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueuesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(QueueNames, queueNames_);
    };
    ListQueuesRequest() = default ;
    ListQueuesRequest(const ListQueuesRequest &) = default ;
    ListQueuesRequest(ListQueuesRequest &&) = default ;
    ListQueuesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueuesRequest() = default ;
    ListQueuesRequest& operator=(const ListQueuesRequest &) = default ;
    ListQueuesRequest& operator=(ListQueuesRequest &&) = default ;
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
    inline ListQueuesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // queueNames Field Functions 
    bool hasQueueNames() const { return this->queueNames_ != nullptr;};
    void deleteQueueNames() { this->queueNames_ = nullptr;};
    inline const vector<string> & queueNames() const { DARABONBA_PTR_GET_CONST(queueNames_, vector<string>) };
    inline vector<string> queueNames() { DARABONBA_PTR_GET(queueNames_, vector<string>) };
    inline ListQueuesRequest& setQueueNames(const vector<string> & queueNames) { DARABONBA_PTR_SET_VALUE(queueNames_, queueNames) };
    inline ListQueuesRequest& setQueueNames(vector<string> && queueNames) { DARABONBA_PTR_SET_RVALUE(queueNames_, queueNames) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The names of the queues that you want to query. You can specify up to eight names.
    std::shared_ptr<vector<string>> queueNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
