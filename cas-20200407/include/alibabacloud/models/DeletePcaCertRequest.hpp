// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPCACERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPCACERTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class DeletePCACertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePCACertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePCACertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
    };
    DeletePCACertRequest() = default ;
    DeletePCACertRequest(const DeletePCACertRequest &) = default ;
    DeletePCACertRequest(DeletePCACertRequest &&) = default ;
    DeletePCACertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePCACertRequest() = default ;
    DeletePCACertRequest& operator=(const DeletePCACertRequest &) = default ;
    DeletePCACertRequest& operator=(DeletePCACertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifier_ == nullptr; };
    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline DeletePCACertRequest& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


  protected:
    // The unique identifier of the certificate. You can call the [ListCert](https://help.aliyun.com/document_detail/452331.html) operation to query the unique identifiers of certificates.
    // 
    // This parameter is required.
    std::shared_ptr<string> identifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
