// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESREQUESTHEALTHCOUNT_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESREQUESTHEALTHCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListNodesRequestHealthCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesRequestHealthCount& obj) { 
      DARABONBA_PTR_TO_JSON(operation, operation_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesRequestHealthCount& obj) { 
      DARABONBA_PTR_FROM_JSON(operation, operation_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    ListNodesRequestHealthCount() = default ;
    ListNodesRequestHealthCount(const ListNodesRequestHealthCount &) = default ;
    ListNodesRequestHealthCount(ListNodesRequestHealthCount &&) = default ;
    ListNodesRequestHealthCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesRequestHealthCount() = default ;
    ListNodesRequestHealthCount& operator=(const ListNodesRequestHealthCount &) = default ;
    ListNodesRequestHealthCount& operator=(ListNodesRequestHealthCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operation_ == nullptr
        && return this->value_ == nullptr; };
    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline ListNodesRequestHealthCount& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline int32_t value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
    inline ListNodesRequestHealthCount& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> operation_ = nullptr;
    std::shared_ptr<int32_t> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
