// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREALTIMEINSTANCESTATESRESPONSEBODYDATABREAKCODEDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_GETREALTIMEINSTANCESTATESRESPONSEBODYDATABREAKCODEDETAILLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetRealtimeInstanceStatesResponseBodyDataBreakCodeDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRealtimeInstanceStatesResponseBodyDataBreakCodeDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(BreakCode, breakCode_);
      DARABONBA_PTR_TO_JSON(Count, count_);
    };
    friend void from_json(const Darabonba::Json& j, GetRealtimeInstanceStatesResponseBodyDataBreakCodeDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(BreakCode, breakCode_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
    };
    GetRealtimeInstanceStatesResponseBodyDataBreakCodeDetailList() = default ;
    GetRealtimeInstanceStatesResponseBodyDataBreakCodeDetailList(const GetRealtimeInstanceStatesResponseBodyDataBreakCodeDetailList &) = default ;
    GetRealtimeInstanceStatesResponseBodyDataBreakCodeDetailList(GetRealtimeInstanceStatesResponseBodyDataBreakCodeDetailList &&) = default ;
    GetRealtimeInstanceStatesResponseBodyDataBreakCodeDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRealtimeInstanceStatesResponseBodyDataBreakCodeDetailList() = default ;
    GetRealtimeInstanceStatesResponseBodyDataBreakCodeDetailList& operator=(const GetRealtimeInstanceStatesResponseBodyDataBreakCodeDetailList &) = default ;
    GetRealtimeInstanceStatesResponseBodyDataBreakCodeDetailList& operator=(GetRealtimeInstanceStatesResponseBodyDataBreakCodeDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->breakCode_ == nullptr
        && return this->count_ == nullptr; };
    // breakCode Field Functions 
    bool hasBreakCode() const { return this->breakCode_ != nullptr;};
    void deleteBreakCode() { this->breakCode_ = nullptr;};
    inline string breakCode() const { DARABONBA_PTR_GET_DEFAULT(breakCode_, "") };
    inline GetRealtimeInstanceStatesResponseBodyDataBreakCodeDetailList& setBreakCode(string breakCode) { DARABONBA_PTR_SET_VALUE(breakCode_, breakCode) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline GetRealtimeInstanceStatesResponseBodyDataBreakCodeDetailList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


  protected:
    std::shared_ptr<string> breakCode_ = nullptr;
    std::shared_ptr<int64_t> count_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
