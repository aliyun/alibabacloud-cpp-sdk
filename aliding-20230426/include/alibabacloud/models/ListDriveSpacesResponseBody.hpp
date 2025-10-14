// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDRIVESPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDRIVESPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDriveSpacesResponseBodySpaces.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListDriveSpacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDriveSpacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(spaces, spaces_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, ListDriveSpacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(spaces, spaces_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    ListDriveSpacesResponseBody() = default ;
    ListDriveSpacesResponseBody(const ListDriveSpacesResponseBody &) = default ;
    ListDriveSpacesResponseBody(ListDriveSpacesResponseBody &&) = default ;
    ListDriveSpacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDriveSpacesResponseBody() = default ;
    ListDriveSpacesResponseBody& operator=(const ListDriveSpacesResponseBody &) = default ;
    ListDriveSpacesResponseBody& operator=(ListDriveSpacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->requestId_ == nullptr && return this->spaces_ == nullptr && return this->vendorRequestId_ == nullptr && return this->vendorType_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDriveSpacesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDriveSpacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // spaces Field Functions 
    bool hasSpaces() const { return this->spaces_ != nullptr;};
    void deleteSpaces() { this->spaces_ = nullptr;};
    inline const vector<ListDriveSpacesResponseBodySpaces> & spaces() const { DARABONBA_PTR_GET_CONST(spaces_, vector<ListDriveSpacesResponseBodySpaces>) };
    inline vector<ListDriveSpacesResponseBodySpaces> spaces() { DARABONBA_PTR_GET(spaces_, vector<ListDriveSpacesResponseBodySpaces>) };
    inline ListDriveSpacesResponseBody& setSpaces(const vector<ListDriveSpacesResponseBodySpaces> & spaces) { DARABONBA_PTR_SET_VALUE(spaces_, spaces) };
    inline ListDriveSpacesResponseBody& setSpaces(vector<ListDriveSpacesResponseBodySpaces> && spaces) { DARABONBA_PTR_SET_RVALUE(spaces_, spaces) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline ListDriveSpacesResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline ListDriveSpacesResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListDriveSpacesResponseBodySpaces>> spaces_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
