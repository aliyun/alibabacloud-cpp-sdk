// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETONCALLSCHEDULESDETAILRESPONSEBODYDATARENDEREDSUBSTITUDEENTRIESSIMPLECONTACT_HPP_
#define ALIBABACLOUD_MODELS_GETONCALLSCHEDULESDETAILRESPONSEBODYDATARENDEREDSUBSTITUDEENTRIESSIMPLECONTACT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntriesSimpleContact : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntriesSimpleContact& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntriesSimpleContact& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntriesSimpleContact() = default ;
    GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntriesSimpleContact(const GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntriesSimpleContact &) = default ;
    GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntriesSimpleContact(GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntriesSimpleContact &&) = default ;
    GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntriesSimpleContact(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntriesSimpleContact() = default ;
    GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntriesSimpleContact& operator=(const GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntriesSimpleContact &) = default ;
    GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntriesSimpleContact& operator=(GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntriesSimpleContact &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->name_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntriesSimpleContact& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetOnCallSchedulesDetailResponseBodyDataRenderedSubstitudeEntriesSimpleContact& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The ID of the substitute.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the substitute.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
