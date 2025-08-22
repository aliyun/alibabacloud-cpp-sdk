// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETROUTINESUBDOMAINSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETROUTINESUBDOMAINSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class SetRoutineSubdomainShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetRoutineSubdomainShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Subdomains, subdomainsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SetRoutineSubdomainShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Subdomains, subdomainsShrink_);
    };
    SetRoutineSubdomainShrinkRequest() = default ;
    SetRoutineSubdomainShrinkRequest(const SetRoutineSubdomainShrinkRequest &) = default ;
    SetRoutineSubdomainShrinkRequest(SetRoutineSubdomainShrinkRequest &&) = default ;
    SetRoutineSubdomainShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetRoutineSubdomainShrinkRequest() = default ;
    SetRoutineSubdomainShrinkRequest& operator=(const SetRoutineSubdomainShrinkRequest &) = default ;
    SetRoutineSubdomainShrinkRequest& operator=(SetRoutineSubdomainShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->subdomainsShrink_ != nullptr; };
    // subdomainsShrink Field Functions 
    bool hasSubdomainsShrink() const { return this->subdomainsShrink_ != nullptr;};
    void deleteSubdomainsShrink() { this->subdomainsShrink_ = nullptr;};
    inline string subdomainsShrink() const { DARABONBA_PTR_GET_DEFAULT(subdomainsShrink_, "") };
    inline SetRoutineSubdomainShrinkRequest& setSubdomainsShrink(string subdomainsShrink) { DARABONBA_PTR_SET_VALUE(subdomainsShrink_, subdomainsShrink) };


  protected:
    // The parameters of the subdomain.
    // 
    // The parameters are in the following format:
    // 
    //     Subdomains: [
    //         "subdomain-test"
    //     ]
    // 
    // This parameter is required.
    std::shared_ptr<string> subdomainsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
