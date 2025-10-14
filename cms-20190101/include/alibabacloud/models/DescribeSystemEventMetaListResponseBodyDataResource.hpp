// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTMETALISTRESPONSEBODYDATARESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTMETALISTRESPONSEBODYDATARESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSystemEventMetaListResponseBodyDataResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemEventMetaListResponseBodyDataResource& obj) { 
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NameDesc, nameDesc_);
      DARABONBA_PTR_TO_JSON(NameDesc.En, nameDesc_en_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemEventMetaListResponseBodyDataResource& obj) { 
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NameDesc, nameDesc_);
      DARABONBA_PTR_FROM_JSON(NameDesc.En, nameDesc_en_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
    };
    DescribeSystemEventMetaListResponseBodyDataResource() = default ;
    DescribeSystemEventMetaListResponseBodyDataResource(const DescribeSystemEventMetaListResponseBodyDataResource &) = default ;
    DescribeSystemEventMetaListResponseBodyDataResource(DescribeSystemEventMetaListResponseBodyDataResource &&) = default ;
    DescribeSystemEventMetaListResponseBodyDataResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemEventMetaListResponseBodyDataResource() = default ;
    DescribeSystemEventMetaListResponseBodyDataResource& operator=(const DescribeSystemEventMetaListResponseBodyDataResource &) = default ;
    DescribeSystemEventMetaListResponseBodyDataResource& operator=(DescribeSystemEventMetaListResponseBodyDataResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventType_ == nullptr
        && return this->level_ == nullptr && return this->name_ == nullptr && return this->nameDesc_ == nullptr && return this->nameDesc_en_ == nullptr && return this->product_ == nullptr
        && return this->status_ == nullptr && return this->statusDesc_ == nullptr; };
    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeSystemEventMetaListResponseBodyDataResource& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeSystemEventMetaListResponseBodyDataResource& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSystemEventMetaListResponseBodyDataResource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameDesc Field Functions 
    bool hasNameDesc() const { return this->nameDesc_ != nullptr;};
    void deleteNameDesc() { this->nameDesc_ = nullptr;};
    inline string nameDesc() const { DARABONBA_PTR_GET_DEFAULT(nameDesc_, "") };
    inline DescribeSystemEventMetaListResponseBodyDataResource& setNameDesc(string nameDesc) { DARABONBA_PTR_SET_VALUE(nameDesc_, nameDesc) };


    // nameDesc_en Field Functions 
    bool hasNameDesc_en() const { return this->nameDesc_en_ != nullptr;};
    void deleteNameDesc_en() { this->nameDesc_en_ = nullptr;};
    inline string nameDesc_en() const { DARABONBA_PTR_GET_DEFAULT(nameDesc_en_, "") };
    inline DescribeSystemEventMetaListResponseBodyDataResource& setNameDesc_en(string nameDesc_en) { DARABONBA_PTR_SET_VALUE(nameDesc_en_, nameDesc_en) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DescribeSystemEventMetaListResponseBodyDataResource& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSystemEventMetaListResponseBodyDataResource& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline DescribeSystemEventMetaListResponseBodyDataResource& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


  protected:
    // The type of the system event. Valid values:
    // 
    // *   StatusNotification: fault notifications
    // *   Exception: exceptions
    // *   Maintenance: O\\&M
    std::shared_ptr<string> eventType_ = nullptr;
    // The alert level. Valid values:
    // 
    // *   CRITICAL
    // *   WARN
    // *   INFO
    std::shared_ptr<string> level_ = nullptr;
    // The name of the system event.
    std::shared_ptr<string> name_ = nullptr;
    // The description of the event name.
    std::shared_ptr<string> nameDesc_ = nullptr;
    std::shared_ptr<string> nameDesc_en_ = nullptr;
    // The abbreviation of the service name.
    std::shared_ptr<string> product_ = nullptr;
    // The status of the system event.
    std::shared_ptr<string> status_ = nullptr;
    // The description of the event status.
    std::shared_ptr<string> statusDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
