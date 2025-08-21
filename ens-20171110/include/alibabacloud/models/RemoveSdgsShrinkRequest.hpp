// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVESDGSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVESDGSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RemoveSDGsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveSDGsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(SdgIds, sdgIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveSDGsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(SdgIds, sdgIdsShrink_);
    };
    RemoveSDGsShrinkRequest() = default ;
    RemoveSDGsShrinkRequest(const RemoveSDGsShrinkRequest &) = default ;
    RemoveSDGsShrinkRequest(RemoveSDGsShrinkRequest &&) = default ;
    RemoveSDGsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveSDGsShrinkRequest() = default ;
    RemoveSDGsShrinkRequest& operator=(const RemoveSDGsShrinkRequest &) = default ;
    RemoveSDGsShrinkRequest& operator=(RemoveSDGsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceIdsShrink_ != nullptr
        && this->sdgIdsShrink_ != nullptr; };
    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string instanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline RemoveSDGsShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // sdgIdsShrink Field Functions 
    bool hasSdgIdsShrink() const { return this->sdgIdsShrink_ != nullptr;};
    void deleteSdgIdsShrink() { this->sdgIdsShrink_ = nullptr;};
    inline string sdgIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(sdgIdsShrink_, "") };
    inline RemoveSDGsShrinkRequest& setSdgIdsShrink(string sdgIdsShrink) { DARABONBA_PTR_SET_VALUE(sdgIdsShrink_, sdgIdsShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceIdsShrink_ = nullptr;
    std::shared_ptr<string> sdgIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
