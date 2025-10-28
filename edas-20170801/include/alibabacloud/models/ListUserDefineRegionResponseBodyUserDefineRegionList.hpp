// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERDEFINEREGIONRESPONSEBODYUSERDEFINEREGIONLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERDEFINEREGIONRESPONSEBODYUSERDEFINEREGIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListUserDefineRegionResponseBodyUserDefineRegionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserDefineRegionResponseBodyUserDefineRegionList& obj) { 
      DARABONBA_PTR_TO_JSON(UserDefineRegionEntity, userDefineRegionEntity_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserDefineRegionResponseBodyUserDefineRegionList& obj) { 
      DARABONBA_PTR_FROM_JSON(UserDefineRegionEntity, userDefineRegionEntity_);
    };
    ListUserDefineRegionResponseBodyUserDefineRegionList() = default ;
    ListUserDefineRegionResponseBodyUserDefineRegionList(const ListUserDefineRegionResponseBodyUserDefineRegionList &) = default ;
    ListUserDefineRegionResponseBodyUserDefineRegionList(ListUserDefineRegionResponseBodyUserDefineRegionList &&) = default ;
    ListUserDefineRegionResponseBodyUserDefineRegionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserDefineRegionResponseBodyUserDefineRegionList() = default ;
    ListUserDefineRegionResponseBodyUserDefineRegionList& operator=(const ListUserDefineRegionResponseBodyUserDefineRegionList &) = default ;
    ListUserDefineRegionResponseBodyUserDefineRegionList& operator=(ListUserDefineRegionResponseBodyUserDefineRegionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userDefineRegionEntity_ == nullptr; };
    // userDefineRegionEntity Field Functions 
    bool hasUserDefineRegionEntity() const { return this->userDefineRegionEntity_ != nullptr;};
    void deleteUserDefineRegionEntity() { this->userDefineRegionEntity_ = nullptr;};
    inline const vector<Models::ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity> & userDefineRegionEntity() const { DARABONBA_PTR_GET_CONST(userDefineRegionEntity_, vector<Models::ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity>) };
    inline vector<Models::ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity> userDefineRegionEntity() { DARABONBA_PTR_GET(userDefineRegionEntity_, vector<Models::ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity>) };
    inline ListUserDefineRegionResponseBodyUserDefineRegionList& setUserDefineRegionEntity(const vector<Models::ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity> & userDefineRegionEntity) { DARABONBA_PTR_SET_VALUE(userDefineRegionEntity_, userDefineRegionEntity) };
    inline ListUserDefineRegionResponseBodyUserDefineRegionList& setUserDefineRegionEntity(vector<Models::ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity> && userDefineRegionEntity) { DARABONBA_PTR_SET_RVALUE(userDefineRegionEntity_, userDefineRegionEntity) };


  protected:
    std::shared_ptr<vector<Models::ListUserDefineRegionResponseBodyUserDefineRegionListUserDefineRegionEntity>> userDefineRegionEntity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
