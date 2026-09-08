// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLPROGRESSMICRO_HPP_
#define ALIBABACLOUD_MODELS_RLPROGRESSMICRO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLProgressMicro : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLProgressMicro& obj) { 
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, RLProgressMicro& obj) { 
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    RLProgressMicro() = default ;
    RLProgressMicro(const RLProgressMicro &) = default ;
    RLProgressMicro(RLProgressMicro &&) = default ;
    RLProgressMicro(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLProgressMicro() = default ;
    RLProgressMicro& operator=(const RLProgressMicro &) = default ;
    RLProgressMicro& operator=(RLProgressMicro &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->current_ == nullptr
        && this->total_ == nullptr; };
    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline RLProgressMicro& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline RLProgressMicro& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // 当前 micro-batch 序号
    shared_ptr<int32_t> current_ {};
    // micro-batch 总数
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
