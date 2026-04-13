// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDETECTCONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDETECTCONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListDetectConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDetectConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(detectConfigName, detectConfigName_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListDetectConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(detectConfigName, detectConfigName_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
    };
    ListDetectConfigsRequest() = default ;
    ListDetectConfigsRequest(const ListDetectConfigsRequest &) = default ;
    ListDetectConfigsRequest(ListDetectConfigsRequest &&) = default ;
    ListDetectConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDetectConfigsRequest() = default ;
    ListDetectConfigsRequest& operator=(const ListDetectConfigsRequest &) = default ;
    ListDetectConfigsRequest& operator=(ListDetectConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detectConfigName_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // detectConfigName Field Functions 
    bool hasDetectConfigName() const { return this->detectConfigName_ != nullptr;};
    void deleteDetectConfigName() { this->detectConfigName_ = nullptr;};
    inline string getDetectConfigName() const { DARABONBA_PTR_GET_DEFAULT(detectConfigName_, "") };
    inline ListDetectConfigsRequest& setDetectConfigName(string detectConfigName) { DARABONBA_PTR_SET_VALUE(detectConfigName_, detectConfigName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDetectConfigsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDetectConfigsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    shared_ptr<string> detectConfigName_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
