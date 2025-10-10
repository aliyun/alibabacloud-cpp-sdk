// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACLENTRIESRESPONSEBODYACLENTRIES_HPP_
#define ALIBABACLOUD_MODELS_LISTACLENTRIESRESPONSEBODYACLENTRIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListAclEntriesResponseBodyAclEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAclEntriesResponseBodyAclEntries& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Entry, entry_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListAclEntriesResponseBodyAclEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Entry, entry_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListAclEntriesResponseBodyAclEntries() = default ;
    ListAclEntriesResponseBodyAclEntries(const ListAclEntriesResponseBodyAclEntries &) = default ;
    ListAclEntriesResponseBodyAclEntries(ListAclEntriesResponseBodyAclEntries &&) = default ;
    ListAclEntriesResponseBodyAclEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAclEntriesResponseBodyAclEntries() = default ;
    ListAclEntriesResponseBodyAclEntries& operator=(const ListAclEntriesResponseBodyAclEntries &) = default ;
    ListAclEntriesResponseBodyAclEntries& operator=(ListAclEntriesResponseBodyAclEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->entry_ != nullptr && this->status_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAclEntriesResponseBodyAclEntries& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // entry Field Functions 
    bool hasEntry() const { return this->entry_ != nullptr;};
    void deleteEntry() { this->entry_ = nullptr;};
    inline string entry() const { DARABONBA_PTR_GET_DEFAULT(entry_, "") };
    inline ListAclEntriesResponseBodyAclEntries& setEntry(string entry) { DARABONBA_PTR_SET_VALUE(entry_, entry) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAclEntriesResponseBodyAclEntries& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The description of the ACL entry. The description must be 1 to 256 characters in length, and can contain letters, digits, hyphens (-), forward slashes (/), periods (.), and underscores (_).
    std::shared_ptr<string> description_ = nullptr;
    // The CIDR block for the ACL entry.
    std::shared_ptr<string> entry_ = nullptr;
    // The status of the ACL entry. Valid values:
    // 
    // *   **Adding**: The ACL entry is being added.
    // *   **Available**: The ACL entry is added and available.
    // *   **Removing**: The ACL entry is being removed.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
