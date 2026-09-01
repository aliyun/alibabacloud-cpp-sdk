// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKNOWLEDGEBASEANSWERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKNOWLEDGEBASEANSWERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeKnowledgeBaseAnswerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKnowledgeBaseAnswerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(QueryId, queryId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKnowledgeBaseAnswerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeKnowledgeBaseAnswerRequest() = default ;
    DescribeKnowledgeBaseAnswerRequest(const DescribeKnowledgeBaseAnswerRequest &) = default ;
    DescribeKnowledgeBaseAnswerRequest(DescribeKnowledgeBaseAnswerRequest &&) = default ;
    DescribeKnowledgeBaseAnswerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKnowledgeBaseAnswerRequest() = default ;
    DescribeKnowledgeBaseAnswerRequest& operator=(const DescribeKnowledgeBaseAnswerRequest &) = default ;
    DescribeKnowledgeBaseAnswerRequest& operator=(DescribeKnowledgeBaseAnswerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->knowledgeBaseId_ == nullptr
        && this->queryId_ == nullptr && this->regionId_ == nullptr; };
    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline DescribeKnowledgeBaseAnswerRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline string getQueryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
    inline DescribeKnowledgeBaseAnswerRequest& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeKnowledgeBaseAnswerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // This parameter is required.
    shared_ptr<string> queryId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
