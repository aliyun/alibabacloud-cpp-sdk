// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIADNALIBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIADNALIBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMediaDNALibResponseBodyAIDNALibInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class CreateMediaDNALibResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaDNALibResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIDNALibInfo, AIDNALibInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaDNALibResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIDNALibInfo, AIDNALibInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateMediaDNALibResponseBody() = default ;
    CreateMediaDNALibResponseBody(const CreateMediaDNALibResponseBody &) = default ;
    CreateMediaDNALibResponseBody(CreateMediaDNALibResponseBody &&) = default ;
    CreateMediaDNALibResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaDNALibResponseBody() = default ;
    CreateMediaDNALibResponseBody& operator=(const CreateMediaDNALibResponseBody &) = default ;
    CreateMediaDNALibResponseBody& operator=(CreateMediaDNALibResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIDNALibInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // AIDNALibInfo Field Functions 
    bool hasAIDNALibInfo() const { return this->AIDNALibInfo_ != nullptr;};
    void deleteAIDNALibInfo() { this->AIDNALibInfo_ = nullptr;};
    inline const CreateMediaDNALibResponseBodyAIDNALibInfo & AIDNALibInfo() const { DARABONBA_PTR_GET_CONST(AIDNALibInfo_, CreateMediaDNALibResponseBodyAIDNALibInfo) };
    inline CreateMediaDNALibResponseBodyAIDNALibInfo AIDNALibInfo() { DARABONBA_PTR_GET(AIDNALibInfo_, CreateMediaDNALibResponseBodyAIDNALibInfo) };
    inline CreateMediaDNALibResponseBody& setAIDNALibInfo(const CreateMediaDNALibResponseBodyAIDNALibInfo & AIDNALibInfo) { DARABONBA_PTR_SET_VALUE(AIDNALibInfo_, AIDNALibInfo) };
    inline CreateMediaDNALibResponseBody& setAIDNALibInfo(CreateMediaDNALibResponseBodyAIDNALibInfo && AIDNALibInfo) { DARABONBA_PTR_SET_RVALUE(AIDNALibInfo_, AIDNALibInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMediaDNALibResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<CreateMediaDNALibResponseBodyAIDNALibInfo> AIDNALibInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
