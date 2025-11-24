// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGUESTCLUSTERNAMESPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGUESTCLUSTERNAMESPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeGuestClusterNamespacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGuestClusterNamespacesResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(NsLabels, nsLabels_);
      DARABONBA_PTR_TO_JSON(NsList, nsList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGuestClusterNamespacesResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(NsLabels, nsLabels_);
      DARABONBA_PTR_FROM_JSON(NsList, nsList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGuestClusterNamespacesResponseBody() = default ;
    DescribeGuestClusterNamespacesResponseBody(const DescribeGuestClusterNamespacesResponseBody &) = default ;
    DescribeGuestClusterNamespacesResponseBody(DescribeGuestClusterNamespacesResponseBody &&) = default ;
    DescribeGuestClusterNamespacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGuestClusterNamespacesResponseBody() = default ;
    DescribeGuestClusterNamespacesResponseBody& operator=(const DescribeGuestClusterNamespacesResponseBody &) = default ;
    DescribeGuestClusterNamespacesResponseBody& operator=(DescribeGuestClusterNamespacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nsLabels_ == nullptr
        && return this->nsList_ == nullptr && return this->requestId_ == nullptr; };
    // nsLabels Field Functions 
    bool hasNsLabels() const { return this->nsLabels_ != nullptr;};
    void deleteNsLabels() { this->nsLabels_ = nullptr;};
    inline     const Darabonba::Json & nsLabels() const { DARABONBA_GET(nsLabels_) };
    Darabonba::Json & nsLabels() { DARABONBA_GET(nsLabels_) };
    inline DescribeGuestClusterNamespacesResponseBody& setNsLabels(const Darabonba::Json & nsLabels) { DARABONBA_SET_VALUE(nsLabels_, nsLabels) };
    inline DescribeGuestClusterNamespacesResponseBody& setNsLabels(Darabonba::Json & nsLabels) { DARABONBA_SET_RVALUE(nsLabels_, nsLabels) };


    // nsList Field Functions 
    bool hasNsList() const { return this->nsList_ != nullptr;};
    void deleteNsList() { this->nsList_ = nullptr;};
    inline const vector<string> & nsList() const { DARABONBA_PTR_GET_CONST(nsList_, vector<string>) };
    inline vector<string> nsList() { DARABONBA_PTR_GET(nsList_, vector<string>) };
    inline DescribeGuestClusterNamespacesResponseBody& setNsList(const vector<string> & nsList) { DARABONBA_PTR_SET_VALUE(nsList_, nsList) };
    inline DescribeGuestClusterNamespacesResponseBody& setNsList(vector<string> && nsList) { DARABONBA_PTR_SET_RVALUE(nsList_, nsList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGuestClusterNamespacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The labels of the namespaces. Labels are returned only when `ShowNsLabels` is set to `true`.
    Darabonba::Json nsLabels_ = nullptr;
    // The names of the namespaces.
    std::shared_ptr<vector<string>> nsList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
