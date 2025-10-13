// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINGRESSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEINGRESSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateIngressResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIngressResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(IngressId, ingressId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIngressResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(IngressId, ingressId_);
    };
    CreateIngressResponseBodyData() = default ;
    CreateIngressResponseBodyData(const CreateIngressResponseBodyData &) = default ;
    CreateIngressResponseBodyData(CreateIngressResponseBodyData &&) = default ;
    CreateIngressResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIngressResponseBodyData() = default ;
    CreateIngressResponseBodyData& operator=(const CreateIngressResponseBodyData &) = default ;
    CreateIngressResponseBodyData& operator=(CreateIngressResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ingressId_ == nullptr; };
    // ingressId Field Functions 
    bool hasIngressId() const { return this->ingressId_ != nullptr;};
    void deleteIngressId() { this->ingressId_ = nullptr;};
    inline int64_t ingressId() const { DARABONBA_PTR_GET_DEFAULT(ingressId_, 0L) };
    inline CreateIngressResponseBodyData& setIngressId(int64_t ingressId) { DARABONBA_PTR_SET_VALUE(ingressId_, ingressId) };


  protected:
    // The ID of the routing rule.
    std::shared_ptr<int64_t> ingressId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
