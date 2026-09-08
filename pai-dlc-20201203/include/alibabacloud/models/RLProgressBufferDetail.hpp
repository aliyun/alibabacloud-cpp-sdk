// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLPROGRESSBUFFERDETAIL_HPP_
#define ALIBABACLOUD_MODELS_RLPROGRESSBUFFERDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLProgressBufferDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLProgressBufferDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Consumed, consumed_);
      DARABONBA_PTR_TO_JSON(Finished, finished_);
      DARABONBA_PTR_TO_JSON(Ready, ready_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, RLProgressBufferDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Consumed, consumed_);
      DARABONBA_PTR_FROM_JSON(Finished, finished_);
      DARABONBA_PTR_FROM_JSON(Ready, ready_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    RLProgressBufferDetail() = default ;
    RLProgressBufferDetail(const RLProgressBufferDetail &) = default ;
    RLProgressBufferDetail(RLProgressBufferDetail &&) = default ;
    RLProgressBufferDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLProgressBufferDetail() = default ;
    RLProgressBufferDetail& operator=(const RLProgressBufferDetail &) = default ;
    RLProgressBufferDetail& operator=(RLProgressBufferDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumed_ == nullptr
        && this->finished_ == nullptr && this->ready_ == nullptr && this->tag_ == nullptr && this->total_ == nullptr; };
    // consumed Field Functions 
    bool hasConsumed() const { return this->consumed_ != nullptr;};
    void deleteConsumed() { this->consumed_ = nullptr;};
    inline int32_t getConsumed() const { DARABONBA_PTR_GET_DEFAULT(consumed_, 0) };
    inline RLProgressBufferDetail& setConsumed(int32_t consumed) { DARABONBA_PTR_SET_VALUE(consumed_, consumed) };


    // finished Field Functions 
    bool hasFinished() const { return this->finished_ != nullptr;};
    void deleteFinished() { this->finished_ = nullptr;};
    inline int32_t getFinished() const { DARABONBA_PTR_GET_DEFAULT(finished_, 0) };
    inline RLProgressBufferDetail& setFinished(int32_t finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


    // ready Field Functions 
    bool hasReady() const { return this->ready_ != nullptr;};
    void deleteReady() { this->ready_ = nullptr;};
    inline int32_t getReady() const { DARABONBA_PTR_GET_DEFAULT(ready_, 0) };
    inline RLProgressBufferDetail& setReady(int32_t ready) { DARABONBA_PTR_SET_VALUE(ready_, ready) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline int32_t getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, 0) };
    inline RLProgressBufferDetail& setTag(int32_t tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline RLProgressBufferDetail& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // 已被 trainer 消费的样本数
    shared_ptr<int32_t> consumed_ {};
    // 已完成样本数
    shared_ptr<int32_t> finished_ {};
    // 已就绪样本数
    shared_ptr<int32_t> ready_ {};
    // buffer 标签，即 global batch 序号
    shared_ptr<int32_t> tag_ {};
    // 目标样本数
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
