// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMINFOMAPPINGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMINFOMAPPINGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmInfoMappingResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmInfoMappingResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(WmInfoUint, wmInfoUint_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmInfoMappingResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(WmInfoUint, wmInfoUint_);
    };
    CreateWmInfoMappingResponseBodyData() = default ;
    CreateWmInfoMappingResponseBodyData(const CreateWmInfoMappingResponseBodyData &) = default ;
    CreateWmInfoMappingResponseBodyData(CreateWmInfoMappingResponseBodyData &&) = default ;
    CreateWmInfoMappingResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmInfoMappingResponseBodyData() = default ;
    CreateWmInfoMappingResponseBodyData& operator=(const CreateWmInfoMappingResponseBodyData &) = default ;
    CreateWmInfoMappingResponseBodyData& operator=(CreateWmInfoMappingResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->wmInfoUint_ == nullptr; };
    // wmInfoUint Field Functions 
    bool hasWmInfoUint() const { return this->wmInfoUint_ != nullptr;};
    void deleteWmInfoUint() { this->wmInfoUint_ = nullptr;};
    inline int64_t wmInfoUint() const { DARABONBA_PTR_GET_DEFAULT(wmInfoUint_, 0L) };
    inline CreateWmInfoMappingResponseBodyData& setWmInfoUint(int64_t wmInfoUint) { DARABONBA_PTR_SET_VALUE(wmInfoUint_, wmInfoUint) };


  protected:
    std::shared_ptr<int64_t> wmInfoUint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
