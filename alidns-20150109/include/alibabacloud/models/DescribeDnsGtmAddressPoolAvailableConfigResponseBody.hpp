// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMADDRESSPOOLAVAILABLECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMADDRESSPOOLAVAILABLECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmAddressPoolAvailableConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAddressPoolAvailableConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttributeInfos, attributeInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAddressPoolAvailableConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttributeInfos, attributeInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDnsGtmAddressPoolAvailableConfigResponseBody() = default ;
    DescribeDnsGtmAddressPoolAvailableConfigResponseBody(const DescribeDnsGtmAddressPoolAvailableConfigResponseBody &) = default ;
    DescribeDnsGtmAddressPoolAvailableConfigResponseBody(DescribeDnsGtmAddressPoolAvailableConfigResponseBody &&) = default ;
    DescribeDnsGtmAddressPoolAvailableConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAddressPoolAvailableConfigResponseBody() = default ;
    DescribeDnsGtmAddressPoolAvailableConfigResponseBody& operator=(const DescribeDnsGtmAddressPoolAvailableConfigResponseBody &) = default ;
    DescribeDnsGtmAddressPoolAvailableConfigResponseBody& operator=(DescribeDnsGtmAddressPoolAvailableConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttributeInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttributeInfos& obj) { 
        DARABONBA_PTR_TO_JSON(AttributeInfo, attributeInfo_);
      };
      friend void from_json(const Darabonba::Json& j, AttributeInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(AttributeInfo, attributeInfo_);
      };
      AttributeInfos() = default ;
      AttributeInfos(const AttributeInfos &) = default ;
      AttributeInfos(AttributeInfos &&) = default ;
      AttributeInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttributeInfos() = default ;
      AttributeInfos& operator=(const AttributeInfos &) = default ;
      AttributeInfos& operator=(AttributeInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AttributeInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AttributeInfo& obj) { 
          DARABONBA_PTR_TO_JSON(FatherCode, fatherCode_);
          DARABONBA_PTR_TO_JSON(GroupCode, groupCode_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(LineCode, lineCode_);
          DARABONBA_PTR_TO_JSON(LineName, lineName_);
        };
        friend void from_json(const Darabonba::Json& j, AttributeInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(FatherCode, fatherCode_);
          DARABONBA_PTR_FROM_JSON(GroupCode, groupCode_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(LineCode, lineCode_);
          DARABONBA_PTR_FROM_JSON(LineName, lineName_);
        };
        AttributeInfo() = default ;
        AttributeInfo(const AttributeInfo &) = default ;
        AttributeInfo(AttributeInfo &&) = default ;
        AttributeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AttributeInfo() = default ;
        AttributeInfo& operator=(const AttributeInfo &) = default ;
        AttributeInfo& operator=(AttributeInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fatherCode_ == nullptr
        && this->groupCode_ == nullptr && this->groupName_ == nullptr && this->lineCode_ == nullptr && this->lineName_ == nullptr; };
        // fatherCode Field Functions 
        bool hasFatherCode() const { return this->fatherCode_ != nullptr;};
        void deleteFatherCode() { this->fatherCode_ = nullptr;};
        inline string getFatherCode() const { DARABONBA_PTR_GET_DEFAULT(fatherCode_, "") };
        inline AttributeInfo& setFatherCode(string fatherCode) { DARABONBA_PTR_SET_VALUE(fatherCode_, fatherCode) };


        // groupCode Field Functions 
        bool hasGroupCode() const { return this->groupCode_ != nullptr;};
        void deleteGroupCode() { this->groupCode_ = nullptr;};
        inline string getGroupCode() const { DARABONBA_PTR_GET_DEFAULT(groupCode_, "") };
        inline AttributeInfo& setGroupCode(string groupCode) { DARABONBA_PTR_SET_VALUE(groupCode_, groupCode) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline AttributeInfo& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // lineCode Field Functions 
        bool hasLineCode() const { return this->lineCode_ != nullptr;};
        void deleteLineCode() { this->lineCode_ = nullptr;};
        inline string getLineCode() const { DARABONBA_PTR_GET_DEFAULT(lineCode_, "") };
        inline AttributeInfo& setLineCode(string lineCode) { DARABONBA_PTR_SET_VALUE(lineCode_, lineCode) };


        // lineName Field Functions 
        bool hasLineName() const { return this->lineName_ != nullptr;};
        void deleteLineName() { this->lineName_ = nullptr;};
        inline string getLineName() const { DARABONBA_PTR_GET_DEFAULT(lineName_, "") };
        inline AttributeInfo& setLineName(string lineName) { DARABONBA_PTR_SET_VALUE(lineName_, lineName) };


      protected:
        // The parent line code of the source region.
        shared_ptr<string> fatherCode_ {};
        // The code of the source region group.
        shared_ptr<string> groupCode_ {};
        // The name of the request source group.
        shared_ptr<string> groupName_ {};
        // The line code of the source region.
        shared_ptr<string> lineCode_ {};
        // The line name of the source region.
        shared_ptr<string> lineName_ {};
      };

      virtual bool empty() const override { return this->attributeInfo_ == nullptr; };
      // attributeInfo Field Functions 
      bool hasAttributeInfo() const { return this->attributeInfo_ != nullptr;};
      void deleteAttributeInfo() { this->attributeInfo_ = nullptr;};
      inline const vector<AttributeInfos::AttributeInfo> & getAttributeInfo() const { DARABONBA_PTR_GET_CONST(attributeInfo_, vector<AttributeInfos::AttributeInfo>) };
      inline vector<AttributeInfos::AttributeInfo> getAttributeInfo() { DARABONBA_PTR_GET(attributeInfo_, vector<AttributeInfos::AttributeInfo>) };
      inline AttributeInfos& setAttributeInfo(const vector<AttributeInfos::AttributeInfo> & attributeInfo) { DARABONBA_PTR_SET_VALUE(attributeInfo_, attributeInfo) };
      inline AttributeInfos& setAttributeInfo(vector<AttributeInfos::AttributeInfo> && attributeInfo) { DARABONBA_PTR_SET_RVALUE(attributeInfo_, attributeInfo) };


    protected:
      shared_ptr<vector<AttributeInfos::AttributeInfo>> attributeInfo_ {};
    };

    virtual bool empty() const override { return this->attributeInfos_ == nullptr
        && this->requestId_ == nullptr; };
    // attributeInfos Field Functions 
    bool hasAttributeInfos() const { return this->attributeInfos_ != nullptr;};
    void deleteAttributeInfos() { this->attributeInfos_ = nullptr;};
    inline const DescribeDnsGtmAddressPoolAvailableConfigResponseBody::AttributeInfos & getAttributeInfos() const { DARABONBA_PTR_GET_CONST(attributeInfos_, DescribeDnsGtmAddressPoolAvailableConfigResponseBody::AttributeInfos) };
    inline DescribeDnsGtmAddressPoolAvailableConfigResponseBody::AttributeInfos getAttributeInfos() { DARABONBA_PTR_GET(attributeInfos_, DescribeDnsGtmAddressPoolAvailableConfigResponseBody::AttributeInfos) };
    inline DescribeDnsGtmAddressPoolAvailableConfigResponseBody& setAttributeInfos(const DescribeDnsGtmAddressPoolAvailableConfigResponseBody::AttributeInfos & attributeInfos) { DARABONBA_PTR_SET_VALUE(attributeInfos_, attributeInfos) };
    inline DescribeDnsGtmAddressPoolAvailableConfigResponseBody& setAttributeInfos(DescribeDnsGtmAddressPoolAvailableConfigResponseBody::AttributeInfos && attributeInfos) { DARABONBA_PTR_SET_RVALUE(attributeInfos_, attributeInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsGtmAddressPoolAvailableConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The supported source regions.
    shared_ptr<DescribeDnsGtmAddressPoolAvailableConfigResponseBody::AttributeInfos> attributeInfos_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
