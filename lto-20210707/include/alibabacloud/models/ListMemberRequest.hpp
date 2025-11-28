// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Contactor, contactor_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Num, num_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, ListMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Contactor, contactor_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Num, num_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    ListMemberRequest() = default ;
    ListMemberRequest(const ListMemberRequest &) = default ;
    ListMemberRequest(ListMemberRequest &&) = default ;
    ListMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMemberRequest() = default ;
    ListMemberRequest& operator=(const ListMemberRequest &) = default ;
    ListMemberRequest& operator=(ListMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactor_ == nullptr
        && return this->name_ == nullptr && return this->num_ == nullptr && return this->regionId_ == nullptr && return this->size_ == nullptr && return this->uid_ == nullptr; };
    // contactor Field Functions 
    bool hasContactor() const { return this->contactor_ != nullptr;};
    void deleteContactor() { this->contactor_ = nullptr;};
    inline string contactor() const { DARABONBA_PTR_GET_DEFAULT(contactor_, "") };
    inline ListMemberRequest& setContactor(string contactor) { DARABONBA_PTR_SET_VALUE(contactor_, contactor) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMemberRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // num Field Functions 
    bool hasNum() const { return this->num_ != nullptr;};
    void deleteNum() { this->num_ = nullptr;};
    inline int32_t num() const { DARABONBA_PTR_GET_DEFAULT(num_, 0) };
    inline ListMemberRequest& setNum(int32_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListMemberRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListMemberRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline ListMemberRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    std::shared_ptr<string> contactor_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> num_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
