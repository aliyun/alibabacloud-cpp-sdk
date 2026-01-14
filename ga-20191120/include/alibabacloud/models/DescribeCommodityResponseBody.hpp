// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMODITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMODITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class DescribeCommodityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommodityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommodityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCommodityResponseBody() = default ;
    DescribeCommodityResponseBody(const DescribeCommodityResponseBody &) = default ;
    DescribeCommodityResponseBody(DescribeCommodityResponseBody &&) = default ;
    DescribeCommodityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommodityResponseBody() = default ;
    DescribeCommodityResponseBody& operator=(const DescribeCommodityResponseBody &) = default ;
    DescribeCommodityResponseBody& operator=(DescribeCommodityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Components : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Components& obj) { 
        DARABONBA_PTR_TO_JSON(ComponentCode, componentCode_);
        DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
        DARABONBA_PTR_TO_JSON(Properties, properties_);
      };
      friend void from_json(const Darabonba::Json& j, Components& obj) { 
        DARABONBA_PTR_FROM_JSON(ComponentCode, componentCode_);
        DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
        DARABONBA_PTR_FROM_JSON(Properties, properties_);
      };
      Components() = default ;
      Components(const Components &) = default ;
      Components(Components &&) = default ;
      Components(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Components() = default ;
      Components& operator=(const Components &) = default ;
      Components& operator=(Components &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Properties : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Properties& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PropertyValueList, propertyValueList_);
        };
        friend void from_json(const Darabonba::Json& j, Properties& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PropertyValueList, propertyValueList_);
        };
        Properties() = default ;
        Properties(const Properties &) = default ;
        Properties(Properties &&) = default ;
        Properties(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Properties() = default ;
        Properties& operator=(const Properties &) = default ;
        Properties& operator=(Properties &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PropertyValueList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PropertyValueList& obj) { 
            DARABONBA_PTR_TO_JSON(OrderIndex, orderIndex_);
            DARABONBA_PTR_TO_JSON(Text, text_);
            DARABONBA_PTR_TO_JSON(Tips, tips_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, PropertyValueList& obj) { 
            DARABONBA_PTR_FROM_JSON(OrderIndex, orderIndex_);
            DARABONBA_PTR_FROM_JSON(Text, text_);
            DARABONBA_PTR_FROM_JSON(Tips, tips_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          PropertyValueList() = default ;
          PropertyValueList(const PropertyValueList &) = default ;
          PropertyValueList(PropertyValueList &&) = default ;
          PropertyValueList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PropertyValueList() = default ;
          PropertyValueList& operator=(const PropertyValueList &) = default ;
          PropertyValueList& operator=(PropertyValueList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->orderIndex_ == nullptr
        && this->text_ == nullptr && this->tips_ == nullptr && this->value_ == nullptr; };
          // orderIndex Field Functions 
          bool hasOrderIndex() const { return this->orderIndex_ != nullptr;};
          void deleteOrderIndex() { this->orderIndex_ = nullptr;};
          inline int64_t getOrderIndex() const { DARABONBA_PTR_GET_DEFAULT(orderIndex_, 0L) };
          inline PropertyValueList& setOrderIndex(int64_t orderIndex) { DARABONBA_PTR_SET_VALUE(orderIndex_, orderIndex) };


          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline PropertyValueList& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


          // tips Field Functions 
          bool hasTips() const { return this->tips_ != nullptr;};
          void deleteTips() { this->tips_ = nullptr;};
          inline string getTips() const { DARABONBA_PTR_GET_DEFAULT(tips_, "") };
          inline PropertyValueList& setTips(string tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline PropertyValueList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The sequence number of the attribute.
          // 
          // The returned information varies based on the commodity module.
          shared_ptr<int64_t> orderIndex_ {};
          // The content of the attribute.
          // 
          // The returned information varies based on the commodity module.
          shared_ptr<string> text_ {};
          // The message of the attribute.
          // 
          // The returned information varies based on the commodity module.
          shared_ptr<string> tips_ {};
          // The value of the attribute.
          // 
          // The returned information varies based on the commodity module.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr && this->propertyValueList_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Properties& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Properties& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // propertyValueList Field Functions 
        bool hasPropertyValueList() const { return this->propertyValueList_ != nullptr;};
        void deletePropertyValueList() { this->propertyValueList_ = nullptr;};
        inline const vector<Properties::PropertyValueList> & getPropertyValueList() const { DARABONBA_PTR_GET_CONST(propertyValueList_, vector<Properties::PropertyValueList>) };
        inline vector<Properties::PropertyValueList> getPropertyValueList() { DARABONBA_PTR_GET(propertyValueList_, vector<Properties::PropertyValueList>) };
        inline Properties& setPropertyValueList(const vector<Properties::PropertyValueList> & propertyValueList) { DARABONBA_PTR_SET_VALUE(propertyValueList_, propertyValueList) };
        inline Properties& setPropertyValueList(vector<Properties::PropertyValueList> && propertyValueList) { DARABONBA_PTR_SET_RVALUE(propertyValueList_, propertyValueList) };


      protected:
        // The code of the attribute.
        // 
        // The returned information varies based on the commodity module.
        shared_ptr<string> code_ {};
        // The name of the attribute.
        // 
        // The returned information varies based on the commodity module.
        shared_ptr<string> name_ {};
        // The list of attribute values of the commodity module.
        // 
        // The returned information varies based on the commodity module.
        shared_ptr<vector<Properties::PropertyValueList>> propertyValueList_ {};
      };

      virtual bool empty() const override { return this->componentCode_ == nullptr
        && this->componentName_ == nullptr && this->properties_ == nullptr; };
      // componentCode Field Functions 
      bool hasComponentCode() const { return this->componentCode_ != nullptr;};
      void deleteComponentCode() { this->componentCode_ = nullptr;};
      inline string getComponentCode() const { DARABONBA_PTR_GET_DEFAULT(componentCode_, "") };
      inline Components& setComponentCode(string componentCode) { DARABONBA_PTR_SET_VALUE(componentCode_, componentCode) };


      // componentName Field Functions 
      bool hasComponentName() const { return this->componentName_ != nullptr;};
      void deleteComponentName() { this->componentName_ = nullptr;};
      inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
      inline Components& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


      // properties Field Functions 
      bool hasProperties() const { return this->properties_ != nullptr;};
      void deleteProperties() { this->properties_ = nullptr;};
      inline const vector<Components::Properties> & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, vector<Components::Properties>) };
      inline vector<Components::Properties> getProperties() { DARABONBA_PTR_GET(properties_, vector<Components::Properties>) };
      inline Components& setProperties(const vector<Components::Properties> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
      inline Components& setProperties(vector<Components::Properties> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    protected:
      // The code of the commodity module.
      // 
      // The returned information varies based on the commodity module.
      shared_ptr<string> componentCode_ {};
      // The name of the commodity module.
      // 
      // The returned information varies based on the commodity module.
      shared_ptr<string> componentName_ {};
      // The attributes of the commodity module.
      // 
      // The returned information varies based on the commodity module.
      shared_ptr<vector<Components::Properties>> properties_ {};
    };

    virtual bool empty() const override { return this->commodityCode_ == nullptr
        && this->commodityName_ == nullptr && this->components_ == nullptr && this->requestId_ == nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeCommodityResponseBody& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // commodityName Field Functions 
    bool hasCommodityName() const { return this->commodityName_ != nullptr;};
    void deleteCommodityName() { this->commodityName_ = nullptr;};
    inline string getCommodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
    inline DescribeCommodityResponseBody& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<DescribeCommodityResponseBody::Components> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, vector<DescribeCommodityResponseBody::Components>) };
    inline vector<DescribeCommodityResponseBody::Components> getComponents() { DARABONBA_PTR_GET(components_, vector<DescribeCommodityResponseBody::Components>) };
    inline DescribeCommodityResponseBody& setComponents(const vector<DescribeCommodityResponseBody::Components> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline DescribeCommodityResponseBody& setComponents(vector<DescribeCommodityResponseBody::Components> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCommodityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The commodity code.
    // 
    // Examples for the China site (aliyun.com):
    // 
    // *   **ga_gapluspre_public_cn**: GA instance.
    // *   **ga_plusbwppre_public_cn**: basic bandwidth plan.
    // 
    // Examples for the international site (alibabacloud.com):
    // 
    // *   **ga_pluspre_public_intl**: GA instance.
    // *   **ga_bwppreintl_public_intl**: basic bandwidth plan.
    shared_ptr<string> commodityCode_ {};
    // The name of the commodity.
    shared_ptr<string> commodityName_ {};
    // The information about the commodity modules.
    // 
    // The returned information varies based on the commodity.
    shared_ptr<vector<DescribeCommodityResponseBody::Components>> components_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
