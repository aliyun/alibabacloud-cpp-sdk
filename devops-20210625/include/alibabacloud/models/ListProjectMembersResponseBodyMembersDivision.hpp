// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSRESPONSEBODYMEMBERSDIVISION_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSRESPONSEBODYMEMBERSDIVISION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListProjectMembersResponseBodyMembersDivision : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectMembersResponseBodyMembersDivision& obj) { 
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectMembersResponseBodyMembersDivision& obj) { 
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
    };
    ListProjectMembersResponseBodyMembersDivision() = default ;
    ListProjectMembersResponseBodyMembersDivision(const ListProjectMembersResponseBodyMembersDivision &) = default ;
    ListProjectMembersResponseBodyMembersDivision(ListProjectMembersResponseBodyMembersDivision &&) = default ;
    ListProjectMembersResponseBodyMembersDivision(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectMembersResponseBodyMembersDivision() = default ;
    ListProjectMembersResponseBodyMembersDivision& operator=(const ListProjectMembersResponseBodyMembersDivision &) = default ;
    ListProjectMembersResponseBodyMembersDivision& operator=(ListProjectMembersResponseBodyMembersDivision &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identifier_ == nullptr; };
    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline ListProjectMembersResponseBodyMembersDivision& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


  protected:
    std::shared_ptr<string> identifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
