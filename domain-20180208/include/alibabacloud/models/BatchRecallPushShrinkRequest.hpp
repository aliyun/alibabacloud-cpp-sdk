// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHRECALLPUSHSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHRECALLPUSHSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class BatchRecallPushShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchRecallPushShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OutBizIds, outBizIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, BatchRecallPushShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OutBizIds, outBizIdsShrink_);
    };
    BatchRecallPushShrinkRequest() = default ;
    BatchRecallPushShrinkRequest(const BatchRecallPushShrinkRequest &) = default ;
    BatchRecallPushShrinkRequest(BatchRecallPushShrinkRequest &&) = default ;
    BatchRecallPushShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchRecallPushShrinkRequest() = default ;
    BatchRecallPushShrinkRequest& operator=(const BatchRecallPushShrinkRequest &) = default ;
    BatchRecallPushShrinkRequest& operator=(BatchRecallPushShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outBizIdsShrink_ == nullptr; };
    // outBizIdsShrink Field Functions 
    bool hasOutBizIdsShrink() const { return this->outBizIdsShrink_ != nullptr;};
    void deleteOutBizIdsShrink() { this->outBizIdsShrink_ = nullptr;};
    inline string outBizIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(outBizIdsShrink_, "") };
    inline BatchRecallPushShrinkRequest& setOutBizIdsShrink(string outBizIdsShrink) { DARABONBA_PTR_SET_VALUE(outBizIdsShrink_, outBizIdsShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> outBizIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
