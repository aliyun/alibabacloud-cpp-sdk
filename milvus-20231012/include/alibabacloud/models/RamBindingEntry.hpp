// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RAMBINDINGENTRY_HPP_
#define ALIBABACLOUD_MODELS_RAMBINDINGENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class RamBindingEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RamBindingEntry& obj) { 
      DARABONBA_PTR_TO_JSON(boundUid, boundUid_);
      DARABONBA_PTR_TO_JSON(boundUserName, boundUserName_);
      DARABONBA_PTR_TO_JSON(milvusUsername, milvusUsername_);
    };
    friend void from_json(const Darabonba::Json& j, RamBindingEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(boundUid, boundUid_);
      DARABONBA_PTR_FROM_JSON(boundUserName, boundUserName_);
      DARABONBA_PTR_FROM_JSON(milvusUsername, milvusUsername_);
    };
    RamBindingEntry() = default ;
    RamBindingEntry(const RamBindingEntry &) = default ;
    RamBindingEntry(RamBindingEntry &&) = default ;
    RamBindingEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RamBindingEntry() = default ;
    RamBindingEntry& operator=(const RamBindingEntry &) = default ;
    RamBindingEntry& operator=(RamBindingEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->boundUid_ == nullptr
        && this->boundUserName_ == nullptr && this->milvusUsername_ == nullptr; };
    // boundUid Field Functions 
    bool hasBoundUid() const { return this->boundUid_ != nullptr;};
    void deleteBoundUid() { this->boundUid_ = nullptr;};
    inline string getBoundUid() const { DARABONBA_PTR_GET_DEFAULT(boundUid_, "") };
    inline RamBindingEntry& setBoundUid(string boundUid) { DARABONBA_PTR_SET_VALUE(boundUid_, boundUid) };


    // boundUserName Field Functions 
    bool hasBoundUserName() const { return this->boundUserName_ != nullptr;};
    void deleteBoundUserName() { this->boundUserName_ = nullptr;};
    inline string getBoundUserName() const { DARABONBA_PTR_GET_DEFAULT(boundUserName_, "") };
    inline RamBindingEntry& setBoundUserName(string boundUserName) { DARABONBA_PTR_SET_VALUE(boundUserName_, boundUserName) };


    // milvusUsername Field Functions 
    bool hasMilvusUsername() const { return this->milvusUsername_ != nullptr;};
    void deleteMilvusUsername() { this->milvusUsername_ = nullptr;};
    inline string getMilvusUsername() const { DARABONBA_PTR_GET_DEFAULT(milvusUsername_, "") };
    inline RamBindingEntry& setMilvusUsername(string milvusUsername) { DARABONBA_PTR_SET_VALUE(milvusUsername_, milvusUsername) };


  protected:
    // The unique identifier (UID) of the bound RAM user.
    shared_ptr<string> boundUid_ {};
    // The bound RAM username.
    shared_ptr<string> boundUserName_ {};
    // The Milvus username.
    shared_ptr<string> milvusUsername_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
