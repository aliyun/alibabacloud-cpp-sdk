// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEINFORESPONSEBODYDATAPARTITIONCOLUMNS_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEINFORESPONSEBODYDATAPARTITIONCOLUMNS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetTableInfoResponseBodyDataPartitionColumns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableInfoResponseBodyDataPartitionColumns& obj) { 
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(label, label_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableInfoResponseBodyDataPartitionColumns& obj) { 
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(label, label_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetTableInfoResponseBodyDataPartitionColumns() = default ;
    GetTableInfoResponseBodyDataPartitionColumns(const GetTableInfoResponseBodyDataPartitionColumns &) = default ;
    GetTableInfoResponseBodyDataPartitionColumns(GetTableInfoResponseBodyDataPartitionColumns &&) = default ;
    GetTableInfoResponseBodyDataPartitionColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableInfoResponseBodyDataPartitionColumns() = default ;
    GetTableInfoResponseBodyDataPartitionColumns& operator=(const GetTableInfoResponseBodyDataPartitionColumns &) = default ;
    GetTableInfoResponseBodyDataPartitionColumns& operator=(GetTableInfoResponseBodyDataPartitionColumns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->label_ == nullptr && return this->name_ == nullptr && return this->type_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetTableInfoResponseBodyDataPartitionColumns& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetTableInfoResponseBodyDataPartitionColumns& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetTableInfoResponseBodyDataPartitionColumns& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetTableInfoResponseBodyDataPartitionColumns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The comments of the partition key column.
    std::shared_ptr<string> comment_ = nullptr;
    // The sensitivity-level label of the column. For more information, see [Label-based access control](https://www.alibabacloud.com/help/maxcompute/user-guide/label-based-access-control).
    std::shared_ptr<string> label_ = nullptr;
    // The partition name.
    std::shared_ptr<string> name_ = nullptr;
    // The partition column type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
