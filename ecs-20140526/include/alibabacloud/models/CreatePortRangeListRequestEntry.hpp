// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPORTRANGELISTREQUESTENTRY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPORTRANGELISTREQUESTENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreatePortRangeListRequestEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePortRangeListRequestEntry& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PortRange, portRange_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePortRangeListRequestEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
    };
    CreatePortRangeListRequestEntry() = default ;
    CreatePortRangeListRequestEntry(const CreatePortRangeListRequestEntry &) = default ;
    CreatePortRangeListRequestEntry(CreatePortRangeListRequestEntry &&) = default ;
    CreatePortRangeListRequestEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePortRangeListRequestEntry() = default ;
    CreatePortRangeListRequestEntry& operator=(const CreatePortRangeListRequestEntry &) = default ;
    CreatePortRangeListRequestEntry& operator=(CreatePortRangeListRequestEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->portRange_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePortRangeListRequestEntry& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // portRange Field Functions 
    bool hasPortRange() const { return this->portRange_ != nullptr;};
    void deletePortRange() { this->portRange_ = nullptr;};
    inline string portRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
    inline CreatePortRangeListRequestEntry& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


  protected:
    // The description of port range N. The description must be 2 to 32 characters in length and cannot start with http:// or https://. Valid values of N: 0 to 200.
    std::shared_ptr<string> description_ = nullptr;
    // Port range N. Valid values of N: 0 to 200.
    // 
    // *   The total number of entries cannot exceed the `MaxEntries` value.
    // *   `PortRange` in multiple entries cannot be duplicated.
    std::shared_ptr<string> portRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
