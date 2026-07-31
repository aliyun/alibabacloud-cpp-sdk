// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKNOWLEDGERECALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETKNOWLEDGERECALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetKnowledgeRecallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKnowledgeRecallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Question, question_);
      DARABONBA_PTR_TO_JSON(Topk, topk_);
    };
    friend void from_json(const Darabonba::Json& j, GetKnowledgeRecallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Question, question_);
      DARABONBA_PTR_FROM_JSON(Topk, topk_);
    };
    GetKnowledgeRecallRequest() = default ;
    GetKnowledgeRecallRequest(const GetKnowledgeRecallRequest &) = default ;
    GetKnowledgeRecallRequest(GetKnowledgeRecallRequest &&) = default ;
    GetKnowledgeRecallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKnowledgeRecallRequest() = default ;
    GetKnowledgeRecallRequest& operator=(const GetKnowledgeRecallRequest &) = default ;
    GetKnowledgeRecallRequest& operator=(GetKnowledgeRecallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->question_ == nullptr && this->topk_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline GetKnowledgeRecallRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
    inline GetKnowledgeRecallRequest& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


    // topk Field Functions 
    bool hasTopk() const { return this->topk_ != nullptr;};
    void deleteTopk() { this->topk_ = nullptr;};
    inline int32_t getTopk() const { DARABONBA_PTR_GET_DEFAULT(topk_, 0) };
    inline GetKnowledgeRecallRequest& setTopk(int32_t topk) { DARABONBA_PTR_SET_VALUE(topk_, topk) };


  protected:
    // The ID of the AnalyticDB for MySQL cluster.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The question for knowledge base recall.
    // 
    // This parameter is required.
    shared_ptr<string> question_ {};
    // The top K number of related files to recall.
    shared_ptr<int32_t> topk_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
