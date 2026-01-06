// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLLATIONTIMEZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLLATIONTIMEZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeCollationTimeZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCollationTimeZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CollationTimeZones, collationTimeZones_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCollationTimeZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CollationTimeZones, collationTimeZones_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCollationTimeZonesResponseBody() = default ;
    DescribeCollationTimeZonesResponseBody(const DescribeCollationTimeZonesResponseBody &) = default ;
    DescribeCollationTimeZonesResponseBody(DescribeCollationTimeZonesResponseBody &&) = default ;
    DescribeCollationTimeZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCollationTimeZonesResponseBody() = default ;
    DescribeCollationTimeZonesResponseBody& operator=(const DescribeCollationTimeZonesResponseBody &) = default ;
    DescribeCollationTimeZonesResponseBody& operator=(DescribeCollationTimeZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CollationTimeZones : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CollationTimeZones& obj) { 
        DARABONBA_PTR_TO_JSON(CollationTimeZone, collationTimeZone_);
      };
      friend void from_json(const Darabonba::Json& j, CollationTimeZones& obj) { 
        DARABONBA_PTR_FROM_JSON(CollationTimeZone, collationTimeZone_);
      };
      CollationTimeZones() = default ;
      CollationTimeZones(const CollationTimeZones &) = default ;
      CollationTimeZones(CollationTimeZones &&) = default ;
      CollationTimeZones(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CollationTimeZones() = default ;
      CollationTimeZones& operator=(const CollationTimeZones &) = default ;
      CollationTimeZones& operator=(CollationTimeZones &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CollationTimeZone : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CollationTimeZone& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(StandardTimeOffset, standardTimeOffset_);
          DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
        };
        friend void from_json(const Darabonba::Json& j, CollationTimeZone& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(StandardTimeOffset, standardTimeOffset_);
          DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
        };
        CollationTimeZone() = default ;
        CollationTimeZone(const CollationTimeZone &) = default ;
        CollationTimeZone(CollationTimeZone &&) = default ;
        CollationTimeZone(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CollationTimeZone() = default ;
        CollationTimeZone& operator=(const CollationTimeZone &) = default ;
        CollationTimeZone& operator=(CollationTimeZone &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->standardTimeOffset_ == nullptr && this->timeZone_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline CollationTimeZone& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // standardTimeOffset Field Functions 
        bool hasStandardTimeOffset() const { return this->standardTimeOffset_ != nullptr;};
        void deleteStandardTimeOffset() { this->standardTimeOffset_ = nullptr;};
        inline string getStandardTimeOffset() const { DARABONBA_PTR_GET_DEFAULT(standardTimeOffset_, "") };
        inline CollationTimeZone& setStandardTimeOffset(string standardTimeOffset) { DARABONBA_PTR_SET_VALUE(standardTimeOffset_, standardTimeOffset) };


        // timeZone Field Functions 
        bool hasTimeZone() const { return this->timeZone_ != nullptr;};
        void deleteTimeZone() { this->timeZone_ = nullptr;};
        inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
        inline CollationTimeZone& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


      protected:
        // The description.
        shared_ptr<string> description_ {};
        // The offset of the UTC time. The offset is in the following format: (UTC+*HH:mm*).
        shared_ptr<string> standardTimeOffset_ {};
        // The time zone.
        shared_ptr<string> timeZone_ {};
      };

      virtual bool empty() const override { return this->collationTimeZone_ == nullptr; };
      // collationTimeZone Field Functions 
      bool hasCollationTimeZone() const { return this->collationTimeZone_ != nullptr;};
      void deleteCollationTimeZone() { this->collationTimeZone_ = nullptr;};
      inline const vector<CollationTimeZones::CollationTimeZone> & getCollationTimeZone() const { DARABONBA_PTR_GET_CONST(collationTimeZone_, vector<CollationTimeZones::CollationTimeZone>) };
      inline vector<CollationTimeZones::CollationTimeZone> getCollationTimeZone() { DARABONBA_PTR_GET(collationTimeZone_, vector<CollationTimeZones::CollationTimeZone>) };
      inline CollationTimeZones& setCollationTimeZone(const vector<CollationTimeZones::CollationTimeZone> & collationTimeZone) { DARABONBA_PTR_SET_VALUE(collationTimeZone_, collationTimeZone) };
      inline CollationTimeZones& setCollationTimeZone(vector<CollationTimeZones::CollationTimeZone> && collationTimeZone) { DARABONBA_PTR_SET_RVALUE(collationTimeZone_, collationTimeZone) };


    protected:
      shared_ptr<vector<CollationTimeZones::CollationTimeZone>> collationTimeZone_ {};
    };

    virtual bool empty() const override { return this->collationTimeZones_ == nullptr
        && this->requestId_ == nullptr; };
    // collationTimeZones Field Functions 
    bool hasCollationTimeZones() const { return this->collationTimeZones_ != nullptr;};
    void deleteCollationTimeZones() { this->collationTimeZones_ = nullptr;};
    inline const DescribeCollationTimeZonesResponseBody::CollationTimeZones & getCollationTimeZones() const { DARABONBA_PTR_GET_CONST(collationTimeZones_, DescribeCollationTimeZonesResponseBody::CollationTimeZones) };
    inline DescribeCollationTimeZonesResponseBody::CollationTimeZones getCollationTimeZones() { DARABONBA_PTR_GET(collationTimeZones_, DescribeCollationTimeZonesResponseBody::CollationTimeZones) };
    inline DescribeCollationTimeZonesResponseBody& setCollationTimeZones(const DescribeCollationTimeZonesResponseBody::CollationTimeZones & collationTimeZones) { DARABONBA_PTR_SET_VALUE(collationTimeZones_, collationTimeZones) };
    inline DescribeCollationTimeZonesResponseBody& setCollationTimeZones(DescribeCollationTimeZonesResponseBody::CollationTimeZones && collationTimeZones) { DARABONBA_PTR_SET_RVALUE(collationTimeZones_, collationTimeZones) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCollationTimeZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of the character set collations and time zones that are available.
    shared_ptr<DescribeCollationTimeZonesResponseBody::CollationTimeZones> collationTimeZones_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
