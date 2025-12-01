// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUSPEVENTSUMMARYRESPONSEBODYDATASUSPEVENTTOPDTO_HPP_
#define ALIBABACLOUD_MODELS_GETSUSPEVENTSUMMARYRESPONSEBODYDATASUSPEVENTTOPDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetSuspEventSummaryResponseBodyDataSuspEventTopDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSuspEventSummaryResponseBodyDataSuspEventTopDTO& obj) { 
      DARABONBA_PTR_TO_JSON(SuspEventList, suspEventList_);
    };
    friend void from_json(const Darabonba::Json& j, GetSuspEventSummaryResponseBodyDataSuspEventTopDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(SuspEventList, suspEventList_);
    };
    GetSuspEventSummaryResponseBodyDataSuspEventTopDTO() = default ;
    GetSuspEventSummaryResponseBodyDataSuspEventTopDTO(const GetSuspEventSummaryResponseBodyDataSuspEventTopDTO &) = default ;
    GetSuspEventSummaryResponseBodyDataSuspEventTopDTO(GetSuspEventSummaryResponseBodyDataSuspEventTopDTO &&) = default ;
    GetSuspEventSummaryResponseBodyDataSuspEventTopDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSuspEventSummaryResponseBodyDataSuspEventTopDTO() = default ;
    GetSuspEventSummaryResponseBodyDataSuspEventTopDTO& operator=(const GetSuspEventSummaryResponseBodyDataSuspEventTopDTO &) = default ;
    GetSuspEventSummaryResponseBodyDataSuspEventTopDTO& operator=(GetSuspEventSummaryResponseBodyDataSuspEventTopDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->suspEventList_ == nullptr; };
    // suspEventList Field Functions 
    bool hasSuspEventList() const { return this->suspEventList_ != nullptr;};
    void deleteSuspEventList() { this->suspEventList_ = nullptr;};
    inline const vector<Models::GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList> & suspEventList() const { DARABONBA_PTR_GET_CONST(suspEventList_, vector<Models::GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList>) };
    inline vector<Models::GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList> suspEventList() { DARABONBA_PTR_GET(suspEventList_, vector<Models::GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList>) };
    inline GetSuspEventSummaryResponseBodyDataSuspEventTopDTO& setSuspEventList(const vector<Models::GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList> & suspEventList) { DARABONBA_PTR_SET_VALUE(suspEventList_, suspEventList) };
    inline GetSuspEventSummaryResponseBodyDataSuspEventTopDTO& setSuspEventList(vector<Models::GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList> && suspEventList) { DARABONBA_PTR_SET_RVALUE(suspEventList_, suspEventList) };


  protected:
    // Top 10 before handling alarms
    std::shared_ptr<vector<Models::GetSuspEventSummaryResponseBodyDataSuspEventTopDTOSuspEventList>> suspEventList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
