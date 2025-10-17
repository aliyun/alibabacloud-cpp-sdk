// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILTERSTERMIATEDTIMERANGE_HPP_
#define ALIBABACLOUD_MODELS_FILTERSTERMIATEDTIMERANGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class FiltersTermiatedTimeRange : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FiltersTermiatedTimeRange& obj) { 
      DARABONBA_PTR_TO_JSON(MaxTimeInMills, maxTimeInMills_);
      DARABONBA_PTR_TO_JSON(MinTimeInMills, minTimeInMills_);
    };
    friend void from_json(const Darabonba::Json& j, FiltersTermiatedTimeRange& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxTimeInMills, maxTimeInMills_);
      DARABONBA_PTR_FROM_JSON(MinTimeInMills, minTimeInMills_);
    };
    FiltersTermiatedTimeRange() = default ;
    FiltersTermiatedTimeRange(const FiltersTermiatedTimeRange &) = default ;
    FiltersTermiatedTimeRange(FiltersTermiatedTimeRange &&) = default ;
    FiltersTermiatedTimeRange(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FiltersTermiatedTimeRange() = default ;
    FiltersTermiatedTimeRange& operator=(const FiltersTermiatedTimeRange &) = default ;
    FiltersTermiatedTimeRange& operator=(FiltersTermiatedTimeRange &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxTimeInMills_ == nullptr
        && return this->minTimeInMills_ == nullptr; };
    // maxTimeInMills Field Functions 
    bool hasMaxTimeInMills() const { return this->maxTimeInMills_ != nullptr;};
    void deleteMaxTimeInMills() { this->maxTimeInMills_ = nullptr;};
    inline int64_t maxTimeInMills() const { DARABONBA_PTR_GET_DEFAULT(maxTimeInMills_, 0L) };
    inline FiltersTermiatedTimeRange& setMaxTimeInMills(int64_t maxTimeInMills) { DARABONBA_PTR_SET_VALUE(maxTimeInMills_, maxTimeInMills) };


    // minTimeInMills Field Functions 
    bool hasMinTimeInMills() const { return this->minTimeInMills_ != nullptr;};
    void deleteMinTimeInMills() { this->minTimeInMills_ = nullptr;};
    inline int64_t minTimeInMills() const { DARABONBA_PTR_GET_DEFAULT(minTimeInMills_, 0L) };
    inline FiltersTermiatedTimeRange& setMinTimeInMills(int64_t minTimeInMills) { DARABONBA_PTR_SET_VALUE(minTimeInMills_, minTimeInMills) };


  protected:
    std::shared_ptr<int64_t> maxTimeInMills_ = nullptr;
    std::shared_ptr<int64_t> minTimeInMills_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
