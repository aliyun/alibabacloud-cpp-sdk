// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSTATUSLISTRESPONSEBODYSYNCHRONIZATIONJOBLISTSTATUSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSTATUSLISTRESPONSEBODYSYNCHRONIZATIONJOBLISTSTATUSLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusListSynchronizationDirectionInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusList& obj) { 
      DARABONBA_PTR_TO_JSON(SynchronizationDirectionInfoList, synchronizationDirectionInfoList_);
      DARABONBA_PTR_TO_JSON(SynchronizationJobId, synchronizationJobId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusList& obj) { 
      DARABONBA_PTR_FROM_JSON(SynchronizationDirectionInfoList, synchronizationDirectionInfoList_);
      DARABONBA_PTR_FROM_JSON(SynchronizationJobId, synchronizationJobId_);
    };
    DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusList() = default ;
    DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusList(const DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusList &) = default ;
    DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusList(DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusList &&) = default ;
    DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusList() = default ;
    DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusList& operator=(const DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusList &) = default ;
    DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusList& operator=(DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->synchronizationDirectionInfoList_ == nullptr
        && return this->synchronizationJobId_ == nullptr; };
    // synchronizationDirectionInfoList Field Functions 
    bool hasSynchronizationDirectionInfoList() const { return this->synchronizationDirectionInfoList_ != nullptr;};
    void deleteSynchronizationDirectionInfoList() { this->synchronizationDirectionInfoList_ = nullptr;};
    inline const vector<Models::DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusListSynchronizationDirectionInfoList> & synchronizationDirectionInfoList() const { DARABONBA_PTR_GET_CONST(synchronizationDirectionInfoList_, vector<Models::DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusListSynchronizationDirectionInfoList>) };
    inline vector<Models::DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusListSynchronizationDirectionInfoList> synchronizationDirectionInfoList() { DARABONBA_PTR_GET(synchronizationDirectionInfoList_, vector<Models::DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusListSynchronizationDirectionInfoList>) };
    inline DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusList& setSynchronizationDirectionInfoList(const vector<Models::DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusListSynchronizationDirectionInfoList> & synchronizationDirectionInfoList) { DARABONBA_PTR_SET_VALUE(synchronizationDirectionInfoList_, synchronizationDirectionInfoList) };
    inline DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusList& setSynchronizationDirectionInfoList(vector<Models::DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusListSynchronizationDirectionInfoList> && synchronizationDirectionInfoList) { DARABONBA_PTR_SET_RVALUE(synchronizationDirectionInfoList_, synchronizationDirectionInfoList) };


    // synchronizationJobId Field Functions 
    bool hasSynchronizationJobId() const { return this->synchronizationJobId_ != nullptr;};
    void deleteSynchronizationJobId() { this->synchronizationJobId_ = nullptr;};
    inline string synchronizationJobId() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobId_, "") };
    inline DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusList& setSynchronizationJobId(string synchronizationJobId) { DARABONBA_PTR_SET_VALUE(synchronizationJobId_, synchronizationJobId) };


  protected:
    // The details of data synchronization tasks in each direction.
    std::shared_ptr<vector<Models::DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusListSynchronizationDirectionInfoList>> synchronizationDirectionInfoList_ = nullptr;
    // The ID of the data synchronization instance.
    std::shared_ptr<string> synchronizationJobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
