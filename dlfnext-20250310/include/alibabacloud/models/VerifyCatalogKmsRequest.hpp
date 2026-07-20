// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCATALOGKMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCATALOGKMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class VerifyCatalogKmsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCatalogKmsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(kmsKeyId, kmsKeyId_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCatalogKmsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(kmsKeyId, kmsKeyId_);
    };
    VerifyCatalogKmsRequest() = default ;
    VerifyCatalogKmsRequest(const VerifyCatalogKmsRequest &) = default ;
    VerifyCatalogKmsRequest(VerifyCatalogKmsRequest &&) = default ;
    VerifyCatalogKmsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCatalogKmsRequest() = default ;
    VerifyCatalogKmsRequest& operator=(const VerifyCatalogKmsRequest &) = default ;
    VerifyCatalogKmsRequest& operator=(VerifyCatalogKmsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kmsKeyId_ == nullptr; };
    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline VerifyCatalogKmsRequest& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


  protected:
    // This parameter is required.
    shared_ptr<string> kmsKeyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
