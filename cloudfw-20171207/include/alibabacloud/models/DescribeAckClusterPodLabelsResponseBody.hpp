// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACKCLUSTERPODLABELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACKCLUSTERPODLABELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAckClusterPodLabelsResponseBodyAckLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAckClusterPodLabelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAckClusterPodLabelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AckLabels, ackLabels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAckClusterPodLabelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AckLabels, ackLabels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAckClusterPodLabelsResponseBody() = default ;
    DescribeAckClusterPodLabelsResponseBody(const DescribeAckClusterPodLabelsResponseBody &) = default ;
    DescribeAckClusterPodLabelsResponseBody(DescribeAckClusterPodLabelsResponseBody &&) = default ;
    DescribeAckClusterPodLabelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAckClusterPodLabelsResponseBody() = default ;
    DescribeAckClusterPodLabelsResponseBody& operator=(const DescribeAckClusterPodLabelsResponseBody &) = default ;
    DescribeAckClusterPodLabelsResponseBody& operator=(DescribeAckClusterPodLabelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ackLabels_ == nullptr
        && return this->requestId_ == nullptr; };
    // ackLabels Field Functions 
    bool hasAckLabels() const { return this->ackLabels_ != nullptr;};
    void deleteAckLabels() { this->ackLabels_ = nullptr;};
    inline const vector<DescribeAckClusterPodLabelsResponseBodyAckLabels> & ackLabels() const { DARABONBA_PTR_GET_CONST(ackLabels_, vector<DescribeAckClusterPodLabelsResponseBodyAckLabels>) };
    inline vector<DescribeAckClusterPodLabelsResponseBodyAckLabels> ackLabels() { DARABONBA_PTR_GET(ackLabels_, vector<DescribeAckClusterPodLabelsResponseBodyAckLabels>) };
    inline DescribeAckClusterPodLabelsResponseBody& setAckLabels(const vector<DescribeAckClusterPodLabelsResponseBodyAckLabels> & ackLabels) { DARABONBA_PTR_SET_VALUE(ackLabels_, ackLabels) };
    inline DescribeAckClusterPodLabelsResponseBody& setAckLabels(vector<DescribeAckClusterPodLabelsResponseBodyAckLabels> && ackLabels) { DARABONBA_PTR_SET_RVALUE(ackLabels_, ackLabels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAckClusterPodLabelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeAckClusterPodLabelsResponseBodyAckLabels>> ackLabels_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
