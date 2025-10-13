// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTAUSERRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_QUOTAUSERRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ResourceAmount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class QuotaUserResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuotaUserResources& obj) { 
      DARABONBA_PTR_TO_JSON(Submitted, submitted_);
      DARABONBA_PTR_TO_JSON(Used, used_);
    };
    friend void from_json(const Darabonba::Json& j, QuotaUserResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Submitted, submitted_);
      DARABONBA_PTR_FROM_JSON(Used, used_);
    };
    QuotaUserResources() = default ;
    QuotaUserResources(const QuotaUserResources &) = default ;
    QuotaUserResources(QuotaUserResources &&) = default ;
    QuotaUserResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuotaUserResources() = default ;
    QuotaUserResources& operator=(const QuotaUserResources &) = default ;
    QuotaUserResources& operator=(QuotaUserResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->submitted_ == nullptr
        && return this->used_ == nullptr; };
    // submitted Field Functions 
    bool hasSubmitted() const { return this->submitted_ != nullptr;};
    void deleteSubmitted() { this->submitted_ = nullptr;};
    inline const Models::ResourceAmount & submitted() const { DARABONBA_PTR_GET_CONST(submitted_, Models::ResourceAmount) };
    inline Models::ResourceAmount submitted() { DARABONBA_PTR_GET(submitted_, Models::ResourceAmount) };
    inline QuotaUserResources& setSubmitted(const Models::ResourceAmount & submitted) { DARABONBA_PTR_SET_VALUE(submitted_, submitted) };
    inline QuotaUserResources& setSubmitted(Models::ResourceAmount && submitted) { DARABONBA_PTR_SET_RVALUE(submitted_, submitted) };


    // used Field Functions 
    bool hasUsed() const { return this->used_ != nullptr;};
    void deleteUsed() { this->used_ = nullptr;};
    inline const Models::ResourceAmount & used() const { DARABONBA_PTR_GET_CONST(used_, Models::ResourceAmount) };
    inline Models::ResourceAmount used() { DARABONBA_PTR_GET(used_, Models::ResourceAmount) };
    inline QuotaUserResources& setUsed(const Models::ResourceAmount & used) { DARABONBA_PTR_SET_VALUE(used_, used) };
    inline QuotaUserResources& setUsed(Models::ResourceAmount && used) { DARABONBA_PTR_SET_RVALUE(used_, used) };


  protected:
    std::shared_ptr<Models::ResourceAmount> submitted_ = nullptr;
    std::shared_ptr<Models::ResourceAmount> used_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
