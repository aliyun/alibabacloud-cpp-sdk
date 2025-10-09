// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataQualityScanResponseBodyDataQualityScan.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityScanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityScanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityScan, dataQualityScan_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityScanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityScan, dataQualityScan_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataQualityScanResponseBody() = default ;
    GetDataQualityScanResponseBody(const GetDataQualityScanResponseBody &) = default ;
    GetDataQualityScanResponseBody(GetDataQualityScanResponseBody &&) = default ;
    GetDataQualityScanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityScanResponseBody() = default ;
    GetDataQualityScanResponseBody& operator=(const GetDataQualityScanResponseBody &) = default ;
    GetDataQualityScanResponseBody& operator=(GetDataQualityScanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataQualityScan_ != nullptr
        && this->requestId_ != nullptr; };
    // dataQualityScan Field Functions 
    bool hasDataQualityScan() const { return this->dataQualityScan_ != nullptr;};
    void deleteDataQualityScan() { this->dataQualityScan_ = nullptr;};
    inline const GetDataQualityScanResponseBodyDataQualityScan & dataQualityScan() const { DARABONBA_PTR_GET_CONST(dataQualityScan_, GetDataQualityScanResponseBodyDataQualityScan) };
    inline GetDataQualityScanResponseBodyDataQualityScan dataQualityScan() { DARABONBA_PTR_GET(dataQualityScan_, GetDataQualityScanResponseBodyDataQualityScan) };
    inline GetDataQualityScanResponseBody& setDataQualityScan(const GetDataQualityScanResponseBodyDataQualityScan & dataQualityScan) { DARABONBA_PTR_SET_VALUE(dataQualityScan_, dataQualityScan) };
    inline GetDataQualityScanResponseBody& setDataQualityScan(GetDataQualityScanResponseBodyDataQualityScan && dataQualityScan) { DARABONBA_PTR_SET_RVALUE(dataQualityScan_, dataQualityScan) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataQualityScanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Data quality monitoring details.
    std::shared_ptr<GetDataQualityScanResponseBodyDataQualityScan> dataQualityScan_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
