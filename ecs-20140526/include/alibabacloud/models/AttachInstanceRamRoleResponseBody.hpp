// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHINSTANCERAMROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ATTACHINSTANCERAMROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class AttachInstanceRamRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachInstanceRamRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttachInstanceRamRoleResults, attachInstanceRamRoleResults_);
      DARABONBA_PTR_TO_JSON(FailCount, failCount_);
      DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, AttachInstanceRamRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachInstanceRamRoleResults, attachInstanceRamRoleResults_);
      DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
      DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    AttachInstanceRamRoleResponseBody() = default ;
    AttachInstanceRamRoleResponseBody(const AttachInstanceRamRoleResponseBody &) = default ;
    AttachInstanceRamRoleResponseBody(AttachInstanceRamRoleResponseBody &&) = default ;
    AttachInstanceRamRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachInstanceRamRoleResponseBody() = default ;
    AttachInstanceRamRoleResponseBody& operator=(const AttachInstanceRamRoleResponseBody &) = default ;
    AttachInstanceRamRoleResponseBody& operator=(AttachInstanceRamRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachInstanceRamRoleResults_ != nullptr
        && this->failCount_ != nullptr && this->ramRoleName_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // attachInstanceRamRoleResults Field Functions 
    bool hasAttachInstanceRamRoleResults() const { return this->attachInstanceRamRoleResults_ != nullptr;};
    void deleteAttachInstanceRamRoleResults() { this->attachInstanceRamRoleResults_ = nullptr;};
    inline const AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResults & attachInstanceRamRoleResults() const { DARABONBA_PTR_GET_CONST(attachInstanceRamRoleResults_, AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResults) };
    inline AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResults attachInstanceRamRoleResults() { DARABONBA_PTR_GET(attachInstanceRamRoleResults_, AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResults) };
    inline AttachInstanceRamRoleResponseBody& setAttachInstanceRamRoleResults(const AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResults & attachInstanceRamRoleResults) { DARABONBA_PTR_SET_VALUE(attachInstanceRamRoleResults_, attachInstanceRamRoleResults) };
    inline AttachInstanceRamRoleResponseBody& setAttachInstanceRamRoleResults(AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResults && attachInstanceRamRoleResults) { DARABONBA_PTR_SET_RVALUE(attachInstanceRamRoleResults_, attachInstanceRamRoleResults) };


    // failCount Field Functions 
    bool hasFailCount() const { return this->failCount_ != nullptr;};
    void deleteFailCount() { this->failCount_ = nullptr;};
    inline int32_t failCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
    inline AttachInstanceRamRoleResponseBody& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string ramRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline AttachInstanceRamRoleResponseBody& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AttachInstanceRamRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline AttachInstanceRamRoleResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the results of attaching the instance RAM role.
    std::shared_ptr<AttachInstanceRamRoleResponseBodyAttachInstanceRamRoleResults> attachInstanceRamRoleResults_ = nullptr;
    // The number of instances to which the instance RAM role failed to be attached.
    std::shared_ptr<int32_t> failCount_ = nullptr;
    // The name of the instance RAM role.
    std::shared_ptr<string> ramRoleName_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of instances to which you attempted to attach the instance RAM role.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
