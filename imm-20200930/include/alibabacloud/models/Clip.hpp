// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLIP_HPP_
#define ALIBABACLOUD_MODELS_CLIP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Clip : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Clip& obj) { 
      DARABONBA_PTR_TO_JSON(TimeRange, timeRange_);
    };
    friend void from_json(const Darabonba::Json& j, Clip& obj) { 
      DARABONBA_PTR_FROM_JSON(TimeRange, timeRange_);
    };
    Clip() = default ;
    Clip(const Clip &) = default ;
    Clip(Clip &&) = default ;
    Clip(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Clip() = default ;
    Clip& operator=(const Clip &) = default ;
    Clip& operator=(Clip &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->timeRange_ == nullptr; };
    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline const vector<int64_t> & getTimeRange() const { DARABONBA_PTR_GET_CONST(timeRange_, vector<int64_t>) };
    inline vector<int64_t> getTimeRange() { DARABONBA_PTR_GET(timeRange_, vector<int64_t>) };
    inline Clip& setTimeRange(const vector<int64_t> & timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };
    inline Clip& setTimeRange(vector<int64_t> && timeRange) { DARABONBA_PTR_SET_RVALUE(timeRange_, timeRange) };


  protected:
    shared_ptr<vector<int64_t>> timeRange_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
