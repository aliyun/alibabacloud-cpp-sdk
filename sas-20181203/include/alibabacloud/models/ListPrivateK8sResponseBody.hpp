// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEK8SRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEK8SRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrivateK8sResponseBodyPrivateK8sInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListPrivateK8sResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateK8sResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PrivateK8sInfos, privateK8sInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateK8sResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PrivateK8sInfos, privateK8sInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPrivateK8sResponseBody() = default ;
    ListPrivateK8sResponseBody(const ListPrivateK8sResponseBody &) = default ;
    ListPrivateK8sResponseBody(ListPrivateK8sResponseBody &&) = default ;
    ListPrivateK8sResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateK8sResponseBody() = default ;
    ListPrivateK8sResponseBody& operator=(const ListPrivateK8sResponseBody &) = default ;
    ListPrivateK8sResponseBody& operator=(ListPrivateK8sResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->privateK8sInfos_ == nullptr
        && return this->requestId_ == nullptr; };
    // privateK8sInfos Field Functions 
    bool hasPrivateK8sInfos() const { return this->privateK8sInfos_ != nullptr;};
    void deletePrivateK8sInfos() { this->privateK8sInfos_ = nullptr;};
    inline const vector<ListPrivateK8sResponseBodyPrivateK8sInfos> & privateK8sInfos() const { DARABONBA_PTR_GET_CONST(privateK8sInfos_, vector<ListPrivateK8sResponseBodyPrivateK8sInfos>) };
    inline vector<ListPrivateK8sResponseBodyPrivateK8sInfos> privateK8sInfos() { DARABONBA_PTR_GET(privateK8sInfos_, vector<ListPrivateK8sResponseBodyPrivateK8sInfos>) };
    inline ListPrivateK8sResponseBody& setPrivateK8sInfos(const vector<ListPrivateK8sResponseBodyPrivateK8sInfos> & privateK8sInfos) { DARABONBA_PTR_SET_VALUE(privateK8sInfos_, privateK8sInfos) };
    inline ListPrivateK8sResponseBody& setPrivateK8sInfos(vector<ListPrivateK8sResponseBodyPrivateK8sInfos> && privateK8sInfos) { DARABONBA_PTR_SET_RVALUE(privateK8sInfos_, privateK8sInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrivateK8sResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the self-managed Kubernetes clusters.
    std::shared_ptr<vector<ListPrivateK8sResponseBodyPrivateK8sInfos>> privateK8sInfos_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
