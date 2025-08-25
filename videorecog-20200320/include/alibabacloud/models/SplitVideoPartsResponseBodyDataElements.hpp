// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SPLITVIDEOPARTSRESPONSEBODYDATAELEMENTS_HPP_
#define ALIBABACLOUD_MODELS_SPLITVIDEOPARTSRESPONSEBODYDATAELEMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class SplitVideoPartsResponseBodyDataElements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SplitVideoPartsResponseBodyDataElements& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Index, index_);
    };
    friend void from_json(const Darabonba::Json& j, SplitVideoPartsResponseBodyDataElements& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
    };
    SplitVideoPartsResponseBodyDataElements() = default ;
    SplitVideoPartsResponseBodyDataElements(const SplitVideoPartsResponseBodyDataElements &) = default ;
    SplitVideoPartsResponseBodyDataElements(SplitVideoPartsResponseBodyDataElements &&) = default ;
    SplitVideoPartsResponseBodyDataElements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SplitVideoPartsResponseBodyDataElements() = default ;
    SplitVideoPartsResponseBodyDataElements& operator=(const SplitVideoPartsResponseBodyDataElements &) = default ;
    SplitVideoPartsResponseBodyDataElements& operator=(SplitVideoPartsResponseBodyDataElements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->beginTime_ != nullptr
        && this->endTime_ != nullptr && this->index_ != nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline float beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0.0) };
    inline SplitVideoPartsResponseBodyDataElements& setBeginTime(float beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline float endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0.0) };
    inline SplitVideoPartsResponseBodyDataElements& setEndTime(float endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline SplitVideoPartsResponseBodyDataElements& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


  protected:
    std::shared_ptr<float> beginTime_ = nullptr;
    std::shared_ptr<float> endTime_ = nullptr;
    std::shared_ptr<int64_t> index_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
