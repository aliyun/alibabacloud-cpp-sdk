// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHISTORICALINSTANCEREPORTRESPONSEBODYDATAINTERNAL_HPP_
#define ALIBABACLOUD_MODELS_GETHISTORICALINSTANCEREPORTRESPONSEBODYDATAINTERNAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetHistoricalInstanceReportResponseBodyDataInternal : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHistoricalInstanceReportResponseBodyDataInternal& obj) { 
      DARABONBA_PTR_TO_JSON(CallsAnswered, callsAnswered_);
      DARABONBA_PTR_TO_JSON(CallsDialed, callsDialed_);
    };
    friend void from_json(const Darabonba::Json& j, GetHistoricalInstanceReportResponseBodyDataInternal& obj) { 
      DARABONBA_PTR_FROM_JSON(CallsAnswered, callsAnswered_);
      DARABONBA_PTR_FROM_JSON(CallsDialed, callsDialed_);
    };
    GetHistoricalInstanceReportResponseBodyDataInternal() = default ;
    GetHistoricalInstanceReportResponseBodyDataInternal(const GetHistoricalInstanceReportResponseBodyDataInternal &) = default ;
    GetHistoricalInstanceReportResponseBodyDataInternal(GetHistoricalInstanceReportResponseBodyDataInternal &&) = default ;
    GetHistoricalInstanceReportResponseBodyDataInternal(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHistoricalInstanceReportResponseBodyDataInternal() = default ;
    GetHistoricalInstanceReportResponseBodyDataInternal& operator=(const GetHistoricalInstanceReportResponseBodyDataInternal &) = default ;
    GetHistoricalInstanceReportResponseBodyDataInternal& operator=(GetHistoricalInstanceReportResponseBodyDataInternal &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callsAnswered_ == nullptr
        && return this->callsDialed_ == nullptr; };
    // callsAnswered Field Functions 
    bool hasCallsAnswered() const { return this->callsAnswered_ != nullptr;};
    void deleteCallsAnswered() { this->callsAnswered_ = nullptr;};
    inline int64_t callsAnswered() const { DARABONBA_PTR_GET_DEFAULT(callsAnswered_, 0L) };
    inline GetHistoricalInstanceReportResponseBodyDataInternal& setCallsAnswered(int64_t callsAnswered) { DARABONBA_PTR_SET_VALUE(callsAnswered_, callsAnswered) };


    // callsDialed Field Functions 
    bool hasCallsDialed() const { return this->callsDialed_ != nullptr;};
    void deleteCallsDialed() { this->callsDialed_ = nullptr;};
    inline int64_t callsDialed() const { DARABONBA_PTR_GET_DEFAULT(callsDialed_, 0L) };
    inline GetHistoricalInstanceReportResponseBodyDataInternal& setCallsDialed(int64_t callsDialed) { DARABONBA_PTR_SET_VALUE(callsDialed_, callsDialed) };


  protected:
    std::shared_ptr<int64_t> callsAnswered_ = nullptr;
    std::shared_ptr<int64_t> callsDialed_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
