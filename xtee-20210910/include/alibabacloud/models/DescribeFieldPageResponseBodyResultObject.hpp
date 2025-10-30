// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIELDPAGERESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIELDPAGERESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeFieldPageResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFieldPageResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(classify, classify_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enumData, enumData_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFieldPageResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(classify, classify_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enumData, enumData_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DescribeFieldPageResponseBodyResultObject() = default ;
    DescribeFieldPageResponseBodyResultObject(const DescribeFieldPageResponseBodyResultObject &) = default ;
    DescribeFieldPageResponseBodyResultObject(DescribeFieldPageResponseBodyResultObject &&) = default ;
    DescribeFieldPageResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFieldPageResponseBodyResultObject() = default ;
    DescribeFieldPageResponseBodyResultObject& operator=(const DescribeFieldPageResponseBodyResultObject &) = default ;
    DescribeFieldPageResponseBodyResultObject& operator=(DescribeFieldPageResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classify_ == nullptr
        && return this->description_ == nullptr && return this->enumData_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->source_ == nullptr
        && return this->status_ == nullptr && return this->title_ == nullptr && return this->type_ == nullptr; };
    // classify Field Functions 
    bool hasClassify() const { return this->classify_ != nullptr;};
    void deleteClassify() { this->classify_ = nullptr;};
    inline string classify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
    inline DescribeFieldPageResponseBodyResultObject& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeFieldPageResponseBodyResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enumData Field Functions 
    bool hasEnumData() const { return this->enumData_ != nullptr;};
    void deleteEnumData() { this->enumData_ = nullptr;};
    inline string enumData() const { DARABONBA_PTR_GET_DEFAULT(enumData_, "") };
    inline DescribeFieldPageResponseBodyResultObject& setEnumData(string enumData) { DARABONBA_PTR_SET_VALUE(enumData_, enumData) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeFieldPageResponseBodyResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeFieldPageResponseBodyResultObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeFieldPageResponseBodyResultObject& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeFieldPageResponseBodyResultObject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeFieldPageResponseBodyResultObject& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeFieldPageResponseBodyResultObject& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Field classification
    std::shared_ptr<string> classify_ = nullptr;
    // Description information.
    std::shared_ptr<string> description_ = nullptr;
    // Enum data
    std::shared_ptr<string> enumData_ = nullptr;
    // Unique table ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Field name
    std::shared_ptr<string> name_ = nullptr;
    // File source.
    std::shared_ptr<string> source_ = nullptr;
    // Status.
    std::shared_ptr<string> status_ = nullptr;
    // Title.
    std::shared_ptr<string> title_ = nullptr;
    // Field type
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
