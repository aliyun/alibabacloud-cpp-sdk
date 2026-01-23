// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class PutRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(ShardId, shardId_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, PutRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(ShardId, shardId_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    PutRecordsRequest() = default ;
    PutRecordsRequest(const PutRecordsRequest &) = default ;
    PutRecordsRequest(PutRecordsRequest &&) = default ;
    PutRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutRecordsRequest() = default ;
    PutRecordsRequest& operator=(const PutRecordsRequest &) = default ;
    PutRecordsRequest& operator=(PutRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_PTR_TO_JSON(Attributes, attributes_);
        DARABONBA_PTR_TO_JSON(Data, data_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
        DARABONBA_PTR_FROM_JSON(Data, data_);
      };
      Records() = default ;
      Records(const Records &) = default ;
      Records(Records &&) = default ;
      Records(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Records() = default ;
      Records& operator=(const Records &) = default ;
      Records& operator=(Records &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attributes_ == nullptr
        && this->data_ == nullptr; };
      // attributes Field Functions 
      bool hasAttributes() const { return this->attributes_ != nullptr;};
      void deleteAttributes() { this->attributes_ = nullptr;};
      inline const map<string, string> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, map<string, string>) };
      inline map<string, string> getAttributes() { DARABONBA_PTR_GET(attributes_, map<string, string>) };
      inline Records& setAttributes(const map<string, string> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
      inline Records& setAttributes(map<string, string> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<string> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<string>) };
      inline vector<string> getData() { DARABONBA_PTR_GET(data_, vector<string>) };
      inline Records& setData(const vector<string> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Records& setData(vector<string> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    protected:
      shared_ptr<map<string, string>> attributes_ {};
      // This parameter is required.
      shared_ptr<vector<string>> data_ {};
    };

    virtual bool empty() const override { return this->projectName_ == nullptr
        && this->records_ == nullptr && this->shardId_ == nullptr && this->topicName_ == nullptr; };
    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline PutRecordsRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<PutRecordsRequest::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<PutRecordsRequest::Records>) };
    inline vector<PutRecordsRequest::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<PutRecordsRequest::Records>) };
    inline PutRecordsRequest& setRecords(const vector<PutRecordsRequest::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline PutRecordsRequest& setRecords(vector<PutRecordsRequest::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // shardId Field Functions 
    bool hasShardId() const { return this->shardId_ != nullptr;};
    void deleteShardId() { this->shardId_ = nullptr;};
    inline string getShardId() const { DARABONBA_PTR_GET_DEFAULT(shardId_, "") };
    inline PutRecordsRequest& setShardId(string shardId) { DARABONBA_PTR_SET_VALUE(shardId_, shardId) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline PutRecordsRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // This parameter is required.
    shared_ptr<vector<PutRecordsRequest::Records>> records_ {};
    shared_ptr<string> shardId_ {};
    // This parameter is required.
    shared_ptr<string> topicName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif
