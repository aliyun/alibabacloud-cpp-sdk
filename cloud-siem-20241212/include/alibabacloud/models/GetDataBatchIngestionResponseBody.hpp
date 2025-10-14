// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATABATCHINGESTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATABATCHINGESTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataBatchIngestionResponseBodyDataBatchIngestion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetDataBatchIngestionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataBatchIngestionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataBatchIngestion, dataBatchIngestion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataBatchIngestionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataBatchIngestion, dataBatchIngestion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataBatchIngestionResponseBody() = default ;
    GetDataBatchIngestionResponseBody(const GetDataBatchIngestionResponseBody &) = default ;
    GetDataBatchIngestionResponseBody(GetDataBatchIngestionResponseBody &&) = default ;
    GetDataBatchIngestionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataBatchIngestionResponseBody() = default ;
    GetDataBatchIngestionResponseBody& operator=(const GetDataBatchIngestionResponseBody &) = default ;
    GetDataBatchIngestionResponseBody& operator=(GetDataBatchIngestionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataBatchIngestion_ == nullptr
        && return this->requestId_ == nullptr; };
    // dataBatchIngestion Field Functions 
    bool hasDataBatchIngestion() const { return this->dataBatchIngestion_ != nullptr;};
    void deleteDataBatchIngestion() { this->dataBatchIngestion_ = nullptr;};
    inline const GetDataBatchIngestionResponseBodyDataBatchIngestion & dataBatchIngestion() const { DARABONBA_PTR_GET_CONST(dataBatchIngestion_, GetDataBatchIngestionResponseBodyDataBatchIngestion) };
    inline GetDataBatchIngestionResponseBodyDataBatchIngestion dataBatchIngestion() { DARABONBA_PTR_GET(dataBatchIngestion_, GetDataBatchIngestionResponseBodyDataBatchIngestion) };
    inline GetDataBatchIngestionResponseBody& setDataBatchIngestion(const GetDataBatchIngestionResponseBodyDataBatchIngestion & dataBatchIngestion) { DARABONBA_PTR_SET_VALUE(dataBatchIngestion_, dataBatchIngestion) };
    inline GetDataBatchIngestionResponseBody& setDataBatchIngestion(GetDataBatchIngestionResponseBodyDataBatchIngestion && dataBatchIngestion) { DARABONBA_PTR_SET_RVALUE(dataBatchIngestion_, dataBatchIngestion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataBatchIngestionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetDataBatchIngestionResponseBodyDataBatchIngestion> dataBatchIngestion_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
