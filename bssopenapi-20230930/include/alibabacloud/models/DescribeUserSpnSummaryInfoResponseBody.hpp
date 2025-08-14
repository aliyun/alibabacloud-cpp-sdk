// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSPNSUMMARYINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSPNSUMMARYINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUserSpnSummaryInfoResponseBodyRegionList.hpp>
#include <alibabacloud/models/DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class DescribeUserSpnSummaryInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserSpnSummaryInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceFamilyList, instanceFamilyList_);
      DARABONBA_PTR_TO_JSON(RegionList, regionList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SpnCodeAndTypeList, spnCodeAndTypeList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserSpnSummaryInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceFamilyList, instanceFamilyList_);
      DARABONBA_PTR_FROM_JSON(RegionList, regionList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SpnCodeAndTypeList, spnCodeAndTypeList_);
    };
    DescribeUserSpnSummaryInfoResponseBody() = default ;
    DescribeUserSpnSummaryInfoResponseBody(const DescribeUserSpnSummaryInfoResponseBody &) = default ;
    DescribeUserSpnSummaryInfoResponseBody(DescribeUserSpnSummaryInfoResponseBody &&) = default ;
    DescribeUserSpnSummaryInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserSpnSummaryInfoResponseBody() = default ;
    DescribeUserSpnSummaryInfoResponseBody& operator=(const DescribeUserSpnSummaryInfoResponseBody &) = default ;
    DescribeUserSpnSummaryInfoResponseBody& operator=(DescribeUserSpnSummaryInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceFamilyList_ != nullptr
        && this->regionList_ != nullptr && this->requestId_ != nullptr && this->spnCodeAndTypeList_ != nullptr; };
    // instanceFamilyList Field Functions 
    bool hasInstanceFamilyList() const { return this->instanceFamilyList_ != nullptr;};
    void deleteInstanceFamilyList() { this->instanceFamilyList_ = nullptr;};
    inline const vector<string> & instanceFamilyList() const { DARABONBA_PTR_GET_CONST(instanceFamilyList_, vector<string>) };
    inline vector<string> instanceFamilyList() { DARABONBA_PTR_GET(instanceFamilyList_, vector<string>) };
    inline DescribeUserSpnSummaryInfoResponseBody& setInstanceFamilyList(const vector<string> & instanceFamilyList) { DARABONBA_PTR_SET_VALUE(instanceFamilyList_, instanceFamilyList) };
    inline DescribeUserSpnSummaryInfoResponseBody& setInstanceFamilyList(vector<string> && instanceFamilyList) { DARABONBA_PTR_SET_RVALUE(instanceFamilyList_, instanceFamilyList) };


    // regionList Field Functions 
    bool hasRegionList() const { return this->regionList_ != nullptr;};
    void deleteRegionList() { this->regionList_ = nullptr;};
    inline const vector<DescribeUserSpnSummaryInfoResponseBodyRegionList> & regionList() const { DARABONBA_PTR_GET_CONST(regionList_, vector<DescribeUserSpnSummaryInfoResponseBodyRegionList>) };
    inline vector<DescribeUserSpnSummaryInfoResponseBodyRegionList> regionList() { DARABONBA_PTR_GET(regionList_, vector<DescribeUserSpnSummaryInfoResponseBodyRegionList>) };
    inline DescribeUserSpnSummaryInfoResponseBody& setRegionList(const vector<DescribeUserSpnSummaryInfoResponseBodyRegionList> & regionList) { DARABONBA_PTR_SET_VALUE(regionList_, regionList) };
    inline DescribeUserSpnSummaryInfoResponseBody& setRegionList(vector<DescribeUserSpnSummaryInfoResponseBodyRegionList> && regionList) { DARABONBA_PTR_SET_RVALUE(regionList_, regionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserSpnSummaryInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // spnCodeAndTypeList Field Functions 
    bool hasSpnCodeAndTypeList() const { return this->spnCodeAndTypeList_ != nullptr;};
    void deleteSpnCodeAndTypeList() { this->spnCodeAndTypeList_ = nullptr;};
    inline const vector<DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList> & spnCodeAndTypeList() const { DARABONBA_PTR_GET_CONST(spnCodeAndTypeList_, vector<DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList>) };
    inline vector<DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList> spnCodeAndTypeList() { DARABONBA_PTR_GET(spnCodeAndTypeList_, vector<DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList>) };
    inline DescribeUserSpnSummaryInfoResponseBody& setSpnCodeAndTypeList(const vector<DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList> & spnCodeAndTypeList) { DARABONBA_PTR_SET_VALUE(spnCodeAndTypeList_, spnCodeAndTypeList) };
    inline DescribeUserSpnSummaryInfoResponseBody& setSpnCodeAndTypeList(vector<DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList> && spnCodeAndTypeList) { DARABONBA_PTR_SET_RVALUE(spnCodeAndTypeList_, spnCodeAndTypeList) };


  protected:
    std::shared_ptr<vector<string>> instanceFamilyList_ = nullptr;
    std::shared_ptr<vector<DescribeUserSpnSummaryInfoResponseBodyRegionList>> regionList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList>> spnCodeAndTypeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
