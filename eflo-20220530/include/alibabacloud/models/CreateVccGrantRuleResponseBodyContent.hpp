// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVCCGRANTRULERESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_CREATEVCCGRANTRULERESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class CreateVccGrantRuleResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVccGrantRuleResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(GrantRuleId, grantRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVccGrantRuleResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(GrantRuleId, grantRuleId_);
    };
    CreateVccGrantRuleResponseBodyContent() = default ;
    CreateVccGrantRuleResponseBodyContent(const CreateVccGrantRuleResponseBodyContent &) = default ;
    CreateVccGrantRuleResponseBodyContent(CreateVccGrantRuleResponseBodyContent &&) = default ;
    CreateVccGrantRuleResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVccGrantRuleResponseBodyContent() = default ;
    CreateVccGrantRuleResponseBodyContent& operator=(const CreateVccGrantRuleResponseBodyContent &) = default ;
    CreateVccGrantRuleResponseBodyContent& operator=(CreateVccGrantRuleResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->grantRuleId_ == nullptr; };
    // grantRuleId Field Functions 
    bool hasGrantRuleId() const { return this->grantRuleId_ != nullptr;};
    void deleteGrantRuleId() { this->grantRuleId_ = nullptr;};
    inline string grantRuleId() const { DARABONBA_PTR_GET_DEFAULT(grantRuleId_, "") };
    inline CreateVccGrantRuleResponseBodyContent& setGrantRuleId(string grantRuleId) { DARABONBA_PTR_SET_VALUE(grantRuleId_, grantRuleId) };


  protected:
    // Authorized resource primary key ID
    std::shared_ptr<string> grantRuleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
