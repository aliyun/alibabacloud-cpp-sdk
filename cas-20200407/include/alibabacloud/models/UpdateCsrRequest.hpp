// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECSRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECSRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class UpdateCsrRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCsrRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CsrId, csrId_);
      DARABONBA_PTR_TO_JSON(Key, key_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCsrRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CsrId, csrId_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
    };
    UpdateCsrRequest() = default ;
    UpdateCsrRequest(const UpdateCsrRequest &) = default ;
    UpdateCsrRequest(UpdateCsrRequest &&) = default ;
    UpdateCsrRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCsrRequest() = default ;
    UpdateCsrRequest& operator=(const UpdateCsrRequest &) = default ;
    UpdateCsrRequest& operator=(UpdateCsrRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->csrId_ != nullptr
        && this->key_ != nullptr; };
    // csrId Field Functions 
    bool hasCsrId() const { return this->csrId_ != nullptr;};
    void deleteCsrId() { this->csrId_ = nullptr;};
    inline int64_t csrId() const { DARABONBA_PTR_GET_DEFAULT(csrId_, 0L) };
    inline UpdateCsrRequest& setCsrId(int64_t csrId) { DARABONBA_PTR_SET_VALUE(csrId_, csrId) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline UpdateCsrRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


  protected:
    // The ID of the CSR.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> csrId_ = nullptr;
    // The private key content of the certificate in the PEM format.
    // 
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
