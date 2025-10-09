// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataQualityScanRunLogResponseBodyLogSegment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityScanRunLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityScanRunLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogSegment, logSegment_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityScanRunLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogSegment, logSegment_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataQualityScanRunLogResponseBody() = default ;
    GetDataQualityScanRunLogResponseBody(const GetDataQualityScanRunLogResponseBody &) = default ;
    GetDataQualityScanRunLogResponseBody(GetDataQualityScanRunLogResponseBody &&) = default ;
    GetDataQualityScanRunLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityScanRunLogResponseBody() = default ;
    GetDataQualityScanRunLogResponseBody& operator=(const GetDataQualityScanRunLogResponseBody &) = default ;
    GetDataQualityScanRunLogResponseBody& operator=(GetDataQualityScanRunLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logSegment_ != nullptr
        && this->requestId_ != nullptr; };
    // logSegment Field Functions 
    bool hasLogSegment() const { return this->logSegment_ != nullptr;};
    void deleteLogSegment() { this->logSegment_ = nullptr;};
    inline const GetDataQualityScanRunLogResponseBodyLogSegment & logSegment() const { DARABONBA_PTR_GET_CONST(logSegment_, GetDataQualityScanRunLogResponseBodyLogSegment) };
    inline GetDataQualityScanRunLogResponseBodyLogSegment logSegment() { DARABONBA_PTR_GET(logSegment_, GetDataQualityScanRunLogResponseBodyLogSegment) };
    inline GetDataQualityScanRunLogResponseBody& setLogSegment(const GetDataQualityScanRunLogResponseBodyLogSegment & logSegment) { DARABONBA_PTR_SET_VALUE(logSegment_, logSegment) };
    inline GetDataQualityScanRunLogResponseBody& setLogSegment(GetDataQualityScanRunLogResponseBodyLogSegment && logSegment) { DARABONBA_PTR_SET_RVALUE(logSegment_, logSegment) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataQualityScanRunLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The task log information.
    std::shared_ptr<GetDataQualityScanRunLogResponseBodyLogSegment> logSegment_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
