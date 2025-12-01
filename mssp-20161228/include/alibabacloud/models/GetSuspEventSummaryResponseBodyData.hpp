// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUSPEVENTSUMMARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSUSPEVENTSUMMARYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO.hpp>
#include <alibabacloud/models/GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO.hpp>
#include <alibabacloud/models/GetSuspEventSummaryResponseBodyDataSuspEventTopDTO.hpp>
#include <alibabacloud/models/GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetSuspEventSummaryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSuspEventSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkAttackTrendDTO, networkAttackTrendDTO_);
      DARABONBA_PTR_TO_JSON(SuspEventDealSummaryDTO, suspEventDealSummaryDTO_);
      DARABONBA_PTR_TO_JSON(SuspEventTopDTO, suspEventTopDTO_);
      DARABONBA_PTR_TO_JSON(SuspEventTrendDTO, suspEventTrendDTO_);
    };
    friend void from_json(const Darabonba::Json& j, GetSuspEventSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkAttackTrendDTO, networkAttackTrendDTO_);
      DARABONBA_PTR_FROM_JSON(SuspEventDealSummaryDTO, suspEventDealSummaryDTO_);
      DARABONBA_PTR_FROM_JSON(SuspEventTopDTO, suspEventTopDTO_);
      DARABONBA_PTR_FROM_JSON(SuspEventTrendDTO, suspEventTrendDTO_);
    };
    GetSuspEventSummaryResponseBodyData() = default ;
    GetSuspEventSummaryResponseBodyData(const GetSuspEventSummaryResponseBodyData &) = default ;
    GetSuspEventSummaryResponseBodyData(GetSuspEventSummaryResponseBodyData &&) = default ;
    GetSuspEventSummaryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSuspEventSummaryResponseBodyData() = default ;
    GetSuspEventSummaryResponseBodyData& operator=(const GetSuspEventSummaryResponseBodyData &) = default ;
    GetSuspEventSummaryResponseBodyData& operator=(GetSuspEventSummaryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkAttackTrendDTO_ == nullptr
        && return this->suspEventDealSummaryDTO_ == nullptr && return this->suspEventTopDTO_ == nullptr && return this->suspEventTrendDTO_ == nullptr; };
    // networkAttackTrendDTO Field Functions 
    bool hasNetworkAttackTrendDTO() const { return this->networkAttackTrendDTO_ != nullptr;};
    void deleteNetworkAttackTrendDTO() { this->networkAttackTrendDTO_ = nullptr;};
    inline const Models::GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO & networkAttackTrendDTO() const { DARABONBA_PTR_GET_CONST(networkAttackTrendDTO_, Models::GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO) };
    inline Models::GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO networkAttackTrendDTO() { DARABONBA_PTR_GET(networkAttackTrendDTO_, Models::GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO) };
    inline GetSuspEventSummaryResponseBodyData& setNetworkAttackTrendDTO(const Models::GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO & networkAttackTrendDTO) { DARABONBA_PTR_SET_VALUE(networkAttackTrendDTO_, networkAttackTrendDTO) };
    inline GetSuspEventSummaryResponseBodyData& setNetworkAttackTrendDTO(Models::GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO && networkAttackTrendDTO) { DARABONBA_PTR_SET_RVALUE(networkAttackTrendDTO_, networkAttackTrendDTO) };


    // suspEventDealSummaryDTO Field Functions 
    bool hasSuspEventDealSummaryDTO() const { return this->suspEventDealSummaryDTO_ != nullptr;};
    void deleteSuspEventDealSummaryDTO() { this->suspEventDealSummaryDTO_ = nullptr;};
    inline const Models::GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO & suspEventDealSummaryDTO() const { DARABONBA_PTR_GET_CONST(suspEventDealSummaryDTO_, Models::GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO) };
    inline Models::GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO suspEventDealSummaryDTO() { DARABONBA_PTR_GET(suspEventDealSummaryDTO_, Models::GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO) };
    inline GetSuspEventSummaryResponseBodyData& setSuspEventDealSummaryDTO(const Models::GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO & suspEventDealSummaryDTO) { DARABONBA_PTR_SET_VALUE(suspEventDealSummaryDTO_, suspEventDealSummaryDTO) };
    inline GetSuspEventSummaryResponseBodyData& setSuspEventDealSummaryDTO(Models::GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO && suspEventDealSummaryDTO) { DARABONBA_PTR_SET_RVALUE(suspEventDealSummaryDTO_, suspEventDealSummaryDTO) };


    // suspEventTopDTO Field Functions 
    bool hasSuspEventTopDTO() const { return this->suspEventTopDTO_ != nullptr;};
    void deleteSuspEventTopDTO() { this->suspEventTopDTO_ = nullptr;};
    inline const Models::GetSuspEventSummaryResponseBodyDataSuspEventTopDTO & suspEventTopDTO() const { DARABONBA_PTR_GET_CONST(suspEventTopDTO_, Models::GetSuspEventSummaryResponseBodyDataSuspEventTopDTO) };
    inline Models::GetSuspEventSummaryResponseBodyDataSuspEventTopDTO suspEventTopDTO() { DARABONBA_PTR_GET(suspEventTopDTO_, Models::GetSuspEventSummaryResponseBodyDataSuspEventTopDTO) };
    inline GetSuspEventSummaryResponseBodyData& setSuspEventTopDTO(const Models::GetSuspEventSummaryResponseBodyDataSuspEventTopDTO & suspEventTopDTO) { DARABONBA_PTR_SET_VALUE(suspEventTopDTO_, suspEventTopDTO) };
    inline GetSuspEventSummaryResponseBodyData& setSuspEventTopDTO(Models::GetSuspEventSummaryResponseBodyDataSuspEventTopDTO && suspEventTopDTO) { DARABONBA_PTR_SET_RVALUE(suspEventTopDTO_, suspEventTopDTO) };


    // suspEventTrendDTO Field Functions 
    bool hasSuspEventTrendDTO() const { return this->suspEventTrendDTO_ != nullptr;};
    void deleteSuspEventTrendDTO() { this->suspEventTrendDTO_ = nullptr;};
    inline const Models::GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO & suspEventTrendDTO() const { DARABONBA_PTR_GET_CONST(suspEventTrendDTO_, Models::GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO) };
    inline Models::GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO suspEventTrendDTO() { DARABONBA_PTR_GET(suspEventTrendDTO_, Models::GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO) };
    inline GetSuspEventSummaryResponseBodyData& setSuspEventTrendDTO(const Models::GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO & suspEventTrendDTO) { DARABONBA_PTR_SET_VALUE(suspEventTrendDTO_, suspEventTrendDTO) };
    inline GetSuspEventSummaryResponseBodyData& setSuspEventTrendDTO(Models::GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO && suspEventTrendDTO) { DARABONBA_PTR_SET_RVALUE(suspEventTrendDTO_, suspEventTrendDTO) };


  protected:
    // Network attack trend.
    std::shared_ptr<Models::GetSuspEventSummaryResponseBodyDataNetworkAttackTrendDTO> networkAttackTrendDTO_ = nullptr;
    // Overview of alert handling.
    std::shared_ptr<Models::GetSuspEventSummaryResponseBodyDataSuspEventDealSummaryDTO> suspEventDealSummaryDTO_ = nullptr;
    // Top 10 alerts before handling.
    std::shared_ptr<Models::GetSuspEventSummaryResponseBodyDataSuspEventTopDTO> suspEventTopDTO_ = nullptr;
    // Trend of alert responses.
    std::shared_ptr<Models::GetSuspEventSummaryResponseBodyDataSuspEventTrendDTO> suspEventTrendDTO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
