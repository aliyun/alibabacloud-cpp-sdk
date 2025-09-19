// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERCHECKITEMWARNINGSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERCHECKITEMWARNINGSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetClusterCheckItemWarningStatisticsResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClusterCheckItemWarningStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterCheckItemWarningStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterCheckItemWarningStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetClusterCheckItemWarningStatisticsResponseBody() = default ;
    GetClusterCheckItemWarningStatisticsResponseBody(const GetClusterCheckItemWarningStatisticsResponseBody &) = default ;
    GetClusterCheckItemWarningStatisticsResponseBody(GetClusterCheckItemWarningStatisticsResponseBody &&) = default ;
    GetClusterCheckItemWarningStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterCheckItemWarningStatisticsResponseBody() = default ;
    GetClusterCheckItemWarningStatisticsResponseBody& operator=(const GetClusterCheckItemWarningStatisticsResponseBody &) = default ;
    GetClusterCheckItemWarningStatisticsResponseBody& operator=(GetClusterCheckItemWarningStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetClusterCheckItemWarningStatisticsResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetClusterCheckItemWarningStatisticsResponseBodyData) };
    inline GetClusterCheckItemWarningStatisticsResponseBodyData data() { DARABONBA_PTR_GET(data_, GetClusterCheckItemWarningStatisticsResponseBodyData) };
    inline GetClusterCheckItemWarningStatisticsResponseBody& setData(const GetClusterCheckItemWarningStatisticsResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetClusterCheckItemWarningStatisticsResponseBody& setData(GetClusterCheckItemWarningStatisticsResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClusterCheckItemWarningStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics on risk items by risk level.
    std::shared_ptr<GetClusterCheckItemWarningStatisticsResponseBodyData> data_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
