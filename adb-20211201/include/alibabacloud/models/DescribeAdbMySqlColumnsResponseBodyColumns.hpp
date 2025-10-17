// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLCOLUMNSRESPONSEBODYCOLUMNS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLCOLUMNSRESPONSEBODYCOLUMNS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAdbMySqlColumnsResponseBodyColumns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdbMySqlColumnsResponseBodyColumns& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdbMySqlColumnsResponseBodyColumns& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeAdbMySqlColumnsResponseBodyColumns() = default ;
    DescribeAdbMySqlColumnsResponseBodyColumns(const DescribeAdbMySqlColumnsResponseBodyColumns &) = default ;
    DescribeAdbMySqlColumnsResponseBodyColumns(DescribeAdbMySqlColumnsResponseBodyColumns &&) = default ;
    DescribeAdbMySqlColumnsResponseBodyColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdbMySqlColumnsResponseBodyColumns() = default ;
    DescribeAdbMySqlColumnsResponseBodyColumns& operator=(const DescribeAdbMySqlColumnsResponseBodyColumns &) = default ;
    DescribeAdbMySqlColumnsResponseBodyColumns& operator=(DescribeAdbMySqlColumnsResponseBodyColumns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->name_ == nullptr && return this->type_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline DescribeAdbMySqlColumnsResponseBodyColumns& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAdbMySqlColumnsResponseBodyColumns& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAdbMySqlColumnsResponseBodyColumns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The comments of the column.
    std::shared_ptr<string> comment_ = nullptr;
    // The name of the column.
    std::shared_ptr<string> name_ = nullptr;
    // The data type of the column.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
