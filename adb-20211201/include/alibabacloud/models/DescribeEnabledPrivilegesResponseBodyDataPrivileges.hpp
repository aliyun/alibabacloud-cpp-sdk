// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENABLEDPRIVILEGESRESPONSEBODYDATAPRIVILEGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENABLEDPRIVILEGESRESPONSEBODYDATAPRIVILEGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeEnabledPrivilegesResponseBodyDataPrivileges : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnabledPrivilegesResponseBodyDataPrivileges& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Key, key_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnabledPrivilegesResponseBodyDataPrivileges& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
    };
    DescribeEnabledPrivilegesResponseBodyDataPrivileges() = default ;
    DescribeEnabledPrivilegesResponseBodyDataPrivileges(const DescribeEnabledPrivilegesResponseBodyDataPrivileges &) = default ;
    DescribeEnabledPrivilegesResponseBodyDataPrivileges(DescribeEnabledPrivilegesResponseBodyDataPrivileges &&) = default ;
    DescribeEnabledPrivilegesResponseBodyDataPrivileges(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnabledPrivilegesResponseBodyDataPrivileges() = default ;
    DescribeEnabledPrivilegesResponseBodyDataPrivileges& operator=(const DescribeEnabledPrivilegesResponseBodyDataPrivileges &) = default ;
    DescribeEnabledPrivilegesResponseBodyDataPrivileges& operator=(DescribeEnabledPrivilegesResponseBodyDataPrivileges &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->key_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeEnabledPrivilegesResponseBodyDataPrivileges& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeEnabledPrivilegesResponseBodyDataPrivileges& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


  protected:
    // The description of the permission.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the permission.
    std::shared_ptr<string> key_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
