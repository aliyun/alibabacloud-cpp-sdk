// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGREYTAGROUTERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEGREYTAGROUTERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateGreyTagRouteResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGreyTagRouteResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(GreyTagRouteId, greyTagRouteId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGreyTagRouteResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(GreyTagRouteId, greyTagRouteId_);
    };
    CreateGreyTagRouteResponseBodyData() = default ;
    CreateGreyTagRouteResponseBodyData(const CreateGreyTagRouteResponseBodyData &) = default ;
    CreateGreyTagRouteResponseBodyData(CreateGreyTagRouteResponseBodyData &&) = default ;
    CreateGreyTagRouteResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGreyTagRouteResponseBodyData() = default ;
    CreateGreyTagRouteResponseBodyData& operator=(const CreateGreyTagRouteResponseBodyData &) = default ;
    CreateGreyTagRouteResponseBodyData& operator=(CreateGreyTagRouteResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->greyTagRouteId_ == nullptr; };
    // greyTagRouteId Field Functions 
    bool hasGreyTagRouteId() const { return this->greyTagRouteId_ != nullptr;};
    void deleteGreyTagRouteId() { this->greyTagRouteId_ = nullptr;};
    inline int64_t greyTagRouteId() const { DARABONBA_PTR_GET_DEFAULT(greyTagRouteId_, 0L) };
    inline CreateGreyTagRouteResponseBodyData& setGreyTagRouteId(int64_t greyTagRouteId) { DARABONBA_PTR_SET_VALUE(greyTagRouteId_, greyTagRouteId) };


  protected:
    // The ID of the canary release rule. The ID is globally unique.
    std::shared_ptr<int64_t> greyTagRouteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
