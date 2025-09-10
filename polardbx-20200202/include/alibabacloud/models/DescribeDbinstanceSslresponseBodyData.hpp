// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESSLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESSLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDBInstanceSSLResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceSSLResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CertCommonName, certCommonName_);
      DARABONBA_PTR_TO_JSON(SSLEnabled, SSLEnabled_);
      DARABONBA_PTR_TO_JSON(SSLExpiredTime, SSLExpiredTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceSSLResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CertCommonName, certCommonName_);
      DARABONBA_PTR_FROM_JSON(SSLEnabled, SSLEnabled_);
      DARABONBA_PTR_FROM_JSON(SSLExpiredTime, SSLExpiredTime_);
    };
    DescribeDBInstanceSSLResponseBodyData() = default ;
    DescribeDBInstanceSSLResponseBodyData(const DescribeDBInstanceSSLResponseBodyData &) = default ;
    DescribeDBInstanceSSLResponseBodyData(DescribeDBInstanceSSLResponseBodyData &&) = default ;
    DescribeDBInstanceSSLResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceSSLResponseBodyData() = default ;
    DescribeDBInstanceSSLResponseBodyData& operator=(const DescribeDBInstanceSSLResponseBodyData &) = default ;
    DescribeDBInstanceSSLResponseBodyData& operator=(DescribeDBInstanceSSLResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certCommonName_ != nullptr
        && this->SSLEnabled_ != nullptr && this->SSLExpiredTime_ != nullptr; };
    // certCommonName Field Functions 
    bool hasCertCommonName() const { return this->certCommonName_ != nullptr;};
    void deleteCertCommonName() { this->certCommonName_ = nullptr;};
    inline string certCommonName() const { DARABONBA_PTR_GET_DEFAULT(certCommonName_, "") };
    inline DescribeDBInstanceSSLResponseBodyData& setCertCommonName(string certCommonName) { DARABONBA_PTR_SET_VALUE(certCommonName_, certCommonName) };


    // SSLEnabled Field Functions 
    bool hasSSLEnabled() const { return this->SSLEnabled_ != nullptr;};
    void deleteSSLEnabled() { this->SSLEnabled_ = nullptr;};
    inline bool SSLEnabled() const { DARABONBA_PTR_GET_DEFAULT(SSLEnabled_, false) };
    inline DescribeDBInstanceSSLResponseBodyData& setSSLEnabled(bool SSLEnabled) { DARABONBA_PTR_SET_VALUE(SSLEnabled_, SSLEnabled) };


    // SSLExpiredTime Field Functions 
    bool hasSSLExpiredTime() const { return this->SSLExpiredTime_ != nullptr;};
    void deleteSSLExpiredTime() { this->SSLExpiredTime_ = nullptr;};
    inline string SSLExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(SSLExpiredTime_, "") };
    inline DescribeDBInstanceSSLResponseBodyData& setSSLExpiredTime(string SSLExpiredTime) { DARABONBA_PTR_SET_VALUE(SSLExpiredTime_, SSLExpiredTime) };


  protected:
    std::shared_ptr<string> certCommonName_ = nullptr;
    std::shared_ptr<bool> SSLEnabled_ = nullptr;
    std::shared_ptr<string> SSLExpiredTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
