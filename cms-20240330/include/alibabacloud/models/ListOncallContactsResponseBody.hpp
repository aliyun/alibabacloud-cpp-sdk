// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTONCALLCONTACTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTONCALLCONTACTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListOncallContactsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOncallContactsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(contactIds, contactIds_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOncallContactsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(contactIds, contactIds_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListOncallContactsResponseBody() = default ;
    ListOncallContactsResponseBody(const ListOncallContactsResponseBody &) = default ;
    ListOncallContactsResponseBody(ListOncallContactsResponseBody &&) = default ;
    ListOncallContactsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOncallContactsResponseBody() = default ;
    ListOncallContactsResponseBody& operator=(const ListOncallContactsResponseBody &) = default ;
    ListOncallContactsResponseBody& operator=(ListOncallContactsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactIds_ == nullptr
        && this->requestId_ == nullptr; };
    // contactIds Field Functions 
    bool hasContactIds() const { return this->contactIds_ != nullptr;};
    void deleteContactIds() { this->contactIds_ = nullptr;};
    inline const vector<string> & getContactIds() const { DARABONBA_PTR_GET_CONST(contactIds_, vector<string>) };
    inline vector<string> getContactIds() { DARABONBA_PTR_GET(contactIds_, vector<string>) };
    inline ListOncallContactsResponseBody& setContactIds(const vector<string> & contactIds) { DARABONBA_PTR_SET_VALUE(contactIds_, contactIds) };
    inline ListOncallContactsResponseBody& setContactIds(vector<string> && contactIds) { DARABONBA_PTR_SET_RVALUE(contactIds_, contactIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOncallContactsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the contacts.
    shared_ptr<vector<string>> contactIds_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
