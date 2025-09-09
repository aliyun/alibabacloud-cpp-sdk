// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISPFLUSHCACHETASKRESPONSEBODYFLUSHCACHERESULTSDNSNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISPFLUSHCACHETASKRESPONSEBODYFLUSHCACHERESULTSDNSNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes& obj) { 
      DARABONBA_PTR_TO_JSON(Answers, answers_);
      DARABONBA_PTR_TO_JSON(NodeIp, nodeIp_);
      DARABONBA_PTR_TO_JSON(SpName, spName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(Answers, answers_);
      DARABONBA_PTR_FROM_JSON(NodeIp, nodeIp_);
      DARABONBA_PTR_FROM_JSON(SpName, spName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes() = default ;
    DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes(const DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes &) = default ;
    DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes(DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes &&) = default ;
    DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes() = default ;
    DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes& operator=(const DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes &) = default ;
    DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes& operator=(DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->answers_ != nullptr
        && this->nodeIp_ != nullptr && this->spName_ != nullptr && this->status_ != nullptr; };
    // answers Field Functions 
    bool hasAnswers() const { return this->answers_ != nullptr;};
    void deleteAnswers() { this->answers_ = nullptr;};
    inline const vector<Models::DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers> & answers() const { DARABONBA_PTR_GET_CONST(answers_, vector<Models::DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers>) };
    inline vector<Models::DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers> answers() { DARABONBA_PTR_GET(answers_, vector<Models::DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers>) };
    inline DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes& setAnswers(const vector<Models::DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers> & answers) { DARABONBA_PTR_SET_VALUE(answers_, answers) };
    inline DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes& setAnswers(vector<Models::DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers> && answers) { DARABONBA_PTR_SET_RVALUE(answers_, answers) };


    // nodeIp Field Functions 
    bool hasNodeIp() const { return this->nodeIp_ != nullptr;};
    void deleteNodeIp() { this->nodeIp_ = nullptr;};
    inline string nodeIp() const { DARABONBA_PTR_GET_DEFAULT(nodeIp_, "") };
    inline DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes& setNodeIp(string nodeIp) { DARABONBA_PTR_SET_VALUE(nodeIp_, nodeIp) };


    // spName Field Functions 
    bool hasSpName() const { return this->spName_ != nullptr;};
    void deleteSpName() { this->spName_ = nullptr;};
    inline string spName() const { DARABONBA_PTR_GET_DEFAULT(spName_, "") };
    inline DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes& setSpName(string spName) { DARABONBA_PTR_SET_VALUE(spName_, spName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<vector<Models::DescribeIspFlushCacheTaskResponseBodyFlushCacheResultsDnsNodesAnswers>> answers_ = nullptr;
    std::shared_ptr<string> nodeIp_ = nullptr;
    std::shared_ptr<string> spName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
