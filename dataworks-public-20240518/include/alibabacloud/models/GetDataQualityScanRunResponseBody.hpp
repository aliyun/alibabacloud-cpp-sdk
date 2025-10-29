// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataQualityScanRunResponseBodyDataQualityScanRun.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityScanRunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityScanRunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityScanRun, dataQualityScanRun_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityScanRunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityScanRun, dataQualityScanRun_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataQualityScanRunResponseBody() = default ;
    GetDataQualityScanRunResponseBody(const GetDataQualityScanRunResponseBody &) = default ;
    GetDataQualityScanRunResponseBody(GetDataQualityScanRunResponseBody &&) = default ;
    GetDataQualityScanRunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityScanRunResponseBody() = default ;
    GetDataQualityScanRunResponseBody& operator=(const GetDataQualityScanRunResponseBody &) = default ;
    GetDataQualityScanRunResponseBody& operator=(GetDataQualityScanRunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataQualityScanRun_ == nullptr
        && return this->requestId_ == nullptr; };
    // dataQualityScanRun Field Functions 
    bool hasDataQualityScanRun() const { return this->dataQualityScanRun_ != nullptr;};
    void deleteDataQualityScanRun() { this->dataQualityScanRun_ = nullptr;};
    inline const GetDataQualityScanRunResponseBodyDataQualityScanRun & dataQualityScanRun() const { DARABONBA_PTR_GET_CONST(dataQualityScanRun_, GetDataQualityScanRunResponseBodyDataQualityScanRun) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRun dataQualityScanRun() { DARABONBA_PTR_GET(dataQualityScanRun_, GetDataQualityScanRunResponseBodyDataQualityScanRun) };
    inline GetDataQualityScanRunResponseBody& setDataQualityScanRun(const GetDataQualityScanRunResponseBodyDataQualityScanRun & dataQualityScanRun) { DARABONBA_PTR_SET_VALUE(dataQualityScanRun_, dataQualityScanRun) };
    inline GetDataQualityScanRunResponseBody& setDataQualityScanRun(GetDataQualityScanRunResponseBodyDataQualityScanRun && dataQualityScanRun) { DARABONBA_PTR_SET_RVALUE(dataQualityScanRun_, dataQualityScanRun) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataQualityScanRunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Data quality monitoring running records.
    std::shared_ptr<GetDataQualityScanRunResponseBodyDataQualityScanRun> dataQualityScanRun_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
