// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateServiceResponseBodyDryRunResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DryRunResult, dryRunResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRunResult, dryRunResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateServiceResponseBody() = default ;
    UpdateServiceResponseBody(const UpdateServiceResponseBody &) = default ;
    UpdateServiceResponseBody(UpdateServiceResponseBody &&) = default ;
    UpdateServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceResponseBody() = default ;
    UpdateServiceResponseBody& operator=(const UpdateServiceResponseBody &) = default ;
    UpdateServiceResponseBody& operator=(UpdateServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dryRunResult_ != nullptr
        && this->requestId_ != nullptr; };
    // dryRunResult Field Functions 
    bool hasDryRunResult() const { return this->dryRunResult_ != nullptr;};
    void deleteDryRunResult() { this->dryRunResult_ = nullptr;};
    inline const UpdateServiceResponseBodyDryRunResult & dryRunResult() const { DARABONBA_PTR_GET_CONST(dryRunResult_, UpdateServiceResponseBodyDryRunResult) };
    inline UpdateServiceResponseBodyDryRunResult dryRunResult() { DARABONBA_PTR_GET(dryRunResult_, UpdateServiceResponseBodyDryRunResult) };
    inline UpdateServiceResponseBody& setDryRunResult(const UpdateServiceResponseBodyDryRunResult & dryRunResult) { DARABONBA_PTR_SET_VALUE(dryRunResult_, dryRunResult) };
    inline UpdateServiceResponseBody& setDryRunResult(UpdateServiceResponseBodyDryRunResult && dryRunResult) { DARABONBA_PTR_SET_RVALUE(dryRunResult_, dryRunResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The dry run result.
    std::shared_ptr<UpdateServiceResponseBodyDryRunResult> dryRunResult_ = nullptr;
    // The hosted O\\&M configurations.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
