// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHISTORICALINSTANCEREPORTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETHISTORICALINSTANCEREPORTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetHistoricalInstanceReportResponseBodyDataInbound.hpp>
#include <alibabacloud/models/GetHistoricalInstanceReportResponseBodyDataInternal.hpp>
#include <alibabacloud/models/GetHistoricalInstanceReportResponseBodyDataOutbound.hpp>
#include <alibabacloud/models/GetHistoricalInstanceReportResponseBodyDataOverall.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetHistoricalInstanceReportResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHistoricalInstanceReportResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Inbound, inbound_);
      DARABONBA_PTR_TO_JSON(Internal, internal_);
      DARABONBA_PTR_TO_JSON(Outbound, outbound_);
      DARABONBA_PTR_TO_JSON(Overall, overall_);
    };
    friend void from_json(const Darabonba::Json& j, GetHistoricalInstanceReportResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Inbound, inbound_);
      DARABONBA_PTR_FROM_JSON(Internal, internal_);
      DARABONBA_PTR_FROM_JSON(Outbound, outbound_);
      DARABONBA_PTR_FROM_JSON(Overall, overall_);
    };
    GetHistoricalInstanceReportResponseBodyData() = default ;
    GetHistoricalInstanceReportResponseBodyData(const GetHistoricalInstanceReportResponseBodyData &) = default ;
    GetHistoricalInstanceReportResponseBodyData(GetHistoricalInstanceReportResponseBodyData &&) = default ;
    GetHistoricalInstanceReportResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHistoricalInstanceReportResponseBodyData() = default ;
    GetHistoricalInstanceReportResponseBodyData& operator=(const GetHistoricalInstanceReportResponseBodyData &) = default ;
    GetHistoricalInstanceReportResponseBodyData& operator=(GetHistoricalInstanceReportResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inbound_ != nullptr
        && this->internal_ != nullptr && this->outbound_ != nullptr && this->overall_ != nullptr; };
    // inbound Field Functions 
    bool hasInbound() const { return this->inbound_ != nullptr;};
    void deleteInbound() { this->inbound_ = nullptr;};
    inline const Models::GetHistoricalInstanceReportResponseBodyDataInbound & inbound() const { DARABONBA_PTR_GET_CONST(inbound_, Models::GetHistoricalInstanceReportResponseBodyDataInbound) };
    inline Models::GetHistoricalInstanceReportResponseBodyDataInbound inbound() { DARABONBA_PTR_GET(inbound_, Models::GetHistoricalInstanceReportResponseBodyDataInbound) };
    inline GetHistoricalInstanceReportResponseBodyData& setInbound(const Models::GetHistoricalInstanceReportResponseBodyDataInbound & inbound) { DARABONBA_PTR_SET_VALUE(inbound_, inbound) };
    inline GetHistoricalInstanceReportResponseBodyData& setInbound(Models::GetHistoricalInstanceReportResponseBodyDataInbound && inbound) { DARABONBA_PTR_SET_RVALUE(inbound_, inbound) };


    // internal Field Functions 
    bool hasInternal() const { return this->internal_ != nullptr;};
    void deleteInternal() { this->internal_ = nullptr;};
    inline const Models::GetHistoricalInstanceReportResponseBodyDataInternal & internal() const { DARABONBA_PTR_GET_CONST(internal_, Models::GetHistoricalInstanceReportResponseBodyDataInternal) };
    inline Models::GetHistoricalInstanceReportResponseBodyDataInternal internal() { DARABONBA_PTR_GET(internal_, Models::GetHistoricalInstanceReportResponseBodyDataInternal) };
    inline GetHistoricalInstanceReportResponseBodyData& setInternal(const Models::GetHistoricalInstanceReportResponseBodyDataInternal & internal) { DARABONBA_PTR_SET_VALUE(internal_, internal) };
    inline GetHistoricalInstanceReportResponseBodyData& setInternal(Models::GetHistoricalInstanceReportResponseBodyDataInternal && internal) { DARABONBA_PTR_SET_RVALUE(internal_, internal) };


    // outbound Field Functions 
    bool hasOutbound() const { return this->outbound_ != nullptr;};
    void deleteOutbound() { this->outbound_ = nullptr;};
    inline const Models::GetHistoricalInstanceReportResponseBodyDataOutbound & outbound() const { DARABONBA_PTR_GET_CONST(outbound_, Models::GetHistoricalInstanceReportResponseBodyDataOutbound) };
    inline Models::GetHistoricalInstanceReportResponseBodyDataOutbound outbound() { DARABONBA_PTR_GET(outbound_, Models::GetHistoricalInstanceReportResponseBodyDataOutbound) };
    inline GetHistoricalInstanceReportResponseBodyData& setOutbound(const Models::GetHistoricalInstanceReportResponseBodyDataOutbound & outbound) { DARABONBA_PTR_SET_VALUE(outbound_, outbound) };
    inline GetHistoricalInstanceReportResponseBodyData& setOutbound(Models::GetHistoricalInstanceReportResponseBodyDataOutbound && outbound) { DARABONBA_PTR_SET_RVALUE(outbound_, outbound) };


    // overall Field Functions 
    bool hasOverall() const { return this->overall_ != nullptr;};
    void deleteOverall() { this->overall_ = nullptr;};
    inline const Models::GetHistoricalInstanceReportResponseBodyDataOverall & overall() const { DARABONBA_PTR_GET_CONST(overall_, Models::GetHistoricalInstanceReportResponseBodyDataOverall) };
    inline Models::GetHistoricalInstanceReportResponseBodyDataOverall overall() { DARABONBA_PTR_GET(overall_, Models::GetHistoricalInstanceReportResponseBodyDataOverall) };
    inline GetHistoricalInstanceReportResponseBodyData& setOverall(const Models::GetHistoricalInstanceReportResponseBodyDataOverall & overall) { DARABONBA_PTR_SET_VALUE(overall_, overall) };
    inline GetHistoricalInstanceReportResponseBodyData& setOverall(Models::GetHistoricalInstanceReportResponseBodyDataOverall && overall) { DARABONBA_PTR_SET_RVALUE(overall_, overall) };


  protected:
    std::shared_ptr<Models::GetHistoricalInstanceReportResponseBodyDataInbound> inbound_ = nullptr;
    std::shared_ptr<Models::GetHistoricalInstanceReportResponseBodyDataInternal> internal_ = nullptr;
    std::shared_ptr<Models::GetHistoricalInstanceReportResponseBodyDataOutbound> outbound_ = nullptr;
    std::shared_ptr<Models::GetHistoricalInstanceReportResponseBodyDataOverall> overall_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
