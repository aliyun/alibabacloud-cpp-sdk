// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHISTORYEVENTSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHISTORYEVENTSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHistoryEventsResponseBodyItemsData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeHistoryEventsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHistoryEventsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Specversion, specversion_);
      DARABONBA_PTR_TO_JSON(Subject, subject_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHistoryEventsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Specversion, specversion_);
      DARABONBA_PTR_FROM_JSON(Subject, subject_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeHistoryEventsResponseBodyItems() = default ;
    DescribeHistoryEventsResponseBodyItems(const DescribeHistoryEventsResponseBodyItems &) = default ;
    DescribeHistoryEventsResponseBodyItems(DescribeHistoryEventsResponseBodyItems &&) = default ;
    DescribeHistoryEventsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHistoryEventsResponseBodyItems() = default ;
    DescribeHistoryEventsResponseBodyItems& operator=(const DescribeHistoryEventsResponseBodyItems &) = default ;
    DescribeHistoryEventsResponseBodyItems& operator=(DescribeHistoryEventsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->id_ == nullptr && return this->region_ == nullptr && return this->source_ == nullptr && return this->specversion_ == nullptr && return this->subject_ == nullptr
        && return this->time_ == nullptr && return this->type_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::DescribeHistoryEventsResponseBodyItemsData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::DescribeHistoryEventsResponseBodyItemsData) };
    inline Models::DescribeHistoryEventsResponseBodyItemsData data() { DARABONBA_PTR_GET(data_, Models::DescribeHistoryEventsResponseBodyItemsData) };
    inline DescribeHistoryEventsResponseBodyItems& setData(const Models::DescribeHistoryEventsResponseBodyItemsData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeHistoryEventsResponseBodyItems& setData(Models::DescribeHistoryEventsResponseBodyItemsData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeHistoryEventsResponseBodyItems& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeHistoryEventsResponseBodyItems& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeHistoryEventsResponseBodyItems& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // specversion Field Functions 
    bool hasSpecversion() const { return this->specversion_ != nullptr;};
    void deleteSpecversion() { this->specversion_ = nullptr;};
    inline string specversion() const { DARABONBA_PTR_GET_DEFAULT(specversion_, "") };
    inline DescribeHistoryEventsResponseBodyItems& setSpecversion(string specversion) { DARABONBA_PTR_SET_VALUE(specversion_, specversion) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline DescribeHistoryEventsResponseBodyItems& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline DescribeHistoryEventsResponseBodyItems& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeHistoryEventsResponseBodyItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The details of the data.
    std::shared_ptr<Models::DescribeHistoryEventsResponseBodyItemsData> data_ = nullptr;
    // The task ID
    std::shared_ptr<string> id_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The event source.
    std::shared_ptr<string> source_ = nullptr;
    // The database engine version.
    std::shared_ptr<string> specversion_ = nullptr;
    // The name of the pending event.
    std::shared_ptr<string> subject_ = nullptr;
    // The amount of time that has elapsed from the start time of the query. Unit: seconds.
    std::shared_ptr<string> time_ = nullptr;
    // The event type. For more information, see [View the event history of an ApsaraDB RDS instance](https://help.aliyun.com/document_detail/129759.html).
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
