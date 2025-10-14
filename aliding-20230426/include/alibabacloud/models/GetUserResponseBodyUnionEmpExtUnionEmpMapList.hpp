// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYUNIONEMPEXTUNIONEMPMAPLIST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYUNIONEMPEXTUNIONEMPMAPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetUserResponseBodyUnionEmpExtUnionEmpMapList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserResponseBodyUnionEmpExtUnionEmpMapList& obj) { 
      DARABONBA_PTR_TO_JSON(cropId, cropId_);
      DARABONBA_PTR_TO_JSON(userid, userid_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserResponseBodyUnionEmpExtUnionEmpMapList& obj) { 
      DARABONBA_PTR_FROM_JSON(cropId, cropId_);
      DARABONBA_PTR_FROM_JSON(userid, userid_);
    };
    GetUserResponseBodyUnionEmpExtUnionEmpMapList() = default ;
    GetUserResponseBodyUnionEmpExtUnionEmpMapList(const GetUserResponseBodyUnionEmpExtUnionEmpMapList &) = default ;
    GetUserResponseBodyUnionEmpExtUnionEmpMapList(GetUserResponseBodyUnionEmpExtUnionEmpMapList &&) = default ;
    GetUserResponseBodyUnionEmpExtUnionEmpMapList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserResponseBodyUnionEmpExtUnionEmpMapList() = default ;
    GetUserResponseBodyUnionEmpExtUnionEmpMapList& operator=(const GetUserResponseBodyUnionEmpExtUnionEmpMapList &) = default ;
    GetUserResponseBodyUnionEmpExtUnionEmpMapList& operator=(GetUserResponseBodyUnionEmpExtUnionEmpMapList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cropId_ == nullptr
        && return this->userid_ == nullptr; };
    // cropId Field Functions 
    bool hasCropId() const { return this->cropId_ != nullptr;};
    void deleteCropId() { this->cropId_ = nullptr;};
    inline string cropId() const { DARABONBA_PTR_GET_DEFAULT(cropId_, "") };
    inline GetUserResponseBodyUnionEmpExtUnionEmpMapList& setCropId(string cropId) { DARABONBA_PTR_SET_VALUE(cropId_, cropId) };


    // userid Field Functions 
    bool hasUserid() const { return this->userid_ != nullptr;};
    void deleteUserid() { this->userid_ = nullptr;};
    inline string userid() const { DARABONBA_PTR_GET_DEFAULT(userid_, "") };
    inline GetUserResponseBodyUnionEmpExtUnionEmpMapList& setUserid(string userid) { DARABONBA_PTR_SET_VALUE(userid_, userid) };


  protected:
    std::shared_ptr<string> cropId_ = nullptr;
    std::shared_ptr<string> userid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
