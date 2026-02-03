// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENISTRAFFICRANKINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENISTRAFFICRANKINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class DescribeNisTrafficRankingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNisTrafficRankingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NisTrafficRankingId, nisTrafficRankingId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNisTrafficRankingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NisTrafficRankingId, nisTrafficRankingId_);
    };
    DescribeNisTrafficRankingRequest() = default ;
    DescribeNisTrafficRankingRequest(const DescribeNisTrafficRankingRequest &) = default ;
    DescribeNisTrafficRankingRequest(DescribeNisTrafficRankingRequest &&) = default ;
    DescribeNisTrafficRankingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNisTrafficRankingRequest() = default ;
    DescribeNisTrafficRankingRequest& operator=(const DescribeNisTrafficRankingRequest &) = default ;
    DescribeNisTrafficRankingRequest& operator=(DescribeNisTrafficRankingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->nisTrafficRankingId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeNisTrafficRankingRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeNisTrafficRankingRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nisTrafficRankingId Field Functions 
    bool hasNisTrafficRankingId() const { return this->nisTrafficRankingId_ != nullptr;};
    void deleteNisTrafficRankingId() { this->nisTrafficRankingId_ = nullptr;};
    inline string getNisTrafficRankingId() const { DARABONBA_PTR_GET_DEFAULT(nisTrafficRankingId_, "") };
    inline DescribeNisTrafficRankingRequest& setNisTrafficRankingId(string nisTrafficRankingId) { DARABONBA_PTR_SET_VALUE(nisTrafficRankingId_, nisTrafficRankingId) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // This parameter is required.
    shared_ptr<string> nisTrafficRankingId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
