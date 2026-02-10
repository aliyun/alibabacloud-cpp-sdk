// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESEARCHCONDITIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESEARCHCONDITIONRESPONSEBODY_HPP_
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
  class DescribeSearchConditionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSearchConditionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionList, conditionList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSearchConditionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionList, conditionList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSearchConditionResponseBody() = default ;
    DescribeSearchConditionResponseBody(const DescribeSearchConditionResponseBody &) = default ;
    DescribeSearchConditionResponseBody(DescribeSearchConditionResponseBody &&) = default ;
    DescribeSearchConditionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSearchConditionResponseBody() = default ;
    DescribeSearchConditionResponseBody& operator=(const DescribeSearchConditionResponseBody &) = default ;
    DescribeSearchConditionResponseBody& operator=(DescribeSearchConditionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConditionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConditionList& obj) { 
        DARABONBA_PTR_TO_JSON(ConditionType, conditionType_);
        DARABONBA_PTR_TO_JSON(FilterConditions, filterConditions_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NameKey, nameKey_);
      };
      friend void from_json(const Darabonba::Json& j, ConditionList& obj) { 
        DARABONBA_PTR_FROM_JSON(ConditionType, conditionType_);
        DARABONBA_PTR_FROM_JSON(FilterConditions, filterConditions_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NameKey, nameKey_);
      };
      ConditionList() = default ;
      ConditionList(const ConditionList &) = default ;
      ConditionList(ConditionList &&) = default ;
      ConditionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConditionList() = default ;
      ConditionList& operator=(const ConditionList &) = default ;
      ConditionList& operator=(ConditionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->conditionType_ == nullptr
        && this->filterConditions_ == nullptr && this->name_ == nullptr && this->nameKey_ == nullptr; };
      // conditionType Field Functions 
      bool hasConditionType() const { return this->conditionType_ != nullptr;};
      void deleteConditionType() { this->conditionType_ = nullptr;};
      inline string getConditionType() const { DARABONBA_PTR_GET_DEFAULT(conditionType_, "") };
      inline ConditionList& setConditionType(string conditionType) { DARABONBA_PTR_SET_VALUE(conditionType_, conditionType) };


      // filterConditions Field Functions 
      bool hasFilterConditions() const { return this->filterConditions_ != nullptr;};
      void deleteFilterConditions() { this->filterConditions_ = nullptr;};
      inline string getFilterConditions() const { DARABONBA_PTR_GET_DEFAULT(filterConditions_, "") };
      inline ConditionList& setFilterConditions(string filterConditions) { DARABONBA_PTR_SET_VALUE(filterConditions_, filterConditions) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ConditionList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nameKey Field Functions 
      bool hasNameKey() const { return this->nameKey_ != nullptr;};
      void deleteNameKey() { this->nameKey_ = nullptr;};
      inline string getNameKey() const { DARABONBA_PTR_GET_DEFAULT(nameKey_, "") };
      inline ConditionList& setNameKey(string nameKey) { DARABONBA_PTR_SET_VALUE(nameKey_, nameKey) };


    protected:
      // The type of the filter condition. Valid values:
      // 
      // *   **system**: default filter conditions.
      // *   **user**: custom filter conditions.
      shared_ptr<string> conditionType_ {};
      // The filter condition. The value of this parameter is in the JSON format and contains the following fields:
      // 
      // *   **filterParams**: the parameters of the filter condition. The value of this field is in the JSON format and contains the following fields:
      // 
      //     *   **labelKey**: the key for rendering.
      // 
      //     *   **label**: the display name.
      // 
      //     *   **value**: the value of the filter condition. The value of this field is in the JSON format and contains the following fields:
      // 
      //         *   **name**: the name of the filter item.
      //         *   **value**: the value of the filter item.
      // 
      // *   **LogicalExp**: the logical relationship among the filter conditions. Valid values:
      // 
      //     *   **AND**: The filter conditions are evaluated by using a logical **AND**.
      //     *   **OR**: The filter conditions are evaluated by using a logical **OR**.
      // 
      // >  If the value of **ConditionType** is **system**, **labelKey** is returned. The labelKey field is used only for internationalization rendering.
      shared_ptr<string> filterConditions_ {};
      // The filter condition name.
      shared_ptr<string> name_ {};
      // The key of the filter condition name.
      shared_ptr<string> nameKey_ {};
    };

    virtual bool empty() const override { return this->conditionList_ == nullptr
        && this->requestId_ == nullptr; };
    // conditionList Field Functions 
    bool hasConditionList() const { return this->conditionList_ != nullptr;};
    void deleteConditionList() { this->conditionList_ = nullptr;};
    inline const vector<DescribeSearchConditionResponseBody::ConditionList> & getConditionList() const { DARABONBA_PTR_GET_CONST(conditionList_, vector<DescribeSearchConditionResponseBody::ConditionList>) };
    inline vector<DescribeSearchConditionResponseBody::ConditionList> getConditionList() { DARABONBA_PTR_GET(conditionList_, vector<DescribeSearchConditionResponseBody::ConditionList>) };
    inline DescribeSearchConditionResponseBody& setConditionList(const vector<DescribeSearchConditionResponseBody::ConditionList> & conditionList) { DARABONBA_PTR_SET_VALUE(conditionList_, conditionList) };
    inline DescribeSearchConditionResponseBody& setConditionList(vector<DescribeSearchConditionResponseBody::ConditionList> && conditionList) { DARABONBA_PTR_SET_RVALUE(conditionList_, conditionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSearchConditionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the filter conditions.
    shared_ptr<vector<DescribeSearchConditionResponseBody::ConditionList>> conditionList_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
