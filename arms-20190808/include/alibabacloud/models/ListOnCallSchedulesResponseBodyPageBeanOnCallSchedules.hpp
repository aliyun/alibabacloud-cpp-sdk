// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTONCALLSCHEDULESRESPONSEBODYPAGEBEANONCALLSCHEDULES_HPP_
#define ALIBABACLOUD_MODELS_LISTONCALLSCHEDULESRESPONSEBODYPAGEBEANONCALLSCHEDULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListOnCallSchedulesResponseBodyPageBeanOnCallSchedules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOnCallSchedulesResponseBodyPageBeanOnCallSchedules& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListOnCallSchedulesResponseBodyPageBeanOnCallSchedules& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListOnCallSchedulesResponseBodyPageBeanOnCallSchedules() = default ;
    ListOnCallSchedulesResponseBodyPageBeanOnCallSchedules(const ListOnCallSchedulesResponseBodyPageBeanOnCallSchedules &) = default ;
    ListOnCallSchedulesResponseBodyPageBeanOnCallSchedules(ListOnCallSchedulesResponseBodyPageBeanOnCallSchedules &&) = default ;
    ListOnCallSchedulesResponseBodyPageBeanOnCallSchedules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOnCallSchedulesResponseBodyPageBeanOnCallSchedules() = default ;
    ListOnCallSchedulesResponseBodyPageBeanOnCallSchedules& operator=(const ListOnCallSchedulesResponseBodyPageBeanOnCallSchedules &) = default ;
    ListOnCallSchedulesResponseBodyPageBeanOnCallSchedules& operator=(ListOnCallSchedulesResponseBodyPageBeanOnCallSchedules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListOnCallSchedulesResponseBodyPageBeanOnCallSchedules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListOnCallSchedulesResponseBodyPageBeanOnCallSchedules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListOnCallSchedulesResponseBodyPageBeanOnCallSchedules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The description of the scheduling policy.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the scheduling policy.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the scheduling policy.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
