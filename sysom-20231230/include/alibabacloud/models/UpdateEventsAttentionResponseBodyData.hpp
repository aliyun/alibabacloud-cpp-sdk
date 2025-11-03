// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSATTENTIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSATTENTIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class UpdateEventsAttentionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventsAttentionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(mode, mode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventsAttentionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(mode, mode_);
    };
    UpdateEventsAttentionResponseBodyData() = default ;
    UpdateEventsAttentionResponseBodyData(const UpdateEventsAttentionResponseBodyData &) = default ;
    UpdateEventsAttentionResponseBodyData(UpdateEventsAttentionResponseBodyData &&) = default ;
    UpdateEventsAttentionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventsAttentionResponseBodyData() = default ;
    UpdateEventsAttentionResponseBodyData& operator=(const UpdateEventsAttentionResponseBodyData &) = default ;
    UpdateEventsAttentionResponseBodyData& operator=(UpdateEventsAttentionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mode_ == nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline int32_t mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
    inline UpdateEventsAttentionResponseBodyData& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


  protected:
    std::shared_ptr<int32_t> mode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
