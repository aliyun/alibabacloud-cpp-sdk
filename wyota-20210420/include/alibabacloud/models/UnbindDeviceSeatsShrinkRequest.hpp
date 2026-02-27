// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDDEVICESEATSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDDEVICESEATSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wyota20210420
{
namespace Models
{
  class UnbindDeviceSeatsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindDeviceSeatsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SerialNoList, serialNoListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindDeviceSeatsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SerialNoList, serialNoListShrink_);
    };
    UnbindDeviceSeatsShrinkRequest() = default ;
    UnbindDeviceSeatsShrinkRequest(const UnbindDeviceSeatsShrinkRequest &) = default ;
    UnbindDeviceSeatsShrinkRequest(UnbindDeviceSeatsShrinkRequest &&) = default ;
    UnbindDeviceSeatsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindDeviceSeatsShrinkRequest() = default ;
    UnbindDeviceSeatsShrinkRequest& operator=(const UnbindDeviceSeatsShrinkRequest &) = default ;
    UnbindDeviceSeatsShrinkRequest& operator=(UnbindDeviceSeatsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serialNoListShrink_ == nullptr; };
    // serialNoListShrink Field Functions 
    bool hasSerialNoListShrink() const { return this->serialNoListShrink_ != nullptr;};
    void deleteSerialNoListShrink() { this->serialNoListShrink_ = nullptr;};
    inline string getSerialNoListShrink() const { DARABONBA_PTR_GET_DEFAULT(serialNoListShrink_, "") };
    inline UnbindDeviceSeatsShrinkRequest& setSerialNoListShrink(string serialNoListShrink) { DARABONBA_PTR_SET_VALUE(serialNoListShrink_, serialNoListShrink) };


  protected:
    shared_ptr<string> serialNoListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wyota20210420
#endif
