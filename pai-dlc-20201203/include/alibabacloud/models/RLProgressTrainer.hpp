// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLPROGRESSTRAINER_HPP_
#define ALIBABACLOUD_MODELS_RLPROGRESSTRAINER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RLProgressMicro.hpp>
#include <alibabacloud/models/RLProgressSync.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLProgressTrainer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLProgressTrainer& obj) { 
      DARABONBA_PTR_TO_JSON(Micro, micro_);
      DARABONBA_PTR_TO_JSON(MiniIdx, miniIdx_);
      DARABONBA_PTR_TO_JSON(NumMinibatches, numMinibatches_);
      DARABONBA_PTR_TO_JSON(Sync, sync_);
    };
    friend void from_json(const Darabonba::Json& j, RLProgressTrainer& obj) { 
      DARABONBA_PTR_FROM_JSON(Micro, micro_);
      DARABONBA_PTR_FROM_JSON(MiniIdx, miniIdx_);
      DARABONBA_PTR_FROM_JSON(NumMinibatches, numMinibatches_);
      DARABONBA_PTR_FROM_JSON(Sync, sync_);
    };
    RLProgressTrainer() = default ;
    RLProgressTrainer(const RLProgressTrainer &) = default ;
    RLProgressTrainer(RLProgressTrainer &&) = default ;
    RLProgressTrainer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLProgressTrainer() = default ;
    RLProgressTrainer& operator=(const RLProgressTrainer &) = default ;
    RLProgressTrainer& operator=(RLProgressTrainer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->micro_ == nullptr
        && this->miniIdx_ == nullptr && this->numMinibatches_ == nullptr && this->sync_ == nullptr; };
    // micro Field Functions 
    bool hasMicro() const { return this->micro_ != nullptr;};
    void deleteMicro() { this->micro_ = nullptr;};
    inline const RLProgressMicro & getMicro() const { DARABONBA_PTR_GET_CONST(micro_, RLProgressMicro) };
    inline RLProgressMicro getMicro() { DARABONBA_PTR_GET(micro_, RLProgressMicro) };
    inline RLProgressTrainer& setMicro(const RLProgressMicro & micro) { DARABONBA_PTR_SET_VALUE(micro_, micro) };
    inline RLProgressTrainer& setMicro(RLProgressMicro && micro) { DARABONBA_PTR_SET_RVALUE(micro_, micro) };


    // miniIdx Field Functions 
    bool hasMiniIdx() const { return this->miniIdx_ != nullptr;};
    void deleteMiniIdx() { this->miniIdx_ = nullptr;};
    inline int32_t getMiniIdx() const { DARABONBA_PTR_GET_DEFAULT(miniIdx_, 0) };
    inline RLProgressTrainer& setMiniIdx(int32_t miniIdx) { DARABONBA_PTR_SET_VALUE(miniIdx_, miniIdx) };


    // numMinibatches Field Functions 
    bool hasNumMinibatches() const { return this->numMinibatches_ != nullptr;};
    void deleteNumMinibatches() { this->numMinibatches_ = nullptr;};
    inline int32_t getNumMinibatches() const { DARABONBA_PTR_GET_DEFAULT(numMinibatches_, 0) };
    inline RLProgressTrainer& setNumMinibatches(int32_t numMinibatches) { DARABONBA_PTR_SET_VALUE(numMinibatches_, numMinibatches) };


    // sync Field Functions 
    bool hasSync() const { return this->sync_ != nullptr;};
    void deleteSync() { this->sync_ = nullptr;};
    inline const RLProgressSync & getSync() const { DARABONBA_PTR_GET_CONST(sync_, RLProgressSync) };
    inline RLProgressSync getSync() { DARABONBA_PTR_GET(sync_, RLProgressSync) };
    inline RLProgressTrainer& setSync(const RLProgressSync & sync) { DARABONBA_PTR_SET_VALUE(sync_, sync) };
    inline RLProgressTrainer& setSync(RLProgressSync && sync) { DARABONBA_PTR_SET_RVALUE(sync_, sync) };


  protected:
    // micro-batch 进度
    shared_ptr<RLProgressMicro> micro_ {};
    // 当前 mini batch 序号
    shared_ptr<int32_t> miniIdx_ {};
    // mini-batch 总数
    shared_ptr<int32_t> numMinibatches_ {};
    // 参数同步状态
    shared_ptr<RLProgressSync> sync_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
