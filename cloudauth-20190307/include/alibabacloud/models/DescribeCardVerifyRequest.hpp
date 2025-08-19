// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECARDVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECARDVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeCardVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCardVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCardVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
    };
    DescribeCardVerifyRequest() = default ;
    DescribeCardVerifyRequest(const DescribeCardVerifyRequest &) = default ;
    DescribeCardVerifyRequest(DescribeCardVerifyRequest &&) = default ;
    DescribeCardVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCardVerifyRequest() = default ;
    DescribeCardVerifyRequest& operator=(const DescribeCardVerifyRequest &) = default ;
    DescribeCardVerifyRequest& operator=(DescribeCardVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certifyId_ != nullptr; };
    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string certifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline DescribeCardVerifyRequest& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> certifyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
