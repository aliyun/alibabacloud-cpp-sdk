// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTDOWNLOADURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTDOWNLOADURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class GetAgentDownloadUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentDownloadUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ArmsAgentDownloadUrl, armsAgentDownloadUrl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentDownloadUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ArmsAgentDownloadUrl, armsAgentDownloadUrl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAgentDownloadUrlResponseBody() = default ;
    GetAgentDownloadUrlResponseBody(const GetAgentDownloadUrlResponseBody &) = default ;
    GetAgentDownloadUrlResponseBody(GetAgentDownloadUrlResponseBody &&) = default ;
    GetAgentDownloadUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentDownloadUrlResponseBody() = default ;
    GetAgentDownloadUrlResponseBody& operator=(const GetAgentDownloadUrlResponseBody &) = default ;
    GetAgentDownloadUrlResponseBody& operator=(GetAgentDownloadUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->armsAgentDownloadUrl_ == nullptr
        && this->requestId_ == nullptr; };
    // armsAgentDownloadUrl Field Functions 
    bool hasArmsAgentDownloadUrl() const { return this->armsAgentDownloadUrl_ != nullptr;};
    void deleteArmsAgentDownloadUrl() { this->armsAgentDownloadUrl_ = nullptr;};
    inline string getArmsAgentDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(armsAgentDownloadUrl_, "") };
    inline GetAgentDownloadUrlResponseBody& setArmsAgentDownloadUrl(string armsAgentDownloadUrl) { DARABONBA_PTR_SET_VALUE(armsAgentDownloadUrl_, armsAgentDownloadUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgentDownloadUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> armsAgentDownloadUrl_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
