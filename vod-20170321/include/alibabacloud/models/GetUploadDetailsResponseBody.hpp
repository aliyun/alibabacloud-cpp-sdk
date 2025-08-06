// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetUploadDetailsResponseBodyUploadDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetUploadDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForbiddenMediaIds, forbiddenMediaIds_);
      DARABONBA_PTR_TO_JSON(NonExistMediaIds, nonExistMediaIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UploadDetails, uploadDetails_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForbiddenMediaIds, forbiddenMediaIds_);
      DARABONBA_PTR_FROM_JSON(NonExistMediaIds, nonExistMediaIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UploadDetails, uploadDetails_);
    };
    GetUploadDetailsResponseBody() = default ;
    GetUploadDetailsResponseBody(const GetUploadDetailsResponseBody &) = default ;
    GetUploadDetailsResponseBody(GetUploadDetailsResponseBody &&) = default ;
    GetUploadDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadDetailsResponseBody() = default ;
    GetUploadDetailsResponseBody& operator=(const GetUploadDetailsResponseBody &) = default ;
    GetUploadDetailsResponseBody& operator=(GetUploadDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->forbiddenMediaIds_ != nullptr
        && this->nonExistMediaIds_ != nullptr && this->requestId_ != nullptr && this->uploadDetails_ != nullptr; };
    // forbiddenMediaIds Field Functions 
    bool hasForbiddenMediaIds() const { return this->forbiddenMediaIds_ != nullptr;};
    void deleteForbiddenMediaIds() { this->forbiddenMediaIds_ = nullptr;};
    inline const vector<string> & forbiddenMediaIds() const { DARABONBA_PTR_GET_CONST(forbiddenMediaIds_, vector<string>) };
    inline vector<string> forbiddenMediaIds() { DARABONBA_PTR_GET(forbiddenMediaIds_, vector<string>) };
    inline GetUploadDetailsResponseBody& setForbiddenMediaIds(const vector<string> & forbiddenMediaIds) { DARABONBA_PTR_SET_VALUE(forbiddenMediaIds_, forbiddenMediaIds) };
    inline GetUploadDetailsResponseBody& setForbiddenMediaIds(vector<string> && forbiddenMediaIds) { DARABONBA_PTR_SET_RVALUE(forbiddenMediaIds_, forbiddenMediaIds) };


    // nonExistMediaIds Field Functions 
    bool hasNonExistMediaIds() const { return this->nonExistMediaIds_ != nullptr;};
    void deleteNonExistMediaIds() { this->nonExistMediaIds_ = nullptr;};
    inline const vector<string> & nonExistMediaIds() const { DARABONBA_PTR_GET_CONST(nonExistMediaIds_, vector<string>) };
    inline vector<string> nonExistMediaIds() { DARABONBA_PTR_GET(nonExistMediaIds_, vector<string>) };
    inline GetUploadDetailsResponseBody& setNonExistMediaIds(const vector<string> & nonExistMediaIds) { DARABONBA_PTR_SET_VALUE(nonExistMediaIds_, nonExistMediaIds) };
    inline GetUploadDetailsResponseBody& setNonExistMediaIds(vector<string> && nonExistMediaIds) { DARABONBA_PTR_SET_RVALUE(nonExistMediaIds_, nonExistMediaIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUploadDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uploadDetails Field Functions 
    bool hasUploadDetails() const { return this->uploadDetails_ != nullptr;};
    void deleteUploadDetails() { this->uploadDetails_ = nullptr;};
    inline const vector<GetUploadDetailsResponseBodyUploadDetails> & uploadDetails() const { DARABONBA_PTR_GET_CONST(uploadDetails_, vector<GetUploadDetailsResponseBodyUploadDetails>) };
    inline vector<GetUploadDetailsResponseBodyUploadDetails> uploadDetails() { DARABONBA_PTR_GET(uploadDetails_, vector<GetUploadDetailsResponseBodyUploadDetails>) };
    inline GetUploadDetailsResponseBody& setUploadDetails(const vector<GetUploadDetailsResponseBodyUploadDetails> & uploadDetails) { DARABONBA_PTR_SET_VALUE(uploadDetails_, uploadDetails) };
    inline GetUploadDetailsResponseBody& setUploadDetails(vector<GetUploadDetailsResponseBodyUploadDetails> && uploadDetails) { DARABONBA_PTR_SET_RVALUE(uploadDetails_, uploadDetails) };


  protected:
    // The IDs of the media files that cannot be accessed.
    std::shared_ptr<vector<string>> forbiddenMediaIds_ = nullptr;
    // The IDs of the media files that do not exist.
    std::shared_ptr<vector<string>> nonExistMediaIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The upload details.
    std::shared_ptr<vector<GetUploadDetailsResponseBodyUploadDetails>> uploadDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
