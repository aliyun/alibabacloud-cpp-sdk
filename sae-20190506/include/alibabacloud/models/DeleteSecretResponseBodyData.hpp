// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECRETRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DELETESECRETRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DeleteSecretResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecretResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(SecretId, secretId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecretResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
    };
    DeleteSecretResponseBodyData() = default ;
    DeleteSecretResponseBodyData(const DeleteSecretResponseBodyData &) = default ;
    DeleteSecretResponseBodyData(DeleteSecretResponseBodyData &&) = default ;
    DeleteSecretResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSecretResponseBodyData() = default ;
    DeleteSecretResponseBodyData& operator=(const DeleteSecretResponseBodyData &) = default ;
    DeleteSecretResponseBodyData& operator=(DeleteSecretResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->secretId_ == nullptr; };
    // secretId Field Functions 
    bool hasSecretId() const { return this->secretId_ != nullptr;};
    void deleteSecretId() { this->secretId_ = nullptr;};
    inline int64_t secretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, 0L) };
    inline DeleteSecretResponseBodyData& setSecretId(int64_t secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


  protected:
    // The ID of the deleted Secret.
    std::shared_ptr<int64_t> secretId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
