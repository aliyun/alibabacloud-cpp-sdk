// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONVERSAIONSPACERESPONSEBODYSPACE_HPP_
#define ALIBABACLOUD_MODELS_GETCONVERSAIONSPACERESPONSEBODYSPACE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetConversaionSpaceResponseBodySpace : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConversaionSpaceResponseBodySpace& obj) { 
      DARABONBA_PTR_TO_JSON(CorpId, corpId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConversaionSpaceResponseBodySpace& obj) { 
      DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
    };
    GetConversaionSpaceResponseBodySpace() = default ;
    GetConversaionSpaceResponseBodySpace(const GetConversaionSpaceResponseBodySpace &) = default ;
    GetConversaionSpaceResponseBodySpace(GetConversaionSpaceResponseBodySpace &&) = default ;
    GetConversaionSpaceResponseBodySpace(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConversaionSpaceResponseBodySpace() = default ;
    GetConversaionSpaceResponseBodySpace& operator=(const GetConversaionSpaceResponseBodySpace &) = default ;
    GetConversaionSpaceResponseBodySpace& operator=(GetConversaionSpaceResponseBodySpace &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->corpId_ != nullptr
        && this->createTime_ != nullptr && this->modifiedTime_ != nullptr && this->spaceId_ != nullptr; };
    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline GetConversaionSpaceResponseBodySpace& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetConversaionSpaceResponseBodySpace& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline GetConversaionSpaceResponseBodySpace& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string spaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline GetConversaionSpaceResponseBodySpace& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


  protected:
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> modifiedTime_ = nullptr;
    std::shared_ptr<string> spaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
