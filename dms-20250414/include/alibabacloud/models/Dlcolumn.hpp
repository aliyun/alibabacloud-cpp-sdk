// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DLCOLUMN_HPP_
#define ALIBABACLOUD_MODELS_DLCOLUMN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DLColumn : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DLColumn& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DLColumn& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DLColumn() = default ;
    DLColumn(const DLColumn &) = default ;
    DLColumn(DLColumn &&) = default ;
    DLColumn(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DLColumn() = default ;
    DLColumn& operator=(const DLColumn &) = default ;
    DLColumn& operator=(DLColumn &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->name_ != nullptr && this->type_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline DLColumn& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DLColumn& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DLColumn& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
