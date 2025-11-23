// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHDATATRACKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHDATATRACKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchDataTrackResultResponseBodyTrackResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class SearchDataTrackResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchDataTrackResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TrackResult, trackResult_);
    };
    friend void from_json(const Darabonba::Json& j, SearchDataTrackResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TrackResult, trackResult_);
    };
    SearchDataTrackResultResponseBody() = default ;
    SearchDataTrackResultResponseBody(const SearchDataTrackResultResponseBody &) = default ;
    SearchDataTrackResultResponseBody(SearchDataTrackResultResponseBody &&) = default ;
    SearchDataTrackResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchDataTrackResultResponseBody() = default ;
    SearchDataTrackResultResponseBody& operator=(const SearchDataTrackResultResponseBody &) = default ;
    SearchDataTrackResultResponseBody& operator=(SearchDataTrackResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->trackResult_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline SearchDataTrackResultResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline SearchDataTrackResultResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchDataTrackResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SearchDataTrackResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // trackResult Field Functions 
    bool hasTrackResult() const { return this->trackResult_ != nullptr;};
    void deleteTrackResult() { this->trackResult_ = nullptr;};
    inline const SearchDataTrackResultResponseBodyTrackResult & trackResult() const { DARABONBA_PTR_GET_CONST(trackResult_, SearchDataTrackResultResponseBodyTrackResult) };
    inline SearchDataTrackResultResponseBodyTrackResult trackResult() { DARABONBA_PTR_GET(trackResult_, SearchDataTrackResultResponseBodyTrackResult) };
    inline SearchDataTrackResultResponseBody& setTrackResult(const SearchDataTrackResultResponseBodyTrackResult & trackResult) { DARABONBA_PTR_SET_VALUE(trackResult_, trackResult) };
    inline SearchDataTrackResultResponseBody& setTrackResult(SearchDataTrackResultResponseBodyTrackResult && trackResult) { DARABONBA_PTR_SET_RVALUE(trackResult_, trackResult) };


  protected:
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
    // The parsing result of the data tracking task.
    std::shared_ptr<SearchDataTrackResultResponseBodyTrackResult> trackResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
