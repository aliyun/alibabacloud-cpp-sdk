// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERMEDIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REGISTERMEDIARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RegisterMediaResponseBodyRegisteredMediaList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class RegisterMediaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterMediaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedFileURLs, failedFileURLs_);
      DARABONBA_PTR_TO_JSON(RegisteredMediaList, registeredMediaList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterMediaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedFileURLs, failedFileURLs_);
      DARABONBA_PTR_FROM_JSON(RegisteredMediaList, registeredMediaList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RegisterMediaResponseBody() = default ;
    RegisterMediaResponseBody(const RegisterMediaResponseBody &) = default ;
    RegisterMediaResponseBody(RegisterMediaResponseBody &&) = default ;
    RegisterMediaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterMediaResponseBody() = default ;
    RegisterMediaResponseBody& operator=(const RegisterMediaResponseBody &) = default ;
    RegisterMediaResponseBody& operator=(RegisterMediaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedFileURLs_ != nullptr
        && this->registeredMediaList_ != nullptr && this->requestId_ != nullptr; };
    // failedFileURLs Field Functions 
    bool hasFailedFileURLs() const { return this->failedFileURLs_ != nullptr;};
    void deleteFailedFileURLs() { this->failedFileURLs_ = nullptr;};
    inline const vector<string> & failedFileURLs() const { DARABONBA_PTR_GET_CONST(failedFileURLs_, vector<string>) };
    inline vector<string> failedFileURLs() { DARABONBA_PTR_GET(failedFileURLs_, vector<string>) };
    inline RegisterMediaResponseBody& setFailedFileURLs(const vector<string> & failedFileURLs) { DARABONBA_PTR_SET_VALUE(failedFileURLs_, failedFileURLs) };
    inline RegisterMediaResponseBody& setFailedFileURLs(vector<string> && failedFileURLs) { DARABONBA_PTR_SET_RVALUE(failedFileURLs_, failedFileURLs) };


    // registeredMediaList Field Functions 
    bool hasRegisteredMediaList() const { return this->registeredMediaList_ != nullptr;};
    void deleteRegisteredMediaList() { this->registeredMediaList_ = nullptr;};
    inline const vector<RegisterMediaResponseBodyRegisteredMediaList> & registeredMediaList() const { DARABONBA_PTR_GET_CONST(registeredMediaList_, vector<RegisterMediaResponseBodyRegisteredMediaList>) };
    inline vector<RegisterMediaResponseBodyRegisteredMediaList> registeredMediaList() { DARABONBA_PTR_GET(registeredMediaList_, vector<RegisterMediaResponseBodyRegisteredMediaList>) };
    inline RegisterMediaResponseBody& setRegisteredMediaList(const vector<RegisterMediaResponseBodyRegisteredMediaList> & registeredMediaList) { DARABONBA_PTR_SET_VALUE(registeredMediaList_, registeredMediaList) };
    inline RegisterMediaResponseBody& setRegisteredMediaList(vector<RegisterMediaResponseBodyRegisteredMediaList> && registeredMediaList) { DARABONBA_PTR_SET_RVALUE(registeredMediaList_, registeredMediaList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RegisterMediaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The URLs of the media files that failed to be registered.
    std::shared_ptr<vector<string>> failedFileURLs_ = nullptr;
    // The media files that are registered, including newly registered and repeatedly registered media files.
    std::shared_ptr<vector<RegisterMediaResponseBodyRegisteredMediaList>> registeredMediaList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
