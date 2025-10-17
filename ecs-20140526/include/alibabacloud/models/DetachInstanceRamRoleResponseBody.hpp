// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHINSTANCERAMROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETACHINSTANCERAMROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DetachInstanceRamRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachInstanceRamRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DetachInstanceRamRoleResults, detachInstanceRamRoleResults_);
      DARABONBA_PTR_TO_JSON(FailCount, failCount_);
      DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DetachInstanceRamRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DetachInstanceRamRoleResults, detachInstanceRamRoleResults_);
      DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
      DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DetachInstanceRamRoleResponseBody() = default ;
    DetachInstanceRamRoleResponseBody(const DetachInstanceRamRoleResponseBody &) = default ;
    DetachInstanceRamRoleResponseBody(DetachInstanceRamRoleResponseBody &&) = default ;
    DetachInstanceRamRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachInstanceRamRoleResponseBody() = default ;
    DetachInstanceRamRoleResponseBody& operator=(const DetachInstanceRamRoleResponseBody &) = default ;
    DetachInstanceRamRoleResponseBody& operator=(DetachInstanceRamRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detachInstanceRamRoleResults_ == nullptr
        && return this->failCount_ == nullptr && return this->ramRoleName_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // detachInstanceRamRoleResults Field Functions 
    bool hasDetachInstanceRamRoleResults() const { return this->detachInstanceRamRoleResults_ != nullptr;};
    void deleteDetachInstanceRamRoleResults() { this->detachInstanceRamRoleResults_ = nullptr;};
    inline const DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResults & detachInstanceRamRoleResults() const { DARABONBA_PTR_GET_CONST(detachInstanceRamRoleResults_, DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResults) };
    inline DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResults detachInstanceRamRoleResults() { DARABONBA_PTR_GET(detachInstanceRamRoleResults_, DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResults) };
    inline DetachInstanceRamRoleResponseBody& setDetachInstanceRamRoleResults(const DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResults & detachInstanceRamRoleResults) { DARABONBA_PTR_SET_VALUE(detachInstanceRamRoleResults_, detachInstanceRamRoleResults) };
    inline DetachInstanceRamRoleResponseBody& setDetachInstanceRamRoleResults(DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResults && detachInstanceRamRoleResults) { DARABONBA_PTR_SET_RVALUE(detachInstanceRamRoleResults_, detachInstanceRamRoleResults) };


    // failCount Field Functions 
    bool hasFailCount() const { return this->failCount_ != nullptr;};
    void deleteFailCount() { this->failCount_ = nullptr;};
    inline int32_t failCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
    inline DetachInstanceRamRoleResponseBody& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string ramRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline DetachInstanceRamRoleResponseBody& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetachInstanceRamRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DetachInstanceRamRoleResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The results of the instance RAM role detachment, which include the names of the instance RAM roles and the IDs of the ECS instances from which you attempted to detach the instance RAM roles.
    std::shared_ptr<DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResults> detachInstanceRamRoleResults_ = nullptr;
    // The number of ECS instances from which instance RAM roles failed to be detached.
    std::shared_ptr<int32_t> failCount_ = nullptr;
    // The name of the instance RAM role.
    std::shared_ptr<string> ramRoleName_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of ECS instances from which you attempted to detach instance RAM roles.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
