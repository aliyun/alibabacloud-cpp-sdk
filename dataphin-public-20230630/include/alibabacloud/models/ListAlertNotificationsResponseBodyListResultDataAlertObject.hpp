// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTNOTIFICATIONSRESPONSEBODYLISTRESULTDATAALERTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTNOTIFICATIONSRESPONSEBODYLISTRESULTDATAALERTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListAlertNotificationsResponseBodyListResultDataAlertObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertNotificationsResponseBodyListResultDataAlertObject& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SourceSystemType, sourceSystemType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertNotificationsResponseBodyListResultDataAlertObject& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SourceSystemType, sourceSystemType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListAlertNotificationsResponseBodyListResultDataAlertObject() = default ;
    ListAlertNotificationsResponseBodyListResultDataAlertObject(const ListAlertNotificationsResponseBodyListResultDataAlertObject &) = default ;
    ListAlertNotificationsResponseBodyListResultDataAlertObject(ListAlertNotificationsResponseBodyListResultDataAlertObject &&) = default ;
    ListAlertNotificationsResponseBodyListResultDataAlertObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertNotificationsResponseBodyListResultDataAlertObject() = default ;
    ListAlertNotificationsResponseBodyListResultDataAlertObject& operator=(const ListAlertNotificationsResponseBodyListResultDataAlertObject &) = default ;
    ListAlertNotificationsResponseBodyListResultDataAlertObject& operator=(ListAlertNotificationsResponseBodyListResultDataAlertObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->sourceSystemType_ == nullptr && return this->type_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAlertNotificationsResponseBodyListResultDataAlertObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourceSystemType Field Functions 
    bool hasSourceSystemType() const { return this->sourceSystemType_ != nullptr;};
    void deleteSourceSystemType() { this->sourceSystemType_ = nullptr;};
    inline string sourceSystemType() const { DARABONBA_PTR_GET_DEFAULT(sourceSystemType_, "") };
    inline ListAlertNotificationsResponseBodyListResultDataAlertObject& setSourceSystemType(string sourceSystemType) { DARABONBA_PTR_SET_VALUE(sourceSystemType_, sourceSystemType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAlertNotificationsResponseBodyListResultDataAlertObject& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> sourceSystemType_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
