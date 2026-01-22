// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESSLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESSLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDBInstanceSSLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceSSLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceSSLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceSSLResponseBody() = default ;
    DescribeDBInstanceSSLResponseBody(const DescribeDBInstanceSSLResponseBody &) = default ;
    DescribeDBInstanceSSLResponseBody(DescribeDBInstanceSSLResponseBody &&) = default ;
    DescribeDBInstanceSSLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceSSLResponseBody() = default ;
    DescribeDBInstanceSSLResponseBody& operator=(const DescribeDBInstanceSSLResponseBody &) = default ;
    DescribeDBInstanceSSLResponseBody& operator=(DescribeDBInstanceSSLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CertCommonName, certCommonName_);
        DARABONBA_PTR_TO_JSON(SSLEnabled, SSLEnabled_);
        DARABONBA_PTR_TO_JSON(SSLExpiredTime, SSLExpiredTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CertCommonName, certCommonName_);
        DARABONBA_PTR_FROM_JSON(SSLEnabled, SSLEnabled_);
        DARABONBA_PTR_FROM_JSON(SSLExpiredTime, SSLExpiredTime_);
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
      virtual bool empty() const override { return this->certCommonName_ == nullptr
        && this->SSLEnabled_ == nullptr && this->SSLExpiredTime_ == nullptr; };
      // certCommonName Field Functions 
      bool hasCertCommonName() const { return this->certCommonName_ != nullptr;};
      void deleteCertCommonName() { this->certCommonName_ = nullptr;};
      inline string getCertCommonName() const { DARABONBA_PTR_GET_DEFAULT(certCommonName_, "") };
      inline Data& setCertCommonName(string certCommonName) { DARABONBA_PTR_SET_VALUE(certCommonName_, certCommonName) };


      // SSLEnabled Field Functions 
      bool hasSSLEnabled() const { return this->SSLEnabled_ != nullptr;};
      void deleteSSLEnabled() { this->SSLEnabled_ = nullptr;};
      inline bool getSSLEnabled() const { DARABONBA_PTR_GET_DEFAULT(SSLEnabled_, false) };
      inline Data& setSSLEnabled(bool SSLEnabled) { DARABONBA_PTR_SET_VALUE(SSLEnabled_, SSLEnabled) };


      // SSLExpiredTime Field Functions 
      bool hasSSLExpiredTime() const { return this->SSLExpiredTime_ != nullptr;};
      void deleteSSLExpiredTime() { this->SSLExpiredTime_ = nullptr;};
      inline string getSSLExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(SSLExpiredTime_, "") };
      inline Data& setSSLExpiredTime(string SSLExpiredTime) { DARABONBA_PTR_SET_VALUE(SSLExpiredTime_, SSLExpiredTime) };


    protected:
      shared_ptr<string> certCommonName_ {};
      shared_ptr<bool> SSLEnabled_ {};
      shared_ptr<string> SSLExpiredTime_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDBInstanceSSLResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDBInstanceSSLResponseBody::Data) };
    inline DescribeDBInstanceSSLResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDBInstanceSSLResponseBody::Data) };
    inline DescribeDBInstanceSSLResponseBody& setData(const DescribeDBInstanceSSLResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDBInstanceSSLResponseBody& setData(DescribeDBInstanceSSLResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceSSLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeDBInstanceSSLResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
