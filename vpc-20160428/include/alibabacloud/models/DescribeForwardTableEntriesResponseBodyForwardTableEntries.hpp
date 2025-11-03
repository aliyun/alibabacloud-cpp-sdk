// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFORWARDTABLEENTRIESRESPONSEBODYFORWARDTABLEENTRIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFORWARDTABLEENTRIESRESPONSEBODYFORWARDTABLEENTRIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeForwardTableEntriesResponseBodyForwardTableEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeForwardTableEntriesResponseBodyForwardTableEntries& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardTableEntry, forwardTableEntry_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeForwardTableEntriesResponseBodyForwardTableEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardTableEntry, forwardTableEntry_);
    };
    DescribeForwardTableEntriesResponseBodyForwardTableEntries() = default ;
    DescribeForwardTableEntriesResponseBodyForwardTableEntries(const DescribeForwardTableEntriesResponseBodyForwardTableEntries &) = default ;
    DescribeForwardTableEntriesResponseBodyForwardTableEntries(DescribeForwardTableEntriesResponseBodyForwardTableEntries &&) = default ;
    DescribeForwardTableEntriesResponseBodyForwardTableEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeForwardTableEntriesResponseBodyForwardTableEntries() = default ;
    DescribeForwardTableEntriesResponseBodyForwardTableEntries& operator=(const DescribeForwardTableEntriesResponseBodyForwardTableEntries &) = default ;
    DescribeForwardTableEntriesResponseBodyForwardTableEntries& operator=(DescribeForwardTableEntriesResponseBodyForwardTableEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forwardTableEntry_ == nullptr; };
    // forwardTableEntry Field Functions 
    bool hasForwardTableEntry() const { return this->forwardTableEntry_ != nullptr;};
    void deleteForwardTableEntry() { this->forwardTableEntry_ = nullptr;};
    inline const vector<Models::DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry> & forwardTableEntry() const { DARABONBA_PTR_GET_CONST(forwardTableEntry_, vector<Models::DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry>) };
    inline vector<Models::DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry> forwardTableEntry() { DARABONBA_PTR_GET(forwardTableEntry_, vector<Models::DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry>) };
    inline DescribeForwardTableEntriesResponseBodyForwardTableEntries& setForwardTableEntry(const vector<Models::DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry> & forwardTableEntry) { DARABONBA_PTR_SET_VALUE(forwardTableEntry_, forwardTableEntry) };
    inline DescribeForwardTableEntriesResponseBodyForwardTableEntries& setForwardTableEntry(vector<Models::DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry> && forwardTableEntry) { DARABONBA_PTR_SET_RVALUE(forwardTableEntry_, forwardTableEntry) };


  protected:
    std::shared_ptr<vector<Models::DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry>> forwardTableEntry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
