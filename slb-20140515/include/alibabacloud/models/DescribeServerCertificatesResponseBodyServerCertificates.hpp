// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVERCERTIFICATESRESPONSEBODYSERVERCERTIFICATES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVERCERTIFICATESRESPONSEBODYSERVERCERTIFICATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeServerCertificatesResponseBodyServerCertificates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServerCertificatesResponseBodyServerCertificates& obj) { 
      DARABONBA_PTR_TO_JSON(ServerCertificate, serverCertificate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServerCertificatesResponseBodyServerCertificates& obj) { 
      DARABONBA_PTR_FROM_JSON(ServerCertificate, serverCertificate_);
    };
    DescribeServerCertificatesResponseBodyServerCertificates() = default ;
    DescribeServerCertificatesResponseBodyServerCertificates(const DescribeServerCertificatesResponseBodyServerCertificates &) = default ;
    DescribeServerCertificatesResponseBodyServerCertificates(DescribeServerCertificatesResponseBodyServerCertificates &&) = default ;
    DescribeServerCertificatesResponseBodyServerCertificates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServerCertificatesResponseBodyServerCertificates() = default ;
    DescribeServerCertificatesResponseBodyServerCertificates& operator=(const DescribeServerCertificatesResponseBodyServerCertificates &) = default ;
    DescribeServerCertificatesResponseBodyServerCertificates& operator=(DescribeServerCertificatesResponseBodyServerCertificates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serverCertificate_ == nullptr; };
    // serverCertificate Field Functions 
    bool hasServerCertificate() const { return this->serverCertificate_ != nullptr;};
    void deleteServerCertificate() { this->serverCertificate_ = nullptr;};
    inline const vector<Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate> & serverCertificate() const { DARABONBA_PTR_GET_CONST(serverCertificate_, vector<Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate>) };
    inline vector<Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate> serverCertificate() { DARABONBA_PTR_GET(serverCertificate_, vector<Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate>) };
    inline DescribeServerCertificatesResponseBodyServerCertificates& setServerCertificate(const vector<Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate> & serverCertificate) { DARABONBA_PTR_SET_VALUE(serverCertificate_, serverCertificate) };
    inline DescribeServerCertificatesResponseBodyServerCertificates& setServerCertificate(vector<Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate> && serverCertificate) { DARABONBA_PTR_SET_RVALUE(serverCertificate_, serverCertificate) };


  protected:
    std::shared_ptr<vector<Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificate>> serverCertificate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
