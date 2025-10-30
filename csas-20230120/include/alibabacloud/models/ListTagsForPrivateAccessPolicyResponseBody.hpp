// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGSFORPRIVATEACCESSPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGSFORPRIVATEACCESSPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTagsForPrivateAccessPolicyResponseBodyPolices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListTagsForPrivateAccessPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagsForPrivateAccessPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Polices, polices_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagsForPrivateAccessPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Polices, polices_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTagsForPrivateAccessPolicyResponseBody() = default ;
    ListTagsForPrivateAccessPolicyResponseBody(const ListTagsForPrivateAccessPolicyResponseBody &) = default ;
    ListTagsForPrivateAccessPolicyResponseBody(ListTagsForPrivateAccessPolicyResponseBody &&) = default ;
    ListTagsForPrivateAccessPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagsForPrivateAccessPolicyResponseBody() = default ;
    ListTagsForPrivateAccessPolicyResponseBody& operator=(const ListTagsForPrivateAccessPolicyResponseBody &) = default ;
    ListTagsForPrivateAccessPolicyResponseBody& operator=(ListTagsForPrivateAccessPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->polices_ == nullptr
        && return this->requestId_ == nullptr; };
    // polices Field Functions 
    bool hasPolices() const { return this->polices_ != nullptr;};
    void deletePolices() { this->polices_ = nullptr;};
    inline const vector<ListTagsForPrivateAccessPolicyResponseBodyPolices> & polices() const { DARABONBA_PTR_GET_CONST(polices_, vector<ListTagsForPrivateAccessPolicyResponseBodyPolices>) };
    inline vector<ListTagsForPrivateAccessPolicyResponseBodyPolices> polices() { DARABONBA_PTR_GET(polices_, vector<ListTagsForPrivateAccessPolicyResponseBodyPolices>) };
    inline ListTagsForPrivateAccessPolicyResponseBody& setPolices(const vector<ListTagsForPrivateAccessPolicyResponseBodyPolices> & polices) { DARABONBA_PTR_SET_VALUE(polices_, polices) };
    inline ListTagsForPrivateAccessPolicyResponseBody& setPolices(vector<ListTagsForPrivateAccessPolicyResponseBodyPolices> && polices) { DARABONBA_PTR_SET_RVALUE(polices_, polices) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTagsForPrivateAccessPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListTagsForPrivateAccessPolicyResponseBodyPolices>> polices_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
