// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRACEINFONODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRACEINFONODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeTraceInfoNodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTraceInfoNodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Node, node_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTraceInfoNodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Node, node_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTraceInfoNodeResponseBody() = default ;
    DescribeTraceInfoNodeResponseBody(const DescribeTraceInfoNodeResponseBody &) = default ;
    DescribeTraceInfoNodeResponseBody(DescribeTraceInfoNodeResponseBody &&) = default ;
    DescribeTraceInfoNodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTraceInfoNodeResponseBody() = default ;
    DescribeTraceInfoNodeResponseBody& operator=(const DescribeTraceInfoNodeResponseBody &) = default ;
    DescribeTraceInfoNodeResponseBody& operator=(DescribeTraceInfoNodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Node : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Node& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PropertyList, propertyList_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Node& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PropertyList, propertyList_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Node() = default ;
      Node(const Node &) = default ;
      Node(Node &&) = default ;
      Node(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Node() = default ;
      Node& operator=(const Node &) = default ;
      Node& operator=(Node &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PropertyList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PropertyList& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, PropertyList& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        PropertyList() = default ;
        PropertyList(const PropertyList &) = default ;
        PropertyList(PropertyList &&) = default ;
        PropertyList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PropertyList() = default ;
        PropertyList& operator=(const PropertyList &) = default ;
        PropertyList& operator=(PropertyList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PropertyList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline PropertyList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The name of the property.
        shared_ptr<string> name_ {};
        // The value of the property.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->name_ == nullptr
        && this->propertyList_ == nullptr && this->type_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Node& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // propertyList Field Functions 
      bool hasPropertyList() const { return this->propertyList_ != nullptr;};
      void deletePropertyList() { this->propertyList_ = nullptr;};
      inline const vector<Node::PropertyList> & getPropertyList() const { DARABONBA_PTR_GET_CONST(propertyList_, vector<Node::PropertyList>) };
      inline vector<Node::PropertyList> getPropertyList() { DARABONBA_PTR_GET(propertyList_, vector<Node::PropertyList>) };
      inline Node& setPropertyList(const vector<Node::PropertyList> & propertyList) { DARABONBA_PTR_SET_VALUE(propertyList_, propertyList) };
      inline Node& setPropertyList(vector<Node::PropertyList> && propertyList) { DARABONBA_PTR_SET_RVALUE(propertyList_, propertyList) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Node& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The name of the node.
      shared_ptr<string> name_ {};
      // An array that consists of the properties of the node.
      shared_ptr<vector<Node::PropertyList>> propertyList_ {};
      // The type of the node.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->node_ == nullptr
        && this->requestId_ == nullptr; };
    // node Field Functions 
    bool hasNode() const { return this->node_ != nullptr;};
    void deleteNode() { this->node_ = nullptr;};
    inline const DescribeTraceInfoNodeResponseBody::Node & getNode() const { DARABONBA_PTR_GET_CONST(node_, DescribeTraceInfoNodeResponseBody::Node) };
    inline DescribeTraceInfoNodeResponseBody::Node getNode() { DARABONBA_PTR_GET(node_, DescribeTraceInfoNodeResponseBody::Node) };
    inline DescribeTraceInfoNodeResponseBody& setNode(const DescribeTraceInfoNodeResponseBody::Node & node) { DARABONBA_PTR_SET_VALUE(node_, node) };
    inline DescribeTraceInfoNodeResponseBody& setNode(DescribeTraceInfoNodeResponseBody::Node && node) { DARABONBA_PTR_SET_RVALUE(node_, node) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTraceInfoNodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the node.
    shared_ptr<DescribeTraceInfoNodeResponseBody::Node> node_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
