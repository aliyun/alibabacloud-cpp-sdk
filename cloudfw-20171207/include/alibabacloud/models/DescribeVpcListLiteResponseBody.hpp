// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCLISTLITERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCLISTLITERESPONSEBODY_HPP_
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
  class DescribeVpcListLiteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcListLiteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VpcList, vpcList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcListLiteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VpcList, vpcList_);
    };
    DescribeVpcListLiteResponseBody() = default ;
    DescribeVpcListLiteResponseBody(const DescribeVpcListLiteResponseBody &) = default ;
    DescribeVpcListLiteResponseBody(DescribeVpcListLiteResponseBody &&) = default ;
    DescribeVpcListLiteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcListLiteResponseBody() = default ;
    DescribeVpcListLiteResponseBody& operator=(const DescribeVpcListLiteResponseBody &) = default ;
    DescribeVpcListLiteResponseBody& operator=(DescribeVpcListLiteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VpcList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VpcList& obj) { 
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
      };
      friend void from_json(const Darabonba::Json& j, VpcList& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
      };
      VpcList() = default ;
      VpcList(const VpcList &) = default ;
      VpcList(VpcList &&) = default ;
      VpcList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VpcList() = default ;
      VpcList& operator=(const VpcList &) = default ;
      VpcList& operator=(VpcList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->regionNo_ == nullptr
        && this->vpcId_ == nullptr && this->vpcName_ == nullptr; };
      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline VpcList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline VpcList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcName Field Functions 
      bool hasVpcName() const { return this->vpcName_ != nullptr;};
      void deleteVpcName() { this->vpcName_ = nullptr;};
      inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
      inline VpcList& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


    protected:
      // The region ID of the VPC.
      shared_ptr<string> regionNo_ {};
      // The ID of the VPC.
      shared_ptr<string> vpcId_ {};
      // The name of the VPC.
      shared_ptr<string> vpcName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->vpcList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcListLiteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vpcList Field Functions 
    bool hasVpcList() const { return this->vpcList_ != nullptr;};
    void deleteVpcList() { this->vpcList_ = nullptr;};
    inline const vector<DescribeVpcListLiteResponseBody::VpcList> & getVpcList() const { DARABONBA_PTR_GET_CONST(vpcList_, vector<DescribeVpcListLiteResponseBody::VpcList>) };
    inline vector<DescribeVpcListLiteResponseBody::VpcList> getVpcList() { DARABONBA_PTR_GET(vpcList_, vector<DescribeVpcListLiteResponseBody::VpcList>) };
    inline DescribeVpcListLiteResponseBody& setVpcList(const vector<DescribeVpcListLiteResponseBody::VpcList> & vpcList) { DARABONBA_PTR_SET_VALUE(vpcList_, vpcList) };
    inline DescribeVpcListLiteResponseBody& setVpcList(vector<DescribeVpcListLiteResponseBody::VpcList> && vpcList) { DARABONBA_PTR_SET_RVALUE(vpcList_, vpcList) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the VPCs.
    shared_ptr<vector<DescribeVpcListLiteResponseBody::VpcList>> vpcList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
