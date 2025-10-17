// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHKEYPAIRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETACHKEYPAIRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DetachKeyPairResponseBodyResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DetachKeyPairResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachKeyPairResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailCount, failCount_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DetachKeyPairResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DetachKeyPairResponseBody() = default ;
    DetachKeyPairResponseBody(const DetachKeyPairResponseBody &) = default ;
    DetachKeyPairResponseBody(DetachKeyPairResponseBody &&) = default ;
    DetachKeyPairResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachKeyPairResponseBody() = default ;
    DetachKeyPairResponseBody& operator=(const DetachKeyPairResponseBody &) = default ;
    DetachKeyPairResponseBody& operator=(DetachKeyPairResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failCount_ == nullptr
        && return this->keyPairName_ == nullptr && return this->requestId_ == nullptr && return this->results_ == nullptr && return this->totalCount_ == nullptr; };
    // failCount Field Functions 
    bool hasFailCount() const { return this->failCount_ != nullptr;};
    void deleteFailCount() { this->failCount_ = nullptr;};
    inline string failCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, "") };
    inline DetachKeyPairResponseBody& setFailCount(string failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline DetachKeyPairResponseBody& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetachKeyPairResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const DetachKeyPairResponseBodyResults & results() const { DARABONBA_PTR_GET_CONST(results_, DetachKeyPairResponseBodyResults) };
    inline DetachKeyPairResponseBodyResults results() { DARABONBA_PTR_GET(results_, DetachKeyPairResponseBodyResults) };
    inline DetachKeyPairResponseBody& setResults(const DetachKeyPairResponseBodyResults & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline DetachKeyPairResponseBody& setResults(DetachKeyPairResponseBodyResults && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DetachKeyPairResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of instances from which the SSH key pair failed to be unbound.
    std::shared_ptr<string> failCount_ = nullptr;
    // The name of the key pair.
    std::shared_ptr<string> keyPairName_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The result set of the unbind operation.
    std::shared_ptr<DetachKeyPairResponseBodyResults> results_ = nullptr;
    // The total number of instances from which you want to unbind the SSH key pair.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
