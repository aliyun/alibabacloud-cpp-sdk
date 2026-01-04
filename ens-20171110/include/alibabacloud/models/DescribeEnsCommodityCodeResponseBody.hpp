// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSCOMMODITYCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSCOMMODITYCODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsCommodityCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsCommodityCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCodeInfo, commodityCodeInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsCommodityCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCodeInfo, commodityCodeInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEnsCommodityCodeResponseBody() = default ;
    DescribeEnsCommodityCodeResponseBody(const DescribeEnsCommodityCodeResponseBody &) = default ;
    DescribeEnsCommodityCodeResponseBody(DescribeEnsCommodityCodeResponseBody &&) = default ;
    DescribeEnsCommodityCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsCommodityCodeResponseBody() = default ;
    DescribeEnsCommodityCodeResponseBody& operator=(const DescribeEnsCommodityCodeResponseBody &) = default ;
    DescribeEnsCommodityCodeResponseBody& operator=(DescribeEnsCommodityCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CommodityCodeInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CommodityCodeInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
      };
      friend void from_json(const Darabonba::Json& j, CommodityCodeInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
      };
      CommodityCodeInfo() = default ;
      CommodityCodeInfo(const CommodityCodeInfo &) = default ;
      CommodityCodeInfo(CommodityCodeInfo &&) = default ;
      CommodityCodeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CommodityCodeInfo() = default ;
      CommodityCodeInfo& operator=(const CommodityCodeInfo &) = default ;
      CommodityCodeInfo& operator=(CommodityCodeInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->commodityCode_ == nullptr
        && this->commodityName_ == nullptr; };
      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline CommodityCodeInfo& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // commodityName Field Functions 
      bool hasCommodityName() const { return this->commodityName_ != nullptr;};
      void deleteCommodityName() { this->commodityName_ = nullptr;};
      inline string getCommodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
      inline CommodityCodeInfo& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


    protected:
      shared_ptr<string> commodityCode_ {};
      shared_ptr<string> commodityName_ {};
    };

    virtual bool empty() const override { return this->commodityCodeInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // commodityCodeInfo Field Functions 
    bool hasCommodityCodeInfo() const { return this->commodityCodeInfo_ != nullptr;};
    void deleteCommodityCodeInfo() { this->commodityCodeInfo_ = nullptr;};
    inline const vector<DescribeEnsCommodityCodeResponseBody::CommodityCodeInfo> & getCommodityCodeInfo() const { DARABONBA_PTR_GET_CONST(commodityCodeInfo_, vector<DescribeEnsCommodityCodeResponseBody::CommodityCodeInfo>) };
    inline vector<DescribeEnsCommodityCodeResponseBody::CommodityCodeInfo> getCommodityCodeInfo() { DARABONBA_PTR_GET(commodityCodeInfo_, vector<DescribeEnsCommodityCodeResponseBody::CommodityCodeInfo>) };
    inline DescribeEnsCommodityCodeResponseBody& setCommodityCodeInfo(const vector<DescribeEnsCommodityCodeResponseBody::CommodityCodeInfo> & commodityCodeInfo) { DARABONBA_PTR_SET_VALUE(commodityCodeInfo_, commodityCodeInfo) };
    inline DescribeEnsCommodityCodeResponseBody& setCommodityCodeInfo(vector<DescribeEnsCommodityCodeResponseBody::CommodityCodeInfo> && commodityCodeInfo) { DARABONBA_PTR_SET_RVALUE(commodityCodeInfo_, commodityCodeInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnsCommodityCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeEnsCommodityCodeResponseBody::CommodityCodeInfo>> commodityCodeInfo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
