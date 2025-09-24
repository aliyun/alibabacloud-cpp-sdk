// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptOption, encryptOption_);
    };
    friend void from_json(const Darabonba::Json& j, GetConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptOption, encryptOption_);
    };
    GetConnectionRequest() = default ;
    GetConnectionRequest(const GetConnectionRequest &) = default ;
    GetConnectionRequest(GetConnectionRequest &&) = default ;
    GetConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConnectionRequest() = default ;
    GetConnectionRequest& operator=(const GetConnectionRequest &) = default ;
    GetConnectionRequest& operator=(GetConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->encryptOption_ != nullptr; };
    // encryptOption Field Functions 
    bool hasEncryptOption() const { return this->encryptOption_ != nullptr;};
    void deleteEncryptOption() { this->encryptOption_ = nullptr;};
    inline string encryptOption() const { DARABONBA_PTR_GET_DEFAULT(encryptOption_, "") };
    inline GetConnectionRequest& setEncryptOption(string encryptOption) { DARABONBA_PTR_SET_VALUE(encryptOption_, encryptOption) };


  protected:
    // The encryption settings. Valid values:
    // 
    // *   PlainText
    // *   Secret
    std::shared_ptr<string> encryptOption_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
