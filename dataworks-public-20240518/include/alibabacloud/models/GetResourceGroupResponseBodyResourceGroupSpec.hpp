// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESPONSEBODYRESOURCEGROUPSPEC_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESPONSEBODYRESOURCEGROUPSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetResourceGroupResponseBodyResourceGroupSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupResponseBodyResourceGroupSpec& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(Standard, standard_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupResponseBodyResourceGroupSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(Standard, standard_);
    };
    GetResourceGroupResponseBodyResourceGroupSpec() = default ;
    GetResourceGroupResponseBodyResourceGroupSpec(const GetResourceGroupResponseBodyResourceGroupSpec &) = default ;
    GetResourceGroupResponseBodyResourceGroupSpec(GetResourceGroupResponseBodyResourceGroupSpec &&) = default ;
    GetResourceGroupResponseBodyResourceGroupSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupResponseBodyResourceGroupSpec() = default ;
    GetResourceGroupResponseBodyResourceGroupSpec& operator=(const GetResourceGroupResponseBodyResourceGroupSpec &) = default ;
    GetResourceGroupResponseBodyResourceGroupSpec& operator=(GetResourceGroupResponseBodyResourceGroupSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && return this->standard_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline GetResourceGroupResponseBodyResourceGroupSpec& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // standard Field Functions 
    bool hasStandard() const { return this->standard_ != nullptr;};
    void deleteStandard() { this->standard_ = nullptr;};
    inline string standard() const { DARABONBA_PTR_GET_DEFAULT(standard_, "") };
    inline GetResourceGroupResponseBodyResourceGroupSpec& setStandard(string standard) { DARABONBA_PTR_SET_VALUE(standard_, standard) };


  protected:
    // The number of resources in the resource group.
    std::shared_ptr<int32_t> amount_ = nullptr;
    // The number of compute units (CUs) in the resource group.
    std::shared_ptr<string> standard_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
