// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASEEXTENSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASEEXTENSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDatabaseExtensionsResponseBodyExtensions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListDatabaseExtensionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabaseExtensionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Extensions, extensions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabaseExtensionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Extensions, extensions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDatabaseExtensionsResponseBody() = default ;
    ListDatabaseExtensionsResponseBody(const ListDatabaseExtensionsResponseBody &) = default ;
    ListDatabaseExtensionsResponseBody(ListDatabaseExtensionsResponseBody &&) = default ;
    ListDatabaseExtensionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabaseExtensionsResponseBody() = default ;
    ListDatabaseExtensionsResponseBody& operator=(const ListDatabaseExtensionsResponseBody &) = default ;
    ListDatabaseExtensionsResponseBody& operator=(ListDatabaseExtensionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extensions_ == nullptr
        && return this->requestId_ == nullptr; };
    // extensions Field Functions 
    bool hasExtensions() const { return this->extensions_ != nullptr;};
    void deleteExtensions() { this->extensions_ = nullptr;};
    inline const vector<ListDatabaseExtensionsResponseBodyExtensions> & extensions() const { DARABONBA_PTR_GET_CONST(extensions_, vector<ListDatabaseExtensionsResponseBodyExtensions>) };
    inline vector<ListDatabaseExtensionsResponseBodyExtensions> extensions() { DARABONBA_PTR_GET(extensions_, vector<ListDatabaseExtensionsResponseBodyExtensions>) };
    inline ListDatabaseExtensionsResponseBody& setExtensions(const vector<ListDatabaseExtensionsResponseBodyExtensions> & extensions) { DARABONBA_PTR_SET_VALUE(extensions_, extensions) };
    inline ListDatabaseExtensionsResponseBody& setExtensions(vector<ListDatabaseExtensionsResponseBodyExtensions> && extensions) { DARABONBA_PTR_SET_RVALUE(extensions_, extensions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDatabaseExtensionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListDatabaseExtensionsResponseBodyExtensions>> extensions_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
