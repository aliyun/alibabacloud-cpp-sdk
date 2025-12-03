// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODYRESULTDESCRIPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODYRESULTDESCRIPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiHistoryResponseBodyResultDescriptionsResultDescription.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiHistoryResponseBodyResultDescriptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiHistoryResponseBodyResultDescriptions& obj) { 
      DARABONBA_PTR_TO_JSON(ResultDescription, resultDescription_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiHistoryResponseBodyResultDescriptions& obj) { 
      DARABONBA_PTR_FROM_JSON(ResultDescription, resultDescription_);
    };
    DescribeApiHistoryResponseBodyResultDescriptions() = default ;
    DescribeApiHistoryResponseBodyResultDescriptions(const DescribeApiHistoryResponseBodyResultDescriptions &) = default ;
    DescribeApiHistoryResponseBodyResultDescriptions(DescribeApiHistoryResponseBodyResultDescriptions &&) = default ;
    DescribeApiHistoryResponseBodyResultDescriptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiHistoryResponseBodyResultDescriptions() = default ;
    DescribeApiHistoryResponseBodyResultDescriptions& operator=(const DescribeApiHistoryResponseBodyResultDescriptions &) = default ;
    DescribeApiHistoryResponseBodyResultDescriptions& operator=(DescribeApiHistoryResponseBodyResultDescriptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resultDescription_ == nullptr; };
    // resultDescription Field Functions 
    bool hasResultDescription() const { return this->resultDescription_ != nullptr;};
    void deleteResultDescription() { this->resultDescription_ = nullptr;};
    inline const vector<Models::DescribeApiHistoryResponseBodyResultDescriptionsResultDescription> & resultDescription() const { DARABONBA_PTR_GET_CONST(resultDescription_, vector<Models::DescribeApiHistoryResponseBodyResultDescriptionsResultDescription>) };
    inline vector<Models::DescribeApiHistoryResponseBodyResultDescriptionsResultDescription> resultDescription() { DARABONBA_PTR_GET(resultDescription_, vector<Models::DescribeApiHistoryResponseBodyResultDescriptionsResultDescription>) };
    inline DescribeApiHistoryResponseBodyResultDescriptions& setResultDescription(const vector<Models::DescribeApiHistoryResponseBodyResultDescriptionsResultDescription> & resultDescription) { DARABONBA_PTR_SET_VALUE(resultDescription_, resultDescription) };
    inline DescribeApiHistoryResponseBodyResultDescriptions& setResultDescription(vector<Models::DescribeApiHistoryResponseBodyResultDescriptionsResultDescription> && resultDescription) { DARABONBA_PTR_SET_RVALUE(resultDescription_, resultDescription) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiHistoryResponseBodyResultDescriptionsResultDescription>> resultDescription_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
