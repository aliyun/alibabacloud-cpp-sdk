// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDentriesResponseBodyDentries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListDentriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDentriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(dentries, dentries_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, ListDentriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(dentries, dentries_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    ListDentriesResponseBody() = default ;
    ListDentriesResponseBody(const ListDentriesResponseBody &) = default ;
    ListDentriesResponseBody(ListDentriesResponseBody &&) = default ;
    ListDentriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDentriesResponseBody() = default ;
    ListDentriesResponseBody& operator=(const ListDentriesResponseBody &) = default ;
    ListDentriesResponseBody& operator=(ListDentriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dentries_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->vendorRequestId_ != nullptr && this->vendorType_ != nullptr; };
    // dentries Field Functions 
    bool hasDentries() const { return this->dentries_ != nullptr;};
    void deleteDentries() { this->dentries_ = nullptr;};
    inline const vector<ListDentriesResponseBodyDentries> & dentries() const { DARABONBA_PTR_GET_CONST(dentries_, vector<ListDentriesResponseBodyDentries>) };
    inline vector<ListDentriesResponseBodyDentries> dentries() { DARABONBA_PTR_GET(dentries_, vector<ListDentriesResponseBodyDentries>) };
    inline ListDentriesResponseBody& setDentries(const vector<ListDentriesResponseBodyDentries> & dentries) { DARABONBA_PTR_SET_VALUE(dentries_, dentries) };
    inline ListDentriesResponseBody& setDentries(vector<ListDentriesResponseBodyDentries> && dentries) { DARABONBA_PTR_SET_RVALUE(dentries_, dentries) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDentriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDentriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline ListDentriesResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline ListDentriesResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<vector<ListDentriesResponseBodyDentries>> dentries_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
