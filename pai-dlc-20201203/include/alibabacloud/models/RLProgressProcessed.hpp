// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLPROGRESSPROCESSED_HPP_
#define ALIBABACLOUD_MODELS_RLPROGRESSPROCESSED_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLProgressProcessed : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLProgressProcessed& obj) { 
      DARABONBA_PTR_TO_JSON(Done, done_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, RLProgressProcessed& obj) { 
      DARABONBA_PTR_FROM_JSON(Done, done_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    RLProgressProcessed() = default ;
    RLProgressProcessed(const RLProgressProcessed &) = default ;
    RLProgressProcessed(RLProgressProcessed &&) = default ;
    RLProgressProcessed(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLProgressProcessed() = default ;
    RLProgressProcessed& operator=(const RLProgressProcessed &) = default ;
    RLProgressProcessed& operator=(RLProgressProcessed &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->done_ == nullptr
        && this->total_ == nullptr; };
    // done Field Functions 
    bool hasDone() const { return this->done_ != nullptr;};
    void deleteDone() { this->done_ = nullptr;};
    inline int32_t getDone() const { DARABONBA_PTR_GET_DEFAULT(done_, 0) };
    inline RLProgressProcessed& setDone(int32_t done) { DARABONBA_PTR_SET_VALUE(done_, done) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline RLProgressProcessed& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // 已处理条数
    shared_ptr<int32_t> done_ {};
    // 总条数
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
