// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPRESPONSEBODYRESULTCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPRESPONSEBODYRESULTCLUSTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class DescribeAppResponseBodyResultCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppResponseBodyResultCluster& obj) { 
      DARABONBA_PTR_TO_JSON(maxQueryClauseLength, maxQueryClauseLength_);
      DARABONBA_PTR_TO_JSON(maxTimeoutMS, maxTimeoutMS_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppResponseBodyResultCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(maxQueryClauseLength, maxQueryClauseLength_);
      DARABONBA_PTR_FROM_JSON(maxTimeoutMS, maxTimeoutMS_);
    };
    DescribeAppResponseBodyResultCluster() = default ;
    DescribeAppResponseBodyResultCluster(const DescribeAppResponseBodyResultCluster &) = default ;
    DescribeAppResponseBodyResultCluster(DescribeAppResponseBodyResultCluster &&) = default ;
    DescribeAppResponseBodyResultCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppResponseBodyResultCluster() = default ;
    DescribeAppResponseBodyResultCluster& operator=(const DescribeAppResponseBodyResultCluster &) = default ;
    DescribeAppResponseBodyResultCluster& operator=(DescribeAppResponseBodyResultCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxQueryClauseLength_ == nullptr
        && return this->maxTimeoutMS_ == nullptr; };
    // maxQueryClauseLength Field Functions 
    bool hasMaxQueryClauseLength() const { return this->maxQueryClauseLength_ != nullptr;};
    void deleteMaxQueryClauseLength() { this->maxQueryClauseLength_ = nullptr;};
    inline int32_t maxQueryClauseLength() const { DARABONBA_PTR_GET_DEFAULT(maxQueryClauseLength_, 0) };
    inline DescribeAppResponseBodyResultCluster& setMaxQueryClauseLength(int32_t maxQueryClauseLength) { DARABONBA_PTR_SET_VALUE(maxQueryClauseLength_, maxQueryClauseLength) };


    // maxTimeoutMS Field Functions 
    bool hasMaxTimeoutMS() const { return this->maxTimeoutMS_ != nullptr;};
    void deleteMaxTimeoutMS() { this->maxTimeoutMS_ = nullptr;};
    inline int32_t maxTimeoutMS() const { DARABONBA_PTR_GET_DEFAULT(maxTimeoutMS_, 0) };
    inline DescribeAppResponseBodyResultCluster& setMaxTimeoutMS(int32_t maxTimeoutMS) { DARABONBA_PTR_SET_VALUE(maxTimeoutMS_, maxTimeoutMS) };


  protected:
    // The maximum length of the query clause.
    std::shared_ptr<int32_t> maxQueryClauseLength_ = nullptr;
    // The timeout period. Unit: milliseconds.
    std::shared_ptr<int32_t> maxTimeoutMS_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
