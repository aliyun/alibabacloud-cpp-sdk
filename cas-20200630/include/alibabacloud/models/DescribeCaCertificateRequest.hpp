// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class DescribeCACertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCACertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCACertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
    };
    DescribeCACertificateRequest() = default ;
    DescribeCACertificateRequest(const DescribeCACertificateRequest &) = default ;
    DescribeCACertificateRequest(DescribeCACertificateRequest &&) = default ;
    DescribeCACertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCACertificateRequest() = default ;
    DescribeCACertificateRequest& operator=(const DescribeCACertificateRequest &) = default ;
    DescribeCACertificateRequest& operator=(DescribeCACertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifier_ == nullptr; };
    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline DescribeCACertificateRequest& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


  protected:
    // The unique identifier of the CA certificate that you want to query.
    // 
    // >  You can call the [DescribeCACertificateList](https://help.aliyun.com/document_detail/328095.html) operation to query the unique identifiers of all CA certificates.
    shared_ptr<string> identifier_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
