// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRACEINFONODERESPONSEBODYNODE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRACEINFONODERESPONSEBODYNODE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTraceInfoNodeResponseBodyNodePropertyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeTraceInfoNodeResponseBodyNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTraceInfoNodeResponseBodyNode& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PropertyList, propertyList_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTraceInfoNodeResponseBodyNode& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PropertyList, propertyList_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeTraceInfoNodeResponseBodyNode() = default ;
    DescribeTraceInfoNodeResponseBodyNode(const DescribeTraceInfoNodeResponseBodyNode &) = default ;
    DescribeTraceInfoNodeResponseBodyNode(DescribeTraceInfoNodeResponseBodyNode &&) = default ;
    DescribeTraceInfoNodeResponseBodyNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTraceInfoNodeResponseBodyNode() = default ;
    DescribeTraceInfoNodeResponseBodyNode& operator=(const DescribeTraceInfoNodeResponseBodyNode &) = default ;
    DescribeTraceInfoNodeResponseBodyNode& operator=(DescribeTraceInfoNodeResponseBodyNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->propertyList_ != nullptr && this->type_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeTraceInfoNodeResponseBodyNode& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // propertyList Field Functions 
    bool hasPropertyList() const { return this->propertyList_ != nullptr;};
    void deletePropertyList() { this->propertyList_ = nullptr;};
    inline const vector<Models::DescribeTraceInfoNodeResponseBodyNodePropertyList> & propertyList() const { DARABONBA_PTR_GET_CONST(propertyList_, vector<Models::DescribeTraceInfoNodeResponseBodyNodePropertyList>) };
    inline vector<Models::DescribeTraceInfoNodeResponseBodyNodePropertyList> propertyList() { DARABONBA_PTR_GET(propertyList_, vector<Models::DescribeTraceInfoNodeResponseBodyNodePropertyList>) };
    inline DescribeTraceInfoNodeResponseBodyNode& setPropertyList(const vector<Models::DescribeTraceInfoNodeResponseBodyNodePropertyList> & propertyList) { DARABONBA_PTR_SET_VALUE(propertyList_, propertyList) };
    inline DescribeTraceInfoNodeResponseBodyNode& setPropertyList(vector<Models::DescribeTraceInfoNodeResponseBodyNodePropertyList> && propertyList) { DARABONBA_PTR_SET_RVALUE(propertyList_, propertyList) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeTraceInfoNodeResponseBodyNode& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the node.
    std::shared_ptr<string> name_ = nullptr;
    // An array that consists of the properties of the node.
    std::shared_ptr<vector<Models::DescribeTraceInfoNodeResponseBodyNodePropertyList>> propertyList_ = nullptr;
    // The type of the node.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
