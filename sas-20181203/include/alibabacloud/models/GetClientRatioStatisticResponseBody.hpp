// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLIENTRATIOSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLIENTRATIOSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetClientRatioStatisticResponseBodyClientInstallRatio.hpp>
#include <alibabacloud/models/GetClientRatioStatisticResponseBodyClientOnlineRatio.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClientRatioStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClientRatioStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClientInstallRatio, clientInstallRatio_);
      DARABONBA_PTR_TO_JSON(ClientOnlineRatio, clientOnlineRatio_);
      DARABONBA_PTR_TO_JSON(Dates, dates_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClientRatioStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientInstallRatio, clientInstallRatio_);
      DARABONBA_PTR_FROM_JSON(ClientOnlineRatio, clientOnlineRatio_);
      DARABONBA_PTR_FROM_JSON(Dates, dates_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetClientRatioStatisticResponseBody() = default ;
    GetClientRatioStatisticResponseBody(const GetClientRatioStatisticResponseBody &) = default ;
    GetClientRatioStatisticResponseBody(GetClientRatioStatisticResponseBody &&) = default ;
    GetClientRatioStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClientRatioStatisticResponseBody() = default ;
    GetClientRatioStatisticResponseBody& operator=(const GetClientRatioStatisticResponseBody &) = default ;
    GetClientRatioStatisticResponseBody& operator=(GetClientRatioStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientInstallRatio_ != nullptr
        && this->clientOnlineRatio_ != nullptr && this->dates_ != nullptr && this->requestId_ != nullptr; };
    // clientInstallRatio Field Functions 
    bool hasClientInstallRatio() const { return this->clientInstallRatio_ != nullptr;};
    void deleteClientInstallRatio() { this->clientInstallRatio_ = nullptr;};
    inline const GetClientRatioStatisticResponseBodyClientInstallRatio & clientInstallRatio() const { DARABONBA_PTR_GET_CONST(clientInstallRatio_, GetClientRatioStatisticResponseBodyClientInstallRatio) };
    inline GetClientRatioStatisticResponseBodyClientInstallRatio clientInstallRatio() { DARABONBA_PTR_GET(clientInstallRatio_, GetClientRatioStatisticResponseBodyClientInstallRatio) };
    inline GetClientRatioStatisticResponseBody& setClientInstallRatio(const GetClientRatioStatisticResponseBodyClientInstallRatio & clientInstallRatio) { DARABONBA_PTR_SET_VALUE(clientInstallRatio_, clientInstallRatio) };
    inline GetClientRatioStatisticResponseBody& setClientInstallRatio(GetClientRatioStatisticResponseBodyClientInstallRatio && clientInstallRatio) { DARABONBA_PTR_SET_RVALUE(clientInstallRatio_, clientInstallRatio) };


    // clientOnlineRatio Field Functions 
    bool hasClientOnlineRatio() const { return this->clientOnlineRatio_ != nullptr;};
    void deleteClientOnlineRatio() { this->clientOnlineRatio_ = nullptr;};
    inline const GetClientRatioStatisticResponseBodyClientOnlineRatio & clientOnlineRatio() const { DARABONBA_PTR_GET_CONST(clientOnlineRatio_, GetClientRatioStatisticResponseBodyClientOnlineRatio) };
    inline GetClientRatioStatisticResponseBodyClientOnlineRatio clientOnlineRatio() { DARABONBA_PTR_GET(clientOnlineRatio_, GetClientRatioStatisticResponseBodyClientOnlineRatio) };
    inline GetClientRatioStatisticResponseBody& setClientOnlineRatio(const GetClientRatioStatisticResponseBodyClientOnlineRatio & clientOnlineRatio) { DARABONBA_PTR_SET_VALUE(clientOnlineRatio_, clientOnlineRatio) };
    inline GetClientRatioStatisticResponseBody& setClientOnlineRatio(GetClientRatioStatisticResponseBodyClientOnlineRatio && clientOnlineRatio) { DARABONBA_PTR_SET_RVALUE(clientOnlineRatio_, clientOnlineRatio) };


    // dates Field Functions 
    bool hasDates() const { return this->dates_ != nullptr;};
    void deleteDates() { this->dates_ = nullptr;};
    inline const vector<int64_t> & dates() const { DARABONBA_PTR_GET_CONST(dates_, vector<int64_t>) };
    inline vector<int64_t> dates() { DARABONBA_PTR_GET(dates_, vector<int64_t>) };
    inline GetClientRatioStatisticResponseBody& setDates(const vector<int64_t> & dates) { DARABONBA_PTR_SET_VALUE(dates_, dates) };
    inline GetClientRatioStatisticResponseBody& setDates(vector<int64_t> && dates) { DARABONBA_PTR_SET_RVALUE(dates_, dates) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClientRatioStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics on the client installation rate.
    std::shared_ptr<GetClientRatioStatisticResponseBodyClientInstallRatio> clientInstallRatio_ = nullptr;
    // The statistics on the client online rate.
    std::shared_ptr<GetClientRatioStatisticResponseBodyClientOnlineRatio> clientOnlineRatio_ = nullptr;
    // The list of time when statistics were collected.
    std::shared_ptr<vector<int64_t>> dates_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
