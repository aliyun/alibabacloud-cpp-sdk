// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTEVENTSRESPONSEBODYLISTRESULTDATAALERTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTEVENTSRESPONSEBODYLISTRESULTDATAALERTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListAlertEventsResponseBodyListResultDataAlertObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertEventsResponseBodyListResultDataAlertObject& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SourceSystemType, sourceSystemType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertEventsResponseBodyListResultDataAlertObject& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SourceSystemType, sourceSystemType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListAlertEventsResponseBodyListResultDataAlertObject() = default ;
    ListAlertEventsResponseBodyListResultDataAlertObject(const ListAlertEventsResponseBodyListResultDataAlertObject &) = default ;
    ListAlertEventsResponseBodyListResultDataAlertObject(ListAlertEventsResponseBodyListResultDataAlertObject &&) = default ;
    ListAlertEventsResponseBodyListResultDataAlertObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertEventsResponseBodyListResultDataAlertObject() = default ;
    ListAlertEventsResponseBodyListResultDataAlertObject& operator=(const ListAlertEventsResponseBodyListResultDataAlertObject &) = default ;
    ListAlertEventsResponseBodyListResultDataAlertObject& operator=(ListAlertEventsResponseBodyListResultDataAlertObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->sourceSystemType_ != nullptr && this->type_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAlertEventsResponseBodyListResultDataAlertObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourceSystemType Field Functions 
    bool hasSourceSystemType() const { return this->sourceSystemType_ != nullptr;};
    void deleteSourceSystemType() { this->sourceSystemType_ = nullptr;};
    inline string sourceSystemType() const { DARABONBA_PTR_GET_DEFAULT(sourceSystemType_, "") };
    inline ListAlertEventsResponseBodyListResultDataAlertObject& setSourceSystemType(string sourceSystemType) { DARABONBA_PTR_SET_VALUE(sourceSystemType_, sourceSystemType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAlertEventsResponseBodyListResultDataAlertObject& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> sourceSystemType_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
