// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTOREMEDIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESTOREMEDIARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RestoreMediaResponseBodyForbiddenList.hpp>
#include <alibabacloud/models/RestoreMediaResponseBodyIgnoredList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class RestoreMediaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestoreMediaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForbiddenList, forbiddenList_);
      DARABONBA_PTR_TO_JSON(IgnoredList, ignoredList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, RestoreMediaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForbiddenList, forbiddenList_);
      DARABONBA_PTR_FROM_JSON(IgnoredList, ignoredList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    RestoreMediaResponseBody() = default ;
    RestoreMediaResponseBody(const RestoreMediaResponseBody &) = default ;
    RestoreMediaResponseBody(RestoreMediaResponseBody &&) = default ;
    RestoreMediaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestoreMediaResponseBody() = default ;
    RestoreMediaResponseBody& operator=(const RestoreMediaResponseBody &) = default ;
    RestoreMediaResponseBody& operator=(RestoreMediaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forbiddenList_ == nullptr
        && return this->ignoredList_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // forbiddenList Field Functions 
    bool hasForbiddenList() const { return this->forbiddenList_ != nullptr;};
    void deleteForbiddenList() { this->forbiddenList_ = nullptr;};
    inline const RestoreMediaResponseBodyForbiddenList & forbiddenList() const { DARABONBA_PTR_GET_CONST(forbiddenList_, RestoreMediaResponseBodyForbiddenList) };
    inline RestoreMediaResponseBodyForbiddenList forbiddenList() { DARABONBA_PTR_GET(forbiddenList_, RestoreMediaResponseBodyForbiddenList) };
    inline RestoreMediaResponseBody& setForbiddenList(const RestoreMediaResponseBodyForbiddenList & forbiddenList) { DARABONBA_PTR_SET_VALUE(forbiddenList_, forbiddenList) };
    inline RestoreMediaResponseBody& setForbiddenList(RestoreMediaResponseBodyForbiddenList && forbiddenList) { DARABONBA_PTR_SET_RVALUE(forbiddenList_, forbiddenList) };


    // ignoredList Field Functions 
    bool hasIgnoredList() const { return this->ignoredList_ != nullptr;};
    void deleteIgnoredList() { this->ignoredList_ = nullptr;};
    inline const RestoreMediaResponseBodyIgnoredList & ignoredList() const { DARABONBA_PTR_GET_CONST(ignoredList_, RestoreMediaResponseBodyIgnoredList) };
    inline RestoreMediaResponseBodyIgnoredList ignoredList() { DARABONBA_PTR_GET(ignoredList_, RestoreMediaResponseBodyIgnoredList) };
    inline RestoreMediaResponseBody& setIgnoredList(const RestoreMediaResponseBodyIgnoredList & ignoredList) { DARABONBA_PTR_SET_VALUE(ignoredList_, ignoredList) };
    inline RestoreMediaResponseBody& setIgnoredList(RestoreMediaResponseBodyIgnoredList && ignoredList) { DARABONBA_PTR_SET_RVALUE(ignoredList_, ignoredList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RestoreMediaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RestoreMediaResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The IDs of the media asset that failed to be processed.
    std::shared_ptr<RestoreMediaResponseBodyForbiddenList> forbiddenList_ = nullptr;
    // The IDs of the media assets that failed to be obtained.
    std::shared_ptr<RestoreMediaResponseBodyIgnoredList> ignoredList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
