// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECNAMEREUSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECNAMEREUSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeCnameReusesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCnameReusesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CnameReuses, cnameReuses_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCnameReusesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CnameReuses, cnameReuses_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCnameReusesResponseBody() = default ;
    DescribeCnameReusesResponseBody(const DescribeCnameReusesResponseBody &) = default ;
    DescribeCnameReusesResponseBody(DescribeCnameReusesResponseBody &&) = default ;
    DescribeCnameReusesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCnameReusesResponseBody() = default ;
    DescribeCnameReusesResponseBody& operator=(const DescribeCnameReusesResponseBody &) = default ;
    DescribeCnameReusesResponseBody& operator=(DescribeCnameReusesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CnameReuses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CnameReuses& obj) { 
        DARABONBA_PTR_TO_JSON(Cname, cname_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
      };
      friend void from_json(const Darabonba::Json& j, CnameReuses& obj) { 
        DARABONBA_PTR_FROM_JSON(Cname, cname_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
      };
      CnameReuses() = default ;
      CnameReuses(const CnameReuses &) = default ;
      CnameReuses(CnameReuses &&) = default ;
      CnameReuses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CnameReuses() = default ;
      CnameReuses& operator=(const CnameReuses &) = default ;
      CnameReuses& operator=(CnameReuses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cname_ == nullptr
        && this->domain_ == nullptr && this->enable_ == nullptr; };
      // cname Field Functions 
      bool hasCname() const { return this->cname_ != nullptr;};
      void deleteCname() { this->cname_ = nullptr;};
      inline string getCname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
      inline CnameReuses& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline CnameReuses& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline int32_t getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
      inline CnameReuses& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    protected:
      shared_ptr<string> cname_ {};
      shared_ptr<string> domain_ {};
      shared_ptr<int32_t> enable_ {};
    };

    virtual bool empty() const override { return this->cnameReuses_ == nullptr
        && this->requestId_ == nullptr; };
    // cnameReuses Field Functions 
    bool hasCnameReuses() const { return this->cnameReuses_ != nullptr;};
    void deleteCnameReuses() { this->cnameReuses_ = nullptr;};
    inline const vector<DescribeCnameReusesResponseBody::CnameReuses> & getCnameReuses() const { DARABONBA_PTR_GET_CONST(cnameReuses_, vector<DescribeCnameReusesResponseBody::CnameReuses>) };
    inline vector<DescribeCnameReusesResponseBody::CnameReuses> getCnameReuses() { DARABONBA_PTR_GET(cnameReuses_, vector<DescribeCnameReusesResponseBody::CnameReuses>) };
    inline DescribeCnameReusesResponseBody& setCnameReuses(const vector<DescribeCnameReusesResponseBody::CnameReuses> & cnameReuses) { DARABONBA_PTR_SET_VALUE(cnameReuses_, cnameReuses) };
    inline DescribeCnameReusesResponseBody& setCnameReuses(vector<DescribeCnameReusesResponseBody::CnameReuses> && cnameReuses) { DARABONBA_PTR_SET_RVALUE(cnameReuses_, cnameReuses) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCnameReusesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeCnameReusesResponseBody::CnameReuses>> cnameReuses_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
