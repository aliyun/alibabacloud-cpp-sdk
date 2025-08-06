// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIADNARESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIADNARESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMediaDNAResultResponseBodyDNAResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaDNAResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaDNAResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DNAResult, DNAResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaDNAResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DNAResult, DNAResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMediaDNAResultResponseBody() = default ;
    GetMediaDNAResultResponseBody(const GetMediaDNAResultResponseBody &) = default ;
    GetMediaDNAResultResponseBody(GetMediaDNAResultResponseBody &&) = default ;
    GetMediaDNAResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaDNAResultResponseBody() = default ;
    GetMediaDNAResultResponseBody& operator=(const GetMediaDNAResultResponseBody &) = default ;
    GetMediaDNAResultResponseBody& operator=(GetMediaDNAResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DNAResult_ != nullptr
        && this->requestId_ != nullptr; };
    // DNAResult Field Functions 
    bool hasDNAResult() const { return this->DNAResult_ != nullptr;};
    void deleteDNAResult() { this->DNAResult_ = nullptr;};
    inline const GetMediaDNAResultResponseBodyDNAResult & DNAResult() const { DARABONBA_PTR_GET_CONST(DNAResult_, GetMediaDNAResultResponseBodyDNAResult) };
    inline GetMediaDNAResultResponseBodyDNAResult DNAResult() { DARABONBA_PTR_GET(DNAResult_, GetMediaDNAResultResponseBodyDNAResult) };
    inline GetMediaDNAResultResponseBody& setDNAResult(const GetMediaDNAResultResponseBodyDNAResult & DNAResult) { DARABONBA_PTR_SET_VALUE(DNAResult_, DNAResult) };
    inline GetMediaDNAResultResponseBody& setDNAResult(GetMediaDNAResultResponseBodyDNAResult && DNAResult) { DARABONBA_PTR_SET_RVALUE(DNAResult_, DNAResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaDNAResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The media fingerprinting results.
    std::shared_ptr<GetMediaDNAResultResponseBodyDNAResult> DNAResult_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
