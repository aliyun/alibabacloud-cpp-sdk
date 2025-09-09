// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOCTYPESRESPONSEBODYDOCTYPELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOCTYPESRESPONSEBODYDOCTYPELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDocTypesResponseBodyDocTypeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDocTypesResponseBodyDocTypeList& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDocTypesResponseBodyDocTypeList& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeDocTypesResponseBodyDocTypeList() = default ;
    DescribeDocTypesResponseBodyDocTypeList(const DescribeDocTypesResponseBodyDocTypeList &) = default ;
    DescribeDocTypesResponseBodyDocTypeList(DescribeDocTypesResponseBodyDocTypeList &&) = default ;
    DescribeDocTypesResponseBodyDocTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDocTypesResponseBodyDocTypeList() = default ;
    DescribeDocTypesResponseBodyDocTypeList& operator=(const DescribeDocTypesResponseBodyDocTypeList &) = default ;
    DescribeDocTypesResponseBodyDocTypeList& operator=(DescribeDocTypesResponseBodyDocTypeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline DescribeDocTypesResponseBodyDocTypeList& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeDocTypesResponseBodyDocTypeList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDocTypesResponseBodyDocTypeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The code of the object type.
    std::shared_ptr<int64_t> code_ = nullptr;
    // The ID of the object type.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the object type.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
