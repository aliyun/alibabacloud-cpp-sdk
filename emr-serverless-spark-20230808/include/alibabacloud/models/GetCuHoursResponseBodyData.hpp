// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUHOURSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCUHOURSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetCuHoursResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCuHoursResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(cuHours, cuHours_);
    };
    friend void from_json(const Darabonba::Json& j, GetCuHoursResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(cuHours, cuHours_);
    };
    GetCuHoursResponseBodyData() = default ;
    GetCuHoursResponseBodyData(const GetCuHoursResponseBodyData &) = default ;
    GetCuHoursResponseBodyData(GetCuHoursResponseBodyData &&) = default ;
    GetCuHoursResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCuHoursResponseBodyData() = default ;
    GetCuHoursResponseBodyData& operator=(const GetCuHoursResponseBodyData &) = default ;
    GetCuHoursResponseBodyData& operator=(GetCuHoursResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cuHours_ != nullptr; };
    // cuHours Field Functions 
    bool hasCuHours() const { return this->cuHours_ != nullptr;};
    void deleteCuHours() { this->cuHours_ = nullptr;};
    inline string cuHours() const { DARABONBA_PTR_GET_DEFAULT(cuHours_, "") };
    inline GetCuHoursResponseBodyData& setCuHours(string cuHours) { DARABONBA_PTR_SET_VALUE(cuHours_, cuHours) };


  protected:
    // The number of CU-hours consumed by a queue during a specified cycle. The value is an estimated value. Refer to your Alibaba Cloud bill for the actual number of consumed CU-hours.
    std::shared_ptr<string> cuHours_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
