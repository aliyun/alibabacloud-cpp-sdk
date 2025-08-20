// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMINFOMAPPINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMINFOMAPPINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmInfoMappingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmInfoMappingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WmInfoBytesB64, wmInfoBytesB64_);
      DARABONBA_PTR_TO_JSON(WmInfoSize, wmInfoSize_);
      DARABONBA_PTR_TO_JSON(WmType, wmType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmInfoMappingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WmInfoBytesB64, wmInfoBytesB64_);
      DARABONBA_PTR_FROM_JSON(WmInfoSize, wmInfoSize_);
      DARABONBA_PTR_FROM_JSON(WmType, wmType_);
    };
    CreateWmInfoMappingRequest() = default ;
    CreateWmInfoMappingRequest(const CreateWmInfoMappingRequest &) = default ;
    CreateWmInfoMappingRequest(CreateWmInfoMappingRequest &&) = default ;
    CreateWmInfoMappingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmInfoMappingRequest() = default ;
    CreateWmInfoMappingRequest& operator=(const CreateWmInfoMappingRequest &) = default ;
    CreateWmInfoMappingRequest& operator=(CreateWmInfoMappingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->wmInfoBytesB64_ != nullptr
        && this->wmInfoSize_ != nullptr && this->wmType_ != nullptr; };
    // wmInfoBytesB64 Field Functions 
    bool hasWmInfoBytesB64() const { return this->wmInfoBytesB64_ != nullptr;};
    void deleteWmInfoBytesB64() { this->wmInfoBytesB64_ = nullptr;};
    inline string wmInfoBytesB64() const { DARABONBA_PTR_GET_DEFAULT(wmInfoBytesB64_, "") };
    inline CreateWmInfoMappingRequest& setWmInfoBytesB64(string wmInfoBytesB64) { DARABONBA_PTR_SET_VALUE(wmInfoBytesB64_, wmInfoBytesB64) };


    // wmInfoSize Field Functions 
    bool hasWmInfoSize() const { return this->wmInfoSize_ != nullptr;};
    void deleteWmInfoSize() { this->wmInfoSize_ = nullptr;};
    inline int64_t wmInfoSize() const { DARABONBA_PTR_GET_DEFAULT(wmInfoSize_, 0L) };
    inline CreateWmInfoMappingRequest& setWmInfoSize(int64_t wmInfoSize) { DARABONBA_PTR_SET_VALUE(wmInfoSize_, wmInfoSize) };


    // wmType Field Functions 
    bool hasWmType() const { return this->wmType_ != nullptr;};
    void deleteWmType() { this->wmType_ = nullptr;};
    inline string wmType() const { DARABONBA_PTR_GET_DEFAULT(wmType_, "") };
    inline CreateWmInfoMappingRequest& setWmType(string wmType) { DARABONBA_PTR_SET_VALUE(wmType_, wmType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> wmInfoBytesB64_ = nullptr;
    std::shared_ptr<int64_t> wmInfoSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> wmType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
