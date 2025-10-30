// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTACTIONSRESPONSEBODYALERTACTIONSEBPARAM_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTACTIONSRESPONSEBODYALERTACTIONSEBPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAlertActionsResponseBodyAlertActionsEbParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertActionsResponseBodyAlertActionsEbParam& obj) { 
      DARABONBA_PTR_TO_JSON(ebSource, ebSource_);
      DARABONBA_PTR_TO_JSON(eventBusName, eventBusName_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertActionsResponseBodyAlertActionsEbParam& obj) { 
      DARABONBA_PTR_FROM_JSON(ebSource, ebSource_);
      DARABONBA_PTR_FROM_JSON(eventBusName, eventBusName_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
    };
    ListAlertActionsResponseBodyAlertActionsEbParam() = default ;
    ListAlertActionsResponseBodyAlertActionsEbParam(const ListAlertActionsResponseBodyAlertActionsEbParam &) = default ;
    ListAlertActionsResponseBodyAlertActionsEbParam(ListAlertActionsResponseBodyAlertActionsEbParam &&) = default ;
    ListAlertActionsResponseBodyAlertActionsEbParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertActionsResponseBodyAlertActionsEbParam() = default ;
    ListAlertActionsResponseBodyAlertActionsEbParam& operator=(const ListAlertActionsResponseBodyAlertActionsEbParam &) = default ;
    ListAlertActionsResponseBodyAlertActionsEbParam& operator=(ListAlertActionsResponseBodyAlertActionsEbParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ebSource_ == nullptr
        && return this->eventBusName_ == nullptr && return this->regionId_ == nullptr && return this->subject_ == nullptr; };
    // ebSource Field Functions 
    bool hasEbSource() const { return this->ebSource_ != nullptr;};
    void deleteEbSource() { this->ebSource_ = nullptr;};
    inline string ebSource() const { DARABONBA_PTR_GET_DEFAULT(ebSource_, "") };
    inline ListAlertActionsResponseBodyAlertActionsEbParam& setEbSource(string ebSource) { DARABONBA_PTR_SET_VALUE(ebSource_, ebSource) };


    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline ListAlertActionsResponseBodyAlertActionsEbParam& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAlertActionsResponseBodyAlertActionsEbParam& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline ListAlertActionsResponseBodyAlertActionsEbParam& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


  protected:
    // Event source.
    std::shared_ptr<string> ebSource_ = nullptr;
    // Event bus name.
    std::shared_ptr<string> eventBusName_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Subject.
    std::shared_ptr<string> subject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
