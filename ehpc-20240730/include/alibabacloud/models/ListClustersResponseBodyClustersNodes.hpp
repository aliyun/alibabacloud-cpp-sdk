// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODYCLUSTERSNODES_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODYCLUSTERSNODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListClustersResponseBodyClustersNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClustersResponseBodyClustersNodes& obj) { 
      DARABONBA_PTR_TO_JSON(AbnormalCounts, abnormalCounts_);
      DARABONBA_PTR_TO_JSON(CreatingCounts, creatingCounts_);
      DARABONBA_PTR_TO_JSON(RunningCounts, runningCounts_);
    };
    friend void from_json(const Darabonba::Json& j, ListClustersResponseBodyClustersNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(AbnormalCounts, abnormalCounts_);
      DARABONBA_PTR_FROM_JSON(CreatingCounts, creatingCounts_);
      DARABONBA_PTR_FROM_JSON(RunningCounts, runningCounts_);
    };
    ListClustersResponseBodyClustersNodes() = default ;
    ListClustersResponseBodyClustersNodes(const ListClustersResponseBodyClustersNodes &) = default ;
    ListClustersResponseBodyClustersNodes(ListClustersResponseBodyClustersNodes &&) = default ;
    ListClustersResponseBodyClustersNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClustersResponseBodyClustersNodes() = default ;
    ListClustersResponseBodyClustersNodes& operator=(const ListClustersResponseBodyClustersNodes &) = default ;
    ListClustersResponseBodyClustersNodes& operator=(ListClustersResponseBodyClustersNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abnormalCounts_ == nullptr
        && return this->creatingCounts_ == nullptr && return this->runningCounts_ == nullptr; };
    // abnormalCounts Field Functions 
    bool hasAbnormalCounts() const { return this->abnormalCounts_ != nullptr;};
    void deleteAbnormalCounts() { this->abnormalCounts_ = nullptr;};
    inline int32_t abnormalCounts() const { DARABONBA_PTR_GET_DEFAULT(abnormalCounts_, 0) };
    inline ListClustersResponseBodyClustersNodes& setAbnormalCounts(int32_t abnormalCounts) { DARABONBA_PTR_SET_VALUE(abnormalCounts_, abnormalCounts) };


    // creatingCounts Field Functions 
    bool hasCreatingCounts() const { return this->creatingCounts_ != nullptr;};
    void deleteCreatingCounts() { this->creatingCounts_ = nullptr;};
    inline int32_t creatingCounts() const { DARABONBA_PTR_GET_DEFAULT(creatingCounts_, 0) };
    inline ListClustersResponseBodyClustersNodes& setCreatingCounts(int32_t creatingCounts) { DARABONBA_PTR_SET_VALUE(creatingCounts_, creatingCounts) };


    // runningCounts Field Functions 
    bool hasRunningCounts() const { return this->runningCounts_ != nullptr;};
    void deleteRunningCounts() { this->runningCounts_ = nullptr;};
    inline int32_t runningCounts() const { DARABONBA_PTR_GET_DEFAULT(runningCounts_, 0) };
    inline ListClustersResponseBodyClustersNodes& setRunningCounts(int32_t runningCounts) { DARABONBA_PTR_SET_VALUE(runningCounts_, runningCounts) };


  protected:
    // The number of malfunctioning compute nodes.
    std::shared_ptr<int32_t> abnormalCounts_ = nullptr;
    // The number of compute nodes that are being created.
    std::shared_ptr<int32_t> creatingCounts_ = nullptr;
    // The number of running compute nodes.
    std::shared_ptr<int32_t> runningCounts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
