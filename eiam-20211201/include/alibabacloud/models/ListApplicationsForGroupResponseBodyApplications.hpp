// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORGROUPRESPONSEBODYAPPLICATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORGROUPRESPONSEBODYAPPLICATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListApplicationsForGroupResponseBodyApplications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsForGroupResponseBodyApplications& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(HasDirectAuthorization, hasDirectAuthorization_);
      DARABONBA_PTR_TO_JSON(HasInheritAuthorization, hasInheritAuthorization_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsForGroupResponseBodyApplications& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(HasDirectAuthorization, hasDirectAuthorization_);
      DARABONBA_PTR_FROM_JSON(HasInheritAuthorization, hasInheritAuthorization_);
    };
    ListApplicationsForGroupResponseBodyApplications() = default ;
    ListApplicationsForGroupResponseBodyApplications(const ListApplicationsForGroupResponseBodyApplications &) = default ;
    ListApplicationsForGroupResponseBodyApplications(ListApplicationsForGroupResponseBodyApplications &&) = default ;
    ListApplicationsForGroupResponseBodyApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsForGroupResponseBodyApplications() = default ;
    ListApplicationsForGroupResponseBodyApplications& operator=(const ListApplicationsForGroupResponseBodyApplications &) = default ;
    ListApplicationsForGroupResponseBodyApplications& operator=(ListApplicationsForGroupResponseBodyApplications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->hasDirectAuthorization_ == nullptr && return this->hasInheritAuthorization_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListApplicationsForGroupResponseBodyApplications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // hasDirectAuthorization Field Functions 
    bool hasHasDirectAuthorization() const { return this->hasDirectAuthorization_ != nullptr;};
    void deleteHasDirectAuthorization() { this->hasDirectAuthorization_ = nullptr;};
    inline bool hasDirectAuthorization() const { DARABONBA_PTR_GET_DEFAULT(hasDirectAuthorization_, false) };
    inline ListApplicationsForGroupResponseBodyApplications& setHasDirectAuthorization(bool hasDirectAuthorization) { DARABONBA_PTR_SET_VALUE(hasDirectAuthorization_, hasDirectAuthorization) };


    // hasInheritAuthorization Field Functions 
    bool hasHasInheritAuthorization() const { return this->hasInheritAuthorization_ != nullptr;};
    void deleteHasInheritAuthorization() { this->hasInheritAuthorization_ = nullptr;};
    inline bool hasInheritAuthorization() const { DARABONBA_PTR_GET_DEFAULT(hasInheritAuthorization_, false) };
    inline ListApplicationsForGroupResponseBodyApplications& setHasInheritAuthorization(bool hasInheritAuthorization) { DARABONBA_PTR_SET_VALUE(hasInheritAuthorization_, hasInheritAuthorization) };


  protected:
    // 应用的唯一标识。
    std::shared_ptr<string> applicationId_ = nullptr;
    // 直接分配给当前用户的权限，视为直接授权。
    std::shared_ptr<bool> hasDirectAuthorization_ = nullptr;
    // 通过用户隶属的组织、组获取的权限，视为继承权限。
    std::shared_ptr<bool> hasInheritAuthorization_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
