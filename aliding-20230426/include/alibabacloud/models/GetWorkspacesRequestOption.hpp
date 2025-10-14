// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKSPACESREQUESTOPTION_HPP_
#define ALIBABACLOUD_MODELS_GETWORKSPACESREQUESTOPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetWorkspacesRequestOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkspacesRequestOption& obj) { 
      DARABONBA_PTR_TO_JSON(WithPermissionRole, withPermissionRole_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkspacesRequestOption& obj) { 
      DARABONBA_PTR_FROM_JSON(WithPermissionRole, withPermissionRole_);
    };
    GetWorkspacesRequestOption() = default ;
    GetWorkspacesRequestOption(const GetWorkspacesRequestOption &) = default ;
    GetWorkspacesRequestOption(GetWorkspacesRequestOption &&) = default ;
    GetWorkspacesRequestOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkspacesRequestOption() = default ;
    GetWorkspacesRequestOption& operator=(const GetWorkspacesRequestOption &) = default ;
    GetWorkspacesRequestOption& operator=(GetWorkspacesRequestOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->withPermissionRole_ == nullptr; };
    // withPermissionRole Field Functions 
    bool hasWithPermissionRole() const { return this->withPermissionRole_ != nullptr;};
    void deleteWithPermissionRole() { this->withPermissionRole_ = nullptr;};
    inline bool withPermissionRole() const { DARABONBA_PTR_GET_DEFAULT(withPermissionRole_, false) };
    inline GetWorkspacesRequestOption& setWithPermissionRole(bool withPermissionRole) { DARABONBA_PTR_SET_VALUE(withPermissionRole_, withPermissionRole) };


  protected:
    std::shared_ptr<bool> withPermissionRole_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
