// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLPROGRESSSLOW_HPP_
#define ALIBABACLOUD_MODELS_RLPROGRESSSLOW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RLProgressSlowDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLProgressSlow : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLProgressSlow& obj) { 
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(Elapsed, elapsed_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, RLProgressSlow& obj) { 
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(Elapsed, elapsed_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    RLProgressSlow() = default ;
    RLProgressSlow(const RLProgressSlow &) = default ;
    RLProgressSlow(RLProgressSlow &&) = default ;
    RLProgressSlow(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLProgressSlow() = default ;
    RLProgressSlow& operator=(const RLProgressSlow &) = default ;
    RLProgressSlow& operator=(RLProgressSlow &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->details_ == nullptr
        && this->elapsed_ == nullptr && this->time_ == nullptr; };
    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<RLProgressSlowDetail> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<RLProgressSlowDetail>) };
    inline vector<RLProgressSlowDetail> getDetails() { DARABONBA_PTR_GET(details_, vector<RLProgressSlowDetail>) };
    inline RLProgressSlow& setDetails(const vector<RLProgressSlowDetail> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline RLProgressSlow& setDetails(vector<RLProgressSlowDetail> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // elapsed Field Functions 
    bool hasElapsed() const { return this->elapsed_ != nullptr;};
    void deleteElapsed() { this->elapsed_ = nullptr;};
    inline double getElapsed() const { DARABONBA_PTR_GET_DEFAULT(elapsed_, 0.0) };
    inline RLProgressSlow& setElapsed(double elapsed) { DARABONBA_PTR_SET_VALUE(elapsed_, elapsed) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline RLProgressSlow& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // 慢推理明细，最多 20 条
    shared_ptr<vector<RLProgressSlowDetail>> details_ {};
    // 最慢一条的已耗时（秒）
    shared_ptr<double> elapsed_ {};
    // 最慢一条的日志时间（unix 秒）
    shared_ptr<int64_t> time_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
