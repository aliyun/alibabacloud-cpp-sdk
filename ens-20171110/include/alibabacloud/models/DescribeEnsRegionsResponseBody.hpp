// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSREGIONSRESPONSEBODY_HPP_
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
  class DescribeEnsRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EnsRegions, ensRegions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EnsRegions, ensRegions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEnsRegionsResponseBody() = default ;
    DescribeEnsRegionsResponseBody(const DescribeEnsRegionsResponseBody &) = default ;
    DescribeEnsRegionsResponseBody(DescribeEnsRegionsResponseBody &&) = default ;
    DescribeEnsRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsRegionsResponseBody() = default ;
    DescribeEnsRegionsResponseBody& operator=(const DescribeEnsRegionsResponseBody &) = default ;
    DescribeEnsRegionsResponseBody& operator=(DescribeEnsRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EnsRegions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EnsRegions& obj) { 
        DARABONBA_PTR_TO_JSON(EnsRegions, ensRegions_);
      };
      friend void from_json(const Darabonba::Json& j, EnsRegions& obj) { 
        DARABONBA_PTR_FROM_JSON(EnsRegions, ensRegions_);
      };
      EnsRegions() = default ;
      EnsRegions(const EnsRegions &) = default ;
      EnsRegions(EnsRegions &&) = default ;
      EnsRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EnsRegions() = default ;
      EnsRegions& operator=(const EnsRegions &) = default ;
      EnsRegions& operator=(EnsRegions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EnsRegionsItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EnsRegionsItem& obj) { 
          DARABONBA_PTR_TO_JSON(Area, area_);
          DARABONBA_PTR_TO_JSON(EnName, enName_);
          DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Province, province_);
        };
        friend void from_json(const Darabonba::Json& j, EnsRegionsItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Area, area_);
          DARABONBA_PTR_FROM_JSON(EnName, enName_);
          DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Province, province_);
        };
        EnsRegionsItem() = default ;
        EnsRegionsItem(const EnsRegionsItem &) = default ;
        EnsRegionsItem(EnsRegionsItem &&) = default ;
        EnsRegionsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EnsRegionsItem() = default ;
        EnsRegionsItem& operator=(const EnsRegionsItem &) = default ;
        EnsRegionsItem& operator=(EnsRegionsItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->area_ == nullptr
        && this->enName_ == nullptr && this->ensRegionId_ == nullptr && this->name_ == nullptr && this->province_ == nullptr; };
        // area Field Functions 
        bool hasArea() const { return this->area_ != nullptr;};
        void deleteArea() { this->area_ = nullptr;};
        inline string getArea() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
        inline EnsRegionsItem& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


        // enName Field Functions 
        bool hasEnName() const { return this->enName_ != nullptr;};
        void deleteEnName() { this->enName_ = nullptr;};
        inline string getEnName() const { DARABONBA_PTR_GET_DEFAULT(enName_, "") };
        inline EnsRegionsItem& setEnName(string enName) { DARABONBA_PTR_SET_VALUE(enName_, enName) };


        // ensRegionId Field Functions 
        bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
        void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
        inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
        inline EnsRegionsItem& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline EnsRegionsItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // province Field Functions 
        bool hasProvince() const { return this->province_ != nullptr;};
        void deleteProvince() { this->province_ = nullptr;};
        inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
        inline EnsRegionsItem& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


      protected:
        // The code of the region.
        shared_ptr<string> area_ {};
        // The name of the node.
        shared_ptr<string> enName_ {};
        // The ID of the node.
        shared_ptr<string> ensRegionId_ {};
        // The name of the node.
        shared_ptr<string> name_ {};
        // The province where the node is deployed.
        shared_ptr<string> province_ {};
      };

      virtual bool empty() const override { return this->ensRegions_ == nullptr; };
      // ensRegions Field Functions 
      bool hasEnsRegions() const { return this->ensRegions_ != nullptr;};
      void deleteEnsRegions() { this->ensRegions_ = nullptr;};
      inline const vector<EnsRegions::EnsRegionsItem> & getEnsRegions() const { DARABONBA_PTR_GET_CONST(ensRegions_, vector<EnsRegions::EnsRegionsItem>) };
      inline vector<EnsRegions::EnsRegionsItem> getEnsRegions() { DARABONBA_PTR_GET(ensRegions_, vector<EnsRegions::EnsRegionsItem>) };
      inline EnsRegions& setEnsRegions(const vector<EnsRegions::EnsRegionsItem> & ensRegions) { DARABONBA_PTR_SET_VALUE(ensRegions_, ensRegions) };
      inline EnsRegions& setEnsRegions(vector<EnsRegions::EnsRegionsItem> && ensRegions) { DARABONBA_PTR_SET_RVALUE(ensRegions_, ensRegions) };


    protected:
      shared_ptr<vector<EnsRegions::EnsRegionsItem>> ensRegions_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->ensRegions_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeEnsRegionsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // ensRegions Field Functions 
    bool hasEnsRegions() const { return this->ensRegions_ != nullptr;};
    void deleteEnsRegions() { this->ensRegions_ = nullptr;};
    inline const DescribeEnsRegionsResponseBody::EnsRegions & getEnsRegions() const { DARABONBA_PTR_GET_CONST(ensRegions_, DescribeEnsRegionsResponseBody::EnsRegions) };
    inline DescribeEnsRegionsResponseBody::EnsRegions getEnsRegions() { DARABONBA_PTR_GET(ensRegions_, DescribeEnsRegionsResponseBody::EnsRegions) };
    inline DescribeEnsRegionsResponseBody& setEnsRegions(const DescribeEnsRegionsResponseBody::EnsRegions & ensRegions) { DARABONBA_PTR_SET_VALUE(ensRegions_, ensRegions) };
    inline DescribeEnsRegionsResponseBody& setEnsRegions(DescribeEnsRegionsResponseBody::EnsRegions && ensRegions) { DARABONBA_PTR_SET_RVALUE(ensRegions_, ensRegions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnsRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The service code. 0 is returned for a successful request. An error code is returned for a failed request.
    shared_ptr<int32_t> code_ {};
    // The information about the regions.
    shared_ptr<DescribeEnsRegionsResponseBody::EnsRegions> ensRegions_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
