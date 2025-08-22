// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDCDNKVRESPONSEBODYKEYS_HPP_
#define ALIBABACLOUD_MODELS_LISTDCDNKVRESPONSEBODYKEYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class ListDcdnKvResponseBodyKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDcdnKvResponseBodyKeys& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListDcdnKvResponseBodyKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListDcdnKvResponseBodyKeys() = default ;
    ListDcdnKvResponseBodyKeys(const ListDcdnKvResponseBodyKeys &) = default ;
    ListDcdnKvResponseBodyKeys(ListDcdnKvResponseBodyKeys &&) = default ;
    ListDcdnKvResponseBodyKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDcdnKvResponseBodyKeys() = default ;
    ListDcdnKvResponseBodyKeys& operator=(const ListDcdnKvResponseBodyKeys &) = default ;
    ListDcdnKvResponseBodyKeys& operator=(ListDcdnKvResponseBodyKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->updateTime_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDcdnKvResponseBodyKeys& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListDcdnKvResponseBodyKeys& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The value of the key obtained in this traversal.
    std::shared_ptr<string> name_ = nullptr;
    // The time when the key was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
