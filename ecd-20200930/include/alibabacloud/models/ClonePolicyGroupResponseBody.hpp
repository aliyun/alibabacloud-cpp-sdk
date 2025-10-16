// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONEPOLICYGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLONEPOLICYGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ClonePolicyGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClonePolicyGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClonePolicyGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClonePolicyGroupResponseBody() = default ;
    ClonePolicyGroupResponseBody(const ClonePolicyGroupResponseBody &) = default ;
    ClonePolicyGroupResponseBody(ClonePolicyGroupResponseBody &&) = default ;
    ClonePolicyGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClonePolicyGroupResponseBody() = default ;
    ClonePolicyGroupResponseBody& operator=(const ClonePolicyGroupResponseBody &) = default ;
    ClonePolicyGroupResponseBody& operator=(ClonePolicyGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyGroupId_ == nullptr
        && return this->requestId_ == nullptr; };
    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string policyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline ClonePolicyGroupResponseBody& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClonePolicyGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the new cloud computer policy.
    std::shared_ptr<string> policyGroupId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
