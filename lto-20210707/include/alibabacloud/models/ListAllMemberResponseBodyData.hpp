// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLMEMBERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTALLMEMBERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListAllMemberResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllMemberResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllMemberResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListAllMemberResponseBodyData() = default ;
    ListAllMemberResponseBodyData(const ListAllMemberResponseBodyData &) = default ;
    ListAllMemberResponseBodyData(ListAllMemberResponseBodyData &&) = default ;
    ListAllMemberResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllMemberResponseBodyData() = default ;
    ListAllMemberResponseBodyData& operator=(const ListAllMemberResponseBodyData &) = default ;
    ListAllMemberResponseBodyData& operator=(ListAllMemberResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberId_ == nullptr
        && return this->name_ == nullptr; };
    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string memberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline ListAllMemberResponseBodyData& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAllMemberResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> memberId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
