// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETSSHKEYRESPONSEBODYSSHKEY_HPP_
#define ALIBABACLOUD_MODELS_RESETSSHKEYRESPONSEBODYSSHKEY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ResetSshKeyResponseBodySshKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetSshKeyResponseBodySshKey& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(publicKey, publicKey_);
    };
    friend void from_json(const Darabonba::Json& j, ResetSshKeyResponseBodySshKey& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(publicKey, publicKey_);
    };
    ResetSshKeyResponseBodySshKey() = default ;
    ResetSshKeyResponseBodySshKey(const ResetSshKeyResponseBodySshKey &) = default ;
    ResetSshKeyResponseBodySshKey(ResetSshKeyResponseBodySshKey &&) = default ;
    ResetSshKeyResponseBodySshKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetSshKeyResponseBodySshKey() = default ;
    ResetSshKeyResponseBodySshKey& operator=(const ResetSshKeyResponseBodySshKey &) = default ;
    ResetSshKeyResponseBodySshKey& operator=(ResetSshKeyResponseBodySshKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->publicKey_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ResetSshKeyResponseBodySshKey& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // publicKey Field Functions 
    bool hasPublicKey() const { return this->publicKey_ != nullptr;};
    void deletePublicKey() { this->publicKey_ = nullptr;};
    inline string publicKey() const { DARABONBA_PTR_GET_DEFAULT(publicKey_, "") };
    inline ResetSshKeyResponseBodySshKey& setPublicKey(string publicKey) { DARABONBA_PTR_SET_VALUE(publicKey_, publicKey) };


  protected:
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> publicKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
