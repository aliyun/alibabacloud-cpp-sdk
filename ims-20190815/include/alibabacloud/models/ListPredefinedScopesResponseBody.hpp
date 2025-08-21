// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPREDEFINEDSCOPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPREDEFINEDSCOPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPredefinedScopesResponseBodyPredefinedScopes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListPredefinedScopesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPredefinedScopesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PredefinedScopes, predefinedScopes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPredefinedScopesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PredefinedScopes, predefinedScopes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPredefinedScopesResponseBody() = default ;
    ListPredefinedScopesResponseBody(const ListPredefinedScopesResponseBody &) = default ;
    ListPredefinedScopesResponseBody(ListPredefinedScopesResponseBody &&) = default ;
    ListPredefinedScopesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPredefinedScopesResponseBody() = default ;
    ListPredefinedScopesResponseBody& operator=(const ListPredefinedScopesResponseBody &) = default ;
    ListPredefinedScopesResponseBody& operator=(ListPredefinedScopesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->predefinedScopes_ != nullptr
        && this->requestId_ != nullptr; };
    // predefinedScopes Field Functions 
    bool hasPredefinedScopes() const { return this->predefinedScopes_ != nullptr;};
    void deletePredefinedScopes() { this->predefinedScopes_ = nullptr;};
    inline const ListPredefinedScopesResponseBodyPredefinedScopes & predefinedScopes() const { DARABONBA_PTR_GET_CONST(predefinedScopes_, ListPredefinedScopesResponseBodyPredefinedScopes) };
    inline ListPredefinedScopesResponseBodyPredefinedScopes predefinedScopes() { DARABONBA_PTR_GET(predefinedScopes_, ListPredefinedScopesResponseBodyPredefinedScopes) };
    inline ListPredefinedScopesResponseBody& setPredefinedScopes(const ListPredefinedScopesResponseBodyPredefinedScopes & predefinedScopes) { DARABONBA_PTR_SET_VALUE(predefinedScopes_, predefinedScopes) };
    inline ListPredefinedScopesResponseBody& setPredefinedScopes(ListPredefinedScopesResponseBodyPredefinedScopes && predefinedScopes) { DARABONBA_PTR_SET_RVALUE(predefinedScopes_, predefinedScopes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPredefinedScopesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about application permissions.
    std::shared_ptr<ListPredefinedScopesResponseBodyPredefinedScopes> predefinedScopes_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
