// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTROOMGENIESCENESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTROOMGENIESCENESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ImportRoomGenieScenesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportRoomGenieScenesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
      DARABONBA_PTR_TO_JSON(SceneList, sceneList_);
    };
    friend void from_json(const Darabonba::Json& j, ImportRoomGenieScenesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
      DARABONBA_PTR_FROM_JSON(SceneList, sceneList_);
    };
    ImportRoomGenieScenesRequest() = default ;
    ImportRoomGenieScenesRequest(const ImportRoomGenieScenesRequest &) = default ;
    ImportRoomGenieScenesRequest(ImportRoomGenieScenesRequest &&) = default ;
    ImportRoomGenieScenesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportRoomGenieScenesRequest() = default ;
    ImportRoomGenieScenesRequest& operator=(const ImportRoomGenieScenesRequest &) = default ;
    ImportRoomGenieScenesRequest& operator=(ImportRoomGenieScenesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SceneList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SceneList& obj) { 
        DARABONBA_PTR_TO_JSON(Actions, actions_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Display, display_);
        DARABONBA_PTR_TO_JSON(Icon, icon_);
        DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
        DARABONBA_PTR_TO_JSON(TriggerLogical, triggerLogical_);
        DARABONBA_PTR_TO_JSON(Triggers, triggers_);
      };
      friend void from_json(const Darabonba::Json& j, SceneList& obj) { 
        DARABONBA_PTR_FROM_JSON(Actions, actions_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Display, display_);
        DARABONBA_PTR_FROM_JSON(Icon, icon_);
        DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
        DARABONBA_PTR_FROM_JSON(TriggerLogical, triggerLogical_);
        DARABONBA_PTR_FROM_JSON(Triggers, triggers_);
      };
      SceneList() = default ;
      SceneList(const SceneList &) = default ;
      SceneList(SceneList &&) = default ;
      SceneList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SceneList() = default ;
      SceneList& operator=(const SceneList &) = default ;
      SceneList& operator=(SceneList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Triggers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Triggers& obj) { 
          DARABONBA_PTR_TO_JSON(AttributeValues, attributeValues_);
          DARABONBA_PTR_TO_JSON(CorpusList, corpusList_);
          DARABONBA_PTR_TO_JSON(Device, device_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Triggers& obj) { 
          DARABONBA_PTR_FROM_JSON(AttributeValues, attributeValues_);
          DARABONBA_PTR_FROM_JSON(CorpusList, corpusList_);
          DARABONBA_PTR_FROM_JSON(Device, device_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Triggers() = default ;
        Triggers(const Triggers &) = default ;
        Triggers(Triggers &&) = default ;
        Triggers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Triggers() = default ;
        Triggers& operator=(const Triggers &) = default ;
        Triggers& operator=(Triggers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Device : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Device& obj) { 
            DARABONBA_PTR_TO_JSON(Category, category_);
            DARABONBA_PTR_TO_JSON(DeviceIndex, deviceIndex_);
            DARABONBA_PTR_TO_JSON(DeviceNumber, deviceNumber_);
          };
          friend void from_json(const Darabonba::Json& j, Device& obj) { 
            DARABONBA_PTR_FROM_JSON(Category, category_);
            DARABONBA_PTR_FROM_JSON(DeviceIndex, deviceIndex_);
            DARABONBA_PTR_FROM_JSON(DeviceNumber, deviceNumber_);
          };
          Device() = default ;
          Device(const Device &) = default ;
          Device(Device &&) = default ;
          Device(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Device() = default ;
          Device& operator=(const Device &) = default ;
          Device& operator=(Device &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->category_ == nullptr
        && this->deviceIndex_ == nullptr && this->deviceNumber_ == nullptr; };
          // category Field Functions 
          bool hasCategory() const { return this->category_ != nullptr;};
          void deleteCategory() { this->category_ = nullptr;};
          inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
          inline Device& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


          // deviceIndex Field Functions 
          bool hasDeviceIndex() const { return this->deviceIndex_ != nullptr;};
          void deleteDeviceIndex() { this->deviceIndex_ = nullptr;};
          inline string getDeviceIndex() const { DARABONBA_PTR_GET_DEFAULT(deviceIndex_, "") };
          inline Device& setDeviceIndex(string deviceIndex) { DARABONBA_PTR_SET_VALUE(deviceIndex_, deviceIndex) };


          // deviceNumber Field Functions 
          bool hasDeviceNumber() const { return this->deviceNumber_ != nullptr;};
          void deleteDeviceNumber() { this->deviceNumber_ = nullptr;};
          inline string getDeviceNumber() const { DARABONBA_PTR_GET_DEFAULT(deviceNumber_, "") };
          inline Device& setDeviceNumber(string deviceNumber) { DARABONBA_PTR_SET_VALUE(deviceNumber_, deviceNumber) };


        protected:
          // This parameter is required.
          shared_ptr<string> category_ {};
          shared_ptr<string> deviceIndex_ {};
          // This parameter is required.
          shared_ptr<string> deviceNumber_ {};
        };

        class AttributeValues : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AttributeValues& obj) { 
            DARABONBA_PTR_TO_JSON(AttributeName, attributeName_);
            DARABONBA_PTR_TO_JSON(AttributeValue, attributeValue_);
          };
          friend void from_json(const Darabonba::Json& j, AttributeValues& obj) { 
            DARABONBA_PTR_FROM_JSON(AttributeName, attributeName_);
            DARABONBA_PTR_FROM_JSON(AttributeValue, attributeValue_);
          };
          AttributeValues() = default ;
          AttributeValues(const AttributeValues &) = default ;
          AttributeValues(AttributeValues &&) = default ;
          AttributeValues(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AttributeValues() = default ;
          AttributeValues& operator=(const AttributeValues &) = default ;
          AttributeValues& operator=(AttributeValues &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->attributeName_ == nullptr
        && this->attributeValue_ == nullptr; };
          // attributeName Field Functions 
          bool hasAttributeName() const { return this->attributeName_ != nullptr;};
          void deleteAttributeName() { this->attributeName_ = nullptr;};
          inline string getAttributeName() const { DARABONBA_PTR_GET_DEFAULT(attributeName_, "") };
          inline AttributeValues& setAttributeName(string attributeName) { DARABONBA_PTR_SET_VALUE(attributeName_, attributeName) };


          // attributeValue Field Functions 
          bool hasAttributeValue() const { return this->attributeValue_ != nullptr;};
          void deleteAttributeValue() { this->attributeValue_ = nullptr;};
          inline string getAttributeValue() const { DARABONBA_PTR_GET_DEFAULT(attributeValue_, "") };
          inline AttributeValues& setAttributeValue(string attributeValue) { DARABONBA_PTR_SET_VALUE(attributeValue_, attributeValue) };


        protected:
          // This parameter is required.
          shared_ptr<string> attributeName_ {};
          // This parameter is required.
          shared_ptr<string> attributeValue_ {};
        };

        virtual bool empty() const override { return this->attributeValues_ == nullptr
        && this->corpusList_ == nullptr && this->device_ == nullptr && this->type_ == nullptr; };
        // attributeValues Field Functions 
        bool hasAttributeValues() const { return this->attributeValues_ != nullptr;};
        void deleteAttributeValues() { this->attributeValues_ = nullptr;};
        inline const vector<Triggers::AttributeValues> & getAttributeValues() const { DARABONBA_PTR_GET_CONST(attributeValues_, vector<Triggers::AttributeValues>) };
        inline vector<Triggers::AttributeValues> getAttributeValues() { DARABONBA_PTR_GET(attributeValues_, vector<Triggers::AttributeValues>) };
        inline Triggers& setAttributeValues(const vector<Triggers::AttributeValues> & attributeValues) { DARABONBA_PTR_SET_VALUE(attributeValues_, attributeValues) };
        inline Triggers& setAttributeValues(vector<Triggers::AttributeValues> && attributeValues) { DARABONBA_PTR_SET_RVALUE(attributeValues_, attributeValues) };


        // corpusList Field Functions 
        bool hasCorpusList() const { return this->corpusList_ != nullptr;};
        void deleteCorpusList() { this->corpusList_ = nullptr;};
        inline const vector<string> & getCorpusList() const { DARABONBA_PTR_GET_CONST(corpusList_, vector<string>) };
        inline vector<string> getCorpusList() { DARABONBA_PTR_GET(corpusList_, vector<string>) };
        inline Triggers& setCorpusList(const vector<string> & corpusList) { DARABONBA_PTR_SET_VALUE(corpusList_, corpusList) };
        inline Triggers& setCorpusList(vector<string> && corpusList) { DARABONBA_PTR_SET_RVALUE(corpusList_, corpusList) };


        // device Field Functions 
        bool hasDevice() const { return this->device_ != nullptr;};
        void deleteDevice() { this->device_ = nullptr;};
        inline const Triggers::Device & getDevice() const { DARABONBA_PTR_GET_CONST(device_, Triggers::Device) };
        inline Triggers::Device getDevice() { DARABONBA_PTR_GET(device_, Triggers::Device) };
        inline Triggers& setDevice(const Triggers::Device & device) { DARABONBA_PTR_SET_VALUE(device_, device) };
        inline Triggers& setDevice(Triggers::Device && device) { DARABONBA_PTR_SET_RVALUE(device_, device) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline Triggers& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<vector<Triggers::AttributeValues>> attributeValues_ {};
        shared_ptr<vector<string>> corpusList_ {};
        shared_ptr<Triggers::Device> device_ {};
        // This parameter is required.
        shared_ptr<int32_t> type_ {};
      };

      class Actions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Actions& obj) { 
          DARABONBA_PTR_TO_JSON(AttributeValues, attributeValues_);
          DARABONBA_PTR_TO_JSON(Device, device_);
          DARABONBA_PTR_TO_JSON(Reply, reply_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Actions& obj) { 
          DARABONBA_PTR_FROM_JSON(AttributeValues, attributeValues_);
          DARABONBA_PTR_FROM_JSON(Device, device_);
          DARABONBA_PTR_FROM_JSON(Reply, reply_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Actions() = default ;
        Actions(const Actions &) = default ;
        Actions(Actions &&) = default ;
        Actions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Actions() = default ;
        Actions& operator=(const Actions &) = default ;
        Actions& operator=(Actions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Device : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Device& obj) { 
            DARABONBA_PTR_TO_JSON(Category, category_);
            DARABONBA_PTR_TO_JSON(DeviceIndex, deviceIndex_);
            DARABONBA_PTR_TO_JSON(DeviceNumber, deviceNumber_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Device& obj) { 
            DARABONBA_PTR_FROM_JSON(Category, category_);
            DARABONBA_PTR_FROM_JSON(DeviceIndex, deviceIndex_);
            DARABONBA_PTR_FROM_JSON(DeviceNumber, deviceNumber_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Device() = default ;
          Device(const Device &) = default ;
          Device(Device &&) = default ;
          Device(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Device() = default ;
          Device& operator=(const Device &) = default ;
          Device& operator=(Device &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->category_ == nullptr
        && this->deviceIndex_ == nullptr && this->deviceNumber_ == nullptr && this->type_ == nullptr; };
          // category Field Functions 
          bool hasCategory() const { return this->category_ != nullptr;};
          void deleteCategory() { this->category_ = nullptr;};
          inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
          inline Device& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


          // deviceIndex Field Functions 
          bool hasDeviceIndex() const { return this->deviceIndex_ != nullptr;};
          void deleteDeviceIndex() { this->deviceIndex_ = nullptr;};
          inline int32_t getDeviceIndex() const { DARABONBA_PTR_GET_DEFAULT(deviceIndex_, 0) };
          inline Device& setDeviceIndex(int32_t deviceIndex) { DARABONBA_PTR_SET_VALUE(deviceIndex_, deviceIndex) };


          // deviceNumber Field Functions 
          bool hasDeviceNumber() const { return this->deviceNumber_ != nullptr;};
          void deleteDeviceNumber() { this->deviceNumber_ = nullptr;};
          inline string getDeviceNumber() const { DARABONBA_PTR_GET_DEFAULT(deviceNumber_, "") };
          inline Device& setDeviceNumber(string deviceNumber) { DARABONBA_PTR_SET_VALUE(deviceNumber_, deviceNumber) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
          inline Device& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // This parameter is required.
          shared_ptr<string> category_ {};
          shared_ptr<int32_t> deviceIndex_ {};
          // This parameter is required.
          shared_ptr<string> deviceNumber_ {};
          shared_ptr<int32_t> type_ {};
        };

        class AttributeValues : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AttributeValues& obj) { 
            DARABONBA_PTR_TO_JSON(AttributeName, attributeName_);
            DARABONBA_PTR_TO_JSON(AttributeValue, attributeValue_);
          };
          friend void from_json(const Darabonba::Json& j, AttributeValues& obj) { 
            DARABONBA_PTR_FROM_JSON(AttributeName, attributeName_);
            DARABONBA_PTR_FROM_JSON(AttributeValue, attributeValue_);
          };
          AttributeValues() = default ;
          AttributeValues(const AttributeValues &) = default ;
          AttributeValues(AttributeValues &&) = default ;
          AttributeValues(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AttributeValues() = default ;
          AttributeValues& operator=(const AttributeValues &) = default ;
          AttributeValues& operator=(AttributeValues &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->attributeName_ == nullptr
        && this->attributeValue_ == nullptr; };
          // attributeName Field Functions 
          bool hasAttributeName() const { return this->attributeName_ != nullptr;};
          void deleteAttributeName() { this->attributeName_ = nullptr;};
          inline string getAttributeName() const { DARABONBA_PTR_GET_DEFAULT(attributeName_, "") };
          inline AttributeValues& setAttributeName(string attributeName) { DARABONBA_PTR_SET_VALUE(attributeName_, attributeName) };


          // attributeValue Field Functions 
          bool hasAttributeValue() const { return this->attributeValue_ != nullptr;};
          void deleteAttributeValue() { this->attributeValue_ = nullptr;};
          inline string getAttributeValue() const { DARABONBA_PTR_GET_DEFAULT(attributeValue_, "") };
          inline AttributeValues& setAttributeValue(string attributeValue) { DARABONBA_PTR_SET_VALUE(attributeValue_, attributeValue) };


        protected:
          // This parameter is required.
          shared_ptr<string> attributeName_ {};
          // This parameter is required.
          shared_ptr<string> attributeValue_ {};
        };

        virtual bool empty() const override { return this->attributeValues_ == nullptr
        && this->device_ == nullptr && this->reply_ == nullptr && this->type_ == nullptr; };
        // attributeValues Field Functions 
        bool hasAttributeValues() const { return this->attributeValues_ != nullptr;};
        void deleteAttributeValues() { this->attributeValues_ = nullptr;};
        inline const vector<Actions::AttributeValues> & getAttributeValues() const { DARABONBA_PTR_GET_CONST(attributeValues_, vector<Actions::AttributeValues>) };
        inline vector<Actions::AttributeValues> getAttributeValues() { DARABONBA_PTR_GET(attributeValues_, vector<Actions::AttributeValues>) };
        inline Actions& setAttributeValues(const vector<Actions::AttributeValues> & attributeValues) { DARABONBA_PTR_SET_VALUE(attributeValues_, attributeValues) };
        inline Actions& setAttributeValues(vector<Actions::AttributeValues> && attributeValues) { DARABONBA_PTR_SET_RVALUE(attributeValues_, attributeValues) };


        // device Field Functions 
        bool hasDevice() const { return this->device_ != nullptr;};
        void deleteDevice() { this->device_ = nullptr;};
        inline const Actions::Device & getDevice() const { DARABONBA_PTR_GET_CONST(device_, Actions::Device) };
        inline Actions::Device getDevice() { DARABONBA_PTR_GET(device_, Actions::Device) };
        inline Actions& setDevice(const Actions::Device & device) { DARABONBA_PTR_SET_VALUE(device_, device) };
        inline Actions& setDevice(Actions::Device && device) { DARABONBA_PTR_SET_RVALUE(device_, device) };


        // reply Field Functions 
        bool hasReply() const { return this->reply_ != nullptr;};
        void deleteReply() { this->reply_ = nullptr;};
        inline string getReply() const { DARABONBA_PTR_GET_DEFAULT(reply_, "") };
        inline Actions& setReply(string reply) { DARABONBA_PTR_SET_VALUE(reply_, reply) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline Actions& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<vector<Actions::AttributeValues>> attributeValues_ {};
        shared_ptr<Actions::Device> device_ {};
        shared_ptr<string> reply_ {};
        shared_ptr<int32_t> type_ {};
      };

      virtual bool empty() const override { return this->actions_ == nullptr
        && this->description_ == nullptr && this->display_ == nullptr && this->icon_ == nullptr && this->sceneName_ == nullptr && this->triggerLogical_ == nullptr
        && this->triggers_ == nullptr; };
      // actions Field Functions 
      bool hasActions() const { return this->actions_ != nullptr;};
      void deleteActions() { this->actions_ = nullptr;};
      inline const vector<SceneList::Actions> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<SceneList::Actions>) };
      inline vector<SceneList::Actions> getActions() { DARABONBA_PTR_GET(actions_, vector<SceneList::Actions>) };
      inline SceneList& setActions(const vector<SceneList::Actions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
      inline SceneList& setActions(vector<SceneList::Actions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SceneList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // display Field Functions 
      bool hasDisplay() const { return this->display_ != nullptr;};
      void deleteDisplay() { this->display_ = nullptr;};
      inline bool getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, false) };
      inline SceneList& setDisplay(bool display) { DARABONBA_PTR_SET_VALUE(display_, display) };


      // icon Field Functions 
      bool hasIcon() const { return this->icon_ != nullptr;};
      void deleteIcon() { this->icon_ = nullptr;};
      inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
      inline SceneList& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


      // sceneName Field Functions 
      bool hasSceneName() const { return this->sceneName_ != nullptr;};
      void deleteSceneName() { this->sceneName_ = nullptr;};
      inline string getSceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
      inline SceneList& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


      // triggerLogical Field Functions 
      bool hasTriggerLogical() const { return this->triggerLogical_ != nullptr;};
      void deleteTriggerLogical() { this->triggerLogical_ = nullptr;};
      inline int32_t getTriggerLogical() const { DARABONBA_PTR_GET_DEFAULT(triggerLogical_, 0) };
      inline SceneList& setTriggerLogical(int32_t triggerLogical) { DARABONBA_PTR_SET_VALUE(triggerLogical_, triggerLogical) };


      // triggers Field Functions 
      bool hasTriggers() const { return this->triggers_ != nullptr;};
      void deleteTriggers() { this->triggers_ = nullptr;};
      inline const vector<SceneList::Triggers> & getTriggers() const { DARABONBA_PTR_GET_CONST(triggers_, vector<SceneList::Triggers>) };
      inline vector<SceneList::Triggers> getTriggers() { DARABONBA_PTR_GET(triggers_, vector<SceneList::Triggers>) };
      inline SceneList& setTriggers(const vector<SceneList::Triggers> & triggers) { DARABONBA_PTR_SET_VALUE(triggers_, triggers) };
      inline SceneList& setTriggers(vector<SceneList::Triggers> && triggers) { DARABONBA_PTR_SET_RVALUE(triggers_, triggers) };


    protected:
      // This parameter is required.
      shared_ptr<vector<SceneList::Actions>> actions_ {};
      shared_ptr<string> description_ {};
      // This parameter is required.
      shared_ptr<bool> display_ {};
      shared_ptr<string> icon_ {};
      // This parameter is required.
      shared_ptr<string> sceneName_ {};
      // This parameter is required.
      shared_ptr<int32_t> triggerLogical_ {};
      // This parameter is required.
      shared_ptr<vector<SceneList::Triggers>> triggers_ {};
    };

    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->roomNo_ == nullptr && this->sceneList_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline ImportRoomGenieScenesRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // roomNo Field Functions 
    bool hasRoomNo() const { return this->roomNo_ != nullptr;};
    void deleteRoomNo() { this->roomNo_ = nullptr;};
    inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
    inline ImportRoomGenieScenesRequest& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


    // sceneList Field Functions 
    bool hasSceneList() const { return this->sceneList_ != nullptr;};
    void deleteSceneList() { this->sceneList_ = nullptr;};
    inline const vector<ImportRoomGenieScenesRequest::SceneList> & getSceneList() const { DARABONBA_PTR_GET_CONST(sceneList_, vector<ImportRoomGenieScenesRequest::SceneList>) };
    inline vector<ImportRoomGenieScenesRequest::SceneList> getSceneList() { DARABONBA_PTR_GET(sceneList_, vector<ImportRoomGenieScenesRequest::SceneList>) };
    inline ImportRoomGenieScenesRequest& setSceneList(const vector<ImportRoomGenieScenesRequest::SceneList> & sceneList) { DARABONBA_PTR_SET_VALUE(sceneList_, sceneList) };
    inline ImportRoomGenieScenesRequest& setSceneList(vector<ImportRoomGenieScenesRequest::SceneList> && sceneList) { DARABONBA_PTR_SET_RVALUE(sceneList_, sceneList) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // This parameter is required.
    shared_ptr<string> roomNo_ {};
    shared_ptr<vector<ImportRoomGenieScenesRequest::SceneList>> sceneList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
