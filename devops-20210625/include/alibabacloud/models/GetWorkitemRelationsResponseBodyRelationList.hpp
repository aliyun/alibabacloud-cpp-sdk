// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMRELATIONSRESPONSEBODYRELATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMRELATIONSRESPONSEBODYRELATIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetWorkitemRelationsResponseBodyRelationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkitemRelationsResponseBodyRelationList& obj) { 
      DARABONBA_PTR_TO_JSON(assignedTo, assignedTo_);
      DARABONBA_PTR_TO_JSON(categoryIdentifier, categoryIdentifier_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
      DARABONBA_PTR_TO_JSON(workitemTypeIdentifier, workitemTypeIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkitemRelationsResponseBodyRelationList& obj) { 
      DARABONBA_PTR_FROM_JSON(assignedTo, assignedTo_);
      DARABONBA_PTR_FROM_JSON(categoryIdentifier, categoryIdentifier_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
      DARABONBA_PTR_FROM_JSON(workitemTypeIdentifier, workitemTypeIdentifier_);
    };
    GetWorkitemRelationsResponseBodyRelationList() = default ;
    GetWorkitemRelationsResponseBodyRelationList(const GetWorkitemRelationsResponseBodyRelationList &) = default ;
    GetWorkitemRelationsResponseBodyRelationList(GetWorkitemRelationsResponseBodyRelationList &&) = default ;
    GetWorkitemRelationsResponseBodyRelationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkitemRelationsResponseBodyRelationList() = default ;
    GetWorkitemRelationsResponseBodyRelationList& operator=(const GetWorkitemRelationsResponseBodyRelationList &) = default ;
    GetWorkitemRelationsResponseBodyRelationList& operator=(GetWorkitemRelationsResponseBodyRelationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignedTo_ == nullptr
        && return this->categoryIdentifier_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->identifier_ == nullptr && return this->spaceIdentifier_ == nullptr
        && return this->subject_ == nullptr && return this->workitemTypeIdentifier_ == nullptr; };
    // assignedTo Field Functions 
    bool hasAssignedTo() const { return this->assignedTo_ != nullptr;};
    void deleteAssignedTo() { this->assignedTo_ = nullptr;};
    inline string assignedTo() const { DARABONBA_PTR_GET_DEFAULT(assignedTo_, "") };
    inline GetWorkitemRelationsResponseBodyRelationList& setAssignedTo(string assignedTo) { DARABONBA_PTR_SET_VALUE(assignedTo_, assignedTo) };


    // categoryIdentifier Field Functions 
    bool hasCategoryIdentifier() const { return this->categoryIdentifier_ != nullptr;};
    void deleteCategoryIdentifier() { this->categoryIdentifier_ = nullptr;};
    inline string categoryIdentifier() const { DARABONBA_PTR_GET_DEFAULT(categoryIdentifier_, "") };
    inline GetWorkitemRelationsResponseBodyRelationList& setCategoryIdentifier(string categoryIdentifier) { DARABONBA_PTR_SET_VALUE(categoryIdentifier_, categoryIdentifier) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetWorkitemRelationsResponseBodyRelationList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetWorkitemRelationsResponseBodyRelationList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline GetWorkitemRelationsResponseBodyRelationList& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // spaceIdentifier Field Functions 
    bool hasSpaceIdentifier() const { return this->spaceIdentifier_ != nullptr;};
    void deleteSpaceIdentifier() { this->spaceIdentifier_ = nullptr;};
    inline string spaceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(spaceIdentifier_, "") };
    inline GetWorkitemRelationsResponseBodyRelationList& setSpaceIdentifier(string spaceIdentifier) { DARABONBA_PTR_SET_VALUE(spaceIdentifier_, spaceIdentifier) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline GetWorkitemRelationsResponseBodyRelationList& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // workitemTypeIdentifier Field Functions 
    bool hasWorkitemTypeIdentifier() const { return this->workitemTypeIdentifier_ != nullptr;};
    void deleteWorkitemTypeIdentifier() { this->workitemTypeIdentifier_ = nullptr;};
    inline string workitemTypeIdentifier() const { DARABONBA_PTR_GET_DEFAULT(workitemTypeIdentifier_, "") };
    inline GetWorkitemRelationsResponseBodyRelationList& setWorkitemTypeIdentifier(string workitemTypeIdentifier) { DARABONBA_PTR_SET_VALUE(workitemTypeIdentifier_, workitemTypeIdentifier) };


  protected:
    std::shared_ptr<string> assignedTo_ = nullptr;
    std::shared_ptr<string> categoryIdentifier_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<string> spaceIdentifier_ = nullptr;
    std::shared_ptr<string> subject_ = nullptr;
    std::shared_ptr<string> workitemTypeIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
