// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLCLOUDAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSTALLCLOUDAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InstallCloudAppResponseBodyFailedInstances.hpp>
#include <alibabacloud/models/InstallCloudAppResponseBodySuccessInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class InstallCloudAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallCloudAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedInstanceCount, failedInstanceCount_);
      DARABONBA_PTR_TO_JSON(FailedInstances, failedInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessInstanceCount, successInstanceCount_);
      DARABONBA_PTR_TO_JSON(SuccessInstances, successInstances_);
    };
    friend void from_json(const Darabonba::Json& j, InstallCloudAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedInstanceCount, failedInstanceCount_);
      DARABONBA_PTR_FROM_JSON(FailedInstances, failedInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessInstanceCount, successInstanceCount_);
      DARABONBA_PTR_FROM_JSON(SuccessInstances, successInstances_);
    };
    InstallCloudAppResponseBody() = default ;
    InstallCloudAppResponseBody(const InstallCloudAppResponseBody &) = default ;
    InstallCloudAppResponseBody(InstallCloudAppResponseBody &&) = default ;
    InstallCloudAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallCloudAppResponseBody() = default ;
    InstallCloudAppResponseBody& operator=(const InstallCloudAppResponseBody &) = default ;
    InstallCloudAppResponseBody& operator=(InstallCloudAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedInstanceCount_ != nullptr
        && this->failedInstances_ != nullptr && this->requestId_ != nullptr && this->successInstanceCount_ != nullptr && this->successInstances_ != nullptr; };
    // failedInstanceCount Field Functions 
    bool hasFailedInstanceCount() const { return this->failedInstanceCount_ != nullptr;};
    void deleteFailedInstanceCount() { this->failedInstanceCount_ = nullptr;};
    inline int32_t failedInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(failedInstanceCount_, 0) };
    inline InstallCloudAppResponseBody& setFailedInstanceCount(int32_t failedInstanceCount) { DARABONBA_PTR_SET_VALUE(failedInstanceCount_, failedInstanceCount) };


    // failedInstances Field Functions 
    bool hasFailedInstances() const { return this->failedInstances_ != nullptr;};
    void deleteFailedInstances() { this->failedInstances_ = nullptr;};
    inline const vector<InstallCloudAppResponseBodyFailedInstances> & failedInstances() const { DARABONBA_PTR_GET_CONST(failedInstances_, vector<InstallCloudAppResponseBodyFailedInstances>) };
    inline vector<InstallCloudAppResponseBodyFailedInstances> failedInstances() { DARABONBA_PTR_GET(failedInstances_, vector<InstallCloudAppResponseBodyFailedInstances>) };
    inline InstallCloudAppResponseBody& setFailedInstances(const vector<InstallCloudAppResponseBodyFailedInstances> & failedInstances) { DARABONBA_PTR_SET_VALUE(failedInstances_, failedInstances) };
    inline InstallCloudAppResponseBody& setFailedInstances(vector<InstallCloudAppResponseBodyFailedInstances> && failedInstances) { DARABONBA_PTR_SET_RVALUE(failedInstances_, failedInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InstallCloudAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successInstanceCount Field Functions 
    bool hasSuccessInstanceCount() const { return this->successInstanceCount_ != nullptr;};
    void deleteSuccessInstanceCount() { this->successInstanceCount_ = nullptr;};
    inline int32_t successInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(successInstanceCount_, 0) };
    inline InstallCloudAppResponseBody& setSuccessInstanceCount(int32_t successInstanceCount) { DARABONBA_PTR_SET_VALUE(successInstanceCount_, successInstanceCount) };


    // successInstances Field Functions 
    bool hasSuccessInstances() const { return this->successInstances_ != nullptr;};
    void deleteSuccessInstances() { this->successInstances_ = nullptr;};
    inline const vector<InstallCloudAppResponseBodySuccessInstances> & successInstances() const { DARABONBA_PTR_GET_CONST(successInstances_, vector<InstallCloudAppResponseBodySuccessInstances>) };
    inline vector<InstallCloudAppResponseBodySuccessInstances> successInstances() { DARABONBA_PTR_GET(successInstances_, vector<InstallCloudAppResponseBodySuccessInstances>) };
    inline InstallCloudAppResponseBody& setSuccessInstances(const vector<InstallCloudAppResponseBodySuccessInstances> & successInstances) { DARABONBA_PTR_SET_VALUE(successInstances_, successInstances) };
    inline InstallCloudAppResponseBody& setSuccessInstances(vector<InstallCloudAppResponseBodySuccessInstances> && successInstances) { DARABONBA_PTR_SET_RVALUE(successInstances_, successInstances) };


  protected:
    std::shared_ptr<int32_t> failedInstanceCount_ = nullptr;
    std::shared_ptr<vector<InstallCloudAppResponseBodyFailedInstances>> failedInstances_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> successInstanceCount_ = nullptr;
    std::shared_ptr<vector<InstallCloudAppResponseBodySuccessInstances>> successInstances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
