// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SACCESSINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SACCESSINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListK8sAccessInfoResponseBodyK8sAccessInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListK8sAccessInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8sAccessInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(K8sAccessInfos, k8sAccessInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListK8sAccessInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(K8sAccessInfos, k8sAccessInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListK8sAccessInfoResponseBody() = default ;
    ListK8sAccessInfoResponseBody(const ListK8sAccessInfoResponseBody &) = default ;
    ListK8sAccessInfoResponseBody(ListK8sAccessInfoResponseBody &&) = default ;
    ListK8sAccessInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8sAccessInfoResponseBody() = default ;
    ListK8sAccessInfoResponseBody& operator=(const ListK8sAccessInfoResponseBody &) = default ;
    ListK8sAccessInfoResponseBody& operator=(ListK8sAccessInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->k8sAccessInfos_ != nullptr
        && this->requestId_ != nullptr; };
    // k8sAccessInfos Field Functions 
    bool hasK8sAccessInfos() const { return this->k8sAccessInfos_ != nullptr;};
    void deleteK8sAccessInfos() { this->k8sAccessInfos_ = nullptr;};
    inline const vector<ListK8sAccessInfoResponseBodyK8sAccessInfos> & k8sAccessInfos() const { DARABONBA_PTR_GET_CONST(k8sAccessInfos_, vector<ListK8sAccessInfoResponseBodyK8sAccessInfos>) };
    inline vector<ListK8sAccessInfoResponseBodyK8sAccessInfos> k8sAccessInfos() { DARABONBA_PTR_GET(k8sAccessInfos_, vector<ListK8sAccessInfoResponseBodyK8sAccessInfos>) };
    inline ListK8sAccessInfoResponseBody& setK8sAccessInfos(const vector<ListK8sAccessInfoResponseBodyK8sAccessInfos> & k8sAccessInfos) { DARABONBA_PTR_SET_VALUE(k8sAccessInfos_, k8sAccessInfos) };
    inline ListK8sAccessInfoResponseBody& setK8sAccessInfos(vector<ListK8sAccessInfoResponseBodyK8sAccessInfos> && k8sAccessInfos) { DARABONBA_PTR_SET_RVALUE(k8sAccessInfos_, k8sAccessInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListK8sAccessInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the Kubernetes clusters.
    std::shared_ptr<vector<ListK8sAccessInfoResponseBodyK8sAccessInfos>> k8sAccessInfos_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
