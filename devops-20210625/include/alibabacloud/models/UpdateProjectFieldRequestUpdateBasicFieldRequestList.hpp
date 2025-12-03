// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROJECTFIELDREQUESTUPDATEBASICFIELDREQUESTLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROJECTFIELDREQUESTUPDATEBASICFIELDREQUESTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateProjectFieldRequestUpdateBasicFieldRequestList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProjectFieldRequestUpdateBasicFieldRequestList& obj) { 
      DARABONBA_PTR_TO_JSON(propertyKey, propertyKey_);
      DARABONBA_PTR_TO_JSON(propertyValue, propertyValue_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProjectFieldRequestUpdateBasicFieldRequestList& obj) { 
      DARABONBA_PTR_FROM_JSON(propertyKey, propertyKey_);
      DARABONBA_PTR_FROM_JSON(propertyValue, propertyValue_);
    };
    UpdateProjectFieldRequestUpdateBasicFieldRequestList() = default ;
    UpdateProjectFieldRequestUpdateBasicFieldRequestList(const UpdateProjectFieldRequestUpdateBasicFieldRequestList &) = default ;
    UpdateProjectFieldRequestUpdateBasicFieldRequestList(UpdateProjectFieldRequestUpdateBasicFieldRequestList &&) = default ;
    UpdateProjectFieldRequestUpdateBasicFieldRequestList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProjectFieldRequestUpdateBasicFieldRequestList() = default ;
    UpdateProjectFieldRequestUpdateBasicFieldRequestList& operator=(const UpdateProjectFieldRequestUpdateBasicFieldRequestList &) = default ;
    UpdateProjectFieldRequestUpdateBasicFieldRequestList& operator=(UpdateProjectFieldRequestUpdateBasicFieldRequestList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->propertyKey_ == nullptr
        && return this->propertyValue_ == nullptr; };
    // propertyKey Field Functions 
    bool hasPropertyKey() const { return this->propertyKey_ != nullptr;};
    void deletePropertyKey() { this->propertyKey_ = nullptr;};
    inline string propertyKey() const { DARABONBA_PTR_GET_DEFAULT(propertyKey_, "") };
    inline UpdateProjectFieldRequestUpdateBasicFieldRequestList& setPropertyKey(string propertyKey) { DARABONBA_PTR_SET_VALUE(propertyKey_, propertyKey) };


    // propertyValue Field Functions 
    bool hasPropertyValue() const { return this->propertyValue_ != nullptr;};
    void deletePropertyValue() { this->propertyValue_ = nullptr;};
    inline string propertyValue() const { DARABONBA_PTR_GET_DEFAULT(propertyValue_, "") };
    inline UpdateProjectFieldRequestUpdateBasicFieldRequestList& setPropertyValue(string propertyValue) { DARABONBA_PTR_SET_VALUE(propertyValue_, propertyValue) };


  protected:
    std::shared_ptr<string> propertyKey_ = nullptr;
    std::shared_ptr<string> propertyValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
