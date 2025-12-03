// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListProjectMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(targetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(targetType, targetType_);
    };
    ListProjectMembersRequest() = default ;
    ListProjectMembersRequest(const ListProjectMembersRequest &) = default ;
    ListProjectMembersRequest(ListProjectMembersRequest &&) = default ;
    ListProjectMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectMembersRequest() = default ;
    ListProjectMembersRequest& operator=(const ListProjectMembersRequest &) = default ;
    ListProjectMembersRequest& operator=(ListProjectMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->targetType_ == nullptr; };
    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ListProjectMembersRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
