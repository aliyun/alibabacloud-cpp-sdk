// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLBIZCHAINRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTALLBIZCHAINRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListAllBizChainResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllBizChainResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BizChainId, bizChainId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UsedOnchainCount, usedOnchainCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllBizChainResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BizChainId, bizChainId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UsedOnchainCount, usedOnchainCount_);
    };
    ListAllBizChainResponseBodyData() = default ;
    ListAllBizChainResponseBodyData(const ListAllBizChainResponseBodyData &) = default ;
    ListAllBizChainResponseBodyData(ListAllBizChainResponseBodyData &&) = default ;
    ListAllBizChainResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllBizChainResponseBodyData() = default ;
    ListAllBizChainResponseBodyData& operator=(const ListAllBizChainResponseBodyData &) = default ;
    ListAllBizChainResponseBodyData& operator=(ListAllBizChainResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizChainId_ == nullptr
        && return this->name_ == nullptr && return this->usedOnchainCount_ == nullptr; };
    // bizChainId Field Functions 
    bool hasBizChainId() const { return this->bizChainId_ != nullptr;};
    void deleteBizChainId() { this->bizChainId_ = nullptr;};
    inline string bizChainId() const { DARABONBA_PTR_GET_DEFAULT(bizChainId_, "") };
    inline ListAllBizChainResponseBodyData& setBizChainId(string bizChainId) { DARABONBA_PTR_SET_VALUE(bizChainId_, bizChainId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAllBizChainResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // usedOnchainCount Field Functions 
    bool hasUsedOnchainCount() const { return this->usedOnchainCount_ != nullptr;};
    void deleteUsedOnchainCount() { this->usedOnchainCount_ = nullptr;};
    inline int64_t usedOnchainCount() const { DARABONBA_PTR_GET_DEFAULT(usedOnchainCount_, 0L) };
    inline ListAllBizChainResponseBodyData& setUsedOnchainCount(int64_t usedOnchainCount) { DARABONBA_PTR_SET_VALUE(usedOnchainCount_, usedOnchainCount) };


  protected:
    std::shared_ptr<string> bizChainId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> usedOnchainCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
