// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSEDSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSEDSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeUsedServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsedServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(records, records_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsedServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(records, records_);
    };
    DescribeUsedServiceResponseBody() = default ;
    DescribeUsedServiceResponseBody(const DescribeUsedServiceResponseBody &) = default ;
    DescribeUsedServiceResponseBody(DescribeUsedServiceResponseBody &&) = default ;
    DescribeUsedServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsedServiceResponseBody() = default ;
    DescribeUsedServiceResponseBody& operator=(const DescribeUsedServiceResponseBody &) = default ;
    DescribeUsedServiceResponseBody& operator=(DescribeUsedServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_PTR_TO_JSON(enName, enName_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(serviceCode, serviceCode_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_PTR_FROM_JSON(enName, enName_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(serviceCode, serviceCode_);
      };
      Records() = default ;
      Records(const Records &) = default ;
      Records(Records &&) = default ;
      Records(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Records() = default ;
      Records& operator=(const Records &) = default ;
      Records& operator=(Records &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enName_ == nullptr
        && this->name_ == nullptr && this->serviceCode_ == nullptr; };
      // enName Field Functions 
      bool hasEnName() const { return this->enName_ != nullptr;};
      void deleteEnName() { this->enName_ = nullptr;};
      inline string getEnName() const { DARABONBA_PTR_GET_DEFAULT(enName_, "") };
      inline Records& setEnName(string enName) { DARABONBA_PTR_SET_VALUE(enName_, enName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Records& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // serviceCode Field Functions 
      bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
      void deleteServiceCode() { this->serviceCode_ = nullptr;};
      inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
      inline Records& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    protected:
      // English name
      shared_ptr<string> enName_ {};
      // Service name
      shared_ptr<string> name_ {};
      // Service code
      shared_ptr<string> serviceCode_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->records_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUsedServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<DescribeUsedServiceResponseBody::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<DescribeUsedServiceResponseBody::Records>) };
    inline vector<DescribeUsedServiceResponseBody::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<DescribeUsedServiceResponseBody::Records>) };
    inline DescribeUsedServiceResponseBody& setRecords(const vector<DescribeUsedServiceResponseBody::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline DescribeUsedServiceResponseBody& setRecords(vector<DescribeUsedServiceResponseBody::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Record details
    shared_ptr<vector<DescribeUsedServiceResponseBody::Records>> records_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
