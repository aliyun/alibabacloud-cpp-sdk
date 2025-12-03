// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESPRINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESPRINTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateSprintRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSprintRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endDate, endDate_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_TO_JSON(staffIds, staffIds_);
      DARABONBA_PTR_TO_JSON(startDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSprintRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endDate, endDate_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_FROM_JSON(staffIds, staffIds_);
      DARABONBA_PTR_FROM_JSON(startDate, startDate_);
    };
    CreateSprintRequest() = default ;
    CreateSprintRequest(const CreateSprintRequest &) = default ;
    CreateSprintRequest(CreateSprintRequest &&) = default ;
    CreateSprintRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSprintRequest() = default ;
    CreateSprintRequest& operator=(const CreateSprintRequest &) = default ;
    CreateSprintRequest& operator=(CreateSprintRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && return this->name_ == nullptr && return this->spaceIdentifier_ == nullptr && return this->staffIds_ == nullptr && return this->startDate_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline CreateSprintRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSprintRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // spaceIdentifier Field Functions 
    bool hasSpaceIdentifier() const { return this->spaceIdentifier_ != nullptr;};
    void deleteSpaceIdentifier() { this->spaceIdentifier_ = nullptr;};
    inline string spaceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(spaceIdentifier_, "") };
    inline CreateSprintRequest& setSpaceIdentifier(string spaceIdentifier) { DARABONBA_PTR_SET_VALUE(spaceIdentifier_, spaceIdentifier) };


    // staffIds Field Functions 
    bool hasStaffIds() const { return this->staffIds_ != nullptr;};
    void deleteStaffIds() { this->staffIds_ = nullptr;};
    inline const vector<string> & staffIds() const { DARABONBA_PTR_GET_CONST(staffIds_, vector<string>) };
    inline vector<string> staffIds() { DARABONBA_PTR_GET(staffIds_, vector<string>) };
    inline CreateSprintRequest& setStaffIds(const vector<string> & staffIds) { DARABONBA_PTR_SET_VALUE(staffIds_, staffIds) };
    inline CreateSprintRequest& setStaffIds(vector<string> && staffIds) { DARABONBA_PTR_SET_RVALUE(staffIds_, staffIds) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline CreateSprintRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    std::shared_ptr<string> endDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> spaceIdentifier_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> staffIds_ = nullptr;
    std::shared_ptr<string> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
