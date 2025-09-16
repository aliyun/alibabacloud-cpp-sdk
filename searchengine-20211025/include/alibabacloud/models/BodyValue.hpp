// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BODYVALUE_HPP_
#define ALIBABACLOUD_MODELS_BODYVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class BodyValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BodyValue& obj) { 
      DARABONBA_PTR_TO_JSON(pauseAll, pauseAll_);
      DARABONBA_PTR_TO_JSON(pauseIndex, pauseIndex_);
      DARABONBA_PTR_TO_JSON(pauseIndexBatch, pauseIndexBatch_);
      DARABONBA_PTR_TO_JSON(pauseBiz, pauseBiz_);
      DARABONBA_PTR_TO_JSON(pauseRuntime, pauseRuntime_);
    };
    friend void from_json(const Darabonba::Json& j, BodyValue& obj) { 
      DARABONBA_PTR_FROM_JSON(pauseAll, pauseAll_);
      DARABONBA_PTR_FROM_JSON(pauseIndex, pauseIndex_);
      DARABONBA_PTR_FROM_JSON(pauseIndexBatch, pauseIndexBatch_);
      DARABONBA_PTR_FROM_JSON(pauseBiz, pauseBiz_);
      DARABONBA_PTR_FROM_JSON(pauseRuntime, pauseRuntime_);
    };
    BodyValue() = default ;
    BodyValue(const BodyValue &) = default ;
    BodyValue(BodyValue &&) = default ;
    BodyValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BodyValue() = default ;
    BodyValue& operator=(const BodyValue &) = default ;
    BodyValue& operator=(BodyValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pauseAll_ != nullptr
        && this->pauseIndex_ != nullptr && this->pauseIndexBatch_ != nullptr && this->pauseBiz_ != nullptr && this->pauseRuntime_ != nullptr; };
    // pauseAll Field Functions 
    bool hasPauseAll() const { return this->pauseAll_ != nullptr;};
    void deletePauseAll() { this->pauseAll_ = nullptr;};
    inline bool pauseAll() const { DARABONBA_PTR_GET_DEFAULT(pauseAll_, false) };
    inline BodyValue& setPauseAll(bool pauseAll) { DARABONBA_PTR_SET_VALUE(pauseAll_, pauseAll) };


    // pauseIndex Field Functions 
    bool hasPauseIndex() const { return this->pauseIndex_ != nullptr;};
    void deletePauseIndex() { this->pauseIndex_ = nullptr;};
    inline bool pauseIndex() const { DARABONBA_PTR_GET_DEFAULT(pauseIndex_, false) };
    inline BodyValue& setPauseIndex(bool pauseIndex) { DARABONBA_PTR_SET_VALUE(pauseIndex_, pauseIndex) };


    // pauseIndexBatch Field Functions 
    bool hasPauseIndexBatch() const { return this->pauseIndexBatch_ != nullptr;};
    void deletePauseIndexBatch() { this->pauseIndexBatch_ = nullptr;};
    inline bool pauseIndexBatch() const { DARABONBA_PTR_GET_DEFAULT(pauseIndexBatch_, false) };
    inline BodyValue& setPauseIndexBatch(bool pauseIndexBatch) { DARABONBA_PTR_SET_VALUE(pauseIndexBatch_, pauseIndexBatch) };


    // pauseBiz Field Functions 
    bool hasPauseBiz() const { return this->pauseBiz_ != nullptr;};
    void deletePauseBiz() { this->pauseBiz_ = nullptr;};
    inline bool pauseBiz() const { DARABONBA_PTR_GET_DEFAULT(pauseBiz_, false) };
    inline BodyValue& setPauseBiz(bool pauseBiz) { DARABONBA_PTR_SET_VALUE(pauseBiz_, pauseBiz) };


    // pauseRuntime Field Functions 
    bool hasPauseRuntime() const { return this->pauseRuntime_ != nullptr;};
    void deletePauseRuntime() { this->pauseRuntime_ = nullptr;};
    inline bool pauseRuntime() const { DARABONBA_PTR_GET_DEFAULT(pauseRuntime_, false) };
    inline BodyValue& setPauseRuntime(bool pauseRuntime) { DARABONBA_PTR_SET_VALUE(pauseRuntime_, pauseRuntime) };


  protected:
    // Specifies whether to suspend all pushes.
    std::shared_ptr<bool> pauseAll_ = nullptr;
    // Specifies whether to suspend the push for the new full index version.
    std::shared_ptr<bool> pauseIndex_ = nullptr;
    // Specifies whether to suspend the push for the incremental indexes.
    std::shared_ptr<bool> pauseIndexBatch_ = nullptr;
    // Specifies whether to suspend the push for the configuration.
    std::shared_ptr<bool> pauseBiz_ = nullptr;
    // Specifies whether to suspend the push for the real-time incremental indexes.
    std::shared_ptr<bool> pauseRuntime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
