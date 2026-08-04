// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTDELIVERYADDRESSINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTDELIVERYADDRESSINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class QueryAccountDeliveryAddressInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountDeliveryAddressInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountDeliveryAddressInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryAccountDeliveryAddressInfoResponseBody() = default ;
    QueryAccountDeliveryAddressInfoResponseBody(const QueryAccountDeliveryAddressInfoResponseBody &) = default ;
    QueryAccountDeliveryAddressInfoResponseBody(QueryAccountDeliveryAddressInfoResponseBody &&) = default ;
    QueryAccountDeliveryAddressInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountDeliveryAddressInfoResponseBody() = default ;
    QueryAccountDeliveryAddressInfoResponseBody& operator=(const QueryAccountDeliveryAddressInfoResponseBody &) = default ;
    QueryAccountDeliveryAddressInfoResponseBody& operator=(QueryAccountDeliveryAddressInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Address, address_);
        DARABONBA_PTR_TO_JSON(AreaDivision, areaDivision_);
        DARABONBA_PTR_TO_JSON(AreaId, areaId_);
        DARABONBA_PTR_TO_JSON(CityDivision, cityDivision_);
        DARABONBA_PTR_TO_JSON(CityId, cityId_);
        DARABONBA_PTR_TO_JSON(Contacts, contacts_);
        DARABONBA_PTR_TO_JSON(DefaultAddress, defaultAddress_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(Mobile, mobile_);
        DARABONBA_PTR_TO_JSON(Phone, phone_);
        DARABONBA_PTR_TO_JSON(Pk, pk_);
        DARABONBA_PTR_TO_JSON(Postalcode, postalcode_);
        DARABONBA_PTR_TO_JSON(ProviceDivision, proviceDivision_);
        DARABONBA_PTR_TO_JSON(ProviceId, proviceId_);
        DARABONBA_PTR_TO_JSON(TownDivision, townDivision_);
        DARABONBA_PTR_TO_JSON(TownId, townId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Address, address_);
        DARABONBA_PTR_FROM_JSON(AreaDivision, areaDivision_);
        DARABONBA_PTR_FROM_JSON(AreaId, areaId_);
        DARABONBA_PTR_FROM_JSON(CityDivision, cityDivision_);
        DARABONBA_PTR_FROM_JSON(CityId, cityId_);
        DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
        DARABONBA_PTR_FROM_JSON(DefaultAddress, defaultAddress_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
        DARABONBA_PTR_FROM_JSON(Phone, phone_);
        DARABONBA_PTR_FROM_JSON(Pk, pk_);
        DARABONBA_PTR_FROM_JSON(Postalcode, postalcode_);
        DARABONBA_PTR_FROM_JSON(ProviceDivision, proviceDivision_);
        DARABONBA_PTR_FROM_JSON(ProviceId, proviceId_);
        DARABONBA_PTR_FROM_JSON(TownDivision, townDivision_);
        DARABONBA_PTR_FROM_JSON(TownId, townId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TownDivision : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TownDivision& obj) { 
          DARABONBA_PTR_TO_JSON(DivisionAbbName, divisionAbbName_);
          DARABONBA_PTR_TO_JSON(DivisionId, divisionId_);
          DARABONBA_PTR_TO_JSON(DivisionLevel, divisionLevel_);
          DARABONBA_PTR_TO_JSON(DivisionName, divisionName_);
          DARABONBA_PTR_TO_JSON(DivisionTname, divisionTname_);
          DARABONBA_PTR_TO_JSON(NewDivisionId, newDivisionId_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
          DARABONBA_PTR_TO_JSON(Pinyin, pinyin_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
        };
        friend void from_json(const Darabonba::Json& j, TownDivision& obj) { 
          DARABONBA_PTR_FROM_JSON(DivisionAbbName, divisionAbbName_);
          DARABONBA_PTR_FROM_JSON(DivisionId, divisionId_);
          DARABONBA_PTR_FROM_JSON(DivisionLevel, divisionLevel_);
          DARABONBA_PTR_FROM_JSON(DivisionName, divisionName_);
          DARABONBA_PTR_FROM_JSON(DivisionTname, divisionTname_);
          DARABONBA_PTR_FROM_JSON(NewDivisionId, newDivisionId_);
          DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
          DARABONBA_PTR_FROM_JSON(Pinyin, pinyin_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
        };
        TownDivision() = default ;
        TownDivision(const TownDivision &) = default ;
        TownDivision(TownDivision &&) = default ;
        TownDivision(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TownDivision() = default ;
        TownDivision& operator=(const TownDivision &) = default ;
        TownDivision& operator=(TownDivision &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->divisionAbbName_ == nullptr
        && this->divisionId_ == nullptr && this->divisionLevel_ == nullptr && this->divisionName_ == nullptr && this->divisionTname_ == nullptr && this->newDivisionId_ == nullptr
        && this->parentId_ == nullptr && this->pinyin_ == nullptr && this->remark_ == nullptr; };
        // divisionAbbName Field Functions 
        bool hasDivisionAbbName() const { return this->divisionAbbName_ != nullptr;};
        void deleteDivisionAbbName() { this->divisionAbbName_ = nullptr;};
        inline string getDivisionAbbName() const { DARABONBA_PTR_GET_DEFAULT(divisionAbbName_, "") };
        inline TownDivision& setDivisionAbbName(string divisionAbbName) { DARABONBA_PTR_SET_VALUE(divisionAbbName_, divisionAbbName) };


        // divisionId Field Functions 
        bool hasDivisionId() const { return this->divisionId_ != nullptr;};
        void deleteDivisionId() { this->divisionId_ = nullptr;};
        inline int64_t getDivisionId() const { DARABONBA_PTR_GET_DEFAULT(divisionId_, 0L) };
        inline TownDivision& setDivisionId(int64_t divisionId) { DARABONBA_PTR_SET_VALUE(divisionId_, divisionId) };


        // divisionLevel Field Functions 
        bool hasDivisionLevel() const { return this->divisionLevel_ != nullptr;};
        void deleteDivisionLevel() { this->divisionLevel_ = nullptr;};
        inline int64_t getDivisionLevel() const { DARABONBA_PTR_GET_DEFAULT(divisionLevel_, 0L) };
        inline TownDivision& setDivisionLevel(int64_t divisionLevel) { DARABONBA_PTR_SET_VALUE(divisionLevel_, divisionLevel) };


        // divisionName Field Functions 
        bool hasDivisionName() const { return this->divisionName_ != nullptr;};
        void deleteDivisionName() { this->divisionName_ = nullptr;};
        inline string getDivisionName() const { DARABONBA_PTR_GET_DEFAULT(divisionName_, "") };
        inline TownDivision& setDivisionName(string divisionName) { DARABONBA_PTR_SET_VALUE(divisionName_, divisionName) };


        // divisionTname Field Functions 
        bool hasDivisionTname() const { return this->divisionTname_ != nullptr;};
        void deleteDivisionTname() { this->divisionTname_ = nullptr;};
        inline string getDivisionTname() const { DARABONBA_PTR_GET_DEFAULT(divisionTname_, "") };
        inline TownDivision& setDivisionTname(string divisionTname) { DARABONBA_PTR_SET_VALUE(divisionTname_, divisionTname) };


        // newDivisionId Field Functions 
        bool hasNewDivisionId() const { return this->newDivisionId_ != nullptr;};
        void deleteNewDivisionId() { this->newDivisionId_ = nullptr;};
        inline int64_t getNewDivisionId() const { DARABONBA_PTR_GET_DEFAULT(newDivisionId_, 0L) };
        inline TownDivision& setNewDivisionId(int64_t newDivisionId) { DARABONBA_PTR_SET_VALUE(newDivisionId_, newDivisionId) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
        inline TownDivision& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


        // pinyin Field Functions 
        bool hasPinyin() const { return this->pinyin_ != nullptr;};
        void deletePinyin() { this->pinyin_ = nullptr;};
        inline string getPinyin() const { DARABONBA_PTR_GET_DEFAULT(pinyin_, "") };
        inline TownDivision& setPinyin(string pinyin) { DARABONBA_PTR_SET_VALUE(pinyin_, pinyin) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline TownDivision& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      protected:
        shared_ptr<string> divisionAbbName_ {};
        shared_ptr<int64_t> divisionId_ {};
        shared_ptr<int64_t> divisionLevel_ {};
        shared_ptr<string> divisionName_ {};
        shared_ptr<string> divisionTname_ {};
        shared_ptr<int64_t> newDivisionId_ {};
        shared_ptr<int64_t> parentId_ {};
        shared_ptr<string> pinyin_ {};
        shared_ptr<string> remark_ {};
      };

      class ProviceDivision : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProviceDivision& obj) { 
          DARABONBA_PTR_TO_JSON(DivisionAbbName, divisionAbbName_);
          DARABONBA_PTR_TO_JSON(DivisionId, divisionId_);
          DARABONBA_PTR_TO_JSON(DivisionLevel, divisionLevel_);
          DARABONBA_PTR_TO_JSON(DivisionName, divisionName_);
          DARABONBA_PTR_TO_JSON(DivisionTname, divisionTname_);
          DARABONBA_PTR_TO_JSON(NewDivisionId, newDivisionId_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
          DARABONBA_PTR_TO_JSON(Pinyin, pinyin_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
        };
        friend void from_json(const Darabonba::Json& j, ProviceDivision& obj) { 
          DARABONBA_PTR_FROM_JSON(DivisionAbbName, divisionAbbName_);
          DARABONBA_PTR_FROM_JSON(DivisionId, divisionId_);
          DARABONBA_PTR_FROM_JSON(DivisionLevel, divisionLevel_);
          DARABONBA_PTR_FROM_JSON(DivisionName, divisionName_);
          DARABONBA_PTR_FROM_JSON(DivisionTname, divisionTname_);
          DARABONBA_PTR_FROM_JSON(NewDivisionId, newDivisionId_);
          DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
          DARABONBA_PTR_FROM_JSON(Pinyin, pinyin_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
        };
        ProviceDivision() = default ;
        ProviceDivision(const ProviceDivision &) = default ;
        ProviceDivision(ProviceDivision &&) = default ;
        ProviceDivision(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProviceDivision() = default ;
        ProviceDivision& operator=(const ProviceDivision &) = default ;
        ProviceDivision& operator=(ProviceDivision &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->divisionAbbName_ == nullptr
        && this->divisionId_ == nullptr && this->divisionLevel_ == nullptr && this->divisionName_ == nullptr && this->divisionTname_ == nullptr && this->newDivisionId_ == nullptr
        && this->parentId_ == nullptr && this->pinyin_ == nullptr && this->remark_ == nullptr; };
        // divisionAbbName Field Functions 
        bool hasDivisionAbbName() const { return this->divisionAbbName_ != nullptr;};
        void deleteDivisionAbbName() { this->divisionAbbName_ = nullptr;};
        inline string getDivisionAbbName() const { DARABONBA_PTR_GET_DEFAULT(divisionAbbName_, "") };
        inline ProviceDivision& setDivisionAbbName(string divisionAbbName) { DARABONBA_PTR_SET_VALUE(divisionAbbName_, divisionAbbName) };


        // divisionId Field Functions 
        bool hasDivisionId() const { return this->divisionId_ != nullptr;};
        void deleteDivisionId() { this->divisionId_ = nullptr;};
        inline int64_t getDivisionId() const { DARABONBA_PTR_GET_DEFAULT(divisionId_, 0L) };
        inline ProviceDivision& setDivisionId(int64_t divisionId) { DARABONBA_PTR_SET_VALUE(divisionId_, divisionId) };


        // divisionLevel Field Functions 
        bool hasDivisionLevel() const { return this->divisionLevel_ != nullptr;};
        void deleteDivisionLevel() { this->divisionLevel_ = nullptr;};
        inline int64_t getDivisionLevel() const { DARABONBA_PTR_GET_DEFAULT(divisionLevel_, 0L) };
        inline ProviceDivision& setDivisionLevel(int64_t divisionLevel) { DARABONBA_PTR_SET_VALUE(divisionLevel_, divisionLevel) };


        // divisionName Field Functions 
        bool hasDivisionName() const { return this->divisionName_ != nullptr;};
        void deleteDivisionName() { this->divisionName_ = nullptr;};
        inline string getDivisionName() const { DARABONBA_PTR_GET_DEFAULT(divisionName_, "") };
        inline ProviceDivision& setDivisionName(string divisionName) { DARABONBA_PTR_SET_VALUE(divisionName_, divisionName) };


        // divisionTname Field Functions 
        bool hasDivisionTname() const { return this->divisionTname_ != nullptr;};
        void deleteDivisionTname() { this->divisionTname_ = nullptr;};
        inline string getDivisionTname() const { DARABONBA_PTR_GET_DEFAULT(divisionTname_, "") };
        inline ProviceDivision& setDivisionTname(string divisionTname) { DARABONBA_PTR_SET_VALUE(divisionTname_, divisionTname) };


        // newDivisionId Field Functions 
        bool hasNewDivisionId() const { return this->newDivisionId_ != nullptr;};
        void deleteNewDivisionId() { this->newDivisionId_ = nullptr;};
        inline int64_t getNewDivisionId() const { DARABONBA_PTR_GET_DEFAULT(newDivisionId_, 0L) };
        inline ProviceDivision& setNewDivisionId(int64_t newDivisionId) { DARABONBA_PTR_SET_VALUE(newDivisionId_, newDivisionId) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
        inline ProviceDivision& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


        // pinyin Field Functions 
        bool hasPinyin() const { return this->pinyin_ != nullptr;};
        void deletePinyin() { this->pinyin_ = nullptr;};
        inline string getPinyin() const { DARABONBA_PTR_GET_DEFAULT(pinyin_, "") };
        inline ProviceDivision& setPinyin(string pinyin) { DARABONBA_PTR_SET_VALUE(pinyin_, pinyin) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline ProviceDivision& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      protected:
        shared_ptr<string> divisionAbbName_ {};
        shared_ptr<int64_t> divisionId_ {};
        shared_ptr<int64_t> divisionLevel_ {};
        shared_ptr<string> divisionName_ {};
        shared_ptr<string> divisionTname_ {};
        shared_ptr<int64_t> newDivisionId_ {};
        shared_ptr<int64_t> parentId_ {};
        shared_ptr<string> pinyin_ {};
        shared_ptr<string> remark_ {};
      };

      class CityDivision : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CityDivision& obj) { 
          DARABONBA_PTR_TO_JSON(DivisionAbbName, divisionAbbName_);
          DARABONBA_PTR_TO_JSON(DivisionId, divisionId_);
          DARABONBA_PTR_TO_JSON(DivisionLevel, divisionLevel_);
          DARABONBA_PTR_TO_JSON(DivisionName, divisionName_);
          DARABONBA_PTR_TO_JSON(DivisionTname, divisionTname_);
          DARABONBA_PTR_TO_JSON(NewDivisionId, newDivisionId_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
          DARABONBA_PTR_TO_JSON(Pinyin, pinyin_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
        };
        friend void from_json(const Darabonba::Json& j, CityDivision& obj) { 
          DARABONBA_PTR_FROM_JSON(DivisionAbbName, divisionAbbName_);
          DARABONBA_PTR_FROM_JSON(DivisionId, divisionId_);
          DARABONBA_PTR_FROM_JSON(DivisionLevel, divisionLevel_);
          DARABONBA_PTR_FROM_JSON(DivisionName, divisionName_);
          DARABONBA_PTR_FROM_JSON(DivisionTname, divisionTname_);
          DARABONBA_PTR_FROM_JSON(NewDivisionId, newDivisionId_);
          DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
          DARABONBA_PTR_FROM_JSON(Pinyin, pinyin_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
        };
        CityDivision() = default ;
        CityDivision(const CityDivision &) = default ;
        CityDivision(CityDivision &&) = default ;
        CityDivision(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CityDivision() = default ;
        CityDivision& operator=(const CityDivision &) = default ;
        CityDivision& operator=(CityDivision &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->divisionAbbName_ == nullptr
        && this->divisionId_ == nullptr && this->divisionLevel_ == nullptr && this->divisionName_ == nullptr && this->divisionTname_ == nullptr && this->newDivisionId_ == nullptr
        && this->parentId_ == nullptr && this->pinyin_ == nullptr && this->remark_ == nullptr; };
        // divisionAbbName Field Functions 
        bool hasDivisionAbbName() const { return this->divisionAbbName_ != nullptr;};
        void deleteDivisionAbbName() { this->divisionAbbName_ = nullptr;};
        inline string getDivisionAbbName() const { DARABONBA_PTR_GET_DEFAULT(divisionAbbName_, "") };
        inline CityDivision& setDivisionAbbName(string divisionAbbName) { DARABONBA_PTR_SET_VALUE(divisionAbbName_, divisionAbbName) };


        // divisionId Field Functions 
        bool hasDivisionId() const { return this->divisionId_ != nullptr;};
        void deleteDivisionId() { this->divisionId_ = nullptr;};
        inline int64_t getDivisionId() const { DARABONBA_PTR_GET_DEFAULT(divisionId_, 0L) };
        inline CityDivision& setDivisionId(int64_t divisionId) { DARABONBA_PTR_SET_VALUE(divisionId_, divisionId) };


        // divisionLevel Field Functions 
        bool hasDivisionLevel() const { return this->divisionLevel_ != nullptr;};
        void deleteDivisionLevel() { this->divisionLevel_ = nullptr;};
        inline int64_t getDivisionLevel() const { DARABONBA_PTR_GET_DEFAULT(divisionLevel_, 0L) };
        inline CityDivision& setDivisionLevel(int64_t divisionLevel) { DARABONBA_PTR_SET_VALUE(divisionLevel_, divisionLevel) };


        // divisionName Field Functions 
        bool hasDivisionName() const { return this->divisionName_ != nullptr;};
        void deleteDivisionName() { this->divisionName_ = nullptr;};
        inline string getDivisionName() const { DARABONBA_PTR_GET_DEFAULT(divisionName_, "") };
        inline CityDivision& setDivisionName(string divisionName) { DARABONBA_PTR_SET_VALUE(divisionName_, divisionName) };


        // divisionTname Field Functions 
        bool hasDivisionTname() const { return this->divisionTname_ != nullptr;};
        void deleteDivisionTname() { this->divisionTname_ = nullptr;};
        inline string getDivisionTname() const { DARABONBA_PTR_GET_DEFAULT(divisionTname_, "") };
        inline CityDivision& setDivisionTname(string divisionTname) { DARABONBA_PTR_SET_VALUE(divisionTname_, divisionTname) };


        // newDivisionId Field Functions 
        bool hasNewDivisionId() const { return this->newDivisionId_ != nullptr;};
        void deleteNewDivisionId() { this->newDivisionId_ = nullptr;};
        inline int64_t getNewDivisionId() const { DARABONBA_PTR_GET_DEFAULT(newDivisionId_, 0L) };
        inline CityDivision& setNewDivisionId(int64_t newDivisionId) { DARABONBA_PTR_SET_VALUE(newDivisionId_, newDivisionId) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
        inline CityDivision& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


        // pinyin Field Functions 
        bool hasPinyin() const { return this->pinyin_ != nullptr;};
        void deletePinyin() { this->pinyin_ = nullptr;};
        inline string getPinyin() const { DARABONBA_PTR_GET_DEFAULT(pinyin_, "") };
        inline CityDivision& setPinyin(string pinyin) { DARABONBA_PTR_SET_VALUE(pinyin_, pinyin) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline CityDivision& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      protected:
        shared_ptr<string> divisionAbbName_ {};
        shared_ptr<int64_t> divisionId_ {};
        shared_ptr<int64_t> divisionLevel_ {};
        shared_ptr<string> divisionName_ {};
        shared_ptr<string> divisionTname_ {};
        shared_ptr<int64_t> newDivisionId_ {};
        shared_ptr<int64_t> parentId_ {};
        shared_ptr<string> pinyin_ {};
        shared_ptr<string> remark_ {};
      };

      class AreaDivision : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AreaDivision& obj) { 
          DARABONBA_PTR_TO_JSON(DivisionAbbName, divisionAbbName_);
          DARABONBA_PTR_TO_JSON(DivisionId, divisionId_);
          DARABONBA_PTR_TO_JSON(DivisionLevel, divisionLevel_);
          DARABONBA_PTR_TO_JSON(DivisionName, divisionName_);
          DARABONBA_PTR_TO_JSON(DivisionTname, divisionTname_);
          DARABONBA_PTR_TO_JSON(NewDivisionId, newDivisionId_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
          DARABONBA_PTR_TO_JSON(Pinyin, pinyin_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
        };
        friend void from_json(const Darabonba::Json& j, AreaDivision& obj) { 
          DARABONBA_PTR_FROM_JSON(DivisionAbbName, divisionAbbName_);
          DARABONBA_PTR_FROM_JSON(DivisionId, divisionId_);
          DARABONBA_PTR_FROM_JSON(DivisionLevel, divisionLevel_);
          DARABONBA_PTR_FROM_JSON(DivisionName, divisionName_);
          DARABONBA_PTR_FROM_JSON(DivisionTname, divisionTname_);
          DARABONBA_PTR_FROM_JSON(NewDivisionId, newDivisionId_);
          DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
          DARABONBA_PTR_FROM_JSON(Pinyin, pinyin_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
        };
        AreaDivision() = default ;
        AreaDivision(const AreaDivision &) = default ;
        AreaDivision(AreaDivision &&) = default ;
        AreaDivision(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AreaDivision() = default ;
        AreaDivision& operator=(const AreaDivision &) = default ;
        AreaDivision& operator=(AreaDivision &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->divisionAbbName_ == nullptr
        && this->divisionId_ == nullptr && this->divisionLevel_ == nullptr && this->divisionName_ == nullptr && this->divisionTname_ == nullptr && this->newDivisionId_ == nullptr
        && this->parentId_ == nullptr && this->pinyin_ == nullptr && this->remark_ == nullptr; };
        // divisionAbbName Field Functions 
        bool hasDivisionAbbName() const { return this->divisionAbbName_ != nullptr;};
        void deleteDivisionAbbName() { this->divisionAbbName_ = nullptr;};
        inline string getDivisionAbbName() const { DARABONBA_PTR_GET_DEFAULT(divisionAbbName_, "") };
        inline AreaDivision& setDivisionAbbName(string divisionAbbName) { DARABONBA_PTR_SET_VALUE(divisionAbbName_, divisionAbbName) };


        // divisionId Field Functions 
        bool hasDivisionId() const { return this->divisionId_ != nullptr;};
        void deleteDivisionId() { this->divisionId_ = nullptr;};
        inline int64_t getDivisionId() const { DARABONBA_PTR_GET_DEFAULT(divisionId_, 0L) };
        inline AreaDivision& setDivisionId(int64_t divisionId) { DARABONBA_PTR_SET_VALUE(divisionId_, divisionId) };


        // divisionLevel Field Functions 
        bool hasDivisionLevel() const { return this->divisionLevel_ != nullptr;};
        void deleteDivisionLevel() { this->divisionLevel_ = nullptr;};
        inline int64_t getDivisionLevel() const { DARABONBA_PTR_GET_DEFAULT(divisionLevel_, 0L) };
        inline AreaDivision& setDivisionLevel(int64_t divisionLevel) { DARABONBA_PTR_SET_VALUE(divisionLevel_, divisionLevel) };


        // divisionName Field Functions 
        bool hasDivisionName() const { return this->divisionName_ != nullptr;};
        void deleteDivisionName() { this->divisionName_ = nullptr;};
        inline string getDivisionName() const { DARABONBA_PTR_GET_DEFAULT(divisionName_, "") };
        inline AreaDivision& setDivisionName(string divisionName) { DARABONBA_PTR_SET_VALUE(divisionName_, divisionName) };


        // divisionTname Field Functions 
        bool hasDivisionTname() const { return this->divisionTname_ != nullptr;};
        void deleteDivisionTname() { this->divisionTname_ = nullptr;};
        inline string getDivisionTname() const { DARABONBA_PTR_GET_DEFAULT(divisionTname_, "") };
        inline AreaDivision& setDivisionTname(string divisionTname) { DARABONBA_PTR_SET_VALUE(divisionTname_, divisionTname) };


        // newDivisionId Field Functions 
        bool hasNewDivisionId() const { return this->newDivisionId_ != nullptr;};
        void deleteNewDivisionId() { this->newDivisionId_ = nullptr;};
        inline int64_t getNewDivisionId() const { DARABONBA_PTR_GET_DEFAULT(newDivisionId_, 0L) };
        inline AreaDivision& setNewDivisionId(int64_t newDivisionId) { DARABONBA_PTR_SET_VALUE(newDivisionId_, newDivisionId) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
        inline AreaDivision& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


        // pinyin Field Functions 
        bool hasPinyin() const { return this->pinyin_ != nullptr;};
        void deletePinyin() { this->pinyin_ = nullptr;};
        inline string getPinyin() const { DARABONBA_PTR_GET_DEFAULT(pinyin_, "") };
        inline AreaDivision& setPinyin(string pinyin) { DARABONBA_PTR_SET_VALUE(pinyin_, pinyin) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline AreaDivision& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      protected:
        shared_ptr<string> divisionAbbName_ {};
        shared_ptr<int64_t> divisionId_ {};
        shared_ptr<int64_t> divisionLevel_ {};
        shared_ptr<string> divisionName_ {};
        shared_ptr<string> divisionTname_ {};
        shared_ptr<int64_t> newDivisionId_ {};
        shared_ptr<int64_t> parentId_ {};
        shared_ptr<string> pinyin_ {};
        shared_ptr<string> remark_ {};
      };

      virtual bool empty() const override { return this->address_ == nullptr
        && this->areaDivision_ == nullptr && this->areaId_ == nullptr && this->cityDivision_ == nullptr && this->cityId_ == nullptr && this->contacts_ == nullptr
        && this->defaultAddress_ == nullptr && this->email_ == nullptr && this->mobile_ == nullptr && this->phone_ == nullptr && this->pk_ == nullptr
        && this->postalcode_ == nullptr && this->proviceDivision_ == nullptr && this->proviceId_ == nullptr && this->townDivision_ == nullptr && this->townId_ == nullptr; };
      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline Data& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


      // areaDivision Field Functions 
      bool hasAreaDivision() const { return this->areaDivision_ != nullptr;};
      void deleteAreaDivision() { this->areaDivision_ = nullptr;};
      inline const Data::AreaDivision & getAreaDivision() const { DARABONBA_PTR_GET_CONST(areaDivision_, Data::AreaDivision) };
      inline Data::AreaDivision getAreaDivision() { DARABONBA_PTR_GET(areaDivision_, Data::AreaDivision) };
      inline Data& setAreaDivision(const Data::AreaDivision & areaDivision) { DARABONBA_PTR_SET_VALUE(areaDivision_, areaDivision) };
      inline Data& setAreaDivision(Data::AreaDivision && areaDivision) { DARABONBA_PTR_SET_RVALUE(areaDivision_, areaDivision) };


      // areaId Field Functions 
      bool hasAreaId() const { return this->areaId_ != nullptr;};
      void deleteAreaId() { this->areaId_ = nullptr;};
      inline string getAreaId() const { DARABONBA_PTR_GET_DEFAULT(areaId_, "") };
      inline Data& setAreaId(string areaId) { DARABONBA_PTR_SET_VALUE(areaId_, areaId) };


      // cityDivision Field Functions 
      bool hasCityDivision() const { return this->cityDivision_ != nullptr;};
      void deleteCityDivision() { this->cityDivision_ = nullptr;};
      inline const Data::CityDivision & getCityDivision() const { DARABONBA_PTR_GET_CONST(cityDivision_, Data::CityDivision) };
      inline Data::CityDivision getCityDivision() { DARABONBA_PTR_GET(cityDivision_, Data::CityDivision) };
      inline Data& setCityDivision(const Data::CityDivision & cityDivision) { DARABONBA_PTR_SET_VALUE(cityDivision_, cityDivision) };
      inline Data& setCityDivision(Data::CityDivision && cityDivision) { DARABONBA_PTR_SET_RVALUE(cityDivision_, cityDivision) };


      // cityId Field Functions 
      bool hasCityId() const { return this->cityId_ != nullptr;};
      void deleteCityId() { this->cityId_ = nullptr;};
      inline string getCityId() const { DARABONBA_PTR_GET_DEFAULT(cityId_, "") };
      inline Data& setCityId(string cityId) { DARABONBA_PTR_SET_VALUE(cityId_, cityId) };


      // contacts Field Functions 
      bool hasContacts() const { return this->contacts_ != nullptr;};
      void deleteContacts() { this->contacts_ = nullptr;};
      inline string getContacts() const { DARABONBA_PTR_GET_DEFAULT(contacts_, "") };
      inline Data& setContacts(string contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };


      // defaultAddress Field Functions 
      bool hasDefaultAddress() const { return this->defaultAddress_ != nullptr;};
      void deleteDefaultAddress() { this->defaultAddress_ = nullptr;};
      inline bool getDefaultAddress() const { DARABONBA_PTR_GET_DEFAULT(defaultAddress_, false) };
      inline Data& setDefaultAddress(bool defaultAddress) { DARABONBA_PTR_SET_VALUE(defaultAddress_, defaultAddress) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Data& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // mobile Field Functions 
      bool hasMobile() const { return this->mobile_ != nullptr;};
      void deleteMobile() { this->mobile_ = nullptr;};
      inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
      inline Data& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline Data& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      // pk Field Functions 
      bool hasPk() const { return this->pk_ != nullptr;};
      void deletePk() { this->pk_ = nullptr;};
      inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
      inline Data& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


      // postalcode Field Functions 
      bool hasPostalcode() const { return this->postalcode_ != nullptr;};
      void deletePostalcode() { this->postalcode_ = nullptr;};
      inline string getPostalcode() const { DARABONBA_PTR_GET_DEFAULT(postalcode_, "") };
      inline Data& setPostalcode(string postalcode) { DARABONBA_PTR_SET_VALUE(postalcode_, postalcode) };


      // proviceDivision Field Functions 
      bool hasProviceDivision() const { return this->proviceDivision_ != nullptr;};
      void deleteProviceDivision() { this->proviceDivision_ = nullptr;};
      inline const Data::ProviceDivision & getProviceDivision() const { DARABONBA_PTR_GET_CONST(proviceDivision_, Data::ProviceDivision) };
      inline Data::ProviceDivision getProviceDivision() { DARABONBA_PTR_GET(proviceDivision_, Data::ProviceDivision) };
      inline Data& setProviceDivision(const Data::ProviceDivision & proviceDivision) { DARABONBA_PTR_SET_VALUE(proviceDivision_, proviceDivision) };
      inline Data& setProviceDivision(Data::ProviceDivision && proviceDivision) { DARABONBA_PTR_SET_RVALUE(proviceDivision_, proviceDivision) };


      // proviceId Field Functions 
      bool hasProviceId() const { return this->proviceId_ != nullptr;};
      void deleteProviceId() { this->proviceId_ = nullptr;};
      inline string getProviceId() const { DARABONBA_PTR_GET_DEFAULT(proviceId_, "") };
      inline Data& setProviceId(string proviceId) { DARABONBA_PTR_SET_VALUE(proviceId_, proviceId) };


      // townDivision Field Functions 
      bool hasTownDivision() const { return this->townDivision_ != nullptr;};
      void deleteTownDivision() { this->townDivision_ = nullptr;};
      inline const Data::TownDivision & getTownDivision() const { DARABONBA_PTR_GET_CONST(townDivision_, Data::TownDivision) };
      inline Data::TownDivision getTownDivision() { DARABONBA_PTR_GET(townDivision_, Data::TownDivision) };
      inline Data& setTownDivision(const Data::TownDivision & townDivision) { DARABONBA_PTR_SET_VALUE(townDivision_, townDivision) };
      inline Data& setTownDivision(Data::TownDivision && townDivision) { DARABONBA_PTR_SET_RVALUE(townDivision_, townDivision) };


      // townId Field Functions 
      bool hasTownId() const { return this->townId_ != nullptr;};
      void deleteTownId() { this->townId_ = nullptr;};
      inline string getTownId() const { DARABONBA_PTR_GET_DEFAULT(townId_, "") };
      inline Data& setTownId(string townId) { DARABONBA_PTR_SET_VALUE(townId_, townId) };


    protected:
      shared_ptr<string> address_ {};
      shared_ptr<Data::AreaDivision> areaDivision_ {};
      shared_ptr<string> areaId_ {};
      shared_ptr<Data::CityDivision> cityDivision_ {};
      shared_ptr<string> cityId_ {};
      shared_ptr<string> contacts_ {};
      shared_ptr<bool> defaultAddress_ {};
      shared_ptr<string> email_ {};
      shared_ptr<string> mobile_ {};
      shared_ptr<string> phone_ {};
      shared_ptr<string> pk_ {};
      shared_ptr<string> postalcode_ {};
      shared_ptr<Data::ProviceDivision> proviceDivision_ {};
      shared_ptr<string> proviceId_ {};
      shared_ptr<Data::TownDivision> townDivision_ {};
      shared_ptr<string> townId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryAccountDeliveryAddressInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryAccountDeliveryAddressInfoResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryAccountDeliveryAddressInfoResponseBody::Data>) };
    inline vector<QueryAccountDeliveryAddressInfoResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryAccountDeliveryAddressInfoResponseBody::Data>) };
    inline QueryAccountDeliveryAddressInfoResponseBody& setData(const vector<QueryAccountDeliveryAddressInfoResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryAccountDeliveryAddressInfoResponseBody& setData(vector<QueryAccountDeliveryAddressInfoResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryAccountDeliveryAddressInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAccountDeliveryAddressInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAccountDeliveryAddressInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<QueryAccountDeliveryAddressInfoResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
