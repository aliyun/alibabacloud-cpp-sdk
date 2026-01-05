// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTRANGELISTENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTRANGELISTENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Entries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Entries& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(PortRange, portRange_);
      };
      friend void from_json(const Darabonba::Json& j, Entries& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
      };
      Entries() = default ;
      Entries(const Entries &) = default ;
      Entries(Entries &&) = default ;
      Entries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Entries() = default ;
      Entries& operator=(const Entries &) = default ;
      Entries& operator=(Entries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->portRange_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Entries& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // portRange Field Functions 
      bool hasPortRange() const { return this->portRange_ != nullptr;};
      void deletePortRange() { this->portRange_ = nullptr;};
      inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
      inline Entries& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


    protected:
      // The description of the port range.
      shared_ptr<string> description_ {};
      // The port range.
      shared_ptr<string> portRange_ {};
    };

    virtual bool empty() const override { return this->entries_ == nullptr
        && this->requestId_ == nullptr; };
    // entries Field Functions 
    bool hasEntries() const { return this->entries_ != nullptr;};
    void deleteEntries() { this->entries_ = nullptr;};
    inline const vector<DescribePortRangeListEntriesResponseBody::Entries> & getEntries() const { DARABONBA_PTR_GET_CONST(entries_, vector<DescribePortRangeListEntriesResponseBody::Entries>) };
    inline vector<DescribePortRangeListEntriesResponseBody::Entries> getEntries() { DARABONBA_PTR_GET(entries_, vector<DescribePortRangeListEntriesResponseBody::Entries>) };
    inline DescribePortRangeListEntriesResponseBody& setEntries(const vector<DescribePortRangeListEntriesResponseBody::Entries> & entries) { DARABONBA_PTR_SET_VALUE(entries_, entries) };
    inline DescribePortRangeListEntriesResponseBody& setEntries(vector<DescribePortRangeListEntriesResponseBody::Entries> && entries) { DARABONBA_PTR_SET_RVALUE(entries_, entries) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePortRangeListEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Port list entries.
    shared_ptr<vector<DescribePortRangeListEntriesResponseBody::Entries>> entries_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
