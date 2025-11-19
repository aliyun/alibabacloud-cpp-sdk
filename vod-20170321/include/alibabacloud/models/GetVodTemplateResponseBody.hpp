// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVODTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVODTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVodTemplateResponseBodyVodTemplateInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetVodTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVodTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VodTemplateInfo, vodTemplateInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetVodTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VodTemplateInfo, vodTemplateInfo_);
    };
    GetVodTemplateResponseBody() = default ;
    GetVodTemplateResponseBody(const GetVodTemplateResponseBody &) = default ;
    GetVodTemplateResponseBody(GetVodTemplateResponseBody &&) = default ;
    GetVodTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVodTemplateResponseBody() = default ;
    GetVodTemplateResponseBody& operator=(const GetVodTemplateResponseBody &) = default ;
    GetVodTemplateResponseBody& operator=(GetVodTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->vodTemplateInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVodTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vodTemplateInfo Field Functions 
    bool hasVodTemplateInfo() const { return this->vodTemplateInfo_ != nullptr;};
    void deleteVodTemplateInfo() { this->vodTemplateInfo_ = nullptr;};
    inline const GetVodTemplateResponseBodyVodTemplateInfo & vodTemplateInfo() const { DARABONBA_PTR_GET_CONST(vodTemplateInfo_, GetVodTemplateResponseBodyVodTemplateInfo) };
    inline GetVodTemplateResponseBodyVodTemplateInfo vodTemplateInfo() { DARABONBA_PTR_GET(vodTemplateInfo_, GetVodTemplateResponseBodyVodTemplateInfo) };
    inline GetVodTemplateResponseBody& setVodTemplateInfo(const GetVodTemplateResponseBodyVodTemplateInfo & vodTemplateInfo) { DARABONBA_PTR_SET_VALUE(vodTemplateInfo_, vodTemplateInfo) };
    inline GetVodTemplateResponseBody& setVodTemplateInfo(GetVodTemplateResponseBodyVodTemplateInfo && vodTemplateInfo) { DARABONBA_PTR_SET_RVALUE(vodTemplateInfo_, vodTemplateInfo) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the snapshot template.
    std::shared_ptr<GetVodTemplateResponseBodyVodTemplateInfo> vodTemplateInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
