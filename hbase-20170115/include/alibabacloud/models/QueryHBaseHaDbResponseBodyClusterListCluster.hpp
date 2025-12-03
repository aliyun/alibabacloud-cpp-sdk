// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHBASEHADBRESPONSEBODYCLUSTERLISTCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_QUERYHBASEHADBRESPONSEBODYCLUSTERLISTCLUSTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class QueryHBaseHaDBResponseBodyClusterListCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHBaseHaDBResponseBodyClusterListCluster& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveName, activeName_);
      DARABONBA_PTR_TO_JSON(BdsName, bdsName_);
      DARABONBA_PTR_TO_JSON(HaName, haName_);
      DARABONBA_PTR_TO_JSON(StandbyName, standbyName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHBaseHaDBResponseBodyClusterListCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveName, activeName_);
      DARABONBA_PTR_FROM_JSON(BdsName, bdsName_);
      DARABONBA_PTR_FROM_JSON(HaName, haName_);
      DARABONBA_PTR_FROM_JSON(StandbyName, standbyName_);
    };
    QueryHBaseHaDBResponseBodyClusterListCluster() = default ;
    QueryHBaseHaDBResponseBodyClusterListCluster(const QueryHBaseHaDBResponseBodyClusterListCluster &) = default ;
    QueryHBaseHaDBResponseBodyClusterListCluster(QueryHBaseHaDBResponseBodyClusterListCluster &&) = default ;
    QueryHBaseHaDBResponseBodyClusterListCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHBaseHaDBResponseBodyClusterListCluster() = default ;
    QueryHBaseHaDBResponseBodyClusterListCluster& operator=(const QueryHBaseHaDBResponseBodyClusterListCluster &) = default ;
    QueryHBaseHaDBResponseBodyClusterListCluster& operator=(QueryHBaseHaDBResponseBodyClusterListCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeName_ == nullptr
        && return this->bdsName_ == nullptr && return this->haName_ == nullptr && return this->standbyName_ == nullptr; };
    // activeName Field Functions 
    bool hasActiveName() const { return this->activeName_ != nullptr;};
    void deleteActiveName() { this->activeName_ = nullptr;};
    inline string activeName() const { DARABONBA_PTR_GET_DEFAULT(activeName_, "") };
    inline QueryHBaseHaDBResponseBodyClusterListCluster& setActiveName(string activeName) { DARABONBA_PTR_SET_VALUE(activeName_, activeName) };


    // bdsName Field Functions 
    bool hasBdsName() const { return this->bdsName_ != nullptr;};
    void deleteBdsName() { this->bdsName_ = nullptr;};
    inline string bdsName() const { DARABONBA_PTR_GET_DEFAULT(bdsName_, "") };
    inline QueryHBaseHaDBResponseBodyClusterListCluster& setBdsName(string bdsName) { DARABONBA_PTR_SET_VALUE(bdsName_, bdsName) };


    // haName Field Functions 
    bool hasHaName() const { return this->haName_ != nullptr;};
    void deleteHaName() { this->haName_ = nullptr;};
    inline string haName() const { DARABONBA_PTR_GET_DEFAULT(haName_, "") };
    inline QueryHBaseHaDBResponseBodyClusterListCluster& setHaName(string haName) { DARABONBA_PTR_SET_VALUE(haName_, haName) };


    // standbyName Field Functions 
    bool hasStandbyName() const { return this->standbyName_ != nullptr;};
    void deleteStandbyName() { this->standbyName_ = nullptr;};
    inline string standbyName() const { DARABONBA_PTR_GET_DEFAULT(standbyName_, "") };
    inline QueryHBaseHaDBResponseBodyClusterListCluster& setStandbyName(string standbyName) { DARABONBA_PTR_SET_VALUE(standbyName_, standbyName) };


  protected:
    std::shared_ptr<string> activeName_ = nullptr;
    std::shared_ptr<string> bdsName_ = nullptr;
    std::shared_ptr<string> haName_ = nullptr;
    std::shared_ptr<string> standbyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
