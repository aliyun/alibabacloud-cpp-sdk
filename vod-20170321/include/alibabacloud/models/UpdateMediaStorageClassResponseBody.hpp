// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIASTORAGECLASSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIASTORAGECLASSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateMediaStorageClassResponseBodyForbiddenList.hpp>
#include <alibabacloud/models/UpdateMediaStorageClassResponseBodyIgnoredList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UpdateMediaStorageClassResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaStorageClassResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForbiddenList, forbiddenList_);
      DARABONBA_PTR_TO_JSON(IgnoredList, ignoredList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaStorageClassResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForbiddenList, forbiddenList_);
      DARABONBA_PTR_FROM_JSON(IgnoredList, ignoredList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateMediaStorageClassResponseBody() = default ;
    UpdateMediaStorageClassResponseBody(const UpdateMediaStorageClassResponseBody &) = default ;
    UpdateMediaStorageClassResponseBody(UpdateMediaStorageClassResponseBody &&) = default ;
    UpdateMediaStorageClassResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaStorageClassResponseBody() = default ;
    UpdateMediaStorageClassResponseBody& operator=(const UpdateMediaStorageClassResponseBody &) = default ;
    UpdateMediaStorageClassResponseBody& operator=(UpdateMediaStorageClassResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forbiddenList_ == nullptr
        && return this->ignoredList_ == nullptr && return this->requestId_ == nullptr && return this->status_ == nullptr; };
    // forbiddenList Field Functions 
    bool hasForbiddenList() const { return this->forbiddenList_ != nullptr;};
    void deleteForbiddenList() { this->forbiddenList_ = nullptr;};
    inline const UpdateMediaStorageClassResponseBodyForbiddenList & forbiddenList() const { DARABONBA_PTR_GET_CONST(forbiddenList_, UpdateMediaStorageClassResponseBodyForbiddenList) };
    inline UpdateMediaStorageClassResponseBodyForbiddenList forbiddenList() { DARABONBA_PTR_GET(forbiddenList_, UpdateMediaStorageClassResponseBodyForbiddenList) };
    inline UpdateMediaStorageClassResponseBody& setForbiddenList(const UpdateMediaStorageClassResponseBodyForbiddenList & forbiddenList) { DARABONBA_PTR_SET_VALUE(forbiddenList_, forbiddenList) };
    inline UpdateMediaStorageClassResponseBody& setForbiddenList(UpdateMediaStorageClassResponseBodyForbiddenList && forbiddenList) { DARABONBA_PTR_SET_RVALUE(forbiddenList_, forbiddenList) };


    // ignoredList Field Functions 
    bool hasIgnoredList() const { return this->ignoredList_ != nullptr;};
    void deleteIgnoredList() { this->ignoredList_ = nullptr;};
    inline const UpdateMediaStorageClassResponseBodyIgnoredList & ignoredList() const { DARABONBA_PTR_GET_CONST(ignoredList_, UpdateMediaStorageClassResponseBodyIgnoredList) };
    inline UpdateMediaStorageClassResponseBodyIgnoredList ignoredList() { DARABONBA_PTR_GET(ignoredList_, UpdateMediaStorageClassResponseBodyIgnoredList) };
    inline UpdateMediaStorageClassResponseBody& setIgnoredList(const UpdateMediaStorageClassResponseBodyIgnoredList & ignoredList) { DARABONBA_PTR_SET_VALUE(ignoredList_, ignoredList) };
    inline UpdateMediaStorageClassResponseBody& setIgnoredList(UpdateMediaStorageClassResponseBodyIgnoredList && ignoredList) { DARABONBA_PTR_SET_RVALUE(ignoredList_, ignoredList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateMediaStorageClassResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateMediaStorageClassResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The IDs of the media assets that failed to be processed.
    std::shared_ptr<UpdateMediaStorageClassResponseBodyForbiddenList> forbiddenList_ = nullptr;
    // The IDs of the media assets that failed to be obtained.
    std::shared_ptr<UpdateMediaStorageClassResponseBodyIgnoredList> ignoredList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The state of the task. Valid values:
    // 
    // *   **Processing**
    // *   **Failed**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
