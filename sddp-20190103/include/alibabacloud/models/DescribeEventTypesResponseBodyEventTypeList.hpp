// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTTYPESRESPONSEBODYEVENTTYPELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTTYPESRESPONSEBODYEVENTTYPELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEventTypesResponseBodyEventTypeListSubTypeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeEventTypesResponseBodyEventTypeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventTypesResponseBodyEventTypeList& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SubTypeList, subTypeList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventTypesResponseBodyEventTypeList& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SubTypeList, subTypeList_);
    };
    DescribeEventTypesResponseBodyEventTypeList() = default ;
    DescribeEventTypesResponseBodyEventTypeList(const DescribeEventTypesResponseBodyEventTypeList &) = default ;
    DescribeEventTypesResponseBodyEventTypeList(DescribeEventTypesResponseBodyEventTypeList &&) = default ;
    DescribeEventTypesResponseBodyEventTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventTypesResponseBodyEventTypeList() = default ;
    DescribeEventTypesResponseBodyEventTypeList& operator=(const DescribeEventTypesResponseBodyEventTypeList &) = default ;
    DescribeEventTypesResponseBodyEventTypeList& operator=(DescribeEventTypesResponseBodyEventTypeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->description_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->subTypeList_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeEventTypesResponseBodyEventTypeList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeEventTypesResponseBodyEventTypeList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeEventTypesResponseBodyEventTypeList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEventTypesResponseBodyEventTypeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // subTypeList Field Functions 
    bool hasSubTypeList() const { return this->subTypeList_ != nullptr;};
    void deleteSubTypeList() { this->subTypeList_ = nullptr;};
    inline const vector<Models::DescribeEventTypesResponseBodyEventTypeListSubTypeList> & subTypeList() const { DARABONBA_PTR_GET_CONST(subTypeList_, vector<Models::DescribeEventTypesResponseBodyEventTypeListSubTypeList>) };
    inline vector<Models::DescribeEventTypesResponseBodyEventTypeListSubTypeList> subTypeList() { DARABONBA_PTR_GET(subTypeList_, vector<Models::DescribeEventTypesResponseBodyEventTypeListSubTypeList>) };
    inline DescribeEventTypesResponseBodyEventTypeList& setSubTypeList(const vector<Models::DescribeEventTypesResponseBodyEventTypeListSubTypeList> & subTypeList) { DARABONBA_PTR_SET_VALUE(subTypeList_, subTypeList) };
    inline DescribeEventTypesResponseBodyEventTypeList& setSubTypeList(vector<Models::DescribeEventTypesResponseBodyEventTypeListSubTypeList> && subTypeList) { DARABONBA_PTR_SET_RVALUE(subTypeList_, subTypeList) };


  protected:
    // The code of the anomalous event type.
    std::shared_ptr<string> code_ = nullptr;
    // The description of the anomalous event type.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the anomalous event type.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the anomalous event type.
    std::shared_ptr<string> name_ = nullptr;
    // An array that consists of anomalous event subtypes.
    std::shared_ptr<vector<Models::DescribeEventTypesResponseBodyEventTypeListSubTypeList>> subTypeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
