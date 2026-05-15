// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WINDOWLIMIT_HPP_
#define ALIBABACLOUD_MODELS_WINDOWLIMIT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class WindowLimit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WindowLimit& obj) { 
      DARABONBA_PTR_TO_JSON(durationSecs, durationSecs_);
      DARABONBA_PTR_TO_JSON(limit, limit_);
    };
    friend void from_json(const Darabonba::Json& j, WindowLimit& obj) { 
      DARABONBA_PTR_FROM_JSON(durationSecs, durationSecs_);
      DARABONBA_PTR_FROM_JSON(limit, limit_);
    };
    WindowLimit() = default ;
    WindowLimit(const WindowLimit &) = default ;
    WindowLimit(WindowLimit &&) = default ;
    WindowLimit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WindowLimit() = default ;
    WindowLimit& operator=(const WindowLimit &) = default ;
    WindowLimit& operator=(WindowLimit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->durationSecs_ == nullptr
        && this->limit_ == nullptr; };
    // durationSecs Field Functions 
    bool hasDurationSecs() const { return this->durationSecs_ != nullptr;};
    void deleteDurationSecs() { this->durationSecs_ = nullptr;};
    inline int64_t getDurationSecs() const { DARABONBA_PTR_GET_DEFAULT(durationSecs_, 0L) };
    inline WindowLimit& setDurationSecs(int64_t durationSecs) { DARABONBA_PTR_SET_VALUE(durationSecs_, durationSecs) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline WindowLimit& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


  protected:
    // 限流时间窗口的持续时间，单位为秒
    // 
    // This parameter is required.
    shared_ptr<int64_t> durationSecs_ {};
    // 在指定时间窗口内允许的最大请求数量
    // 
    // This parameter is required.
    shared_ptr<int64_t> limit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
