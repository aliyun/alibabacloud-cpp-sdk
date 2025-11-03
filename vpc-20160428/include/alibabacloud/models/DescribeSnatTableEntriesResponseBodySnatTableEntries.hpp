// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNATTABLEENTRIESRESPONSEBODYSNATTABLEENTRIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNATTABLEENTRIESRESPONSEBODYSNATTABLEENTRIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeSnatTableEntriesResponseBodySnatTableEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnatTableEntriesResponseBodySnatTableEntries& obj) { 
      DARABONBA_PTR_TO_JSON(SnatTableEntry, snatTableEntry_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnatTableEntriesResponseBodySnatTableEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(SnatTableEntry, snatTableEntry_);
    };
    DescribeSnatTableEntriesResponseBodySnatTableEntries() = default ;
    DescribeSnatTableEntriesResponseBodySnatTableEntries(const DescribeSnatTableEntriesResponseBodySnatTableEntries &) = default ;
    DescribeSnatTableEntriesResponseBodySnatTableEntries(DescribeSnatTableEntriesResponseBodySnatTableEntries &&) = default ;
    DescribeSnatTableEntriesResponseBodySnatTableEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnatTableEntriesResponseBodySnatTableEntries() = default ;
    DescribeSnatTableEntriesResponseBodySnatTableEntries& operator=(const DescribeSnatTableEntriesResponseBodySnatTableEntries &) = default ;
    DescribeSnatTableEntriesResponseBodySnatTableEntries& operator=(DescribeSnatTableEntriesResponseBodySnatTableEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->snatTableEntry_ == nullptr; };
    // snatTableEntry Field Functions 
    bool hasSnatTableEntry() const { return this->snatTableEntry_ != nullptr;};
    void deleteSnatTableEntry() { this->snatTableEntry_ = nullptr;};
    inline const vector<Models::DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry> & snatTableEntry() const { DARABONBA_PTR_GET_CONST(snatTableEntry_, vector<Models::DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry>) };
    inline vector<Models::DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry> snatTableEntry() { DARABONBA_PTR_GET(snatTableEntry_, vector<Models::DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry>) };
    inline DescribeSnatTableEntriesResponseBodySnatTableEntries& setSnatTableEntry(const vector<Models::DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry> & snatTableEntry) { DARABONBA_PTR_SET_VALUE(snatTableEntry_, snatTableEntry) };
    inline DescribeSnatTableEntriesResponseBodySnatTableEntries& setSnatTableEntry(vector<Models::DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry> && snatTableEntry) { DARABONBA_PTR_SET_RVALUE(snatTableEntry_, snatTableEntry) };


  protected:
    std::shared_ptr<vector<Models::DescribeSnatTableEntriesResponseBodySnatTableEntriesSnatTableEntry>> snatTableEntry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
