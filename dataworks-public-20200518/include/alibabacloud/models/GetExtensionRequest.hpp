// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXTENSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEXTENSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetExtensionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExtensionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExtensionCode, extensionCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetExtensionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtensionCode, extensionCode_);
    };
    GetExtensionRequest() = default ;
    GetExtensionRequest(const GetExtensionRequest &) = default ;
    GetExtensionRequest(GetExtensionRequest &&) = default ;
    GetExtensionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExtensionRequest() = default ;
    GetExtensionRequest& operator=(const GetExtensionRequest &) = default ;
    GetExtensionRequest& operator=(GetExtensionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extensionCode_ != nullptr; };
    // extensionCode Field Functions 
    bool hasExtensionCode() const { return this->extensionCode_ != nullptr;};
    void deleteExtensionCode() { this->extensionCode_ = nullptr;};
    inline string extensionCode() const { DARABONBA_PTR_GET_DEFAULT(extensionCode_, "") };
    inline GetExtensionRequest& setExtensionCode(string extensionCode) { DARABONBA_PTR_SET_VALUE(extensionCode_, extensionCode) };


  protected:
    // The unique code of the extension.
    // 
    // This parameter is required.
    std::shared_ptr<string> extensionCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
