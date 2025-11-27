// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADDONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTADDONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAddonsResponseBodyAddons.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAddonsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAddonsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(addons, addons_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAddonsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(addons, addons_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListAddonsResponseBody() = default ;
    ListAddonsResponseBody(const ListAddonsResponseBody &) = default ;
    ListAddonsResponseBody(ListAddonsResponseBody &&) = default ;
    ListAddonsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAddonsResponseBody() = default ;
    ListAddonsResponseBody& operator=(const ListAddonsResponseBody &) = default ;
    ListAddonsResponseBody& operator=(ListAddonsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addons_ == nullptr
        && return this->requestId_ == nullptr; };
    // addons Field Functions 
    bool hasAddons() const { return this->addons_ != nullptr;};
    void deleteAddons() { this->addons_ = nullptr;};
    inline const vector<ListAddonsResponseBodyAddons> & addons() const { DARABONBA_PTR_GET_CONST(addons_, vector<ListAddonsResponseBodyAddons>) };
    inline vector<ListAddonsResponseBodyAddons> addons() { DARABONBA_PTR_GET(addons_, vector<ListAddonsResponseBodyAddons>) };
    inline ListAddonsResponseBody& setAddons(const vector<ListAddonsResponseBodyAddons> & addons) { DARABONBA_PTR_SET_VALUE(addons_, addons) };
    inline ListAddonsResponseBody& setAddons(vector<ListAddonsResponseBodyAddons> && addons) { DARABONBA_PTR_SET_RVALUE(addons_, addons) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAddonsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListAddonsResponseBodyAddons>> addons_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
