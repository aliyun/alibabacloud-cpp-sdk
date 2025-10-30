// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPWMINFOMAPPINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPWMINFOMAPPINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class LookupWmInfoMappingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupWmInfoMappingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WmInfoSize, wmInfoSize_);
      DARABONBA_PTR_TO_JSON(WmInfoUint, wmInfoUint_);
      DARABONBA_PTR_TO_JSON(WmType, wmType_);
    };
    friend void from_json(const Darabonba::Json& j, LookupWmInfoMappingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WmInfoSize, wmInfoSize_);
      DARABONBA_PTR_FROM_JSON(WmInfoUint, wmInfoUint_);
      DARABONBA_PTR_FROM_JSON(WmType, wmType_);
    };
    LookupWmInfoMappingRequest() = default ;
    LookupWmInfoMappingRequest(const LookupWmInfoMappingRequest &) = default ;
    LookupWmInfoMappingRequest(LookupWmInfoMappingRequest &&) = default ;
    LookupWmInfoMappingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupWmInfoMappingRequest() = default ;
    LookupWmInfoMappingRequest& operator=(const LookupWmInfoMappingRequest &) = default ;
    LookupWmInfoMappingRequest& operator=(LookupWmInfoMappingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->wmInfoSize_ == nullptr
        && return this->wmInfoUint_ == nullptr && return this->wmType_ == nullptr; };
    // wmInfoSize Field Functions 
    bool hasWmInfoSize() const { return this->wmInfoSize_ != nullptr;};
    void deleteWmInfoSize() { this->wmInfoSize_ = nullptr;};
    inline int64_t wmInfoSize() const { DARABONBA_PTR_GET_DEFAULT(wmInfoSize_, 0L) };
    inline LookupWmInfoMappingRequest& setWmInfoSize(int64_t wmInfoSize) { DARABONBA_PTR_SET_VALUE(wmInfoSize_, wmInfoSize) };


    // wmInfoUint Field Functions 
    bool hasWmInfoUint() const { return this->wmInfoUint_ != nullptr;};
    void deleteWmInfoUint() { this->wmInfoUint_ = nullptr;};
    inline string wmInfoUint() const { DARABONBA_PTR_GET_DEFAULT(wmInfoUint_, "") };
    inline LookupWmInfoMappingRequest& setWmInfoUint(string wmInfoUint) { DARABONBA_PTR_SET_VALUE(wmInfoUint_, wmInfoUint) };


    // wmType Field Functions 
    bool hasWmType() const { return this->wmType_ != nullptr;};
    void deleteWmType() { this->wmType_ = nullptr;};
    inline string wmType() const { DARABONBA_PTR_GET_DEFAULT(wmType_, "") };
    inline LookupWmInfoMappingRequest& setWmType(string wmType) { DARABONBA_PTR_SET_VALUE(wmType_, wmType) };


  protected:
    std::shared_ptr<int64_t> wmInfoSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> wmInfoUint_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> wmType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
