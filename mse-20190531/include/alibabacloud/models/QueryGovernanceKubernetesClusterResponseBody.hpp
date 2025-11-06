// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGOVERNANCEKUBERNETESCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYGOVERNANCEKUBERNETESCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryGovernanceKubernetesClusterResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryGovernanceKubernetesClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGovernanceKubernetesClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGovernanceKubernetesClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryGovernanceKubernetesClusterResponseBody() = default ;
    QueryGovernanceKubernetesClusterResponseBody(const QueryGovernanceKubernetesClusterResponseBody &) = default ;
    QueryGovernanceKubernetesClusterResponseBody(QueryGovernanceKubernetesClusterResponseBody &&) = default ;
    QueryGovernanceKubernetesClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGovernanceKubernetesClusterResponseBody() = default ;
    QueryGovernanceKubernetesClusterResponseBody& operator=(const QueryGovernanceKubernetesClusterResponseBody &) = default ;
    QueryGovernanceKubernetesClusterResponseBody& operator=(QueryGovernanceKubernetesClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryGovernanceKubernetesClusterResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, QueryGovernanceKubernetesClusterResponseBodyData) };
    inline QueryGovernanceKubernetesClusterResponseBodyData data() { DARABONBA_PTR_GET(data_, QueryGovernanceKubernetesClusterResponseBodyData) };
    inline QueryGovernanceKubernetesClusterResponseBody& setData(const QueryGovernanceKubernetesClusterResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryGovernanceKubernetesClusterResponseBody& setData(QueryGovernanceKubernetesClusterResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryGovernanceKubernetesClusterResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryGovernanceKubernetesClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryGovernanceKubernetesClusterResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned.
    std::shared_ptr<QueryGovernanceKubernetesClusterResponseBodyData> data_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
