// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHISTORICALAGENTREPORTRESPONSEBODYDATALISTINBOUNDACCESSCHANNELTYPEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_LISTHISTORICALAGENTREPORTRESPONSEBODYDATALISTINBOUNDACCESSCHANNELTYPEDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListHistoricalAgentReportResponseBodyDataListInboundAccessChannelTypeDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHistoricalAgentReportResponseBodyDataListInboundAccessChannelTypeDetails& obj) { 
      DARABONBA_PTR_TO_JSON(AccessChannelType, accessChannelType_);
      DARABONBA_PTR_TO_JSON(CallsOffered, callsOffered_);
    };
    friend void from_json(const Darabonba::Json& j, ListHistoricalAgentReportResponseBodyDataListInboundAccessChannelTypeDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessChannelType, accessChannelType_);
      DARABONBA_PTR_FROM_JSON(CallsOffered, callsOffered_);
    };
    ListHistoricalAgentReportResponseBodyDataListInboundAccessChannelTypeDetails() = default ;
    ListHistoricalAgentReportResponseBodyDataListInboundAccessChannelTypeDetails(const ListHistoricalAgentReportResponseBodyDataListInboundAccessChannelTypeDetails &) = default ;
    ListHistoricalAgentReportResponseBodyDataListInboundAccessChannelTypeDetails(ListHistoricalAgentReportResponseBodyDataListInboundAccessChannelTypeDetails &&) = default ;
    ListHistoricalAgentReportResponseBodyDataListInboundAccessChannelTypeDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHistoricalAgentReportResponseBodyDataListInboundAccessChannelTypeDetails() = default ;
    ListHistoricalAgentReportResponseBodyDataListInboundAccessChannelTypeDetails& operator=(const ListHistoricalAgentReportResponseBodyDataListInboundAccessChannelTypeDetails &) = default ;
    ListHistoricalAgentReportResponseBodyDataListInboundAccessChannelTypeDetails& operator=(ListHistoricalAgentReportResponseBodyDataListInboundAccessChannelTypeDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessChannelType_ == nullptr
        && return this->callsOffered_ == nullptr; };
    // accessChannelType Field Functions 
    bool hasAccessChannelType() const { return this->accessChannelType_ != nullptr;};
    void deleteAccessChannelType() { this->accessChannelType_ = nullptr;};
    inline string accessChannelType() const { DARABONBA_PTR_GET_DEFAULT(accessChannelType_, "") };
    inline ListHistoricalAgentReportResponseBodyDataListInboundAccessChannelTypeDetails& setAccessChannelType(string accessChannelType) { DARABONBA_PTR_SET_VALUE(accessChannelType_, accessChannelType) };


    // callsOffered Field Functions 
    bool hasCallsOffered() const { return this->callsOffered_ != nullptr;};
    void deleteCallsOffered() { this->callsOffered_ = nullptr;};
    inline int64_t callsOffered() const { DARABONBA_PTR_GET_DEFAULT(callsOffered_, 0L) };
    inline ListHistoricalAgentReportResponseBodyDataListInboundAccessChannelTypeDetails& setCallsOffered(int64_t callsOffered) { DARABONBA_PTR_SET_VALUE(callsOffered_, callsOffered) };


  protected:
    std::shared_ptr<string> accessChannelType_ = nullptr;
    std::shared_ptr<int64_t> callsOffered_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
