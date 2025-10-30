// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HUGEPAGE_HPP_
#define ALIBABACLOUD_MODELS_HUGEPAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class Hugepage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Hugepage& obj) { 
      DARABONBA_PTR_TO_JSON(khugepagedAllocSleepMillisecs, khugepagedAllocSleepMillisecs_);
      DARABONBA_PTR_TO_JSON(khugepagedDefrag, khugepagedDefrag_);
      DARABONBA_PTR_TO_JSON(khugepagedPagesToScan, khugepagedPagesToScan_);
      DARABONBA_PTR_TO_JSON(khugepagedScanSleepMillisecs, khugepagedScanSleepMillisecs_);
      DARABONBA_PTR_TO_JSON(transparentDefrag, transparentDefrag_);
      DARABONBA_PTR_TO_JSON(transparentEnabled, transparentEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, Hugepage& obj) { 
      DARABONBA_PTR_FROM_JSON(khugepagedAllocSleepMillisecs, khugepagedAllocSleepMillisecs_);
      DARABONBA_PTR_FROM_JSON(khugepagedDefrag, khugepagedDefrag_);
      DARABONBA_PTR_FROM_JSON(khugepagedPagesToScan, khugepagedPagesToScan_);
      DARABONBA_PTR_FROM_JSON(khugepagedScanSleepMillisecs, khugepagedScanSleepMillisecs_);
      DARABONBA_PTR_FROM_JSON(transparentDefrag, transparentDefrag_);
      DARABONBA_PTR_FROM_JSON(transparentEnabled, transparentEnabled_);
    };
    Hugepage() = default ;
    Hugepage(const Hugepage &) = default ;
    Hugepage(Hugepage &&) = default ;
    Hugepage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Hugepage() = default ;
    Hugepage& operator=(const Hugepage &) = default ;
    Hugepage& operator=(Hugepage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->khugepagedAllocSleepMillisecs_ == nullptr
        && return this->khugepagedDefrag_ == nullptr && return this->khugepagedPagesToScan_ == nullptr && return this->khugepagedScanSleepMillisecs_ == nullptr && return this->transparentDefrag_ == nullptr && return this->transparentEnabled_ == nullptr; };
    // khugepagedAllocSleepMillisecs Field Functions 
    bool hasKhugepagedAllocSleepMillisecs() const { return this->khugepagedAllocSleepMillisecs_ != nullptr;};
    void deleteKhugepagedAllocSleepMillisecs() { this->khugepagedAllocSleepMillisecs_ = nullptr;};
    inline int64_t khugepagedAllocSleepMillisecs() const { DARABONBA_PTR_GET_DEFAULT(khugepagedAllocSleepMillisecs_, 0L) };
    inline Hugepage& setKhugepagedAllocSleepMillisecs(int64_t khugepagedAllocSleepMillisecs) { DARABONBA_PTR_SET_VALUE(khugepagedAllocSleepMillisecs_, khugepagedAllocSleepMillisecs) };


    // khugepagedDefrag Field Functions 
    bool hasKhugepagedDefrag() const { return this->khugepagedDefrag_ != nullptr;};
    void deleteKhugepagedDefrag() { this->khugepagedDefrag_ = nullptr;};
    inline int64_t khugepagedDefrag() const { DARABONBA_PTR_GET_DEFAULT(khugepagedDefrag_, 0L) };
    inline Hugepage& setKhugepagedDefrag(int64_t khugepagedDefrag) { DARABONBA_PTR_SET_VALUE(khugepagedDefrag_, khugepagedDefrag) };


    // khugepagedPagesToScan Field Functions 
    bool hasKhugepagedPagesToScan() const { return this->khugepagedPagesToScan_ != nullptr;};
    void deleteKhugepagedPagesToScan() { this->khugepagedPagesToScan_ = nullptr;};
    inline int64_t khugepagedPagesToScan() const { DARABONBA_PTR_GET_DEFAULT(khugepagedPagesToScan_, 0L) };
    inline Hugepage& setKhugepagedPagesToScan(int64_t khugepagedPagesToScan) { DARABONBA_PTR_SET_VALUE(khugepagedPagesToScan_, khugepagedPagesToScan) };


    // khugepagedScanSleepMillisecs Field Functions 
    bool hasKhugepagedScanSleepMillisecs() const { return this->khugepagedScanSleepMillisecs_ != nullptr;};
    void deleteKhugepagedScanSleepMillisecs() { this->khugepagedScanSleepMillisecs_ = nullptr;};
    inline int64_t khugepagedScanSleepMillisecs() const { DARABONBA_PTR_GET_DEFAULT(khugepagedScanSleepMillisecs_, 0L) };
    inline Hugepage& setKhugepagedScanSleepMillisecs(int64_t khugepagedScanSleepMillisecs) { DARABONBA_PTR_SET_VALUE(khugepagedScanSleepMillisecs_, khugepagedScanSleepMillisecs) };


    // transparentDefrag Field Functions 
    bool hasTransparentDefrag() const { return this->transparentDefrag_ != nullptr;};
    void deleteTransparentDefrag() { this->transparentDefrag_ = nullptr;};
    inline string transparentDefrag() const { DARABONBA_PTR_GET_DEFAULT(transparentDefrag_, "") };
    inline Hugepage& setTransparentDefrag(string transparentDefrag) { DARABONBA_PTR_SET_VALUE(transparentDefrag_, transparentDefrag) };


    // transparentEnabled Field Functions 
    bool hasTransparentEnabled() const { return this->transparentEnabled_ != nullptr;};
    void deleteTransparentEnabled() { this->transparentEnabled_ = nullptr;};
    inline string transparentEnabled() const { DARABONBA_PTR_GET_DEFAULT(transparentEnabled_, "") };
    inline Hugepage& setTransparentEnabled(string transparentEnabled) { DARABONBA_PTR_SET_VALUE(transparentEnabled_, transparentEnabled) };


  protected:
    std::shared_ptr<int64_t> khugepagedAllocSleepMillisecs_ = nullptr;
    std::shared_ptr<int64_t> khugepagedDefrag_ = nullptr;
    std::shared_ptr<int64_t> khugepagedPagesToScan_ = nullptr;
    std::shared_ptr<int64_t> khugepagedScanSleepMillisecs_ = nullptr;
    std::shared_ptr<string> transparentDefrag_ = nullptr;
    std::shared_ptr<string> transparentEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
