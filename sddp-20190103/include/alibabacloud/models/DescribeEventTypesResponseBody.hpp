// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeEventTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventTypeList, eventTypeList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventTypeList, eventTypeList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEventTypesResponseBody() = default ;
    DescribeEventTypesResponseBody(const DescribeEventTypesResponseBody &) = default ;
    DescribeEventTypesResponseBody(DescribeEventTypesResponseBody &&) = default ;
    DescribeEventTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventTypesResponseBody() = default ;
    DescribeEventTypesResponseBody& operator=(const DescribeEventTypesResponseBody &) = default ;
    DescribeEventTypesResponseBody& operator=(DescribeEventTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EventTypeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EventTypeList& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SubTypeList, subTypeList_);
      };
      friend void from_json(const Darabonba::Json& j, EventTypeList& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SubTypeList, subTypeList_);
      };
      EventTypeList() = default ;
      EventTypeList(const EventTypeList &) = default ;
      EventTypeList(EventTypeList &&) = default ;
      EventTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EventTypeList() = default ;
      EventTypeList& operator=(const EventTypeList &) = default ;
      EventTypeList& operator=(EventTypeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubTypeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubTypeList& obj) { 
          DARABONBA_PTR_TO_JSON(AdaptedProduct, adaptedProduct_);
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(ConfigCode, configCode_);
          DARABONBA_PTR_TO_JSON(ConfigContentType, configContentType_);
          DARABONBA_PTR_TO_JSON(ConfigDescription, configDescription_);
          DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EventHitCount, eventHitCount_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, SubTypeList& obj) { 
          DARABONBA_PTR_FROM_JSON(AdaptedProduct, adaptedProduct_);
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(ConfigCode, configCode_);
          DARABONBA_PTR_FROM_JSON(ConfigContentType, configContentType_);
          DARABONBA_PTR_FROM_JSON(ConfigDescription, configDescription_);
          DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EventHitCount, eventHitCount_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        SubTypeList() = default ;
        SubTypeList(const SubTypeList &) = default ;
        SubTypeList(SubTypeList &&) = default ;
        SubTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubTypeList() = default ;
        SubTypeList& operator=(const SubTypeList &) = default ;
        SubTypeList& operator=(SubTypeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->adaptedProduct_ == nullptr
        && this->code_ == nullptr && this->configCode_ == nullptr && this->configContentType_ == nullptr && this->configDescription_ == nullptr && this->configValue_ == nullptr
        && this->description_ == nullptr && this->eventHitCount_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->status_ == nullptr; };
        // adaptedProduct Field Functions 
        bool hasAdaptedProduct() const { return this->adaptedProduct_ != nullptr;};
        void deleteAdaptedProduct() { this->adaptedProduct_ = nullptr;};
        inline string getAdaptedProduct() const { DARABONBA_PTR_GET_DEFAULT(adaptedProduct_, "") };
        inline SubTypeList& setAdaptedProduct(string adaptedProduct) { DARABONBA_PTR_SET_VALUE(adaptedProduct_, adaptedProduct) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline SubTypeList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // configCode Field Functions 
        bool hasConfigCode() const { return this->configCode_ != nullptr;};
        void deleteConfigCode() { this->configCode_ = nullptr;};
        inline string getConfigCode() const { DARABONBA_PTR_GET_DEFAULT(configCode_, "") };
        inline SubTypeList& setConfigCode(string configCode) { DARABONBA_PTR_SET_VALUE(configCode_, configCode) };


        // configContentType Field Functions 
        bool hasConfigContentType() const { return this->configContentType_ != nullptr;};
        void deleteConfigContentType() { this->configContentType_ = nullptr;};
        inline int32_t getConfigContentType() const { DARABONBA_PTR_GET_DEFAULT(configContentType_, 0) };
        inline SubTypeList& setConfigContentType(int32_t configContentType) { DARABONBA_PTR_SET_VALUE(configContentType_, configContentType) };


        // configDescription Field Functions 
        bool hasConfigDescription() const { return this->configDescription_ != nullptr;};
        void deleteConfigDescription() { this->configDescription_ = nullptr;};
        inline string getConfigDescription() const { DARABONBA_PTR_GET_DEFAULT(configDescription_, "") };
        inline SubTypeList& setConfigDescription(string configDescription) { DARABONBA_PTR_SET_VALUE(configDescription_, configDescription) };


        // configValue Field Functions 
        bool hasConfigValue() const { return this->configValue_ != nullptr;};
        void deleteConfigValue() { this->configValue_ = nullptr;};
        inline string getConfigValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
        inline SubTypeList& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline SubTypeList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // eventHitCount Field Functions 
        bool hasEventHitCount() const { return this->eventHitCount_ != nullptr;};
        void deleteEventHitCount() { this->eventHitCount_ = nullptr;};
        inline int32_t getEventHitCount() const { DARABONBA_PTR_GET_DEFAULT(eventHitCount_, 0) };
        inline SubTypeList& setEventHitCount(int32_t eventHitCount) { DARABONBA_PTR_SET_VALUE(eventHitCount_, eventHitCount) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline SubTypeList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SubTypeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline SubTypeList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The service to which the anomalous event detection rule applies. Valid values include **MaxCompute, OSS, ADS, OTS, and RDS**.
        shared_ptr<string> adaptedProduct_ {};
        // The code of the anomalous event subtype.
        shared_ptr<string> code_ {};
        // The code of the configuration.
        shared_ptr<string> configCode_ {};
        // The content format of anomalous event detection rule. Valid values:
        // 
        // *   **0**: numeric values such as thresholds
        // *   **1**: text such as IP addresses
        shared_ptr<int32_t> configContentType_ {};
        // The description of the configuration.
        shared_ptr<string> configDescription_ {};
        // The value of the configuration.
        shared_ptr<string> configValue_ {};
        // The description of the anomalous event subtype.
        shared_ptr<string> description_ {};
        // The number of times that the anomalous event hits the anomalous event detection rule.
        shared_ptr<int32_t> eventHitCount_ {};
        // The ID of the anomalous event subtype.
        shared_ptr<int64_t> id_ {};
        // The name of the anomalous event subtype.
        shared_ptr<string> name_ {};
        // Indicates whether detection is enabled for the anomalous event subtype. Valid values:
        // 
        // *   **1**: yes
        // *   **0**: no
        shared_ptr<int32_t> status_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->description_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->subTypeList_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline EventTypeList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline EventTypeList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline EventTypeList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline EventTypeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // subTypeList Field Functions 
      bool hasSubTypeList() const { return this->subTypeList_ != nullptr;};
      void deleteSubTypeList() { this->subTypeList_ = nullptr;};
      inline const vector<EventTypeList::SubTypeList> & getSubTypeList() const { DARABONBA_PTR_GET_CONST(subTypeList_, vector<EventTypeList::SubTypeList>) };
      inline vector<EventTypeList::SubTypeList> getSubTypeList() { DARABONBA_PTR_GET(subTypeList_, vector<EventTypeList::SubTypeList>) };
      inline EventTypeList& setSubTypeList(const vector<EventTypeList::SubTypeList> & subTypeList) { DARABONBA_PTR_SET_VALUE(subTypeList_, subTypeList) };
      inline EventTypeList& setSubTypeList(vector<EventTypeList::SubTypeList> && subTypeList) { DARABONBA_PTR_SET_RVALUE(subTypeList_, subTypeList) };


    protected:
      // The code of the anomalous event type.
      shared_ptr<string> code_ {};
      // The description of the anomalous event type.
      shared_ptr<string> description_ {};
      // The ID of the anomalous event type.
      shared_ptr<int64_t> id_ {};
      // The name of the anomalous event type.
      shared_ptr<string> name_ {};
      // An array that consists of anomalous event subtypes.
      shared_ptr<vector<EventTypeList::SubTypeList>> subTypeList_ {};
    };

    virtual bool empty() const override { return this->eventTypeList_ == nullptr
        && this->requestId_ == nullptr; };
    // eventTypeList Field Functions 
    bool hasEventTypeList() const { return this->eventTypeList_ != nullptr;};
    void deleteEventTypeList() { this->eventTypeList_ = nullptr;};
    inline const vector<DescribeEventTypesResponseBody::EventTypeList> & getEventTypeList() const { DARABONBA_PTR_GET_CONST(eventTypeList_, vector<DescribeEventTypesResponseBody::EventTypeList>) };
    inline vector<DescribeEventTypesResponseBody::EventTypeList> getEventTypeList() { DARABONBA_PTR_GET(eventTypeList_, vector<DescribeEventTypesResponseBody::EventTypeList>) };
    inline DescribeEventTypesResponseBody& setEventTypeList(const vector<DescribeEventTypesResponseBody::EventTypeList> & eventTypeList) { DARABONBA_PTR_SET_VALUE(eventTypeList_, eventTypeList) };
    inline DescribeEventTypesResponseBody& setEventTypeList(vector<DescribeEventTypesResponseBody::EventTypeList> && eventTypeList) { DARABONBA_PTR_SET_RVALUE(eventTypeList_, eventTypeList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the types of anomalous events.
    // 
    // > If you leave the ParentTypeId parameter empty, anomalous event types are returned. If you set the ParentTypeId parameter, anomalous event subtypes under the specified anomalous event type are returned.
    shared_ptr<vector<DescribeEventTypesResponseBody::EventTypeList>> eventTypeList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
