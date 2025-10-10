// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDENTRIESTOACLREQUESTACLENTRIES_HPP_
#define ALIBABACLOUD_MODELS_ADDENTRIESTOACLREQUESTACLENTRIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class AddEntriesToAclRequestAclEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddEntriesToAclRequestAclEntries& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Entry, entry_);
    };
    friend void from_json(const Darabonba::Json& j, AddEntriesToAclRequestAclEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Entry, entry_);
    };
    AddEntriesToAclRequestAclEntries() = default ;
    AddEntriesToAclRequestAclEntries(const AddEntriesToAclRequestAclEntries &) = default ;
    AddEntriesToAclRequestAclEntries(AddEntriesToAclRequestAclEntries &&) = default ;
    AddEntriesToAclRequestAclEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddEntriesToAclRequestAclEntries() = default ;
    AddEntriesToAclRequestAclEntries& operator=(const AddEntriesToAclRequestAclEntries &) = default ;
    AddEntriesToAclRequestAclEntries& operator=(AddEntriesToAclRequestAclEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->entry_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddEntriesToAclRequestAclEntries& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // entry Field Functions 
    bool hasEntry() const { return this->entry_ != nullptr;};
    void deleteEntry() { this->entry_ = nullptr;};
    inline string entry() const { DARABONBA_PTR_GET_DEFAULT(entry_, "") };
    inline AddEntriesToAclRequestAclEntries& setEntry(string entry) { DARABONBA_PTR_SET_VALUE(entry_, entry) };


  protected:
    // The description of the ACL entry. The description must be 2 to 256 characters in length, and can contain letters, digits, commas (,), periods (.), semicolons (;), forward slashes (/), at signs (@), underscores (_), and hyphens (-).
    // 
    // You can add at most 20 entries in each call.
    std::shared_ptr<string> description_ = nullptr;
    // The CIDR block in the ACL entry.
    // 
    // This parameter is required.
    std::shared_ptr<string> entry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
