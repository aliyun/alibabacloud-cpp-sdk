// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROUTEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEROUTEENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteRouteEntriesResponseBodyFailedRouteEntries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DeleteRouteEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(FailedRouteEntries, failedRouteEntries_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(FailedRouteEntries, failedRouteEntries_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
    };
    DeleteRouteEntriesResponseBody() = default ;
    DeleteRouteEntriesResponseBody(const DeleteRouteEntriesResponseBody &) = default ;
    DeleteRouteEntriesResponseBody(DeleteRouteEntriesResponseBody &&) = default ;
    DeleteRouteEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRouteEntriesResponseBody() = default ;
    DeleteRouteEntriesResponseBody& operator=(const DeleteRouteEntriesResponseBody &) = default ;
    DeleteRouteEntriesResponseBody& operator=(DeleteRouteEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedCount_ != nullptr
        && this->failedRouteEntries_ != nullptr && this->requestId_ != nullptr && this->successCount_ != nullptr; };
    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int32_t failedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0) };
    inline DeleteRouteEntriesResponseBody& setFailedCount(int32_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // failedRouteEntries Field Functions 
    bool hasFailedRouteEntries() const { return this->failedRouteEntries_ != nullptr;};
    void deleteFailedRouteEntries() { this->failedRouteEntries_ = nullptr;};
    inline const vector<DeleteRouteEntriesResponseBodyFailedRouteEntries> & failedRouteEntries() const { DARABONBA_PTR_GET_CONST(failedRouteEntries_, vector<DeleteRouteEntriesResponseBodyFailedRouteEntries>) };
    inline vector<DeleteRouteEntriesResponseBodyFailedRouteEntries> failedRouteEntries() { DARABONBA_PTR_GET(failedRouteEntries_, vector<DeleteRouteEntriesResponseBodyFailedRouteEntries>) };
    inline DeleteRouteEntriesResponseBody& setFailedRouteEntries(const vector<DeleteRouteEntriesResponseBodyFailedRouteEntries> & failedRouteEntries) { DARABONBA_PTR_SET_VALUE(failedRouteEntries_, failedRouteEntries) };
    inline DeleteRouteEntriesResponseBody& setFailedRouteEntries(vector<DeleteRouteEntriesResponseBodyFailedRouteEntries> && failedRouteEntries) { DARABONBA_PTR_SET_RVALUE(failedRouteEntries_, failedRouteEntries) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteRouteEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline DeleteRouteEntriesResponseBody& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


  protected:
    // The number of route entries that failed to be deleted.
    std::shared_ptr<int32_t> failedCount_ = nullptr;
    // The information about the route entry that failed to be deleted.
    std::shared_ptr<vector<DeleteRouteEntriesResponseBodyFailedRouteEntries>> failedRouteEntries_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of route entries that were deleted.
    std::shared_ptr<int32_t> successCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
