// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOPTRAFFICSTATISTICSRESPONSEBODYTRAFFICDATADATAPOINTS_HPP_
#define ALIBABACLOUD_MODELS_LISTPOPTRAFFICSTATISTICSRESPONSEBODYTRAFFICDATADATAPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPopTrafficStatisticsResponseBodyTrafficDataDatapoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPopTrafficStatisticsResponseBodyTrafficDataDatapoints& obj) { 
      DARABONBA_PTR_TO_JSON(Average, average_);
      DARABONBA_PTR_TO_JSON(DateTime, dateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListPopTrafficStatisticsResponseBodyTrafficDataDatapoints& obj) { 
      DARABONBA_PTR_FROM_JSON(Average, average_);
      DARABONBA_PTR_FROM_JSON(DateTime, dateTime_);
    };
    ListPopTrafficStatisticsResponseBodyTrafficDataDatapoints() = default ;
    ListPopTrafficStatisticsResponseBodyTrafficDataDatapoints(const ListPopTrafficStatisticsResponseBodyTrafficDataDatapoints &) = default ;
    ListPopTrafficStatisticsResponseBodyTrafficDataDatapoints(ListPopTrafficStatisticsResponseBodyTrafficDataDatapoints &&) = default ;
    ListPopTrafficStatisticsResponseBodyTrafficDataDatapoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPopTrafficStatisticsResponseBodyTrafficDataDatapoints() = default ;
    ListPopTrafficStatisticsResponseBodyTrafficDataDatapoints& operator=(const ListPopTrafficStatisticsResponseBodyTrafficDataDatapoints &) = default ;
    ListPopTrafficStatisticsResponseBodyTrafficDataDatapoints& operator=(ListPopTrafficStatisticsResponseBodyTrafficDataDatapoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->average_ == nullptr
        && return this->dateTime_ == nullptr; };
    // average Field Functions 
    bool hasAverage() const { return this->average_ != nullptr;};
    void deleteAverage() { this->average_ = nullptr;};
    inline double average() const { DARABONBA_PTR_GET_DEFAULT(average_, 0.0) };
    inline ListPopTrafficStatisticsResponseBodyTrafficDataDatapoints& setAverage(double average) { DARABONBA_PTR_SET_VALUE(average_, average) };


    // dateTime Field Functions 
    bool hasDateTime() const { return this->dateTime_ != nullptr;};
    void deleteDateTime() { this->dateTime_ = nullptr;};
    inline string dateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
    inline ListPopTrafficStatisticsResponseBodyTrafficDataDatapoints& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


  protected:
    std::shared_ptr<double> average_ = nullptr;
    std::shared_ptr<string> dateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
