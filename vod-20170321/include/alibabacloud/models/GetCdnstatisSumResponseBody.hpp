// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCDNSTATISSUMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCDNSTATISSUMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCDNStatisSumResponseBodyCDNStatisList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetCDNStatisSumResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCDNStatisSumResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CDNStatisList, CDNStatisList_);
      DARABONBA_PTR_TO_JSON(MaxBpsDataValue, maxBpsDataValue_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SumFlowDataValue, sumFlowDataValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetCDNStatisSumResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CDNStatisList, CDNStatisList_);
      DARABONBA_PTR_FROM_JSON(MaxBpsDataValue, maxBpsDataValue_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SumFlowDataValue, sumFlowDataValue_);
    };
    GetCDNStatisSumResponseBody() = default ;
    GetCDNStatisSumResponseBody(const GetCDNStatisSumResponseBody &) = default ;
    GetCDNStatisSumResponseBody(GetCDNStatisSumResponseBody &&) = default ;
    GetCDNStatisSumResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCDNStatisSumResponseBody() = default ;
    GetCDNStatisSumResponseBody& operator=(const GetCDNStatisSumResponseBody &) = default ;
    GetCDNStatisSumResponseBody& operator=(GetCDNStatisSumResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->CDNStatisList_ != nullptr
        && this->maxBpsDataValue_ != nullptr && this->requestId_ != nullptr && this->sumFlowDataValue_ != nullptr; };
    // CDNStatisList Field Functions 
    bool hasCDNStatisList() const { return this->CDNStatisList_ != nullptr;};
    void deleteCDNStatisList() { this->CDNStatisList_ = nullptr;};
    inline const GetCDNStatisSumResponseBodyCDNStatisList & CDNStatisList() const { DARABONBA_PTR_GET_CONST(CDNStatisList_, GetCDNStatisSumResponseBodyCDNStatisList) };
    inline GetCDNStatisSumResponseBodyCDNStatisList CDNStatisList() { DARABONBA_PTR_GET(CDNStatisList_, GetCDNStatisSumResponseBodyCDNStatisList) };
    inline GetCDNStatisSumResponseBody& setCDNStatisList(const GetCDNStatisSumResponseBodyCDNStatisList & CDNStatisList) { DARABONBA_PTR_SET_VALUE(CDNStatisList_, CDNStatisList) };
    inline GetCDNStatisSumResponseBody& setCDNStatisList(GetCDNStatisSumResponseBodyCDNStatisList && CDNStatisList) { DARABONBA_PTR_SET_RVALUE(CDNStatisList_, CDNStatisList) };


    // maxBpsDataValue Field Functions 
    bool hasMaxBpsDataValue() const { return this->maxBpsDataValue_ != nullptr;};
    void deleteMaxBpsDataValue() { this->maxBpsDataValue_ = nullptr;};
    inline int64_t maxBpsDataValue() const { DARABONBA_PTR_GET_DEFAULT(maxBpsDataValue_, 0L) };
    inline GetCDNStatisSumResponseBody& setMaxBpsDataValue(int64_t maxBpsDataValue) { DARABONBA_PTR_SET_VALUE(maxBpsDataValue_, maxBpsDataValue) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCDNStatisSumResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sumFlowDataValue Field Functions 
    bool hasSumFlowDataValue() const { return this->sumFlowDataValue_ != nullptr;};
    void deleteSumFlowDataValue() { this->sumFlowDataValue_ = nullptr;};
    inline int64_t sumFlowDataValue() const { DARABONBA_PTR_GET_DEFAULT(sumFlowDataValue_, 0L) };
    inline GetCDNStatisSumResponseBody& setSumFlowDataValue(int64_t sumFlowDataValue) { DARABONBA_PTR_SET_VALUE(sumFlowDataValue_, sumFlowDataValue) };


  protected:
    std::shared_ptr<GetCDNStatisSumResponseBodyCDNStatisList> CDNStatisList_ = nullptr;
    std::shared_ptr<int64_t> maxBpsDataValue_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> sumFlowDataValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
