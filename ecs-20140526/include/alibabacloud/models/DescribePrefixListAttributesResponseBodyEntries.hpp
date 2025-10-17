// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTATTRIBUTESRESPONSEBODYENTRIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTATTRIBUTESRESPONSEBODYENTRIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePrefixListAttributesResponseBodyEntriesEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePrefixListAttributesResponseBodyEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrefixListAttributesResponseBodyEntries& obj) { 
      DARABONBA_PTR_TO_JSON(Entry, entry_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrefixListAttributesResponseBodyEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(Entry, entry_);
    };
    DescribePrefixListAttributesResponseBodyEntries() = default ;
    DescribePrefixListAttributesResponseBodyEntries(const DescribePrefixListAttributesResponseBodyEntries &) = default ;
    DescribePrefixListAttributesResponseBodyEntries(DescribePrefixListAttributesResponseBodyEntries &&) = default ;
    DescribePrefixListAttributesResponseBodyEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrefixListAttributesResponseBodyEntries() = default ;
    DescribePrefixListAttributesResponseBodyEntries& operator=(const DescribePrefixListAttributesResponseBodyEntries &) = default ;
    DescribePrefixListAttributesResponseBodyEntries& operator=(DescribePrefixListAttributesResponseBodyEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entry_ == nullptr; };
    // entry Field Functions 
    bool hasEntry() const { return this->entry_ != nullptr;};
    void deleteEntry() { this->entry_ = nullptr;};
    inline const vector<Models::DescribePrefixListAttributesResponseBodyEntriesEntry> & entry() const { DARABONBA_PTR_GET_CONST(entry_, vector<Models::DescribePrefixListAttributesResponseBodyEntriesEntry>) };
    inline vector<Models::DescribePrefixListAttributesResponseBodyEntriesEntry> entry() { DARABONBA_PTR_GET(entry_, vector<Models::DescribePrefixListAttributesResponseBodyEntriesEntry>) };
    inline DescribePrefixListAttributesResponseBodyEntries& setEntry(const vector<Models::DescribePrefixListAttributesResponseBodyEntriesEntry> & entry) { DARABONBA_PTR_SET_VALUE(entry_, entry) };
    inline DescribePrefixListAttributesResponseBodyEntries& setEntry(vector<Models::DescribePrefixListAttributesResponseBodyEntriesEntry> && entry) { DARABONBA_PTR_SET_RVALUE(entry_, entry) };


  protected:
    std::shared_ptr<vector<Models::DescribePrefixListAttributesResponseBodyEntriesEntry>> entry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
