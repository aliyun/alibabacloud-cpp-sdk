// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTRANGELISTENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTRANGELISTENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePortRangeListEntriesResponseBodyEntries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePortRangeListEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortRangeListEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Entries, entries_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortRangeListEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Entries, entries_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePortRangeListEntriesResponseBody() = default ;
    DescribePortRangeListEntriesResponseBody(const DescribePortRangeListEntriesResponseBody &) = default ;
    DescribePortRangeListEntriesResponseBody(DescribePortRangeListEntriesResponseBody &&) = default ;
    DescribePortRangeListEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortRangeListEntriesResponseBody() = default ;
    DescribePortRangeListEntriesResponseBody& operator=(const DescribePortRangeListEntriesResponseBody &) = default ;
    DescribePortRangeListEntriesResponseBody& operator=(DescribePortRangeListEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entries_ != nullptr
        && this->requestId_ != nullptr; };
    // entries Field Functions 
    bool hasEntries() const { return this->entries_ != nullptr;};
    void deleteEntries() { this->entries_ = nullptr;};
    inline const vector<DescribePortRangeListEntriesResponseBodyEntries> & entries() const { DARABONBA_PTR_GET_CONST(entries_, vector<DescribePortRangeListEntriesResponseBodyEntries>) };
    inline vector<DescribePortRangeListEntriesResponseBodyEntries> entries() { DARABONBA_PTR_GET(entries_, vector<DescribePortRangeListEntriesResponseBodyEntries>) };
    inline DescribePortRangeListEntriesResponseBody& setEntries(const vector<DescribePortRangeListEntriesResponseBodyEntries> & entries) { DARABONBA_PTR_SET_VALUE(entries_, entries) };
    inline DescribePortRangeListEntriesResponseBody& setEntries(vector<DescribePortRangeListEntriesResponseBodyEntries> && entries) { DARABONBA_PTR_SET_RVALUE(entries_, entries) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePortRangeListEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Port list entries.
    std::shared_ptr<vector<DescribePortRangeListEntriesResponseBodyEntries>> entries_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
