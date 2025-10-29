// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHEVENTMIGRATEINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHEVENTMIGRATEINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class BatchEventMigrateInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchEventMigrateInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventInfos, eventInfosShrink_);
    };
    friend void from_json(const Darabonba::Json& j, BatchEventMigrateInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventInfos, eventInfosShrink_);
    };
    BatchEventMigrateInstanceShrinkRequest() = default ;
    BatchEventMigrateInstanceShrinkRequest(const BatchEventMigrateInstanceShrinkRequest &) = default ;
    BatchEventMigrateInstanceShrinkRequest(BatchEventMigrateInstanceShrinkRequest &&) = default ;
    BatchEventMigrateInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchEventMigrateInstanceShrinkRequest() = default ;
    BatchEventMigrateInstanceShrinkRequest& operator=(const BatchEventMigrateInstanceShrinkRequest &) = default ;
    BatchEventMigrateInstanceShrinkRequest& operator=(BatchEventMigrateInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventInfosShrink_ == nullptr; };
    // eventInfosShrink Field Functions 
    bool hasEventInfosShrink() const { return this->eventInfosShrink_ != nullptr;};
    void deleteEventInfosShrink() { this->eventInfosShrink_ = nullptr;};
    inline string eventInfosShrink() const { DARABONBA_PTR_GET_DEFAULT(eventInfosShrink_, "") };
    inline BatchEventMigrateInstanceShrinkRequest& setEventInfosShrink(string eventInfosShrink) { DARABONBA_PTR_SET_VALUE(eventInfosShrink_, eventInfosShrink) };


  protected:
    // The details of events.
    std::shared_ptr<string> eventInfosShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
