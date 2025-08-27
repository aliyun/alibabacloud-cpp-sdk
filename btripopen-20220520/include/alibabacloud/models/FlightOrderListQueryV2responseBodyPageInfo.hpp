// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYPAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYPAGEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderListQueryV2ResponseBodyPageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryV2ResponseBodyPageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(number, number_);
      DARABONBA_PTR_TO_JSON(scroll_id, scrollId_);
      DARABONBA_PTR_TO_JSON(total_number, totalNumber_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryV2ResponseBodyPageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(number, number_);
      DARABONBA_PTR_FROM_JSON(scroll_id, scrollId_);
      DARABONBA_PTR_FROM_JSON(total_number, totalNumber_);
    };
    FlightOrderListQueryV2ResponseBodyPageInfo() = default ;
    FlightOrderListQueryV2ResponseBodyPageInfo(const FlightOrderListQueryV2ResponseBodyPageInfo &) = default ;
    FlightOrderListQueryV2ResponseBodyPageInfo(FlightOrderListQueryV2ResponseBodyPageInfo &&) = default ;
    FlightOrderListQueryV2ResponseBodyPageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryV2ResponseBodyPageInfo() = default ;
    FlightOrderListQueryV2ResponseBodyPageInfo& operator=(const FlightOrderListQueryV2ResponseBodyPageInfo &) = default ;
    FlightOrderListQueryV2ResponseBodyPageInfo& operator=(FlightOrderListQueryV2ResponseBodyPageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->number_ != nullptr
        && this->scrollId_ != nullptr && this->totalNumber_ != nullptr; };
    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline int32_t number() const { DARABONBA_PTR_GET_DEFAULT(number_, 0) };
    inline FlightOrderListQueryV2ResponseBodyPageInfo& setNumber(int32_t number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // scrollId Field Functions 
    bool hasScrollId() const { return this->scrollId_ != nullptr;};
    void deleteScrollId() { this->scrollId_ = nullptr;};
    inline string scrollId() const { DARABONBA_PTR_GET_DEFAULT(scrollId_, "") };
    inline FlightOrderListQueryV2ResponseBodyPageInfo& setScrollId(string scrollId) { DARABONBA_PTR_SET_VALUE(scrollId_, scrollId) };


    // totalNumber Field Functions 
    bool hasTotalNumber() const { return this->totalNumber_ != nullptr;};
    void deleteTotalNumber() { this->totalNumber_ = nullptr;};
    inline int32_t totalNumber() const { DARABONBA_PTR_GET_DEFAULT(totalNumber_, 0) };
    inline FlightOrderListQueryV2ResponseBodyPageInfo& setTotalNumber(int32_t totalNumber) { DARABONBA_PTR_SET_VALUE(totalNumber_, totalNumber) };


  protected:
    std::shared_ptr<int32_t> number_ = nullptr;
    std::shared_ptr<string> scrollId_ = nullptr;
    std::shared_ptr<int32_t> totalNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
