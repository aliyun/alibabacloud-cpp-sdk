// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEDICATEDCLUSTERRESPONSEBODYDEDICATEDCLUSTERSTATUSLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEDICATEDCLUSTERRESPONSEBODYDEDICATEDCLUSTERSTATUSLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ListDedicatedClusterResponseBodyDedicatedClusterStatusList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDedicatedClusterResponseBodyDedicatedClusterStatusList& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedClusterStatus, dedicatedClusterStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListDedicatedClusterResponseBodyDedicatedClusterStatusList& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedClusterStatus, dedicatedClusterStatus_);
    };
    ListDedicatedClusterResponseBodyDedicatedClusterStatusList() = default ;
    ListDedicatedClusterResponseBodyDedicatedClusterStatusList(const ListDedicatedClusterResponseBodyDedicatedClusterStatusList &) = default ;
    ListDedicatedClusterResponseBodyDedicatedClusterStatusList(ListDedicatedClusterResponseBodyDedicatedClusterStatusList &&) = default ;
    ListDedicatedClusterResponseBodyDedicatedClusterStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDedicatedClusterResponseBodyDedicatedClusterStatusList() = default ;
    ListDedicatedClusterResponseBodyDedicatedClusterStatusList& operator=(const ListDedicatedClusterResponseBodyDedicatedClusterStatusList &) = default ;
    ListDedicatedClusterResponseBodyDedicatedClusterStatusList& operator=(ListDedicatedClusterResponseBodyDedicatedClusterStatusList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dedicatedClusterStatus_ != nullptr; };
    // dedicatedClusterStatus Field Functions 
    bool hasDedicatedClusterStatus() const { return this->dedicatedClusterStatus_ != nullptr;};
    void deleteDedicatedClusterStatus() { this->dedicatedClusterStatus_ = nullptr;};
    inline const vector<Models::ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus> & dedicatedClusterStatus() const { DARABONBA_PTR_GET_CONST(dedicatedClusterStatus_, vector<Models::ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus>) };
    inline vector<Models::ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus> dedicatedClusterStatus() { DARABONBA_PTR_GET(dedicatedClusterStatus_, vector<Models::ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus>) };
    inline ListDedicatedClusterResponseBodyDedicatedClusterStatusList& setDedicatedClusterStatus(const vector<Models::ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus> & dedicatedClusterStatus) { DARABONBA_PTR_SET_VALUE(dedicatedClusterStatus_, dedicatedClusterStatus) };
    inline ListDedicatedClusterResponseBodyDedicatedClusterStatusList& setDedicatedClusterStatus(vector<Models::ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus> && dedicatedClusterStatus) { DARABONBA_PTR_SET_RVALUE(dedicatedClusterStatus_, dedicatedClusterStatus) };


  protected:
    std::shared_ptr<vector<Models::ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus>> dedicatedClusterStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
