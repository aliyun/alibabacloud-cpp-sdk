// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSNETDISTRICTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSNETDISTRICTRESPONSEBODY_HPP_
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
  class DescribeEnsNetDistrictResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsNetDistrictResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EnsNetDistricts, ensNetDistricts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsNetDistrictResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EnsNetDistricts, ensNetDistricts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEnsNetDistrictResponseBody() = default ;
    DescribeEnsNetDistrictResponseBody(const DescribeEnsNetDistrictResponseBody &) = default ;
    DescribeEnsNetDistrictResponseBody(DescribeEnsNetDistrictResponseBody &&) = default ;
    DescribeEnsNetDistrictResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsNetDistrictResponseBody() = default ;
    DescribeEnsNetDistrictResponseBody& operator=(const DescribeEnsNetDistrictResponseBody &) = default ;
    DescribeEnsNetDistrictResponseBody& operator=(DescribeEnsNetDistrictResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EnsNetDistricts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EnsNetDistricts& obj) { 
        DARABONBA_PTR_TO_JSON(EnsNetDistrict, ensNetDistrict_);
      };
      friend void from_json(const Darabonba::Json& j, EnsNetDistricts& obj) { 
        DARABONBA_PTR_FROM_JSON(EnsNetDistrict, ensNetDistrict_);
      };
      EnsNetDistricts() = default ;
      EnsNetDistricts(const EnsNetDistricts &) = default ;
      EnsNetDistricts(EnsNetDistricts &&) = default ;
      EnsNetDistricts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EnsNetDistricts() = default ;
      EnsNetDistricts& operator=(const EnsNetDistricts &) = default ;
      EnsNetDistricts& operator=(EnsNetDistricts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EnsNetDistrict : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EnsNetDistrict& obj) { 
          DARABONBA_PTR_TO_JSON(EnsRegionIdCount, ensRegionIdCount_);
          DARABONBA_PTR_TO_JSON(NetDistrictCode, netDistrictCode_);
          DARABONBA_PTR_TO_JSON(NetDistrictEnName, netDistrictEnName_);
          DARABONBA_PTR_TO_JSON(NetDistrictFatherCode, netDistrictFatherCode_);
          DARABONBA_PTR_TO_JSON(NetDistrictLevel, netDistrictLevel_);
          DARABONBA_PTR_TO_JSON(NetDistrictName, netDistrictName_);
        };
        friend void from_json(const Darabonba::Json& j, EnsNetDistrict& obj) { 
          DARABONBA_PTR_FROM_JSON(EnsRegionIdCount, ensRegionIdCount_);
          DARABONBA_PTR_FROM_JSON(NetDistrictCode, netDistrictCode_);
          DARABONBA_PTR_FROM_JSON(NetDistrictEnName, netDistrictEnName_);
          DARABONBA_PTR_FROM_JSON(NetDistrictFatherCode, netDistrictFatherCode_);
          DARABONBA_PTR_FROM_JSON(NetDistrictLevel, netDistrictLevel_);
          DARABONBA_PTR_FROM_JSON(NetDistrictName, netDistrictName_);
        };
        EnsNetDistrict() = default ;
        EnsNetDistrict(const EnsNetDistrict &) = default ;
        EnsNetDistrict(EnsNetDistrict &&) = default ;
        EnsNetDistrict(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EnsNetDistrict() = default ;
        EnsNetDistrict& operator=(const EnsNetDistrict &) = default ;
        EnsNetDistrict& operator=(EnsNetDistrict &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ensRegionIdCount_ == nullptr
        && this->netDistrictCode_ == nullptr && this->netDistrictEnName_ == nullptr && this->netDistrictFatherCode_ == nullptr && this->netDistrictLevel_ == nullptr && this->netDistrictName_ == nullptr; };
        // ensRegionIdCount Field Functions 
        bool hasEnsRegionIdCount() const { return this->ensRegionIdCount_ != nullptr;};
        void deleteEnsRegionIdCount() { this->ensRegionIdCount_ = nullptr;};
        inline string getEnsRegionIdCount() const { DARABONBA_PTR_GET_DEFAULT(ensRegionIdCount_, "") };
        inline EnsNetDistrict& setEnsRegionIdCount(string ensRegionIdCount) { DARABONBA_PTR_SET_VALUE(ensRegionIdCount_, ensRegionIdCount) };


        // netDistrictCode Field Functions 
        bool hasNetDistrictCode() const { return this->netDistrictCode_ != nullptr;};
        void deleteNetDistrictCode() { this->netDistrictCode_ = nullptr;};
        inline string getNetDistrictCode() const { DARABONBA_PTR_GET_DEFAULT(netDistrictCode_, "") };
        inline EnsNetDistrict& setNetDistrictCode(string netDistrictCode) { DARABONBA_PTR_SET_VALUE(netDistrictCode_, netDistrictCode) };


        // netDistrictEnName Field Functions 
        bool hasNetDistrictEnName() const { return this->netDistrictEnName_ != nullptr;};
        void deleteNetDistrictEnName() { this->netDistrictEnName_ = nullptr;};
        inline string getNetDistrictEnName() const { DARABONBA_PTR_GET_DEFAULT(netDistrictEnName_, "") };
        inline EnsNetDistrict& setNetDistrictEnName(string netDistrictEnName) { DARABONBA_PTR_SET_VALUE(netDistrictEnName_, netDistrictEnName) };


        // netDistrictFatherCode Field Functions 
        bool hasNetDistrictFatherCode() const { return this->netDistrictFatherCode_ != nullptr;};
        void deleteNetDistrictFatherCode() { this->netDistrictFatherCode_ = nullptr;};
        inline string getNetDistrictFatherCode() const { DARABONBA_PTR_GET_DEFAULT(netDistrictFatherCode_, "") };
        inline EnsNetDistrict& setNetDistrictFatherCode(string netDistrictFatherCode) { DARABONBA_PTR_SET_VALUE(netDistrictFatherCode_, netDistrictFatherCode) };


        // netDistrictLevel Field Functions 
        bool hasNetDistrictLevel() const { return this->netDistrictLevel_ != nullptr;};
        void deleteNetDistrictLevel() { this->netDistrictLevel_ = nullptr;};
        inline string getNetDistrictLevel() const { DARABONBA_PTR_GET_DEFAULT(netDistrictLevel_, "") };
        inline EnsNetDistrict& setNetDistrictLevel(string netDistrictLevel) { DARABONBA_PTR_SET_VALUE(netDistrictLevel_, netDistrictLevel) };


        // netDistrictName Field Functions 
        bool hasNetDistrictName() const { return this->netDistrictName_ != nullptr;};
        void deleteNetDistrictName() { this->netDistrictName_ = nullptr;};
        inline string getNetDistrictName() const { DARABONBA_PTR_GET_DEFAULT(netDistrictName_, "") };
        inline EnsNetDistrict& setNetDistrictName(string netDistrictName) { DARABONBA_PTR_SET_VALUE(netDistrictName_, netDistrictName) };


      protected:
        // The number of nodes in the region.
        shared_ptr<string> ensRegionIdCount_ {};
        // The code of the region.
        shared_ptr<string> netDistrictCode_ {};
        // The name of the region.
        shared_ptr<string> netDistrictEnName_ {};
        // The parent code of the region.
        shared_ptr<string> netDistrictFatherCode_ {};
        // The level of the region.
        // 
        // *   **Big**: area
        // *   **Middle**: province
        // *   **Small**: city
        shared_ptr<string> netDistrictLevel_ {};
        // The name of the region.
        shared_ptr<string> netDistrictName_ {};
      };

      virtual bool empty() const override { return this->ensNetDistrict_ == nullptr; };
      // ensNetDistrict Field Functions 
      bool hasEnsNetDistrict() const { return this->ensNetDistrict_ != nullptr;};
      void deleteEnsNetDistrict() { this->ensNetDistrict_ = nullptr;};
      inline const vector<EnsNetDistricts::EnsNetDistrict> & getEnsNetDistrict() const { DARABONBA_PTR_GET_CONST(ensNetDistrict_, vector<EnsNetDistricts::EnsNetDistrict>) };
      inline vector<EnsNetDistricts::EnsNetDistrict> getEnsNetDistrict() { DARABONBA_PTR_GET(ensNetDistrict_, vector<EnsNetDistricts::EnsNetDistrict>) };
      inline EnsNetDistricts& setEnsNetDistrict(const vector<EnsNetDistricts::EnsNetDistrict> & ensNetDistrict) { DARABONBA_PTR_SET_VALUE(ensNetDistrict_, ensNetDistrict) };
      inline EnsNetDistricts& setEnsNetDistrict(vector<EnsNetDistricts::EnsNetDistrict> && ensNetDistrict) { DARABONBA_PTR_SET_RVALUE(ensNetDistrict_, ensNetDistrict) };


    protected:
      shared_ptr<vector<EnsNetDistricts::EnsNetDistrict>> ensNetDistrict_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->ensNetDistricts_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeEnsNetDistrictResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // ensNetDistricts Field Functions 
    bool hasEnsNetDistricts() const { return this->ensNetDistricts_ != nullptr;};
    void deleteEnsNetDistricts() { this->ensNetDistricts_ = nullptr;};
    inline const DescribeEnsNetDistrictResponseBody::EnsNetDistricts & getEnsNetDistricts() const { DARABONBA_PTR_GET_CONST(ensNetDistricts_, DescribeEnsNetDistrictResponseBody::EnsNetDistricts) };
    inline DescribeEnsNetDistrictResponseBody::EnsNetDistricts getEnsNetDistricts() { DARABONBA_PTR_GET(ensNetDistricts_, DescribeEnsNetDistrictResponseBody::EnsNetDistricts) };
    inline DescribeEnsNetDistrictResponseBody& setEnsNetDistricts(const DescribeEnsNetDistrictResponseBody::EnsNetDistricts & ensNetDistricts) { DARABONBA_PTR_SET_VALUE(ensNetDistricts_, ensNetDistricts) };
    inline DescribeEnsNetDistrictResponseBody& setEnsNetDistricts(DescribeEnsNetDistrictResponseBody::EnsNetDistricts && ensNetDistricts) { DARABONBA_PTR_SET_RVALUE(ensNetDistricts_, ensNetDistricts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnsNetDistrictResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned service code. A value of 0 indicates that the operation was successful.
    shared_ptr<int32_t> code_ {};
    // The information about the regions.
    shared_ptr<DescribeEnsNetDistrictResponseBody::EnsNetDistricts> ensNetDistricts_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
