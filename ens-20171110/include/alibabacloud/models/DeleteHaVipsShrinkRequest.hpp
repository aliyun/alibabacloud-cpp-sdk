// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHAVIPSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHAVIPSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteHaVipsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHaVipsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HaVipIds, haVipIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHaVipsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HaVipIds, haVipIdsShrink_);
    };
    DeleteHaVipsShrinkRequest() = default ;
    DeleteHaVipsShrinkRequest(const DeleteHaVipsShrinkRequest &) = default ;
    DeleteHaVipsShrinkRequest(DeleteHaVipsShrinkRequest &&) = default ;
    DeleteHaVipsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHaVipsShrinkRequest() = default ;
    DeleteHaVipsShrinkRequest& operator=(const DeleteHaVipsShrinkRequest &) = default ;
    DeleteHaVipsShrinkRequest& operator=(DeleteHaVipsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->haVipIdsShrink_ == nullptr; };
    // haVipIdsShrink Field Functions 
    bool hasHaVipIdsShrink() const { return this->haVipIdsShrink_ != nullptr;};
    void deleteHaVipIdsShrink() { this->haVipIdsShrink_ = nullptr;};
    inline string haVipIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(haVipIdsShrink_, "") };
    inline DeleteHaVipsShrinkRequest& setHaVipIdsShrink(string haVipIdsShrink) { DARABONBA_PTR_SET_VALUE(haVipIdsShrink_, haVipIdsShrink) };


  protected:
    // The IDs of high-availability virtual IP addresses (HAVIPs).
    // 
    // This parameter is required.
    std::shared_ptr<string> haVipIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
