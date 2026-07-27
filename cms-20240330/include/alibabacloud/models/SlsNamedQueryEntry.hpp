// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SLSNAMEDQUERYENTRY_HPP_
#define ALIBABACLOUD_MODELS_SLSNAMEDQUERYENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class SlsNamedQueryEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SlsNamedQueryEntry& obj) { 
      DARABONBA_PTR_TO_JSON(end, end_);
      DARABONBA_PTR_TO_JSON(expr, expr_);
      DARABONBA_PTR_TO_JSON(start, start_);
      DARABONBA_PTR_TO_JSON(timeUnit, timeUnit_);
      DARABONBA_PTR_TO_JSON(window, window_);
    };
    friend void from_json(const Darabonba::Json& j, SlsNamedQueryEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(end, end_);
      DARABONBA_PTR_FROM_JSON(expr, expr_);
      DARABONBA_PTR_FROM_JSON(start, start_);
      DARABONBA_PTR_FROM_JSON(timeUnit, timeUnit_);
      DARABONBA_PTR_FROM_JSON(window, window_);
    };
    SlsNamedQueryEntry() = default ;
    SlsNamedQueryEntry(const SlsNamedQueryEntry &) = default ;
    SlsNamedQueryEntry(SlsNamedQueryEntry &&) = default ;
    SlsNamedQueryEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SlsNamedQueryEntry() = default ;
    SlsNamedQueryEntry& operator=(const SlsNamedQueryEntry &) = default ;
    SlsNamedQueryEntry& operator=(SlsNamedQueryEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->end_ == nullptr
        && this->expr_ == nullptr && this->start_ == nullptr && this->timeUnit_ == nullptr && this->window_ == nullptr; };
    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
    inline SlsNamedQueryEntry& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // expr Field Functions 
    bool hasExpr() const { return this->expr_ != nullptr;};
    void deleteExpr() { this->expr_ = nullptr;};
    inline string getExpr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
    inline SlsNamedQueryEntry& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int64_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
    inline SlsNamedQueryEntry& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // timeUnit Field Functions 
    bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
    void deleteTimeUnit() { this->timeUnit_ = nullptr;};
    inline string getTimeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
    inline SlsNamedQueryEntry& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


    // window Field Functions 
    bool hasWindow() const { return this->window_ != nullptr;};
    void deleteWindow() { this->window_ = nullptr;};
    inline int64_t getWindow() const { DARABONBA_PTR_GET_DEFAULT(window_, 0L) };
    inline SlsNamedQueryEntry& setWindow(int64_t window) { DARABONBA_PTR_SET_VALUE(window_, window) };


  protected:
    shared_ptr<int64_t> end_ {};
    shared_ptr<string> expr_ {};
    shared_ptr<int64_t> start_ {};
    shared_ptr<string> timeUnit_ {};
    shared_ptr<int64_t> window_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
