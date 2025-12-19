// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESREQUESTHEALTHRATE_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESREQUESTHEALTHRATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListNodesRequestHealthRate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesRequestHealthRate& obj) { 
      DARABONBA_PTR_TO_JSON(operation, operation_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesRequestHealthRate& obj) { 
      DARABONBA_PTR_FROM_JSON(operation, operation_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    ListNodesRequestHealthRate() = default ;
    ListNodesRequestHealthRate(const ListNodesRequestHealthRate &) = default ;
    ListNodesRequestHealthRate(ListNodesRequestHealthRate &&) = default ;
    ListNodesRequestHealthRate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesRequestHealthRate() = default ;
    ListNodesRequestHealthRate& operator=(const ListNodesRequestHealthRate &) = default ;
    ListNodesRequestHealthRate& operator=(ListNodesRequestHealthRate &&) = default ;
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
    inline ListNodesRequestHealthRate& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline int32_t value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
    inline ListNodesRequestHealthRate& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> operation_ = nullptr;
    std::shared_ptr<int32_t> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
