// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMADDRATTRIBUTEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMADDRATTRIBUTEINFORESPONSEBODY_HPP_
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
  class DescribeDnsGtmAddrAttributeInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAddrAttributeInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Addr, addr_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAddrAttributeInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Addr, addr_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDnsGtmAddrAttributeInfoResponseBody() = default ;
    DescribeDnsGtmAddrAttributeInfoResponseBody(const DescribeDnsGtmAddrAttributeInfoResponseBody &) = default ;
    DescribeDnsGtmAddrAttributeInfoResponseBody(DescribeDnsGtmAddrAttributeInfoResponseBody &&) = default ;
    DescribeDnsGtmAddrAttributeInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAddrAttributeInfoResponseBody() = default ;
    DescribeDnsGtmAddrAttributeInfoResponseBody& operator=(const DescribeDnsGtmAddrAttributeInfoResponseBody &) = default ;
    DescribeDnsGtmAddrAttributeInfoResponseBody& operator=(DescribeDnsGtmAddrAttributeInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Addr : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Addr& obj) { 
        DARABONBA_PTR_TO_JSON(Addr, addr_);
      };
      friend void from_json(const Darabonba::Json& j, Addr& obj) { 
        DARABONBA_PTR_FROM_JSON(Addr, addr_);
      };
      Addr() = default ;
      Addr(const Addr &) = default ;
      Addr(Addr &&) = default ;
      Addr(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Addr() = default ;
      Addr& operator=(const Addr &) = default ;
      Addr& operator=(Addr &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AddrItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AddrItem& obj) { 
          DARABONBA_PTR_TO_JSON(Addr, addr_);
          DARABONBA_PTR_TO_JSON(AttributeInfo, attributeInfo_);
        };
        friend void from_json(const Darabonba::Json& j, AddrItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Addr, addr_);
          DARABONBA_PTR_FROM_JSON(AttributeInfo, attributeInfo_);
        };
        AddrItem() = default ;
        AddrItem(const AddrItem &) = default ;
        AddrItem(AddrItem &&) = default ;
        AddrItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AddrItem() = default ;
        AddrItem& operator=(const AddrItem &) = default ;
        AddrItem& operator=(AddrItem &&) = default ;
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
          // The name of the source region group.
          shared_ptr<string> groupName_ {};
          // The line code of the source region.
          shared_ptr<string> lineCode_ {};
          // The line name of the source region.
          shared_ptr<string> lineName_ {};
        };

        virtual bool empty() const override { return this->addr_ == nullptr
        && this->attributeInfo_ == nullptr; };
        // addr Field Functions 
        bool hasAddr() const { return this->addr_ != nullptr;};
        void deleteAddr() { this->addr_ = nullptr;};
        inline string getAddr() const { DARABONBA_PTR_GET_DEFAULT(addr_, "") };
        inline AddrItem& setAddr(string addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };


        // attributeInfo Field Functions 
        bool hasAttributeInfo() const { return this->attributeInfo_ != nullptr;};
        void deleteAttributeInfo() { this->attributeInfo_ = nullptr;};
        inline const AddrItem::AttributeInfo & getAttributeInfo() const { DARABONBA_PTR_GET_CONST(attributeInfo_, AddrItem::AttributeInfo) };
        inline AddrItem::AttributeInfo getAttributeInfo() { DARABONBA_PTR_GET(attributeInfo_, AddrItem::AttributeInfo) };
        inline AddrItem& setAttributeInfo(const AddrItem::AttributeInfo & attributeInfo) { DARABONBA_PTR_SET_VALUE(attributeInfo_, attributeInfo) };
        inline AddrItem& setAttributeInfo(AddrItem::AttributeInfo && attributeInfo) { DARABONBA_PTR_SET_RVALUE(attributeInfo_, attributeInfo) };


      protected:
        // The address in the address pool.
        shared_ptr<string> addr_ {};
        // The information about the source region of the address.
        shared_ptr<AddrItem::AttributeInfo> attributeInfo_ {};
      };

      virtual bool empty() const override { return this->addr_ == nullptr; };
      // addr Field Functions 
      bool hasAddr() const { return this->addr_ != nullptr;};
      void deleteAddr() { this->addr_ = nullptr;};
      inline const vector<Addr::AddrItem> & getAddr() const { DARABONBA_PTR_GET_CONST(addr_, vector<Addr::AddrItem>) };
      inline vector<Addr::AddrItem> getAddr() { DARABONBA_PTR_GET(addr_, vector<Addr::AddrItem>) };
      inline Addr& setAddr(const vector<Addr::AddrItem> & addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };
      inline Addr& setAddr(vector<Addr::AddrItem> && addr) { DARABONBA_PTR_SET_RVALUE(addr_, addr) };


    protected:
      shared_ptr<vector<Addr::AddrItem>> addr_ {};
    };

    virtual bool empty() const override { return this->addr_ == nullptr
        && this->requestId_ == nullptr; };
    // addr Field Functions 
    bool hasAddr() const { return this->addr_ != nullptr;};
    void deleteAddr() { this->addr_ = nullptr;};
    inline const DescribeDnsGtmAddrAttributeInfoResponseBody::Addr & getAddr() const { DARABONBA_PTR_GET_CONST(addr_, DescribeDnsGtmAddrAttributeInfoResponseBody::Addr) };
    inline DescribeDnsGtmAddrAttributeInfoResponseBody::Addr getAddr() { DARABONBA_PTR_GET(addr_, DescribeDnsGtmAddrAttributeInfoResponseBody::Addr) };
    inline DescribeDnsGtmAddrAttributeInfoResponseBody& setAddr(const DescribeDnsGtmAddrAttributeInfoResponseBody::Addr & addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };
    inline DescribeDnsGtmAddrAttributeInfoResponseBody& setAddr(DescribeDnsGtmAddrAttributeInfoResponseBody::Addr && addr) { DARABONBA_PTR_SET_RVALUE(addr_, addr) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsGtmAddrAttributeInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The address in the address pool.
    shared_ptr<DescribeDnsGtmAddrAttributeInfoResponseBody::Addr> addr_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
