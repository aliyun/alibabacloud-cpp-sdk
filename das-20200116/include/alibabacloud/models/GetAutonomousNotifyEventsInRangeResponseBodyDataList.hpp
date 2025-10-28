// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTONOMOUSNOTIFYEVENTSINRANGERESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_GETAUTONOMOUSNOTIFYEVENTSINRANGERESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetAutonomousNotifyEventsInRangeResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutonomousNotifyEventsInRangeResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(T, t_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutonomousNotifyEventsInRangeResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(T, t_);
    };
    GetAutonomousNotifyEventsInRangeResponseBodyDataList() = default ;
    GetAutonomousNotifyEventsInRangeResponseBodyDataList(const GetAutonomousNotifyEventsInRangeResponseBodyDataList &) = default ;
    GetAutonomousNotifyEventsInRangeResponseBodyDataList(GetAutonomousNotifyEventsInRangeResponseBodyDataList &&) = default ;
    GetAutonomousNotifyEventsInRangeResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutonomousNotifyEventsInRangeResponseBodyDataList() = default ;
    GetAutonomousNotifyEventsInRangeResponseBodyDataList& operator=(const GetAutonomousNotifyEventsInRangeResponseBodyDataList &) = default ;
    GetAutonomousNotifyEventsInRangeResponseBodyDataList& operator=(GetAutonomousNotifyEventsInRangeResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->t_ == nullptr; };
    // t Field Functions 
    bool hasT() const { return this->t_ != nullptr;};
    void deleteT() { this->t_ = nullptr;};
    inline const vector<string> & t() const { DARABONBA_PTR_GET_CONST(t_, vector<string>) };
    inline vector<string> t() { DARABONBA_PTR_GET(t_, vector<string>) };
    inline GetAutonomousNotifyEventsInRangeResponseBodyDataList& setT(const vector<string> & t) { DARABONBA_PTR_SET_VALUE(t_, t) };
    inline GetAutonomousNotifyEventsInRangeResponseBodyDataList& setT(vector<string> && t) { DARABONBA_PTR_SET_RVALUE(t_, t) };


  protected:
    std::shared_ptr<vector<string>> t_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
