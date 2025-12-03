// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERRESOURCESRESPONSEBODYRESULTGROUPINFOSGROUPROLE_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERRESOURCESRESPONSEBODYRESULTGROUPINFOSGROUPROLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListUserResourcesResponseBodyResultGroupInfosGroupRole : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserResourcesResponseBodyResultGroupInfosGroupRole& obj) { 
      DARABONBA_PTR_TO_JSON(accessLevel, accessLevel_);
      DARABONBA_PTR_TO_JSON(cnRoleName, cnRoleName_);
      DARABONBA_PTR_TO_JSON(enRoleName, enRoleName_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserResourcesResponseBodyResultGroupInfosGroupRole& obj) { 
      DARABONBA_PTR_FROM_JSON(accessLevel, accessLevel_);
      DARABONBA_PTR_FROM_JSON(cnRoleName, cnRoleName_);
      DARABONBA_PTR_FROM_JSON(enRoleName, enRoleName_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
    };
    ListUserResourcesResponseBodyResultGroupInfosGroupRole() = default ;
    ListUserResourcesResponseBodyResultGroupInfosGroupRole(const ListUserResourcesResponseBodyResultGroupInfosGroupRole &) = default ;
    ListUserResourcesResponseBodyResultGroupInfosGroupRole(ListUserResourcesResponseBodyResultGroupInfosGroupRole &&) = default ;
    ListUserResourcesResponseBodyResultGroupInfosGroupRole(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserResourcesResponseBodyResultGroupInfosGroupRole() = default ;
    ListUserResourcesResponseBodyResultGroupInfosGroupRole& operator=(const ListUserResourcesResponseBodyResultGroupInfosGroupRole &) = default ;
    ListUserResourcesResponseBodyResultGroupInfosGroupRole& operator=(ListUserResourcesResponseBodyResultGroupInfosGroupRole &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessLevel_ == nullptr
        && return this->cnRoleName_ == nullptr && return this->enRoleName_ == nullptr && return this->sourceId_ == nullptr && return this->sourceType_ == nullptr; };
    // accessLevel Field Functions 
    bool hasAccessLevel() const { return this->accessLevel_ != nullptr;};
    void deleteAccessLevel() { this->accessLevel_ = nullptr;};
    inline int32_t accessLevel() const { DARABONBA_PTR_GET_DEFAULT(accessLevel_, 0) };
    inline ListUserResourcesResponseBodyResultGroupInfosGroupRole& setAccessLevel(int32_t accessLevel) { DARABONBA_PTR_SET_VALUE(accessLevel_, accessLevel) };


    // cnRoleName Field Functions 
    bool hasCnRoleName() const { return this->cnRoleName_ != nullptr;};
    void deleteCnRoleName() { this->cnRoleName_ = nullptr;};
    inline string cnRoleName() const { DARABONBA_PTR_GET_DEFAULT(cnRoleName_, "") };
    inline ListUserResourcesResponseBodyResultGroupInfosGroupRole& setCnRoleName(string cnRoleName) { DARABONBA_PTR_SET_VALUE(cnRoleName_, cnRoleName) };


    // enRoleName Field Functions 
    bool hasEnRoleName() const { return this->enRoleName_ != nullptr;};
    void deleteEnRoleName() { this->enRoleName_ = nullptr;};
    inline string enRoleName() const { DARABONBA_PTR_GET_DEFAULT(enRoleName_, "") };
    inline ListUserResourcesResponseBodyResultGroupInfosGroupRole& setEnRoleName(string enRoleName) { DARABONBA_PTR_SET_VALUE(enRoleName_, enRoleName) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline int64_t sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
    inline ListUserResourcesResponseBodyResultGroupInfosGroupRole& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListUserResourcesResponseBodyResultGroupInfosGroupRole& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    std::shared_ptr<int32_t> accessLevel_ = nullptr;
    std::shared_ptr<string> cnRoleName_ = nullptr;
    std::shared_ptr<string> enRoleName_ = nullptr;
    std::shared_ptr<int64_t> sourceId_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
