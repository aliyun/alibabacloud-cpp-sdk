// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPERMISSIONREQUESTOPTION_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPERMISSIONREQUESTOPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdatePermissionRequestOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePermissionRequestOption& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePermissionRequestOption& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
    };
    UpdatePermissionRequestOption() = default ;
    UpdatePermissionRequestOption(const UpdatePermissionRequestOption &) = default ;
    UpdatePermissionRequestOption(UpdatePermissionRequestOption &&) = default ;
    UpdatePermissionRequestOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePermissionRequestOption() = default ;
    UpdatePermissionRequestOption& operator=(const UpdatePermissionRequestOption &) = default ;
    UpdatePermissionRequestOption& operator=(UpdatePermissionRequestOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline UpdatePermissionRequestOption& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


  protected:
    std::shared_ptr<int64_t> duration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
