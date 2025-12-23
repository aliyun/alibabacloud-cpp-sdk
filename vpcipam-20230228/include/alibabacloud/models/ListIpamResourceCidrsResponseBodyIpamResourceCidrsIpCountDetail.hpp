// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMRESOURCECIDRSRESPONSEBODYIPAMRESOURCECIDRSIPCOUNTDETAIL_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMRESOURCECIDRSRESPONSEBODYIPAMRESOURCECIDRSIPCOUNTDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamResourceCidrsResponseBodyIpamResourceCidrsIpCountDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamResourceCidrsResponseBodyIpamResourceCidrsIpCountDetail& obj) { 
      DARABONBA_PTR_TO_JSON(FreeIpCount, freeIpCount_);
      DARABONBA_PTR_TO_JSON(TotalIpCount, totalIpCount_);
      DARABONBA_PTR_TO_JSON(UsedIpCount, usedIpCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamResourceCidrsResponseBodyIpamResourceCidrsIpCountDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(FreeIpCount, freeIpCount_);
      DARABONBA_PTR_FROM_JSON(TotalIpCount, totalIpCount_);
      DARABONBA_PTR_FROM_JSON(UsedIpCount, usedIpCount_);
    };
    ListIpamResourceCidrsResponseBodyIpamResourceCidrsIpCountDetail() = default ;
    ListIpamResourceCidrsResponseBodyIpamResourceCidrsIpCountDetail(const ListIpamResourceCidrsResponseBodyIpamResourceCidrsIpCountDetail &) = default ;
    ListIpamResourceCidrsResponseBodyIpamResourceCidrsIpCountDetail(ListIpamResourceCidrsResponseBodyIpamResourceCidrsIpCountDetail &&) = default ;
    ListIpamResourceCidrsResponseBodyIpamResourceCidrsIpCountDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamResourceCidrsResponseBodyIpamResourceCidrsIpCountDetail() = default ;
    ListIpamResourceCidrsResponseBodyIpamResourceCidrsIpCountDetail& operator=(const ListIpamResourceCidrsResponseBodyIpamResourceCidrsIpCountDetail &) = default ;
    ListIpamResourceCidrsResponseBodyIpamResourceCidrsIpCountDetail& operator=(ListIpamResourceCidrsResponseBodyIpamResourceCidrsIpCountDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->freeIpCount_ == nullptr
        && return this->totalIpCount_ == nullptr && return this->usedIpCount_ == nullptr; };
    // freeIpCount Field Functions 
    bool hasFreeIpCount() const { return this->freeIpCount_ != nullptr;};
    void deleteFreeIpCount() { this->freeIpCount_ = nullptr;};
    inline string freeIpCount() const { DARABONBA_PTR_GET_DEFAULT(freeIpCount_, "") };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrsIpCountDetail& setFreeIpCount(string freeIpCount) { DARABONBA_PTR_SET_VALUE(freeIpCount_, freeIpCount) };


    // totalIpCount Field Functions 
    bool hasTotalIpCount() const { return this->totalIpCount_ != nullptr;};
    void deleteTotalIpCount() { this->totalIpCount_ = nullptr;};
    inline string totalIpCount() const { DARABONBA_PTR_GET_DEFAULT(totalIpCount_, "") };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrsIpCountDetail& setTotalIpCount(string totalIpCount) { DARABONBA_PTR_SET_VALUE(totalIpCount_, totalIpCount) };


    // usedIpCount Field Functions 
    bool hasUsedIpCount() const { return this->usedIpCount_ != nullptr;};
    void deleteUsedIpCount() { this->usedIpCount_ = nullptr;};
    inline string usedIpCount() const { DARABONBA_PTR_GET_DEFAULT(usedIpCount_, "") };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrsIpCountDetail& setUsedIpCount(string usedIpCount) { DARABONBA_PTR_SET_VALUE(usedIpCount_, usedIpCount) };


  protected:
    std::shared_ptr<string> freeIpCount_ = nullptr;
    std::shared_ptr<string> totalIpCount_ = nullptr;
    std::shared_ptr<string> usedIpCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
