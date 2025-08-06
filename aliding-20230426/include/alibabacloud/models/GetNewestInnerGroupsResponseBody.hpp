// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNEWESTINNERGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNEWESTINNERGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetNewestInnerGroupsResponseBodyGroupInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetNewestInnerGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNewestInnerGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(groupInfos, groupInfos_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetNewestInnerGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(groupInfos, groupInfos_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetNewestInnerGroupsResponseBody() = default ;
    GetNewestInnerGroupsResponseBody(const GetNewestInnerGroupsResponseBody &) = default ;
    GetNewestInnerGroupsResponseBody(GetNewestInnerGroupsResponseBody &&) = default ;
    GetNewestInnerGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNewestInnerGroupsResponseBody() = default ;
    GetNewestInnerGroupsResponseBody& operator=(const GetNewestInnerGroupsResponseBody &) = default ;
    GetNewestInnerGroupsResponseBody& operator=(GetNewestInnerGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupInfos_ != nullptr
        && this->requestId_ != nullptr && this->vendorRequestId_ != nullptr && this->vendorType_ != nullptr; };
    // groupInfos Field Functions 
    bool hasGroupInfos() const { return this->groupInfos_ != nullptr;};
    void deleteGroupInfos() { this->groupInfos_ = nullptr;};
    inline const vector<GetNewestInnerGroupsResponseBodyGroupInfos> & groupInfos() const { DARABONBA_PTR_GET_CONST(groupInfos_, vector<GetNewestInnerGroupsResponseBodyGroupInfos>) };
    inline vector<GetNewestInnerGroupsResponseBodyGroupInfos> groupInfos() { DARABONBA_PTR_GET(groupInfos_, vector<GetNewestInnerGroupsResponseBodyGroupInfos>) };
    inline GetNewestInnerGroupsResponseBody& setGroupInfos(const vector<GetNewestInnerGroupsResponseBodyGroupInfos> & groupInfos) { DARABONBA_PTR_SET_VALUE(groupInfos_, groupInfos) };
    inline GetNewestInnerGroupsResponseBody& setGroupInfos(vector<GetNewestInnerGroupsResponseBodyGroupInfos> && groupInfos) { DARABONBA_PTR_SET_RVALUE(groupInfos_, groupInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNewestInnerGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetNewestInnerGroupsResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetNewestInnerGroupsResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<vector<GetNewestInnerGroupsResponseBodyGroupInfos>> groupInfos_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
