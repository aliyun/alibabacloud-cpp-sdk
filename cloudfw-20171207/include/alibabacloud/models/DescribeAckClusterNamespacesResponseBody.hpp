// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACKCLUSTERNAMESPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACKCLUSTERNAMESPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAckClusterNamespacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAckClusterNamespacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AckNamespaces, ackNamespaces_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAckClusterNamespacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AckNamespaces, ackNamespaces_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAckClusterNamespacesResponseBody() = default ;
    DescribeAckClusterNamespacesResponseBody(const DescribeAckClusterNamespacesResponseBody &) = default ;
    DescribeAckClusterNamespacesResponseBody(DescribeAckClusterNamespacesResponseBody &&) = default ;
    DescribeAckClusterNamespacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAckClusterNamespacesResponseBody() = default ;
    DescribeAckClusterNamespacesResponseBody& operator=(const DescribeAckClusterNamespacesResponseBody &) = default ;
    DescribeAckClusterNamespacesResponseBody& operator=(DescribeAckClusterNamespacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ackNamespaces_ == nullptr
        && this->requestId_ == nullptr; };
    // ackNamespaces Field Functions 
    bool hasAckNamespaces() const { return this->ackNamespaces_ != nullptr;};
    void deleteAckNamespaces() { this->ackNamespaces_ = nullptr;};
    inline const vector<string> & getAckNamespaces() const { DARABONBA_PTR_GET_CONST(ackNamespaces_, vector<string>) };
    inline vector<string> getAckNamespaces() { DARABONBA_PTR_GET(ackNamespaces_, vector<string>) };
    inline DescribeAckClusterNamespacesResponseBody& setAckNamespaces(const vector<string> & ackNamespaces) { DARABONBA_PTR_SET_VALUE(ackNamespaces_, ackNamespaces) };
    inline DescribeAckClusterNamespacesResponseBody& setAckNamespaces(vector<string> && ackNamespaces) { DARABONBA_PTR_SET_RVALUE(ackNamespaces_, ackNamespaces) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAckClusterNamespacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<string>> ackNamespaces_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
