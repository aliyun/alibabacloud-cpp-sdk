// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOCATIONINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOCATIONINFORESPONSEBODY_HPP_
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
  class DescribeLocationInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLocationInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CnCount, cnCount_);
      DARABONBA_PTR_TO_JSON(CnList, cnList_);
      DARABONBA_PTR_TO_JSON(CnProvinceList, cnProvinceList_);
      DARABONBA_PTR_TO_JSON(OverseasCount, overseasCount_);
      DARABONBA_PTR_TO_JSON(OverseasList, overseasList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLocationInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CnCount, cnCount_);
      DARABONBA_PTR_FROM_JSON(CnList, cnList_);
      DARABONBA_PTR_FROM_JSON(CnProvinceList, cnProvinceList_);
      DARABONBA_PTR_FROM_JSON(OverseasCount, overseasCount_);
      DARABONBA_PTR_FROM_JSON(OverseasList, overseasList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLocationInfoResponseBody() = default ;
    DescribeLocationInfoResponseBody(const DescribeLocationInfoResponseBody &) = default ;
    DescribeLocationInfoResponseBody(DescribeLocationInfoResponseBody &&) = default ;
    DescribeLocationInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLocationInfoResponseBody() = default ;
    DescribeLocationInfoResponseBody& operator=(const DescribeLocationInfoResponseBody &) = default ;
    DescribeLocationInfoResponseBody& operator=(DescribeLocationInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OverseasList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OverseasList& obj) { 
        DARABONBA_PTR_TO_JSON(LocId, locId_);
        DARABONBA_PTR_TO_JSON(LocName, locName_);
      };
      friend void from_json(const Darabonba::Json& j, OverseasList& obj) { 
        DARABONBA_PTR_FROM_JSON(LocId, locId_);
        DARABONBA_PTR_FROM_JSON(LocName, locName_);
      };
      OverseasList() = default ;
      OverseasList(const OverseasList &) = default ;
      OverseasList(OverseasList &&) = default ;
      OverseasList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OverseasList() = default ;
      OverseasList& operator=(const OverseasList &) = default ;
      OverseasList& operator=(OverseasList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->locId_ == nullptr
        && this->locName_ == nullptr; };
      // locId Field Functions 
      bool hasLocId() const { return this->locId_ != nullptr;};
      void deleteLocId() { this->locId_ = nullptr;};
      inline string getLocId() const { DARABONBA_PTR_GET_DEFAULT(locId_, "") };
      inline OverseasList& setLocId(string locId) { DARABONBA_PTR_SET_VALUE(locId_, locId) };


      // locName Field Functions 
      bool hasLocName() const { return this->locName_ != nullptr;};
      void deleteLocName() { this->locName_ = nullptr;};
      inline string getLocName() const { DARABONBA_PTR_GET_DEFAULT(locName_, "") };
      inline OverseasList& setLocName(string locName) { DARABONBA_PTR_SET_VALUE(locName_, locName) };


    protected:
      shared_ptr<string> locId_ {};
      shared_ptr<string> locName_ {};
    };

    class CnProvinceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CnProvinceList& obj) { 
        DARABONBA_PTR_TO_JSON(Cities, cities_);
        DARABONBA_PTR_TO_JSON(ProvinceName, provinceName_);
      };
      friend void from_json(const Darabonba::Json& j, CnProvinceList& obj) { 
        DARABONBA_PTR_FROM_JSON(Cities, cities_);
        DARABONBA_PTR_FROM_JSON(ProvinceName, provinceName_);
      };
      CnProvinceList() = default ;
      CnProvinceList(const CnProvinceList &) = default ;
      CnProvinceList(CnProvinceList &&) = default ;
      CnProvinceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CnProvinceList() = default ;
      CnProvinceList& operator=(const CnProvinceList &) = default ;
      CnProvinceList& operator=(CnProvinceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Cities : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Cities& obj) { 
          DARABONBA_PTR_TO_JSON(LocId, locId_);
          DARABONBA_PTR_TO_JSON(LocName, locName_);
        };
        friend void from_json(const Darabonba::Json& j, Cities& obj) { 
          DARABONBA_PTR_FROM_JSON(LocId, locId_);
          DARABONBA_PTR_FROM_JSON(LocName, locName_);
        };
        Cities() = default ;
        Cities(const Cities &) = default ;
        Cities(Cities &&) = default ;
        Cities(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Cities() = default ;
        Cities& operator=(const Cities &) = default ;
        Cities& operator=(Cities &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->locId_ == nullptr
        && this->locName_ == nullptr; };
        // locId Field Functions 
        bool hasLocId() const { return this->locId_ != nullptr;};
        void deleteLocId() { this->locId_ = nullptr;};
        inline string getLocId() const { DARABONBA_PTR_GET_DEFAULT(locId_, "") };
        inline Cities& setLocId(string locId) { DARABONBA_PTR_SET_VALUE(locId_, locId) };


        // locName Field Functions 
        bool hasLocName() const { return this->locName_ != nullptr;};
        void deleteLocName() { this->locName_ = nullptr;};
        inline string getLocName() const { DARABONBA_PTR_GET_DEFAULT(locName_, "") };
        inline Cities& setLocName(string locName) { DARABONBA_PTR_SET_VALUE(locName_, locName) };


      protected:
        shared_ptr<string> locId_ {};
        shared_ptr<string> locName_ {};
      };

      virtual bool empty() const override { return this->cities_ == nullptr
        && this->provinceName_ == nullptr; };
      // cities Field Functions 
      bool hasCities() const { return this->cities_ != nullptr;};
      void deleteCities() { this->cities_ = nullptr;};
      inline const vector<CnProvinceList::Cities> & getCities() const { DARABONBA_PTR_GET_CONST(cities_, vector<CnProvinceList::Cities>) };
      inline vector<CnProvinceList::Cities> getCities() { DARABONBA_PTR_GET(cities_, vector<CnProvinceList::Cities>) };
      inline CnProvinceList& setCities(const vector<CnProvinceList::Cities> & cities) { DARABONBA_PTR_SET_VALUE(cities_, cities) };
      inline CnProvinceList& setCities(vector<CnProvinceList::Cities> && cities) { DARABONBA_PTR_SET_RVALUE(cities_, cities) };


      // provinceName Field Functions 
      bool hasProvinceName() const { return this->provinceName_ != nullptr;};
      void deleteProvinceName() { this->provinceName_ = nullptr;};
      inline string getProvinceName() const { DARABONBA_PTR_GET_DEFAULT(provinceName_, "") };
      inline CnProvinceList& setProvinceName(string provinceName) { DARABONBA_PTR_SET_VALUE(provinceName_, provinceName) };


    protected:
      shared_ptr<vector<CnProvinceList::Cities>> cities_ {};
      shared_ptr<string> provinceName_ {};
    };

    class CnList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CnList& obj) { 
        DARABONBA_PTR_TO_JSON(LocId, locId_);
        DARABONBA_PTR_TO_JSON(LocName, locName_);
      };
      friend void from_json(const Darabonba::Json& j, CnList& obj) { 
        DARABONBA_PTR_FROM_JSON(LocId, locId_);
        DARABONBA_PTR_FROM_JSON(LocName, locName_);
      };
      CnList() = default ;
      CnList(const CnList &) = default ;
      CnList(CnList &&) = default ;
      CnList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CnList() = default ;
      CnList& operator=(const CnList &) = default ;
      CnList& operator=(CnList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->locId_ == nullptr
        && this->locName_ == nullptr; };
      // locId Field Functions 
      bool hasLocId() const { return this->locId_ != nullptr;};
      void deleteLocId() { this->locId_ = nullptr;};
      inline string getLocId() const { DARABONBA_PTR_GET_DEFAULT(locId_, "") };
      inline CnList& setLocId(string locId) { DARABONBA_PTR_SET_VALUE(locId_, locId) };


      // locName Field Functions 
      bool hasLocName() const { return this->locName_ != nullptr;};
      void deleteLocName() { this->locName_ = nullptr;};
      inline string getLocName() const { DARABONBA_PTR_GET_DEFAULT(locName_, "") };
      inline CnList& setLocName(string locName) { DARABONBA_PTR_SET_VALUE(locName_, locName) };


    protected:
      shared_ptr<string> locId_ {};
      shared_ptr<string> locName_ {};
    };

    virtual bool empty() const override { return this->cnCount_ == nullptr
        && this->cnList_ == nullptr && this->cnProvinceList_ == nullptr && this->overseasCount_ == nullptr && this->overseasList_ == nullptr && this->requestId_ == nullptr; };
    // cnCount Field Functions 
    bool hasCnCount() const { return this->cnCount_ != nullptr;};
    void deleteCnCount() { this->cnCount_ = nullptr;};
    inline int32_t getCnCount() const { DARABONBA_PTR_GET_DEFAULT(cnCount_, 0) };
    inline DescribeLocationInfoResponseBody& setCnCount(int32_t cnCount) { DARABONBA_PTR_SET_VALUE(cnCount_, cnCount) };


    // cnList Field Functions 
    bool hasCnList() const { return this->cnList_ != nullptr;};
    void deleteCnList() { this->cnList_ = nullptr;};
    inline const vector<DescribeLocationInfoResponseBody::CnList> & getCnList() const { DARABONBA_PTR_GET_CONST(cnList_, vector<DescribeLocationInfoResponseBody::CnList>) };
    inline vector<DescribeLocationInfoResponseBody::CnList> getCnList() { DARABONBA_PTR_GET(cnList_, vector<DescribeLocationInfoResponseBody::CnList>) };
    inline DescribeLocationInfoResponseBody& setCnList(const vector<DescribeLocationInfoResponseBody::CnList> & cnList) { DARABONBA_PTR_SET_VALUE(cnList_, cnList) };
    inline DescribeLocationInfoResponseBody& setCnList(vector<DescribeLocationInfoResponseBody::CnList> && cnList) { DARABONBA_PTR_SET_RVALUE(cnList_, cnList) };


    // cnProvinceList Field Functions 
    bool hasCnProvinceList() const { return this->cnProvinceList_ != nullptr;};
    void deleteCnProvinceList() { this->cnProvinceList_ = nullptr;};
    inline const vector<DescribeLocationInfoResponseBody::CnProvinceList> & getCnProvinceList() const { DARABONBA_PTR_GET_CONST(cnProvinceList_, vector<DescribeLocationInfoResponseBody::CnProvinceList>) };
    inline vector<DescribeLocationInfoResponseBody::CnProvinceList> getCnProvinceList() { DARABONBA_PTR_GET(cnProvinceList_, vector<DescribeLocationInfoResponseBody::CnProvinceList>) };
    inline DescribeLocationInfoResponseBody& setCnProvinceList(const vector<DescribeLocationInfoResponseBody::CnProvinceList> & cnProvinceList) { DARABONBA_PTR_SET_VALUE(cnProvinceList_, cnProvinceList) };
    inline DescribeLocationInfoResponseBody& setCnProvinceList(vector<DescribeLocationInfoResponseBody::CnProvinceList> && cnProvinceList) { DARABONBA_PTR_SET_RVALUE(cnProvinceList_, cnProvinceList) };


    // overseasCount Field Functions 
    bool hasOverseasCount() const { return this->overseasCount_ != nullptr;};
    void deleteOverseasCount() { this->overseasCount_ = nullptr;};
    inline int32_t getOverseasCount() const { DARABONBA_PTR_GET_DEFAULT(overseasCount_, 0) };
    inline DescribeLocationInfoResponseBody& setOverseasCount(int32_t overseasCount) { DARABONBA_PTR_SET_VALUE(overseasCount_, overseasCount) };


    // overseasList Field Functions 
    bool hasOverseasList() const { return this->overseasList_ != nullptr;};
    void deleteOverseasList() { this->overseasList_ = nullptr;};
    inline const vector<DescribeLocationInfoResponseBody::OverseasList> & getOverseasList() const { DARABONBA_PTR_GET_CONST(overseasList_, vector<DescribeLocationInfoResponseBody::OverseasList>) };
    inline vector<DescribeLocationInfoResponseBody::OverseasList> getOverseasList() { DARABONBA_PTR_GET(overseasList_, vector<DescribeLocationInfoResponseBody::OverseasList>) };
    inline DescribeLocationInfoResponseBody& setOverseasList(const vector<DescribeLocationInfoResponseBody::OverseasList> & overseasList) { DARABONBA_PTR_SET_VALUE(overseasList_, overseasList) };
    inline DescribeLocationInfoResponseBody& setOverseasList(vector<DescribeLocationInfoResponseBody::OverseasList> && overseasList) { DARABONBA_PTR_SET_RVALUE(overseasList_, overseasList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLocationInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> cnCount_ {};
    shared_ptr<vector<DescribeLocationInfoResponseBody::CnList>> cnList_ {};
    shared_ptr<vector<DescribeLocationInfoResponseBody::CnProvinceList>> cnProvinceList_ {};
    shared_ptr<int32_t> overseasCount_ {};
    shared_ptr<vector<DescribeLocationInfoResponseBody::OverseasList>> overseasList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
