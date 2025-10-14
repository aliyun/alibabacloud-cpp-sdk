// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKVSRESPONSEBODYKEYS_HPP_
#define ALIBABACLOUD_MODELS_LISTKVSRESPONSEBODYKEYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListKvsResponseBodyKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKvsResponseBodyKeys& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListKvsResponseBodyKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListKvsResponseBodyKeys() = default ;
    ListKvsResponseBodyKeys(const ListKvsResponseBodyKeys &) = default ;
    ListKvsResponseBodyKeys(ListKvsResponseBodyKeys &&) = default ;
    ListKvsResponseBodyKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKvsResponseBodyKeys() = default ;
    ListKvsResponseBodyKeys& operator=(const ListKvsResponseBodyKeys &) = default ;
    ListKvsResponseBodyKeys& operator=(ListKvsResponseBodyKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->updateTime_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListKvsResponseBodyKeys& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListKvsResponseBodyKeys& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The key name.
    std::shared_ptr<string> name_ = nullptr;
    // The time when the key was last updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
