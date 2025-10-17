// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPORTRANGELISTREQUESTADDENTRY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPORTRANGELISTREQUESTADDENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyPortRangeListRequestAddEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPortRangeListRequestAddEntry& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PortRange, portRange_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPortRangeListRequestAddEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
    };
    ModifyPortRangeListRequestAddEntry() = default ;
    ModifyPortRangeListRequestAddEntry(const ModifyPortRangeListRequestAddEntry &) = default ;
    ModifyPortRangeListRequestAddEntry(ModifyPortRangeListRequestAddEntry &&) = default ;
    ModifyPortRangeListRequestAddEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPortRangeListRequestAddEntry() = default ;
    ModifyPortRangeListRequestAddEntry& operator=(const ModifyPortRangeListRequestAddEntry &) = default ;
    ModifyPortRangeListRequestAddEntry& operator=(ModifyPortRangeListRequestAddEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->portRange_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyPortRangeListRequestAddEntry& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // portRange Field Functions 
    bool hasPortRange() const { return this->portRange_ != nullptr;};
    void deletePortRange() { this->portRange_ = nullptr;};
    inline string portRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
    inline ModifyPortRangeListRequestAddEntry& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


  protected:
    // The description of the port range in entry N. The description must be 2 to 32 characters in length and cannot start with http:// or https://. Valid values of N: 0 to 200.
    std::shared_ptr<string> description_ = nullptr;
    // The port range in entry N. Valid values of N: 0 to 200. Take note of the following limits:
    // 
    // *   The total number of entries in the port list cannot exceed the `MaxEntries` value.
    // *   `PortRange` in different entries cannot be duplicated.
    // *   The value of this parameter cannot be the same as the value of `RemoveEntry.N.PortRange`.
    std::shared_ptr<string> portRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
