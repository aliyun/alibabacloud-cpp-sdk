// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSLSSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSLSSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeDomainSlsStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSlsStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlsLogstore, slsLogstore_);
      DARABONBA_PTR_TO_JSON(SlsProject, slsProject_);
      DARABONBA_PTR_TO_JSON(SlsStatus, slsStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSlsStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlsLogstore, slsLogstore_);
      DARABONBA_PTR_FROM_JSON(SlsProject, slsProject_);
      DARABONBA_PTR_FROM_JSON(SlsStatus, slsStatus_);
    };
    DescribeDomainSlsStatusResponseBody() = default ;
    DescribeDomainSlsStatusResponseBody(const DescribeDomainSlsStatusResponseBody &) = default ;
    DescribeDomainSlsStatusResponseBody(DescribeDomainSlsStatusResponseBody &&) = default ;
    DescribeDomainSlsStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSlsStatusResponseBody() = default ;
    DescribeDomainSlsStatusResponseBody& operator=(const DescribeDomainSlsStatusResponseBody &) = default ;
    DescribeDomainSlsStatusResponseBody& operator=(DescribeDomainSlsStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->slsLogstore_ != nullptr && this->slsProject_ != nullptr && this->slsStatus_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainSlsStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slsLogstore Field Functions 
    bool hasSlsLogstore() const { return this->slsLogstore_ != nullptr;};
    void deleteSlsLogstore() { this->slsLogstore_ = nullptr;};
    inline string slsLogstore() const { DARABONBA_PTR_GET_DEFAULT(slsLogstore_, "") };
    inline DescribeDomainSlsStatusResponseBody& setSlsLogstore(string slsLogstore) { DARABONBA_PTR_SET_VALUE(slsLogstore_, slsLogstore) };


    // slsProject Field Functions 
    bool hasSlsProject() const { return this->slsProject_ != nullptr;};
    void deleteSlsProject() { this->slsProject_ = nullptr;};
    inline string slsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
    inline DescribeDomainSlsStatusResponseBody& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


    // slsStatus Field Functions 
    bool hasSlsStatus() const { return this->slsStatus_ != nullptr;};
    void deleteSlsStatus() { this->slsStatus_ = nullptr;};
    inline bool slsStatus() const { DARABONBA_PTR_GET_DEFAULT(slsStatus_, false) };
    inline DescribeDomainSlsStatusResponseBody& setSlsStatus(bool slsStatus) { DARABONBA_PTR_SET_VALUE(slsStatus_, slsStatus) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> slsLogstore_ = nullptr;
    std::shared_ptr<string> slsProject_ = nullptr;
    std::shared_ptr<bool> slsStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
