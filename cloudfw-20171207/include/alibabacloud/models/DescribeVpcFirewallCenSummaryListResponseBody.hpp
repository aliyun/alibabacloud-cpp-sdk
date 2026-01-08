// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENSUMMARYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENSUMMARYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallCenSummaryListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallCenSummaryListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CenList, cenList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallCenSummaryListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CenList, cenList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeVpcFirewallCenSummaryListResponseBody() = default ;
    DescribeVpcFirewallCenSummaryListResponseBody(const DescribeVpcFirewallCenSummaryListResponseBody &) = default ;
    DescribeVpcFirewallCenSummaryListResponseBody(DescribeVpcFirewallCenSummaryListResponseBody &&) = default ;
    DescribeVpcFirewallCenSummaryListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallCenSummaryListResponseBody() = default ;
    DescribeVpcFirewallCenSummaryListResponseBody& operator=(const DescribeVpcFirewallCenSummaryListResponseBody &) = default ;
    DescribeVpcFirewallCenSummaryListResponseBody& operator=(DescribeVpcFirewallCenSummaryListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CenList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CenList& obj) { 
        DARABONBA_PTR_TO_JSON(CenId, cenId_);
        DARABONBA_PTR_TO_JSON(CenName, cenName_);
        DARABONBA_PTR_TO_JSON(RegionNoList, regionNoList_);
      };
      friend void from_json(const Darabonba::Json& j, CenList& obj) { 
        DARABONBA_PTR_FROM_JSON(CenId, cenId_);
        DARABONBA_PTR_FROM_JSON(CenName, cenName_);
        DARABONBA_PTR_FROM_JSON(RegionNoList, regionNoList_);
      };
      CenList() = default ;
      CenList(const CenList &) = default ;
      CenList(CenList &&) = default ;
      CenList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CenList() = default ;
      CenList& operator=(const CenList &) = default ;
      CenList& operator=(CenList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cenId_ == nullptr
        && this->cenName_ == nullptr && this->regionNoList_ == nullptr; };
      // cenId Field Functions 
      bool hasCenId() const { return this->cenId_ != nullptr;};
      void deleteCenId() { this->cenId_ = nullptr;};
      inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
      inline CenList& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


      // cenName Field Functions 
      bool hasCenName() const { return this->cenName_ != nullptr;};
      void deleteCenName() { this->cenName_ = nullptr;};
      inline string getCenName() const { DARABONBA_PTR_GET_DEFAULT(cenName_, "") };
      inline CenList& setCenName(string cenName) { DARABONBA_PTR_SET_VALUE(cenName_, cenName) };


      // regionNoList Field Functions 
      bool hasRegionNoList() const { return this->regionNoList_ != nullptr;};
      void deleteRegionNoList() { this->regionNoList_ = nullptr;};
      inline const vector<string> & getRegionNoList() const { DARABONBA_PTR_GET_CONST(regionNoList_, vector<string>) };
      inline vector<string> getRegionNoList() { DARABONBA_PTR_GET(regionNoList_, vector<string>) };
      inline CenList& setRegionNoList(const vector<string> & regionNoList) { DARABONBA_PTR_SET_VALUE(regionNoList_, regionNoList) };
      inline CenList& setRegionNoList(vector<string> && regionNoList) { DARABONBA_PTR_SET_RVALUE(regionNoList_, regionNoList) };


    protected:
      shared_ptr<string> cenId_ {};
      shared_ptr<string> cenName_ {};
      shared_ptr<vector<string>> regionNoList_ {};
    };

    virtual bool empty() const override { return this->cenList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // cenList Field Functions 
    bool hasCenList() const { return this->cenList_ != nullptr;};
    void deleteCenList() { this->cenList_ = nullptr;};
    inline const vector<DescribeVpcFirewallCenSummaryListResponseBody::CenList> & getCenList() const { DARABONBA_PTR_GET_CONST(cenList_, vector<DescribeVpcFirewallCenSummaryListResponseBody::CenList>) };
    inline vector<DescribeVpcFirewallCenSummaryListResponseBody::CenList> getCenList() { DARABONBA_PTR_GET(cenList_, vector<DescribeVpcFirewallCenSummaryListResponseBody::CenList>) };
    inline DescribeVpcFirewallCenSummaryListResponseBody& setCenList(const vector<DescribeVpcFirewallCenSummaryListResponseBody::CenList> & cenList) { DARABONBA_PTR_SET_VALUE(cenList_, cenList) };
    inline DescribeVpcFirewallCenSummaryListResponseBody& setCenList(vector<DescribeVpcFirewallCenSummaryListResponseBody::CenList> && cenList) { DARABONBA_PTR_SET_RVALUE(cenList_, cenList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcFirewallCenSummaryListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVpcFirewallCenSummaryListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeVpcFirewallCenSummaryListResponseBody::CenList>> cenList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
