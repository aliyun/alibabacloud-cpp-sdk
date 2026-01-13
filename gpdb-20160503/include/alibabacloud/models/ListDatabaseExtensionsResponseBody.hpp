// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASEEXTENSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASEEXTENSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Extensions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Extensions& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ExtensionName, extensionName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Extensions& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ExtensionName, extensionName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Extensions() = default ;
      Extensions(const Extensions &) = default ;
      Extensions(Extensions &&) = default ;
      Extensions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Extensions() = default ;
      Extensions& operator=(const Extensions &) = default ;
      Extensions& operator=(Extensions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->extensionName_ == nullptr && this->status_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Extensions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // extensionName Field Functions 
      bool hasExtensionName() const { return this->extensionName_ != nullptr;};
      void deleteExtensionName() { this->extensionName_ = nullptr;};
      inline string getExtensionName() const { DARABONBA_PTR_GET_DEFAULT(extensionName_, "") };
      inline Extensions& setExtensionName(string extensionName) { DARABONBA_PTR_SET_VALUE(extensionName_, extensionName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Extensions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The description of the extension.
      shared_ptr<string> description_ {};
      // The extension name.
      shared_ptr<string> extensionName_ {};
      // The status of the extension.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->extensions_ == nullptr
        && this->requestId_ == nullptr; };
    // extensions Field Functions 
    bool hasExtensions() const { return this->extensions_ != nullptr;};
    void deleteExtensions() { this->extensions_ = nullptr;};
    inline const vector<ListDatabaseExtensionsResponseBody::Extensions> & getExtensions() const { DARABONBA_PTR_GET_CONST(extensions_, vector<ListDatabaseExtensionsResponseBody::Extensions>) };
    inline vector<ListDatabaseExtensionsResponseBody::Extensions> getExtensions() { DARABONBA_PTR_GET(extensions_, vector<ListDatabaseExtensionsResponseBody::Extensions>) };
    inline ListDatabaseExtensionsResponseBody& setExtensions(const vector<ListDatabaseExtensionsResponseBody::Extensions> & extensions) { DARABONBA_PTR_SET_VALUE(extensions_, extensions) };
    inline ListDatabaseExtensionsResponseBody& setExtensions(vector<ListDatabaseExtensionsResponseBody::Extensions> && extensions) { DARABONBA_PTR_SET_RVALUE(extensions_, extensions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDatabaseExtensionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Extension list.
    shared_ptr<vector<ListDatabaseExtensionsResponseBody::Extensions>> extensions_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
