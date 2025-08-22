// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHALERTCONTACTGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHALERTCONTACTGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchAlertContactGroupResponseBodyContactGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchAlertContactGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAlertContactGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAlertContactGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SearchAlertContactGroupResponseBody() = default ;
    SearchAlertContactGroupResponseBody(const SearchAlertContactGroupResponseBody &) = default ;
    SearchAlertContactGroupResponseBody(SearchAlertContactGroupResponseBody &&) = default ;
    SearchAlertContactGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAlertContactGroupResponseBody() = default ;
    SearchAlertContactGroupResponseBody& operator=(const SearchAlertContactGroupResponseBody &) = default ;
    SearchAlertContactGroupResponseBody& operator=(SearchAlertContactGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactGroups_ != nullptr
        && this->requestId_ != nullptr; };
    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline const vector<SearchAlertContactGroupResponseBodyContactGroups> & contactGroups() const { DARABONBA_PTR_GET_CONST(contactGroups_, vector<SearchAlertContactGroupResponseBodyContactGroups>) };
    inline vector<SearchAlertContactGroupResponseBodyContactGroups> contactGroups() { DARABONBA_PTR_GET(contactGroups_, vector<SearchAlertContactGroupResponseBodyContactGroups>) };
    inline SearchAlertContactGroupResponseBody& setContactGroups(const vector<SearchAlertContactGroupResponseBodyContactGroups> & contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };
    inline SearchAlertContactGroupResponseBody& setContactGroups(vector<SearchAlertContactGroupResponseBodyContactGroups> && contactGroups) { DARABONBA_PTR_SET_RVALUE(contactGroups_, contactGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchAlertContactGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the alert contact groups.
    std::shared_ptr<vector<SearchAlertContactGroupResponseBodyContactGroups>> contactGroups_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
