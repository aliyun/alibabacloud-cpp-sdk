// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTORSRESPONSEBODYEXECUTORSRESOURCEDISKS_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTORSRESPONSEBODYEXECUTORSRESOURCEDISKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListExecutorsResponseBodyExecutorsResourceDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutorsResponseBodyExecutorsResourceDisks& obj) { 
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutorsResponseBodyExecutorsResourceDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListExecutorsResponseBodyExecutorsResourceDisks() = default ;
    ListExecutorsResponseBodyExecutorsResourceDisks(const ListExecutorsResponseBodyExecutorsResourceDisks &) = default ;
    ListExecutorsResponseBodyExecutorsResourceDisks(ListExecutorsResponseBodyExecutorsResourceDisks &&) = default ;
    ListExecutorsResponseBodyExecutorsResourceDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutorsResponseBodyExecutorsResourceDisks() = default ;
    ListExecutorsResponseBodyExecutorsResourceDisks& operator=(const ListExecutorsResponseBodyExecutorsResourceDisks &) = default ;
    ListExecutorsResponseBodyExecutorsResourceDisks& operator=(ListExecutorsResponseBodyExecutorsResourceDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->size_ != nullptr
        && this->type_ != nullptr; };
    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListExecutorsResponseBodyExecutorsResourceDisks& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListExecutorsResponseBodyExecutorsResourceDisks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
