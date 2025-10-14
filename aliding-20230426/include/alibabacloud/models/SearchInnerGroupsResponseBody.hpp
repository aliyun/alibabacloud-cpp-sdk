// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHINNERGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHINNERGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchInnerGroupsResponseBodyGroupInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SearchInnerGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchInnerGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(groupInfos, groupInfos_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, SearchInnerGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(groupInfos, groupInfos_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    SearchInnerGroupsResponseBody() = default ;
    SearchInnerGroupsResponseBody(const SearchInnerGroupsResponseBody &) = default ;
    SearchInnerGroupsResponseBody(SearchInnerGroupsResponseBody &&) = default ;
    SearchInnerGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchInnerGroupsResponseBody() = default ;
    SearchInnerGroupsResponseBody& operator=(const SearchInnerGroupsResponseBody &) = default ;
    SearchInnerGroupsResponseBody& operator=(SearchInnerGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupInfos_ == nullptr
        && return this->requestId_ == nullptr && return this->vendorRequestId_ == nullptr && return this->vendorType_ == nullptr; };
    // groupInfos Field Functions 
    bool hasGroupInfos() const { return this->groupInfos_ != nullptr;};
    void deleteGroupInfos() { this->groupInfos_ = nullptr;};
    inline const vector<SearchInnerGroupsResponseBodyGroupInfos> & groupInfos() const { DARABONBA_PTR_GET_CONST(groupInfos_, vector<SearchInnerGroupsResponseBodyGroupInfos>) };
    inline vector<SearchInnerGroupsResponseBodyGroupInfos> groupInfos() { DARABONBA_PTR_GET(groupInfos_, vector<SearchInnerGroupsResponseBodyGroupInfos>) };
    inline SearchInnerGroupsResponseBody& setGroupInfos(const vector<SearchInnerGroupsResponseBodyGroupInfos> & groupInfos) { DARABONBA_PTR_SET_VALUE(groupInfos_, groupInfos) };
    inline SearchInnerGroupsResponseBody& setGroupInfos(vector<SearchInnerGroupsResponseBodyGroupInfos> && groupInfos) { DARABONBA_PTR_SET_RVALUE(groupInfos_, groupInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchInnerGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline SearchInnerGroupsResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline SearchInnerGroupsResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<vector<SearchInnerGroupsResponseBodyGroupInfos>> groupInfos_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
