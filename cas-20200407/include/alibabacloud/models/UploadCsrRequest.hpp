// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADCSRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADCSRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class UploadCsrRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadCsrRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Csr, csr_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UploadCsrRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Csr, csr_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UploadCsrRequest() = default ;
    UploadCsrRequest(const UploadCsrRequest &) = default ;
    UploadCsrRequest(UploadCsrRequest &&) = default ;
    UploadCsrRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadCsrRequest() = default ;
    UploadCsrRequest& operator=(const UploadCsrRequest &) = default ;
    UploadCsrRequest& operator=(UploadCsrRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->csr_ != nullptr
        && this->key_ != nullptr && this->name_ != nullptr; };
    // csr Field Functions 
    bool hasCsr() const { return this->csr_ != nullptr;};
    void deleteCsr() { this->csr_ = nullptr;};
    inline string csr() const { DARABONBA_PTR_GET_DEFAULT(csr_, "") };
    inline UploadCsrRequest& setCsr(string csr) { DARABONBA_PTR_SET_VALUE(csr_, csr) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline UploadCsrRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UploadCsrRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The content of the CSR.
    // 
    // This parameter is required.
    std::shared_ptr<string> csr_ = nullptr;
    // The private key content of the certificate in the PEM format.
    std::shared_ptr<string> key_ = nullptr;
    // The name of the CSR.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
