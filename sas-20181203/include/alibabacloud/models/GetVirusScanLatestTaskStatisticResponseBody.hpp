// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIRUSSCANLATESTTASKSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVIRUSSCANLATESTTASKSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVirusScanLatestTaskStatisticResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetVirusScanLatestTaskStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVirusScanLatestTaskStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVirusScanLatestTaskStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetVirusScanLatestTaskStatisticResponseBody() = default ;
    GetVirusScanLatestTaskStatisticResponseBody(const GetVirusScanLatestTaskStatisticResponseBody &) = default ;
    GetVirusScanLatestTaskStatisticResponseBody(GetVirusScanLatestTaskStatisticResponseBody &&) = default ;
    GetVirusScanLatestTaskStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVirusScanLatestTaskStatisticResponseBody() = default ;
    GetVirusScanLatestTaskStatisticResponseBody& operator=(const GetVirusScanLatestTaskStatisticResponseBody &) = default ;
    GetVirusScanLatestTaskStatisticResponseBody& operator=(GetVirusScanLatestTaskStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetVirusScanLatestTaskStatisticResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetVirusScanLatestTaskStatisticResponseBodyData) };
    inline GetVirusScanLatestTaskStatisticResponseBodyData data() { DARABONBA_PTR_GET(data_, GetVirusScanLatestTaskStatisticResponseBodyData) };
    inline GetVirusScanLatestTaskStatisticResponseBody& setData(const GetVirusScanLatestTaskStatisticResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetVirusScanLatestTaskStatisticResponseBody& setData(GetVirusScanLatestTaskStatisticResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVirusScanLatestTaskStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the virus scan task.
    std::shared_ptr<GetVirusScanLatestTaskStatisticResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
