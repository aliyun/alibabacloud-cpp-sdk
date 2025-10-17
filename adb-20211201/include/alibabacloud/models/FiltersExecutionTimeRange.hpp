// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILTERSEXECUTIONTIMERANGE_HPP_
#define ALIBABACLOUD_MODELS_FILTERSEXECUTIONTIMERANGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class FiltersExecutionTimeRange : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FiltersExecutionTimeRange& obj) { 
      DARABONBA_PTR_TO_JSON(MaxTimeInSeconds, maxTimeInSeconds_);
      DARABONBA_PTR_TO_JSON(MinTimeInSeconds, minTimeInSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, FiltersExecutionTimeRange& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxTimeInSeconds, maxTimeInSeconds_);
      DARABONBA_PTR_FROM_JSON(MinTimeInSeconds, minTimeInSeconds_);
    };
    FiltersExecutionTimeRange() = default ;
    FiltersExecutionTimeRange(const FiltersExecutionTimeRange &) = default ;
    FiltersExecutionTimeRange(FiltersExecutionTimeRange &&) = default ;
    FiltersExecutionTimeRange(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FiltersExecutionTimeRange() = default ;
    FiltersExecutionTimeRange& operator=(const FiltersExecutionTimeRange &) = default ;
    FiltersExecutionTimeRange& operator=(FiltersExecutionTimeRange &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxTimeInSeconds_ == nullptr
        && return this->minTimeInSeconds_ == nullptr; };
    // maxTimeInSeconds Field Functions 
    bool hasMaxTimeInSeconds() const { return this->maxTimeInSeconds_ != nullptr;};
    void deleteMaxTimeInSeconds() { this->maxTimeInSeconds_ = nullptr;};
    inline int64_t maxTimeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxTimeInSeconds_, 0L) };
    inline FiltersExecutionTimeRange& setMaxTimeInSeconds(int64_t maxTimeInSeconds) { DARABONBA_PTR_SET_VALUE(maxTimeInSeconds_, maxTimeInSeconds) };


    // minTimeInSeconds Field Functions 
    bool hasMinTimeInSeconds() const { return this->minTimeInSeconds_ != nullptr;};
    void deleteMinTimeInSeconds() { this->minTimeInSeconds_ = nullptr;};
    inline int64_t minTimeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(minTimeInSeconds_, 0L) };
    inline FiltersExecutionTimeRange& setMinTimeInSeconds(int64_t minTimeInSeconds) { DARABONBA_PTR_SET_VALUE(minTimeInSeconds_, minTimeInSeconds) };


  protected:
    std::shared_ptr<int64_t> maxTimeInSeconds_ = nullptr;
    std::shared_ptr<int64_t> minTimeInSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
