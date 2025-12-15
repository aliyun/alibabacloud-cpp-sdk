// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUEUESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUEUESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListQueuesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueuesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(QueueNames, queueNamesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueuesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(QueueNames, queueNamesShrink_);
    };
    ListQueuesShrinkRequest() = default ;
    ListQueuesShrinkRequest(const ListQueuesShrinkRequest &) = default ;
    ListQueuesShrinkRequest(ListQueuesShrinkRequest &&) = default ;
    ListQueuesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueuesShrinkRequest() = default ;
    ListQueuesShrinkRequest& operator=(const ListQueuesShrinkRequest &) = default ;
    ListQueuesShrinkRequest& operator=(ListQueuesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->queueNamesShrink_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListQueuesShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // queueNamesShrink Field Functions 
    bool hasQueueNamesShrink() const { return this->queueNamesShrink_ != nullptr;};
    void deleteQueueNamesShrink() { this->queueNamesShrink_ = nullptr;};
    inline string queueNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(queueNamesShrink_, "") };
    inline ListQueuesShrinkRequest& setQueueNamesShrink(string queueNamesShrink) { DARABONBA_PTR_SET_VALUE(queueNamesShrink_, queueNamesShrink) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The names of the queues that you want to query. You can specify up to eight names.
    std::shared_ptr<string> queueNamesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
