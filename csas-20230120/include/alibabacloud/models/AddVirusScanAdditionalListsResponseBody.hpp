// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDVIRUSSCANADDITIONALLISTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDVIRUSSCANADDITIONALLISTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class AddVirusScanAdditionalListsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddVirusScanAdditionalListsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListIds, listIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddVirusScanAdditionalListsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListIds, listIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddVirusScanAdditionalListsResponseBody() = default ;
    AddVirusScanAdditionalListsResponseBody(const AddVirusScanAdditionalListsResponseBody &) = default ;
    AddVirusScanAdditionalListsResponseBody(AddVirusScanAdditionalListsResponseBody &&) = default ;
    AddVirusScanAdditionalListsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddVirusScanAdditionalListsResponseBody() = default ;
    AddVirusScanAdditionalListsResponseBody& operator=(const AddVirusScanAdditionalListsResponseBody &) = default ;
    AddVirusScanAdditionalListsResponseBody& operator=(AddVirusScanAdditionalListsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listIds_ == nullptr
        && this->requestId_ == nullptr; };
    // listIds Field Functions 
    bool hasListIds() const { return this->listIds_ != nullptr;};
    void deleteListIds() { this->listIds_ = nullptr;};
    inline const vector<string> & getListIds() const { DARABONBA_PTR_GET_CONST(listIds_, vector<string>) };
    inline vector<string> getListIds() { DARABONBA_PTR_GET(listIds_, vector<string>) };
    inline AddVirusScanAdditionalListsResponseBody& setListIds(const vector<string> & listIds) { DARABONBA_PTR_SET_VALUE(listIds_, listIds) };
    inline AddVirusScanAdditionalListsResponseBody& setListIds(vector<string> && listIds) { DARABONBA_PTR_SET_RVALUE(listIds_, listIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddVirusScanAdditionalListsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of IDs for the newly added entries. The order is consistent with AdditionalLists in the request.
    shared_ptr<vector<string>> listIds_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
