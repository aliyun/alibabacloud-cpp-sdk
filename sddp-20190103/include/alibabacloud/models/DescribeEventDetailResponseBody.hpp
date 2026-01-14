// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTDETAILRESPONSEBODY_HPP_
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
  class DescribeEventDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEventDetailResponseBody() = default ;
    DescribeEventDetailResponseBody(const DescribeEventDetailResponseBody &) = default ;
    DescribeEventDetailResponseBody(DescribeEventDetailResponseBody &&) = default ;
    DescribeEventDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventDetailResponseBody() = default ;
    DescribeEventDetailResponseBody& operator=(const DescribeEventDetailResponseBody &) = default ;
    DescribeEventDetailResponseBody& operator=(DescribeEventDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Event : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Event& obj) { 
        DARABONBA_PTR_TO_JSON(AlertTime, alertTime_);
        DARABONBA_PTR_TO_JSON(Backed, backed_);
        DARABONBA_PTR_TO_JSON(DataInstance, dataInstance_);
        DARABONBA_PTR_TO_JSON(DealDisplayName, dealDisplayName_);
        DARABONBA_PTR_TO_JSON(DealLoginName, dealLoginName_);
        DARABONBA_PTR_TO_JSON(DealReason, dealReason_);
        DARABONBA_PTR_TO_JSON(DealTime, dealTime_);
        DARABONBA_PTR_TO_JSON(DealUserId, dealUserId_);
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
        DARABONBA_PTR_TO_JSON(HandleInfoList, handleInfoList_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LogDetail, logDetail_);
        DARABONBA_PTR_TO_JSON(LoginName, loginName_);
        DARABONBA_PTR_TO_JSON(NewAlarm, newAlarm_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusName, statusName_);
        DARABONBA_PTR_TO_JSON(SubTypeCode, subTypeCode_);
        DARABONBA_PTR_TO_JSON(SubTypeName, subTypeName_);
        DARABONBA_PTR_TO_JSON(TypeCode, typeCode_);
        DARABONBA_PTR_TO_JSON(TypeName, typeName_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Event& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertTime, alertTime_);
        DARABONBA_PTR_FROM_JSON(Backed, backed_);
        DARABONBA_PTR_FROM_JSON(DataInstance, dataInstance_);
        DARABONBA_PTR_FROM_JSON(DealDisplayName, dealDisplayName_);
        DARABONBA_PTR_FROM_JSON(DealLoginName, dealLoginName_);
        DARABONBA_PTR_FROM_JSON(DealReason, dealReason_);
        DARABONBA_PTR_FROM_JSON(DealTime, dealTime_);
        DARABONBA_PTR_FROM_JSON(DealUserId, dealUserId_);
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
        DARABONBA_PTR_FROM_JSON(HandleInfoList, handleInfoList_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LogDetail, logDetail_);
        DARABONBA_PTR_FROM_JSON(LoginName, loginName_);
        DARABONBA_PTR_FROM_JSON(NewAlarm, newAlarm_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusName, statusName_);
        DARABONBA_PTR_FROM_JSON(SubTypeCode, subTypeCode_);
        DARABONBA_PTR_FROM_JSON(SubTypeName, subTypeName_);
        DARABONBA_PTR_FROM_JSON(TypeCode, typeCode_);
        DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      Event() = default ;
      Event(const Event &) = default ;
      Event(Event &&) = default ;
      Event(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Event() = default ;
      Event& operator=(const Event &) = default ;
      Event& operator=(Event &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HandleInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HandleInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(CurrentValue, currentValue_);
          DARABONBA_PTR_TO_JSON(DisableTime, disableTime_);
          DARABONBA_PTR_TO_JSON(EnableTime, enableTime_);
          DARABONBA_PTR_TO_JSON(HandlerName, handlerName_);
          DARABONBA_PTR_TO_JSON(HandlerType, handlerType_);
          DARABONBA_PTR_TO_JSON(HandlerValue, handlerValue_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, HandleInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(CurrentValue, currentValue_);
          DARABONBA_PTR_FROM_JSON(DisableTime, disableTime_);
          DARABONBA_PTR_FROM_JSON(EnableTime, enableTime_);
          DARABONBA_PTR_FROM_JSON(HandlerName, handlerName_);
          DARABONBA_PTR_FROM_JSON(HandlerType, handlerType_);
          DARABONBA_PTR_FROM_JSON(HandlerValue, handlerValue_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        HandleInfoList() = default ;
        HandleInfoList(const HandleInfoList &) = default ;
        HandleInfoList(HandleInfoList &&) = default ;
        HandleInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HandleInfoList() = default ;
        HandleInfoList& operator=(const HandleInfoList &) = default ;
        HandleInfoList& operator=(HandleInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->currentValue_ == nullptr
        && this->disableTime_ == nullptr && this->enableTime_ == nullptr && this->handlerName_ == nullptr && this->handlerType_ == nullptr && this->handlerValue_ == nullptr
        && this->id_ == nullptr && this->status_ == nullptr; };
        // currentValue Field Functions 
        bool hasCurrentValue() const { return this->currentValue_ != nullptr;};
        void deleteCurrentValue() { this->currentValue_ = nullptr;};
        inline string getCurrentValue() const { DARABONBA_PTR_GET_DEFAULT(currentValue_, "") };
        inline HandleInfoList& setCurrentValue(string currentValue) { DARABONBA_PTR_SET_VALUE(currentValue_, currentValue) };


        // disableTime Field Functions 
        bool hasDisableTime() const { return this->disableTime_ != nullptr;};
        void deleteDisableTime() { this->disableTime_ = nullptr;};
        inline int64_t getDisableTime() const { DARABONBA_PTR_GET_DEFAULT(disableTime_, 0L) };
        inline HandleInfoList& setDisableTime(int64_t disableTime) { DARABONBA_PTR_SET_VALUE(disableTime_, disableTime) };


        // enableTime Field Functions 
        bool hasEnableTime() const { return this->enableTime_ != nullptr;};
        void deleteEnableTime() { this->enableTime_ = nullptr;};
        inline int64_t getEnableTime() const { DARABONBA_PTR_GET_DEFAULT(enableTime_, 0L) };
        inline HandleInfoList& setEnableTime(int64_t enableTime) { DARABONBA_PTR_SET_VALUE(enableTime_, enableTime) };


        // handlerName Field Functions 
        bool hasHandlerName() const { return this->handlerName_ != nullptr;};
        void deleteHandlerName() { this->handlerName_ = nullptr;};
        inline string getHandlerName() const { DARABONBA_PTR_GET_DEFAULT(handlerName_, "") };
        inline HandleInfoList& setHandlerName(string handlerName) { DARABONBA_PTR_SET_VALUE(handlerName_, handlerName) };


        // handlerType Field Functions 
        bool hasHandlerType() const { return this->handlerType_ != nullptr;};
        void deleteHandlerType() { this->handlerType_ = nullptr;};
        inline string getHandlerType() const { DARABONBA_PTR_GET_DEFAULT(handlerType_, "") };
        inline HandleInfoList& setHandlerType(string handlerType) { DARABONBA_PTR_SET_VALUE(handlerType_, handlerType) };


        // handlerValue Field Functions 
        bool hasHandlerValue() const { return this->handlerValue_ != nullptr;};
        void deleteHandlerValue() { this->handlerValue_ = nullptr;};
        inline int32_t getHandlerValue() const { DARABONBA_PTR_GET_DEFAULT(handlerValue_, 0) };
        inline HandleInfoList& setHandlerValue(int32_t handlerValue) { DARABONBA_PTR_SET_VALUE(handlerValue_, handlerValue) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline HandleInfoList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline HandleInfoList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The account that is used to handle the anomalous event.
        shared_ptr<string> currentValue_ {};
        // The time when the account is disabled. The value is a UNIX timestamp. Unit: milliseconds.
        shared_ptr<int64_t> disableTime_ {};
        // The time when the disabled account is enabled. The value is a UNIX timestamp. Unit: milliseconds.
        shared_ptr<int64_t> enableTime_ {};
        // The handling method.
        shared_ptr<string> handlerName_ {};
        // The type of the handling method.
        shared_ptr<string> handlerType_ {};
        // The duration for which the handling operation takes effect. If you leave this parameter empty, the handling operation is permanently valid. Unit: minutes.
        shared_ptr<int32_t> handlerValue_ {};
        // The ID of the handling rule.
        shared_ptr<int64_t> id_ {};
        // The status of the account that triggered the anomalous event. Valid values:
        // 
        // *   **0**: disabled
        // *   **1**: enabled
        // *   **-1**: failed to disable the account
        // *   **-2**: failed to enable the account
        shared_ptr<int32_t> status_ {};
      };

      class Detail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Detail& obj) { 
          DARABONBA_PTR_TO_JSON(Chart, chart_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(ResourceInfo, resourceInfo_);
        };
        friend void from_json(const Darabonba::Json& j, Detail& obj) { 
          DARABONBA_PTR_FROM_JSON(Chart, chart_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(ResourceInfo, resourceInfo_);
        };
        Detail() = default ;
        Detail(const Detail &) = default ;
        Detail(Detail &&) = default ;
        Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Detail() = default ;
        Detail& operator=(const Detail &) = default ;
        Detail& operator=(Detail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ResourceInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResourceInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Label, label_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ResourceInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Label, label_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          ResourceInfo() = default ;
          ResourceInfo(const ResourceInfo &) = default ;
          ResourceInfo(ResourceInfo &&) = default ;
          ResourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResourceInfo() = default ;
          ResourceInfo& operator=(const ResourceInfo &) = default ;
          ResourceInfo& operator=(ResourceInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->label_ == nullptr
        && this->value_ == nullptr; };
          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline ResourceInfo& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline ResourceInfo& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The source title.
          shared_ptr<string> label_ {};
          // The source description.
          shared_ptr<string> value_ {};
        };

        class Content : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Content& obj) { 
            DARABONBA_PTR_TO_JSON(Label, label_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Content& obj) { 
            DARABONBA_PTR_FROM_JSON(Label, label_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Content() = default ;
          Content(const Content &) = default ;
          Content(Content &&) = default ;
          Content(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Content() = default ;
          Content& operator=(const Content &) = default ;
          Content& operator=(Content &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->label_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr; };
          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline Content& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Content& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Content& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The title of the content in the anomalous event.
          shared_ptr<string> label_ {};
          // Exception event name.
          shared_ptr<string> name_ {};
          // The description of the content in the anomalous event.
          shared_ptr<string> value_ {};
        };

        class Chart : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Chart& obj) { 
            DARABONBA_PTR_TO_JSON(ChatType, chatType_);
            DARABONBA_PTR_TO_JSON(Data, data_);
            DARABONBA_PTR_TO_JSON(Label, label_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(XLabel, XLabel_);
            DARABONBA_PTR_TO_JSON(YLabel, YLabel_);
            DARABONBA_PTR_TO_JSON(ZLabel, ZLabel_);
          };
          friend void from_json(const Darabonba::Json& j, Chart& obj) { 
            DARABONBA_PTR_FROM_JSON(ChatType, chatType_);
            DARABONBA_PTR_FROM_JSON(Data, data_);
            DARABONBA_PTR_FROM_JSON(Label, label_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(XLabel, XLabel_);
            DARABONBA_PTR_FROM_JSON(YLabel, YLabel_);
            DARABONBA_PTR_FROM_JSON(ZLabel, ZLabel_);
          };
          Chart() = default ;
          Chart(const Chart &) = default ;
          Chart(Chart &&) = default ;
          Chart(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Chart() = default ;
          Chart& operator=(const Chart &) = default ;
          Chart& operator=(Chart &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Data : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Data& obj) { 
              DARABONBA_PTR_TO_JSON(X, x_);
              DARABONBA_PTR_TO_JSON(Y, y_);
              DARABONBA_PTR_TO_JSON(Z, z_);
            };
            friend void from_json(const Darabonba::Json& j, Data& obj) { 
              DARABONBA_PTR_FROM_JSON(X, x_);
              DARABONBA_PTR_FROM_JSON(Y, y_);
              DARABONBA_PTR_FROM_JSON(Z, z_);
            };
            Data() = default ;
            Data(const Data &) = default ;
            Data(Data &&) = default ;
            Data(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Data() = default ;
            Data& operator=(const Data &) = default ;
            Data& operator=(Data &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->x_ == nullptr
        && this->y_ == nullptr && this->z_ == nullptr; };
            // x Field Functions 
            bool hasX() const { return this->x_ != nullptr;};
            void deleteX() { this->x_ = nullptr;};
            inline const vector<string> & getX() const { DARABONBA_PTR_GET_CONST(x_, vector<string>) };
            inline vector<string> getX() { DARABONBA_PTR_GET(x_, vector<string>) };
            inline Data& setX(const vector<string> & x) { DARABONBA_PTR_SET_VALUE(x_, x) };
            inline Data& setX(vector<string> && x) { DARABONBA_PTR_SET_RVALUE(x_, x) };


            // y Field Functions 
            bool hasY() const { return this->y_ != nullptr;};
            void deleteY() { this->y_ = nullptr;};
            inline const vector<string> & getY() const { DARABONBA_PTR_GET_CONST(y_, vector<string>) };
            inline vector<string> getY() { DARABONBA_PTR_GET(y_, vector<string>) };
            inline Data& setY(const vector<string> & y) { DARABONBA_PTR_SET_VALUE(y_, y) };
            inline Data& setY(vector<string> && y) { DARABONBA_PTR_SET_RVALUE(y_, y) };


            // z Field Functions 
            bool hasZ() const { return this->z_ != nullptr;};
            void deleteZ() { this->z_ = nullptr;};
            inline const vector<string> & getZ() const { DARABONBA_PTR_GET_CONST(z_, vector<string>) };
            inline vector<string> getZ() { DARABONBA_PTR_GET(z_, vector<string>) };
            inline Data& setZ(const vector<string> & z) { DARABONBA_PTR_SET_VALUE(z_, z) };
            inline Data& setZ(vector<string> && z) { DARABONBA_PTR_SET_RVALUE(z_, z) };


          protected:
            // The value of the data item on the X axis.
            shared_ptr<vector<string>> x_ {};
            // The value of the data item on the Y axis.
            shared_ptr<vector<string>> y_ {};
            // The value of the data item for the Z axis.
            shared_ptr<vector<string>> z_ {};
          };

          virtual bool empty() const override { return this->chatType_ == nullptr
        && this->data_ == nullptr && this->label_ == nullptr && this->name_ == nullptr && this->type_ == nullptr && this->XLabel_ == nullptr
        && this->YLabel_ == nullptr && this->ZLabel_ == nullptr; };
          // chatType Field Functions 
          bool hasChatType() const { return this->chatType_ != nullptr;};
          void deleteChatType() { this->chatType_ = nullptr;};
          inline int32_t getChatType() const { DARABONBA_PTR_GET_DEFAULT(chatType_, 0) };
          inline Chart& setChatType(int32_t chatType) { DARABONBA_PTR_SET_VALUE(chatType_, chatType) };


          // data Field Functions 
          bool hasData() const { return this->data_ != nullptr;};
          void deleteData() { this->data_ = nullptr;};
          inline const Chart::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, Chart::Data) };
          inline Chart::Data getData() { DARABONBA_PTR_GET(data_, Chart::Data) };
          inline Chart& setData(const Chart::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
          inline Chart& setData(Chart::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline Chart& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Chart& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Chart& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // XLabel Field Functions 
          bool hasXLabel() const { return this->XLabel_ != nullptr;};
          void deleteXLabel() { this->XLabel_ = nullptr;};
          inline string getXLabel() const { DARABONBA_PTR_GET_DEFAULT(XLabel_, "") };
          inline Chart& setXLabel(string XLabel) { DARABONBA_PTR_SET_VALUE(XLabel_, XLabel) };


          // YLabel Field Functions 
          bool hasYLabel() const { return this->YLabel_ != nullptr;};
          void deleteYLabel() { this->YLabel_ = nullptr;};
          inline string getYLabel() const { DARABONBA_PTR_GET_DEFAULT(YLabel_, "") };
          inline Chart& setYLabel(string YLabel) { DARABONBA_PTR_SET_VALUE(YLabel_, YLabel) };


          // ZLabel Field Functions 
          bool hasZLabel() const { return this->ZLabel_ != nullptr;};
          void deleteZLabel() { this->ZLabel_ = nullptr;};
          inline string getZLabel() const { DARABONBA_PTR_GET_DEFAULT(ZLabel_, "") };
          inline Chart& setZLabel(string ZLabel) { DARABONBA_PTR_SET_VALUE(ZLabel_, ZLabel) };


        protected:
          // The type of the chart. Valid values:
          // 
          // *   **1**: column chart
          // *   **2**: line chart
          // 
          // >This field will be returned only when NewAlarm is true.
          shared_ptr<int32_t> chatType_ {};
          // The data in the baseline behavior profile of the anomalous event.
          shared_ptr<Chart::Data> data_ {};
          // The name of the baseline behavior chart of the anomalous event.
          shared_ptr<string> label_ {};
          // Icon title.
          // 
          // >This field will be returned only when NewAlarm is true.
          shared_ptr<string> name_ {};
          // The type of the chart. Valid values:
          // 
          // *   **1**: column chart
          // *   **2**: line chart
          shared_ptr<string> type_ {};
          // The descriptive label of data items on the X axis.
          shared_ptr<string> XLabel_ {};
          // The descriptive label of data items on the Y axis.
          shared_ptr<string> YLabel_ {};
          // The descriptive label of data items on the Z axis.
          // 
          // >This field will be returned only when NewAlarm is true.
          shared_ptr<string> ZLabel_ {};
        };

        virtual bool empty() const override { return this->chart_ == nullptr
        && this->content_ == nullptr && this->resourceInfo_ == nullptr; };
        // chart Field Functions 
        bool hasChart() const { return this->chart_ != nullptr;};
        void deleteChart() { this->chart_ = nullptr;};
        inline const vector<Detail::Chart> & getChart() const { DARABONBA_PTR_GET_CONST(chart_, vector<Detail::Chart>) };
        inline vector<Detail::Chart> getChart() { DARABONBA_PTR_GET(chart_, vector<Detail::Chart>) };
        inline Detail& setChart(const vector<Detail::Chart> & chart) { DARABONBA_PTR_SET_VALUE(chart_, chart) };
        inline Detail& setChart(vector<Detail::Chart> && chart) { DARABONBA_PTR_SET_RVALUE(chart_, chart) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline const vector<Detail::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Detail::Content>) };
        inline vector<Detail::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Detail::Content>) };
        inline Detail& setContent(const vector<Detail::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
        inline Detail& setContent(vector<Detail::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


        // resourceInfo Field Functions 
        bool hasResourceInfo() const { return this->resourceInfo_ != nullptr;};
        void deleteResourceInfo() { this->resourceInfo_ = nullptr;};
        inline const vector<Detail::ResourceInfo> & getResourceInfo() const { DARABONBA_PTR_GET_CONST(resourceInfo_, vector<Detail::ResourceInfo>) };
        inline vector<Detail::ResourceInfo> getResourceInfo() { DARABONBA_PTR_GET(resourceInfo_, vector<Detail::ResourceInfo>) };
        inline Detail& setResourceInfo(const vector<Detail::ResourceInfo> & resourceInfo) { DARABONBA_PTR_SET_VALUE(resourceInfo_, resourceInfo) };
        inline Detail& setResourceInfo(vector<Detail::ResourceInfo> && resourceInfo) { DARABONBA_PTR_SET_RVALUE(resourceInfo_, resourceInfo) };


      protected:
        // The baseline behavior chart of the anomalous event.
        shared_ptr<vector<Detail::Chart>> chart_ {};
        // The content in the anomalous event.
        shared_ptr<vector<Detail::Content>> content_ {};
        // An array that consists of the source from which the information of the anomalous event is recorded.
        shared_ptr<vector<Detail::ResourceInfo>> resourceInfo_ {};
      };

      virtual bool empty() const override { return this->alertTime_ == nullptr
        && this->backed_ == nullptr && this->dataInstance_ == nullptr && this->dealDisplayName_ == nullptr && this->dealLoginName_ == nullptr && this->dealReason_ == nullptr
        && this->dealTime_ == nullptr && this->dealUserId_ == nullptr && this->detail_ == nullptr && this->displayName_ == nullptr && this->eventTime_ == nullptr
        && this->handleInfoList_ == nullptr && this->id_ == nullptr && this->logDetail_ == nullptr && this->loginName_ == nullptr && this->newAlarm_ == nullptr
        && this->productCode_ == nullptr && this->status_ == nullptr && this->statusName_ == nullptr && this->subTypeCode_ == nullptr && this->subTypeName_ == nullptr
        && this->typeCode_ == nullptr && this->typeName_ == nullptr && this->userId_ == nullptr; };
      // alertTime Field Functions 
      bool hasAlertTime() const { return this->alertTime_ != nullptr;};
      void deleteAlertTime() { this->alertTime_ = nullptr;};
      inline int64_t getAlertTime() const { DARABONBA_PTR_GET_DEFAULT(alertTime_, 0L) };
      inline Event& setAlertTime(int64_t alertTime) { DARABONBA_PTR_SET_VALUE(alertTime_, alertTime) };


      // backed Field Functions 
      bool hasBacked() const { return this->backed_ != nullptr;};
      void deleteBacked() { this->backed_ = nullptr;};
      inline bool getBacked() const { DARABONBA_PTR_GET_DEFAULT(backed_, false) };
      inline Event& setBacked(bool backed) { DARABONBA_PTR_SET_VALUE(backed_, backed) };


      // dataInstance Field Functions 
      bool hasDataInstance() const { return this->dataInstance_ != nullptr;};
      void deleteDataInstance() { this->dataInstance_ = nullptr;};
      inline string getDataInstance() const { DARABONBA_PTR_GET_DEFAULT(dataInstance_, "") };
      inline Event& setDataInstance(string dataInstance) { DARABONBA_PTR_SET_VALUE(dataInstance_, dataInstance) };


      // dealDisplayName Field Functions 
      bool hasDealDisplayName() const { return this->dealDisplayName_ != nullptr;};
      void deleteDealDisplayName() { this->dealDisplayName_ = nullptr;};
      inline string getDealDisplayName() const { DARABONBA_PTR_GET_DEFAULT(dealDisplayName_, "") };
      inline Event& setDealDisplayName(string dealDisplayName) { DARABONBA_PTR_SET_VALUE(dealDisplayName_, dealDisplayName) };


      // dealLoginName Field Functions 
      bool hasDealLoginName() const { return this->dealLoginName_ != nullptr;};
      void deleteDealLoginName() { this->dealLoginName_ = nullptr;};
      inline string getDealLoginName() const { DARABONBA_PTR_GET_DEFAULT(dealLoginName_, "") };
      inline Event& setDealLoginName(string dealLoginName) { DARABONBA_PTR_SET_VALUE(dealLoginName_, dealLoginName) };


      // dealReason Field Functions 
      bool hasDealReason() const { return this->dealReason_ != nullptr;};
      void deleteDealReason() { this->dealReason_ = nullptr;};
      inline string getDealReason() const { DARABONBA_PTR_GET_DEFAULT(dealReason_, "") };
      inline Event& setDealReason(string dealReason) { DARABONBA_PTR_SET_VALUE(dealReason_, dealReason) };


      // dealTime Field Functions 
      bool hasDealTime() const { return this->dealTime_ != nullptr;};
      void deleteDealTime() { this->dealTime_ = nullptr;};
      inline int64_t getDealTime() const { DARABONBA_PTR_GET_DEFAULT(dealTime_, 0L) };
      inline Event& setDealTime(int64_t dealTime) { DARABONBA_PTR_SET_VALUE(dealTime_, dealTime) };


      // dealUserId Field Functions 
      bool hasDealUserId() const { return this->dealUserId_ != nullptr;};
      void deleteDealUserId() { this->dealUserId_ = nullptr;};
      inline int64_t getDealUserId() const { DARABONBA_PTR_GET_DEFAULT(dealUserId_, 0L) };
      inline Event& setDealUserId(int64_t dealUserId) { DARABONBA_PTR_SET_VALUE(dealUserId_, dealUserId) };


      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline const Event::Detail & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, Event::Detail) };
      inline Event::Detail getDetail() { DARABONBA_PTR_GET(detail_, Event::Detail) };
      inline Event& setDetail(const Event::Detail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
      inline Event& setDetail(Event::Detail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Event& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // eventTime Field Functions 
      bool hasEventTime() const { return this->eventTime_ != nullptr;};
      void deleteEventTime() { this->eventTime_ = nullptr;};
      inline int64_t getEventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, 0L) };
      inline Event& setEventTime(int64_t eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


      // handleInfoList Field Functions 
      bool hasHandleInfoList() const { return this->handleInfoList_ != nullptr;};
      void deleteHandleInfoList() { this->handleInfoList_ = nullptr;};
      inline const vector<Event::HandleInfoList> & getHandleInfoList() const { DARABONBA_PTR_GET_CONST(handleInfoList_, vector<Event::HandleInfoList>) };
      inline vector<Event::HandleInfoList> getHandleInfoList() { DARABONBA_PTR_GET(handleInfoList_, vector<Event::HandleInfoList>) };
      inline Event& setHandleInfoList(const vector<Event::HandleInfoList> & handleInfoList) { DARABONBA_PTR_SET_VALUE(handleInfoList_, handleInfoList) };
      inline Event& setHandleInfoList(vector<Event::HandleInfoList> && handleInfoList) { DARABONBA_PTR_SET_RVALUE(handleInfoList_, handleInfoList) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Event& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // logDetail Field Functions 
      bool hasLogDetail() const { return this->logDetail_ != nullptr;};
      void deleteLogDetail() { this->logDetail_ = nullptr;};
      inline string getLogDetail() const { DARABONBA_PTR_GET_DEFAULT(logDetail_, "") };
      inline Event& setLogDetail(string logDetail) { DARABONBA_PTR_SET_VALUE(logDetail_, logDetail) };


      // loginName Field Functions 
      bool hasLoginName() const { return this->loginName_ != nullptr;};
      void deleteLoginName() { this->loginName_ = nullptr;};
      inline string getLoginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
      inline Event& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


      // newAlarm Field Functions 
      bool hasNewAlarm() const { return this->newAlarm_ != nullptr;};
      void deleteNewAlarm() { this->newAlarm_ = nullptr;};
      inline bool getNewAlarm() const { DARABONBA_PTR_GET_DEFAULT(newAlarm_, false) };
      inline Event& setNewAlarm(bool newAlarm) { DARABONBA_PTR_SET_VALUE(newAlarm_, newAlarm) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Event& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Event& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusName Field Functions 
      bool hasStatusName() const { return this->statusName_ != nullptr;};
      void deleteStatusName() { this->statusName_ = nullptr;};
      inline string getStatusName() const { DARABONBA_PTR_GET_DEFAULT(statusName_, "") };
      inline Event& setStatusName(string statusName) { DARABONBA_PTR_SET_VALUE(statusName_, statusName) };


      // subTypeCode Field Functions 
      bool hasSubTypeCode() const { return this->subTypeCode_ != nullptr;};
      void deleteSubTypeCode() { this->subTypeCode_ = nullptr;};
      inline string getSubTypeCode() const { DARABONBA_PTR_GET_DEFAULT(subTypeCode_, "") };
      inline Event& setSubTypeCode(string subTypeCode) { DARABONBA_PTR_SET_VALUE(subTypeCode_, subTypeCode) };


      // subTypeName Field Functions 
      bool hasSubTypeName() const { return this->subTypeName_ != nullptr;};
      void deleteSubTypeName() { this->subTypeName_ = nullptr;};
      inline string getSubTypeName() const { DARABONBA_PTR_GET_DEFAULT(subTypeName_, "") };
      inline Event& setSubTypeName(string subTypeName) { DARABONBA_PTR_SET_VALUE(subTypeName_, subTypeName) };


      // typeCode Field Functions 
      bool hasTypeCode() const { return this->typeCode_ != nullptr;};
      void deleteTypeCode() { this->typeCode_ = nullptr;};
      inline string getTypeCode() const { DARABONBA_PTR_GET_DEFAULT(typeCode_, "") };
      inline Event& setTypeCode(string typeCode) { DARABONBA_PTR_SET_VALUE(typeCode_, typeCode) };


      // typeName Field Functions 
      bool hasTypeName() const { return this->typeName_ != nullptr;};
      void deleteTypeName() { this->typeName_ = nullptr;};
      inline string getTypeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
      inline Event& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline Event& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The time when the alert for the anomalous event was generated. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> alertTime_ {};
      // Indicates whether the handling result of the anomalous event is used to enhance the detection of anomalous events. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      // 
      // > If you enhance the detection of anomalous events, the detection accuracy and the rate of triggering alerts for anomalous events are improved.
      shared_ptr<bool> backed_ {};
      // The instance name of the service in which the anomalous event was detected.
      shared_ptr<string> dataInstance_ {};
      // The display name of the account that is used to handle the anomalous event.
      shared_ptr<string> dealDisplayName_ {};
      // The username of the account that is used to handle the anomalous event.
      shared_ptr<string> dealLoginName_ {};
      // The reason why the anomalous event is handled.
      shared_ptr<string> dealReason_ {};
      // The time when the anomalous event was handled. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> dealTime_ {};
      // The ID of the account that is used to handle the anomalous event.
      shared_ptr<int64_t> dealUserId_ {};
      // The content in the details of the anomalous event.
      shared_ptr<Event::Detail> detail_ {};
      // The display name of the account that triggered the anomalous event.
      shared_ptr<string> displayName_ {};
      // The time when the anomalous event occurred. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> eventTime_ {};
      // An array that consists of the handling records of the anomalous event.
      shared_ptr<vector<Event::HandleInfoList>> handleInfoList_ {};
      // The unique ID of the anomalous event.
      shared_ptr<int64_t> id_ {};
      // The details of the alert logs.
      shared_ptr<string> logDetail_ {};
      // The username of the account that triggered the anomalous event.
      shared_ptr<string> loginName_ {};
      // Whether it is a new version of the alarm. Value:
      // - **true**: Yes. 
      // - **false**: No.
      shared_ptr<bool> newAlarm_ {};
      // The name of the service in which the anomalous event was detected. Valid values include **MaxCompute, OSS, ADS, OTS, and RDS**.
      shared_ptr<string> productCode_ {};
      // The handling status for the anomalous event. Valid values:
      // 
      // *   **0**: unhandled
      // *   **1**: confirmed
      // *   **2**: marked as false positive
      shared_ptr<int32_t> status_ {};
      // The name of the handling status for the anomalous event.
      shared_ptr<string> statusName_ {};
      // The code of the anomalous event subtype.
      shared_ptr<string> subTypeCode_ {};
      // The name of the anomalous event subtype.
      shared_ptr<string> subTypeName_ {};
      // The code of the anomalous event type.
      shared_ptr<string> typeCode_ {};
      // The name of the anomalous event type. Valid values:
      // 
      // *   **01**: anomalous permission usage
      // *   **02**: anomalous data flow
      // *   **03**: anomalous data operation
      shared_ptr<string> typeName_ {};
      // The ID of the account that triggered the anomalous event.
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->event_ == nullptr
        && this->requestId_ == nullptr; };
    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline const DescribeEventDetailResponseBody::Event & getEvent() const { DARABONBA_PTR_GET_CONST(event_, DescribeEventDetailResponseBody::Event) };
    inline DescribeEventDetailResponseBody::Event getEvent() { DARABONBA_PTR_GET(event_, DescribeEventDetailResponseBody::Event) };
    inline DescribeEventDetailResponseBody& setEvent(const DescribeEventDetailResponseBody::Event & event) { DARABONBA_PTR_SET_VALUE(event_, event) };
    inline DescribeEventDetailResponseBody& setEvent(DescribeEventDetailResponseBody::Event && event) { DARABONBA_PTR_SET_RVALUE(event_, event) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the anomalous event.
    shared_ptr<DescribeEventDetailResponseBody::Event> event_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
