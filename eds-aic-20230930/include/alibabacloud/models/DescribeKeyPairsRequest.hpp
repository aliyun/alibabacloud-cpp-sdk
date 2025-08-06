// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKEYPAIRSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKEYPAIRSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeKeyPairsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKeyPairsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyPairIds, keyPairIds_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKeyPairsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyPairIds, keyPairIds_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    DescribeKeyPairsRequest() = default ;
    DescribeKeyPairsRequest(const DescribeKeyPairsRequest &) = default ;
    DescribeKeyPairsRequest(DescribeKeyPairsRequest &&) = default ;
    DescribeKeyPairsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKeyPairsRequest() = default ;
    DescribeKeyPairsRequest& operator=(const DescribeKeyPairsRequest &) = default ;
    DescribeKeyPairsRequest& operator=(DescribeKeyPairsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyPairIds_ != nullptr
        && this->keyPairName_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr; };
    // keyPairIds Field Functions 
    bool hasKeyPairIds() const { return this->keyPairIds_ != nullptr;};
    void deleteKeyPairIds() { this->keyPairIds_ = nullptr;};
    inline const vector<string> & keyPairIds() const { DARABONBA_PTR_GET_CONST(keyPairIds_, vector<string>) };
    inline vector<string> keyPairIds() { DARABONBA_PTR_GET(keyPairIds_, vector<string>) };
    inline DescribeKeyPairsRequest& setKeyPairIds(const vector<string> & keyPairIds) { DARABONBA_PTR_SET_VALUE(keyPairIds_, keyPairIds) };
    inline DescribeKeyPairsRequest& setKeyPairIds(vector<string> && keyPairIds) { DARABONBA_PTR_SET_RVALUE(keyPairIds_, keyPairIds) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline DescribeKeyPairsRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeKeyPairsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeKeyPairsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The IDs of the ADB key pairs.
    std::shared_ptr<vector<string>> keyPairIds_ = nullptr;
    // The name of the ADB key pair.
    std::shared_ptr<string> keyPairName_ = nullptr;
    // The maximum number of entries per page. Valid values: 1 to 100. Default value: 10.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. If the parameter is left empty, the data is queried from the first entry.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
