// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMDISCOVEREDRESOURCERESPONSEBODYIPAMDISCOVEREDRESOURCESIPCOUNTDETAIL_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMDISCOVEREDRESOURCERESPONSEBODYIPAMDISCOVEREDRESOURCESIPCOUNTDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResourcesIpCountDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResourcesIpCountDetail& obj) { 
      DARABONBA_PTR_TO_JSON(FreeIpCount, freeIpCount_);
      DARABONBA_PTR_TO_JSON(TotalIpCount, totalIpCount_);
      DARABONBA_PTR_TO_JSON(UsedIpCount, usedIpCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResourcesIpCountDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(FreeIpCount, freeIpCount_);
      DARABONBA_PTR_FROM_JSON(TotalIpCount, totalIpCount_);
      DARABONBA_PTR_FROM_JSON(UsedIpCount, usedIpCount_);
    };
    ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResourcesIpCountDetail() = default ;
    ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResourcesIpCountDetail(const ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResourcesIpCountDetail &) = default ;
    ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResourcesIpCountDetail(ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResourcesIpCountDetail &&) = default ;
    ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResourcesIpCountDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResourcesIpCountDetail() = default ;
    ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResourcesIpCountDetail& operator=(const ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResourcesIpCountDetail &) = default ;
    ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResourcesIpCountDetail& operator=(ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResourcesIpCountDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->freeIpCount_ != nullptr
        && this->totalIpCount_ != nullptr && this->usedIpCount_ != nullptr; };
    // freeIpCount Field Functions 
    bool hasFreeIpCount() const { return this->freeIpCount_ != nullptr;};
    void deleteFreeIpCount() { this->freeIpCount_ = nullptr;};
    inline string freeIpCount() const { DARABONBA_PTR_GET_DEFAULT(freeIpCount_, "") };
    inline ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResourcesIpCountDetail& setFreeIpCount(string freeIpCount) { DARABONBA_PTR_SET_VALUE(freeIpCount_, freeIpCount) };


    // totalIpCount Field Functions 
    bool hasTotalIpCount() const { return this->totalIpCount_ != nullptr;};
    void deleteTotalIpCount() { this->totalIpCount_ = nullptr;};
    inline string totalIpCount() const { DARABONBA_PTR_GET_DEFAULT(totalIpCount_, "") };
    inline ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResourcesIpCountDetail& setTotalIpCount(string totalIpCount) { DARABONBA_PTR_SET_VALUE(totalIpCount_, totalIpCount) };


    // usedIpCount Field Functions 
    bool hasUsedIpCount() const { return this->usedIpCount_ != nullptr;};
    void deleteUsedIpCount() { this->usedIpCount_ = nullptr;};
    inline string usedIpCount() const { DARABONBA_PTR_GET_DEFAULT(usedIpCount_, "") };
    inline ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResourcesIpCountDetail& setUsedIpCount(string usedIpCount) { DARABONBA_PTR_SET_VALUE(usedIpCount_, usedIpCount) };


  protected:
    std::shared_ptr<string> freeIpCount_ = nullptr;
    std::shared_ptr<string> totalIpCount_ = nullptr;
    std::shared_ptr<string> usedIpCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
