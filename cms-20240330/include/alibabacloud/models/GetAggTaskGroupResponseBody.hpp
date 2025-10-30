// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGTASKGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGTASKGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAggTaskGroupResponseBodyAggTaskGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetAggTaskGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggTaskGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(aggTaskGroup, aggTaskGroup_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggTaskGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(aggTaskGroup, aggTaskGroup_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetAggTaskGroupResponseBody() = default ;
    GetAggTaskGroupResponseBody(const GetAggTaskGroupResponseBody &) = default ;
    GetAggTaskGroupResponseBody(GetAggTaskGroupResponseBody &&) = default ;
    GetAggTaskGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggTaskGroupResponseBody() = default ;
    GetAggTaskGroupResponseBody& operator=(const GetAggTaskGroupResponseBody &) = default ;
    GetAggTaskGroupResponseBody& operator=(GetAggTaskGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggTaskGroup_ == nullptr
        && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // aggTaskGroup Field Functions 
    bool hasAggTaskGroup() const { return this->aggTaskGroup_ != nullptr;};
    void deleteAggTaskGroup() { this->aggTaskGroup_ = nullptr;};
    inline const GetAggTaskGroupResponseBodyAggTaskGroup & aggTaskGroup() const { DARABONBA_PTR_GET_CONST(aggTaskGroup_, GetAggTaskGroupResponseBodyAggTaskGroup) };
    inline GetAggTaskGroupResponseBodyAggTaskGroup aggTaskGroup() { DARABONBA_PTR_GET(aggTaskGroup_, GetAggTaskGroupResponseBodyAggTaskGroup) };
    inline GetAggTaskGroupResponseBody& setAggTaskGroup(const GetAggTaskGroupResponseBodyAggTaskGroup & aggTaskGroup) { DARABONBA_PTR_SET_VALUE(aggTaskGroup_, aggTaskGroup) };
    inline GetAggTaskGroupResponseBody& setAggTaskGroup(GetAggTaskGroupResponseBodyAggTaskGroup && aggTaskGroup) { DARABONBA_PTR_SET_RVALUE(aggTaskGroup_, aggTaskGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggTaskGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAggTaskGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Aggregation task group.
    std::shared_ptr<GetAggTaskGroupResponseBodyAggTaskGroup> aggTaskGroup_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
    // Whether the request was successful
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
