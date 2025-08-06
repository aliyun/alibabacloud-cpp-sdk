// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPORTRANGELISTREQUESTREMOVEENTRY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPORTRANGELISTREQUESTREMOVEENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyPortRangeListRequestRemoveEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPortRangeListRequestRemoveEntry& obj) { 
      DARABONBA_PTR_TO_JSON(PortRange, portRange_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPortRangeListRequestRemoveEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
    };
    ModifyPortRangeListRequestRemoveEntry() = default ;
    ModifyPortRangeListRequestRemoveEntry(const ModifyPortRangeListRequestRemoveEntry &) = default ;
    ModifyPortRangeListRequestRemoveEntry(ModifyPortRangeListRequestRemoveEntry &&) = default ;
    ModifyPortRangeListRequestRemoveEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPortRangeListRequestRemoveEntry() = default ;
    ModifyPortRangeListRequestRemoveEntry& operator=(const ModifyPortRangeListRequestRemoveEntry &) = default ;
    ModifyPortRangeListRequestRemoveEntry& operator=(ModifyPortRangeListRequestRemoveEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->portRange_ != nullptr; };
    // portRange Field Functions 
    bool hasPortRange() const { return this->portRange_ != nullptr;};
    void deletePortRange() { this->portRange_ = nullptr;};
    inline string portRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
    inline ModifyPortRangeListRequestRemoveEntry& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


  protected:
    // The port range in entry N. Valid values of N: 0 to 200. Take note of the following limits:
    // 
    // *   `PortRange` in different entries cannot be duplicated.
    // *   The value of this parameter cannot be the same as the value of `AddEntry.N.PortRange`.
    std::shared_ptr<string> portRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
