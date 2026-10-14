// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUEUETOPJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUEUETOPJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListQueueTopJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueueTopJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(topN, topN_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueueTopJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(topN, topN_);
    };
    ListQueueTopJobsRequest() = default ;
    ListQueueTopJobsRequest(const ListQueueTopJobsRequest &) = default ;
    ListQueueTopJobsRequest(ListQueueTopJobsRequest &&) = default ;
    ListQueueTopJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueueTopJobsRequest() = default ;
    ListQueueTopJobsRequest& operator=(const ListQueueTopJobsRequest &) = default ;
    ListQueueTopJobsRequest& operator=(ListQueueTopJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->topN_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListQueueTopJobsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // topN Field Functions 
    bool hasTopN() const { return this->topN_ != nullptr;};
    void deleteTopN() { this->topN_ = nullptr;};
    inline int32_t getTopN() const { DARABONBA_PTR_GET_DEFAULT(topN_, 0) };
    inline ListQueueTopJobsRequest& setTopN(int32_t topN) { DARABONBA_PTR_SET_VALUE(topN_, topN) };


  protected:
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The maximum number of jobs to return. The maximum value is 10.
    shared_ptr<int32_t> topN_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
