// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEventStreamingsRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(NamePrefix, namePrefix_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(SinkArn, sinkArn_);
      DARABONBA_PTR_TO_JSON(SourceArn, sourceArn_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(NamePrefix, namePrefix_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(SinkArn, sinkArn_);
      DARABONBA_PTR_FROM_JSON(SourceArn, sourceArn_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListEventStreamingsRequest() = default ;
    ListEventStreamingsRequest(const ListEventStreamingsRequest &) = default ;
    ListEventStreamingsRequest(ListEventStreamingsRequest &&) = default ;
    ListEventStreamingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsRequest() = default ;
    ListEventStreamingsRequest& operator=(const ListEventStreamingsRequest &) = default ;
    ListEventStreamingsRequest& operator=(ListEventStreamingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->limit_ != nullptr
        && this->namePrefix_ != nullptr && this->nextToken_ != nullptr && this->sinkArn_ != nullptr && this->sourceArn_ != nullptr && this->tags_ != nullptr; };
    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListEventStreamingsRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // namePrefix Field Functions 
    bool hasNamePrefix() const { return this->namePrefix_ != nullptr;};
    void deleteNamePrefix() { this->namePrefix_ = nullptr;};
    inline string namePrefix() const { DARABONBA_PTR_GET_DEFAULT(namePrefix_, "") };
    inline ListEventStreamingsRequest& setNamePrefix(string namePrefix) { DARABONBA_PTR_SET_VALUE(namePrefix_, namePrefix) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEventStreamingsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // sinkArn Field Functions 
    bool hasSinkArn() const { return this->sinkArn_ != nullptr;};
    void deleteSinkArn() { this->sinkArn_ = nullptr;};
    inline string sinkArn() const { DARABONBA_PTR_GET_DEFAULT(sinkArn_, "") };
    inline ListEventStreamingsRequest& setSinkArn(string sinkArn) { DARABONBA_PTR_SET_VALUE(sinkArn_, sinkArn) };


    // sourceArn Field Functions 
    bool hasSourceArn() const { return this->sourceArn_ != nullptr;};
    void deleteSourceArn() { this->sourceArn_ = nullptr;};
    inline string sourceArn() const { DARABONBA_PTR_GET_DEFAULT(sourceArn_, "") };
    inline ListEventStreamingsRequest& setSourceArn(string sourceArn) { DARABONBA_PTR_SET_VALUE(sourceArn_, sourceArn) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListEventStreamingsRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListEventStreamingsRequestTags>) };
    inline vector<ListEventStreamingsRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<ListEventStreamingsRequestTags>) };
    inline ListEventStreamingsRequest& setTags(const vector<ListEventStreamingsRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListEventStreamingsRequest& setTags(vector<ListEventStreamingsRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The maximum number of entries to be returned in a call. You can use this parameter and NextToken to implement paging. A maximum of 100 entries can be returned in a call.
    std::shared_ptr<int32_t> limit_ = nullptr;
    // The name of the event stream that you want to query.
    std::shared_ptr<string> namePrefix_ = nullptr;
    // If you configure Limit and excess return values exist, this parameter is returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ARN of the event target.
    std::shared_ptr<string> sinkArn_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the event source.
    std::shared_ptr<string> sourceArn_ = nullptr;
    std::shared_ptr<vector<ListEventStreamingsRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
