// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCECOUNTTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCECOUNTTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetInstanceCountTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceCountTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceCounts, instanceCounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceCountTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceCounts, instanceCounts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceCountTrendResponseBody() = default ;
    GetInstanceCountTrendResponseBody(const GetInstanceCountTrendResponseBody &) = default ;
    GetInstanceCountTrendResponseBody(GetInstanceCountTrendResponseBody &&) = default ;
    GetInstanceCountTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceCountTrendResponseBody() = default ;
    GetInstanceCountTrendResponseBody& operator=(const GetInstanceCountTrendResponseBody &) = default ;
    GetInstanceCountTrendResponseBody& operator=(GetInstanceCountTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceCounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceCounts& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Date, date_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceCounts& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Date, date_);
      };
      InstanceCounts() = default ;
      InstanceCounts(const InstanceCounts &) = default ;
      InstanceCounts(InstanceCounts &&) = default ;
      InstanceCounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceCounts() = default ;
      InstanceCounts& operator=(const InstanceCounts &) = default ;
      InstanceCounts& operator=(InstanceCounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->date_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline InstanceCounts& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // date Field Functions 
      bool hasDate() const { return this->date_ != nullptr;};
      void deleteDate() { this->date_ = nullptr;};
      inline int64_t getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, 0L) };
      inline InstanceCounts& setDate(int64_t date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    protected:
      // The number of instances.
      shared_ptr<int32_t> count_ {};
      // The data timestamp.
      shared_ptr<int64_t> date_ {};
    };

    virtual bool empty() const override { return this->instanceCounts_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceCounts Field Functions 
    bool hasInstanceCounts() const { return this->instanceCounts_ != nullptr;};
    void deleteInstanceCounts() { this->instanceCounts_ = nullptr;};
    inline const vector<GetInstanceCountTrendResponseBody::InstanceCounts> & getInstanceCounts() const { DARABONBA_PTR_GET_CONST(instanceCounts_, vector<GetInstanceCountTrendResponseBody::InstanceCounts>) };
    inline vector<GetInstanceCountTrendResponseBody::InstanceCounts> getInstanceCounts() { DARABONBA_PTR_GET(instanceCounts_, vector<GetInstanceCountTrendResponseBody::InstanceCounts>) };
    inline GetInstanceCountTrendResponseBody& setInstanceCounts(const vector<GetInstanceCountTrendResponseBody::InstanceCounts> & instanceCounts) { DARABONBA_PTR_SET_VALUE(instanceCounts_, instanceCounts) };
    inline GetInstanceCountTrendResponseBody& setInstanceCounts(vector<GetInstanceCountTrendResponseBody::InstanceCounts> && instanceCounts) { DARABONBA_PTR_SET_RVALUE(instanceCounts_, instanceCounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceCountTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The quantity trend of instances.
    shared_ptr<vector<GetInstanceCountTrendResponseBody::InstanceCounts>> instanceCounts_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
