// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKREACHABLEANALYSISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKREACHABLEANALYSISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class CreateNetworkReachableAnalysisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkReachableAnalysisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkReachableAnalysisId, networkReachableAnalysisId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkReachableAnalysisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkReachableAnalysisId, networkReachableAnalysisId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateNetworkReachableAnalysisResponseBody() = default ;
    CreateNetworkReachableAnalysisResponseBody(const CreateNetworkReachableAnalysisResponseBody &) = default ;
    CreateNetworkReachableAnalysisResponseBody(CreateNetworkReachableAnalysisResponseBody &&) = default ;
    CreateNetworkReachableAnalysisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkReachableAnalysisResponseBody() = default ;
    CreateNetworkReachableAnalysisResponseBody& operator=(const CreateNetworkReachableAnalysisResponseBody &) = default ;
    CreateNetworkReachableAnalysisResponseBody& operator=(CreateNetworkReachableAnalysisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkReachableAnalysisId_ == nullptr
        && return this->requestId_ == nullptr; };
    // networkReachableAnalysisId Field Functions 
    bool hasNetworkReachableAnalysisId() const { return this->networkReachableAnalysisId_ != nullptr;};
    void deleteNetworkReachableAnalysisId() { this->networkReachableAnalysisId_ = nullptr;};
    inline string networkReachableAnalysisId() const { DARABONBA_PTR_GET_DEFAULT(networkReachableAnalysisId_, "") };
    inline CreateNetworkReachableAnalysisResponseBody& setNetworkReachableAnalysisId(string networkReachableAnalysisId) { DARABONBA_PTR_SET_VALUE(networkReachableAnalysisId_, networkReachableAnalysisId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateNetworkReachableAnalysisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the task for analyzing network reachability.
    std::shared_ptr<string> networkReachableAnalysisId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
