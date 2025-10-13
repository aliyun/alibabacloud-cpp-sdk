// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTRESOURCEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTRESOURCEDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentResourceDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentResourceDetail& obj) { 
      DARABONBA_PTR_TO_JSON(extraId, extraId_);
      DARABONBA_ANY_TO_JSON(resourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentResourceDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(extraId, extraId_);
      DARABONBA_ANY_FROM_JSON(resourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    IncidentResourceDetail() = default ;
    IncidentResourceDetail(const IncidentResourceDetail &) = default ;
    IncidentResourceDetail(IncidentResourceDetail &&) = default ;
    IncidentResourceDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentResourceDetail() = default ;
    IncidentResourceDetail& operator=(const IncidentResourceDetail &) = default ;
    IncidentResourceDetail& operator=(IncidentResourceDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extraId_ == nullptr
        && return this->resourceId_ == nullptr && return this->type_ == nullptr; };
    // extraId Field Functions 
    bool hasExtraId() const { return this->extraId_ != nullptr;};
    void deleteExtraId() { this->extraId_ = nullptr;};
    inline string extraId() const { DARABONBA_PTR_GET_DEFAULT(extraId_, "") };
    inline IncidentResourceDetail& setExtraId(string extraId) { DARABONBA_PTR_SET_VALUE(extraId_, extraId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline     const Darabonba::Json & resourceId() const { DARABONBA_GET(resourceId_) };
    Darabonba::Json & resourceId() { DARABONBA_GET(resourceId_) };
    inline IncidentResourceDetail& setResourceId(const Darabonba::Json & resourceId) { DARABONBA_SET_VALUE(resourceId_, resourceId) };
    inline IncidentResourceDetail& setResourceId(Darabonba::Json & resourceId) { DARABONBA_SET_RVALUE(resourceId_, resourceId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline IncidentResourceDetail& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> extraId_ = nullptr;
    Darabonba::Json resourceId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
