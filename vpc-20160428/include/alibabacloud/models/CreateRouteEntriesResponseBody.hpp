// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTEENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRouteEntriesResponseBodyFailedRouteEntries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateRouteEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(FailedRouteEntries, failedRouteEntries_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteEntryIds, routeEntryIds_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(FailedRouteEntries, failedRouteEntries_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteEntryIds, routeEntryIds_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
    };
    CreateRouteEntriesResponseBody() = default ;
    CreateRouteEntriesResponseBody(const CreateRouteEntriesResponseBody &) = default ;
    CreateRouteEntriesResponseBody(CreateRouteEntriesResponseBody &&) = default ;
    CreateRouteEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRouteEntriesResponseBody() = default ;
    CreateRouteEntriesResponseBody& operator=(const CreateRouteEntriesResponseBody &) = default ;
    CreateRouteEntriesResponseBody& operator=(CreateRouteEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedCount_ == nullptr
        && return this->failedRouteEntries_ == nullptr && return this->requestId_ == nullptr && return this->routeEntryIds_ == nullptr && return this->successCount_ == nullptr; };
    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int32_t failedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0) };
    inline CreateRouteEntriesResponseBody& setFailedCount(int32_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // failedRouteEntries Field Functions 
    bool hasFailedRouteEntries() const { return this->failedRouteEntries_ != nullptr;};
    void deleteFailedRouteEntries() { this->failedRouteEntries_ = nullptr;};
    inline const vector<CreateRouteEntriesResponseBodyFailedRouteEntries> & failedRouteEntries() const { DARABONBA_PTR_GET_CONST(failedRouteEntries_, vector<CreateRouteEntriesResponseBodyFailedRouteEntries>) };
    inline vector<CreateRouteEntriesResponseBodyFailedRouteEntries> failedRouteEntries() { DARABONBA_PTR_GET(failedRouteEntries_, vector<CreateRouteEntriesResponseBodyFailedRouteEntries>) };
    inline CreateRouteEntriesResponseBody& setFailedRouteEntries(const vector<CreateRouteEntriesResponseBodyFailedRouteEntries> & failedRouteEntries) { DARABONBA_PTR_SET_VALUE(failedRouteEntries_, failedRouteEntries) };
    inline CreateRouteEntriesResponseBody& setFailedRouteEntries(vector<CreateRouteEntriesResponseBodyFailedRouteEntries> && failedRouteEntries) { DARABONBA_PTR_SET_RVALUE(failedRouteEntries_, failedRouteEntries) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRouteEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeEntryIds Field Functions 
    bool hasRouteEntryIds() const { return this->routeEntryIds_ != nullptr;};
    void deleteRouteEntryIds() { this->routeEntryIds_ = nullptr;};
    inline const vector<string> & routeEntryIds() const { DARABONBA_PTR_GET_CONST(routeEntryIds_, vector<string>) };
    inline vector<string> routeEntryIds() { DARABONBA_PTR_GET(routeEntryIds_, vector<string>) };
    inline CreateRouteEntriesResponseBody& setRouteEntryIds(const vector<string> & routeEntryIds) { DARABONBA_PTR_SET_VALUE(routeEntryIds_, routeEntryIds) };
    inline CreateRouteEntriesResponseBody& setRouteEntryIds(vector<string> && routeEntryIds) { DARABONBA_PTR_SET_RVALUE(routeEntryIds_, routeEntryIds) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline CreateRouteEntriesResponseBody& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


  protected:
    // The number of custom route entries that failed to be added.
    std::shared_ptr<int32_t> failedCount_ = nullptr;
    // The details about the custom route entry that failed to be added.
    std::shared_ptr<vector<CreateRouteEntriesResponseBodyFailedRouteEntries>> failedRouteEntries_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the ID of the custom route entry that was successfully added.
    std::shared_ptr<vector<string>> routeEntryIds_ = nullptr;
    // The number of custom route entries that were successfully added.
    std::shared_ptr<int32_t> successCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
