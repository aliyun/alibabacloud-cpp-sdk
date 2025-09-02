// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENABLEDEXTENSIONSFORPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENABLEDEXTENSIONSFORPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEnabledExtensionsForProjectResponseBodyExtensions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListEnabledExtensionsForProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnabledExtensionsForProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Extensions, extensions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnabledExtensionsForProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Extensions, extensions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListEnabledExtensionsForProjectResponseBody() = default ;
    ListEnabledExtensionsForProjectResponseBody(const ListEnabledExtensionsForProjectResponseBody &) = default ;
    ListEnabledExtensionsForProjectResponseBody(ListEnabledExtensionsForProjectResponseBody &&) = default ;
    ListEnabledExtensionsForProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnabledExtensionsForProjectResponseBody() = default ;
    ListEnabledExtensionsForProjectResponseBody& operator=(const ListEnabledExtensionsForProjectResponseBody &) = default ;
    ListEnabledExtensionsForProjectResponseBody& operator=(ListEnabledExtensionsForProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extensions_ != nullptr
        && this->requestId_ != nullptr; };
    // extensions Field Functions 
    bool hasExtensions() const { return this->extensions_ != nullptr;};
    void deleteExtensions() { this->extensions_ = nullptr;};
    inline const vector<ListEnabledExtensionsForProjectResponseBodyExtensions> & extensions() const { DARABONBA_PTR_GET_CONST(extensions_, vector<ListEnabledExtensionsForProjectResponseBodyExtensions>) };
    inline vector<ListEnabledExtensionsForProjectResponseBodyExtensions> extensions() { DARABONBA_PTR_GET(extensions_, vector<ListEnabledExtensionsForProjectResponseBodyExtensions>) };
    inline ListEnabledExtensionsForProjectResponseBody& setExtensions(const vector<ListEnabledExtensionsForProjectResponseBodyExtensions> & extensions) { DARABONBA_PTR_SET_VALUE(extensions_, extensions) };
    inline ListEnabledExtensionsForProjectResponseBody& setExtensions(vector<ListEnabledExtensionsForProjectResponseBodyExtensions> && extensions) { DARABONBA_PTR_SET_RVALUE(extensions_, extensions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEnabledExtensionsForProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The extensions.
    std::shared_ptr<vector<ListEnabledExtensionsForProjectResponseBodyExtensions>> extensions_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
