// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIVATIONCODESRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIVATIONCODESRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeActivationCodesResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeActivationCodesResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(ActivateAt, activateAt_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpireAt, expireAt_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MacAddress, macAddress_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SystemIdentifier, systemIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeActivationCodesResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivateAt, activateAt_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpireAt, expireAt_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MacAddress, macAddress_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SystemIdentifier, systemIdentifier_);
    };
    DescribeActivationCodesResponseBodyItems() = default ;
    DescribeActivationCodesResponseBodyItems(const DescribeActivationCodesResponseBodyItems &) = default ;
    DescribeActivationCodesResponseBodyItems(DescribeActivationCodesResponseBodyItems &&) = default ;
    DescribeActivationCodesResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeActivationCodesResponseBodyItems() = default ;
    DescribeActivationCodesResponseBodyItems& operator=(const DescribeActivationCodesResponseBodyItems &) = default ;
    DescribeActivationCodesResponseBodyItems& operator=(DescribeActivationCodesResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activateAt_ == nullptr
        && return this->description_ == nullptr && return this->expireAt_ == nullptr && return this->gmtCreated_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr
        && return this->macAddress_ == nullptr && return this->name_ == nullptr && return this->systemIdentifier_ == nullptr; };
    // activateAt Field Functions 
    bool hasActivateAt() const { return this->activateAt_ != nullptr;};
    void deleteActivateAt() { this->activateAt_ = nullptr;};
    inline string activateAt() const { DARABONBA_PTR_GET_DEFAULT(activateAt_, "") };
    inline DescribeActivationCodesResponseBodyItems& setActivateAt(string activateAt) { DARABONBA_PTR_SET_VALUE(activateAt_, activateAt) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeActivationCodesResponseBodyItems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expireAt Field Functions 
    bool hasExpireAt() const { return this->expireAt_ != nullptr;};
    void deleteExpireAt() { this->expireAt_ = nullptr;};
    inline string expireAt() const { DARABONBA_PTR_GET_DEFAULT(expireAt_, "") };
    inline DescribeActivationCodesResponseBodyItems& setExpireAt(string expireAt) { DARABONBA_PTR_SET_VALUE(expireAt_, expireAt) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeActivationCodesResponseBodyItems& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeActivationCodesResponseBodyItems& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DescribeActivationCodesResponseBodyItems& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // macAddress Field Functions 
    bool hasMacAddress() const { return this->macAddress_ != nullptr;};
    void deleteMacAddress() { this->macAddress_ = nullptr;};
    inline string macAddress() const { DARABONBA_PTR_GET_DEFAULT(macAddress_, "") };
    inline DescribeActivationCodesResponseBodyItems& setMacAddress(string macAddress) { DARABONBA_PTR_SET_VALUE(macAddress_, macAddress) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeActivationCodesResponseBodyItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // systemIdentifier Field Functions 
    bool hasSystemIdentifier() const { return this->systemIdentifier_ != nullptr;};
    void deleteSystemIdentifier() { this->systemIdentifier_ = nullptr;};
    inline string systemIdentifier() const { DARABONBA_PTR_GET_DEFAULT(systemIdentifier_, "") };
    inline DescribeActivationCodesResponseBodyItems& setSystemIdentifier(string systemIdentifier) { DARABONBA_PTR_SET_VALUE(systemIdentifier_, systemIdentifier) };


  protected:
    // The time when the activation code takes effect.
    std::shared_ptr<string> activateAt_ = nullptr;
    // The description of the activation code.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the activation code expires.
    std::shared_ptr<string> expireAt_ = nullptr;
    // The time when the activation code was generated.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // The time when the activation code was updated.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The activation code ID.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The media access control (MAC) address used in the generation of the activation code.
    std::shared_ptr<string> macAddress_ = nullptr;
    // The name of the activation code.
    std::shared_ptr<string> name_ = nullptr;
    // The unique identifier of the database.
    std::shared_ptr<string> systemIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
