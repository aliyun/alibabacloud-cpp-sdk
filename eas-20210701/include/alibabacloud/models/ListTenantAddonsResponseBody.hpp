// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTENANTADDONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTENANTADDONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListTenantAddonsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTenantAddonsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Addons, addons_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTenantAddonsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Addons, addons_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTenantAddonsResponseBody() = default ;
    ListTenantAddonsResponseBody(const ListTenantAddonsResponseBody &) = default ;
    ListTenantAddonsResponseBody(ListTenantAddonsResponseBody &&) = default ;
    ListTenantAddonsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTenantAddonsResponseBody() = default ;
    ListTenantAddonsResponseBody& operator=(const ListTenantAddonsResponseBody &) = default ;
    ListTenantAddonsResponseBody& operator=(ListTenantAddonsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Addons : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Addons& obj) { 
        DARABONBA_PTR_TO_JSON(Attributes, attributes_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Addons& obj) { 
        DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      Addons() = default ;
      Addons(const Addons &) = default ;
      Addons(Addons &&) = default ;
      Addons(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Addons() = default ;
      Addons& operator=(const Addons &) = default ;
      Addons& operator=(Addons &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attributes_ == nullptr
        && this->name_ == nullptr; };
      // attributes Field Functions 
      bool hasAttributes() const { return this->attributes_ != nullptr;};
      void deleteAttributes() { this->attributes_ = nullptr;};
      inline const map<string, string> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, map<string, string>) };
      inline map<string, string> getAttributes() { DARABONBA_PTR_GET(attributes_, map<string, string>) };
      inline Addons& setAttributes(const map<string, string> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
      inline Addons& setAttributes(map<string, string> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Addons& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The attributes of the plug-in.
      shared_ptr<map<string, string>> attributes_ {};
      // The name of the plug-in.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->addons_ == nullptr
        && this->requestId_ == nullptr; };
    // addons Field Functions 
    bool hasAddons() const { return this->addons_ != nullptr;};
    void deleteAddons() { this->addons_ = nullptr;};
    inline const vector<ListTenantAddonsResponseBody::Addons> & getAddons() const { DARABONBA_PTR_GET_CONST(addons_, vector<ListTenantAddonsResponseBody::Addons>) };
    inline vector<ListTenantAddonsResponseBody::Addons> getAddons() { DARABONBA_PTR_GET(addons_, vector<ListTenantAddonsResponseBody::Addons>) };
    inline ListTenantAddonsResponseBody& setAddons(const vector<ListTenantAddonsResponseBody::Addons> & addons) { DARABONBA_PTR_SET_VALUE(addons_, addons) };
    inline ListTenantAddonsResponseBody& setAddons(vector<ListTenantAddonsResponseBody::Addons> && addons) { DARABONBA_PTR_SET_RVALUE(addons_, addons) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTenantAddonsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the plug-in.
    shared_ptr<vector<ListTenantAddonsResponseBody::Addons>> addons_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
