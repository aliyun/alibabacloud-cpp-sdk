// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHEVENTREDEPLOYINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHEVENTREDEPLOYINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class BatchEventRedeployInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchEventRedeployInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventInfos, eventInfosShrink_);
    };
    friend void from_json(const Darabonba::Json& j, BatchEventRedeployInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventInfos, eventInfosShrink_);
    };
    BatchEventRedeployInstanceShrinkRequest() = default ;
    BatchEventRedeployInstanceShrinkRequest(const BatchEventRedeployInstanceShrinkRequest &) = default ;
    BatchEventRedeployInstanceShrinkRequest(BatchEventRedeployInstanceShrinkRequest &&) = default ;
    BatchEventRedeployInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchEventRedeployInstanceShrinkRequest() = default ;
    BatchEventRedeployInstanceShrinkRequest& operator=(const BatchEventRedeployInstanceShrinkRequest &) = default ;
    BatchEventRedeployInstanceShrinkRequest& operator=(BatchEventRedeployInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventInfosShrink_ != nullptr; };
    // eventInfosShrink Field Functions 
    bool hasEventInfosShrink() const { return this->eventInfosShrink_ != nullptr;};
    void deleteEventInfosShrink() { this->eventInfosShrink_ = nullptr;};
    inline string eventInfosShrink() const { DARABONBA_PTR_GET_DEFAULT(eventInfosShrink_, "") };
    inline BatchEventRedeployInstanceShrinkRequest& setEventInfosShrink(string eventInfosShrink) { DARABONBA_PTR_SET_VALUE(eventInfosShrink_, eventInfosShrink) };


  protected:
    std::shared_ptr<string> eventInfosShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
