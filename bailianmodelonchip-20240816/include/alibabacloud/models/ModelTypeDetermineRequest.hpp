// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELTYPEDETERMINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELTYPEDETERMINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianModelOnChip20240816
{
namespace Models
{
  class ModelTypeDetermineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelTypeDetermineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(history, history_);
      DARABONBA_PTR_TO_JSON(inputText, inputText_);
    };
    friend void from_json(const Darabonba::Json& j, ModelTypeDetermineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(history, history_);
      DARABONBA_PTR_FROM_JSON(inputText, inputText_);
    };
    ModelTypeDetermineRequest() = default ;
    ModelTypeDetermineRequest(const ModelTypeDetermineRequest &) = default ;
    ModelTypeDetermineRequest(ModelTypeDetermineRequest &&) = default ;
    ModelTypeDetermineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelTypeDetermineRequest() = default ;
    ModelTypeDetermineRequest& operator=(const ModelTypeDetermineRequest &) = default ;
    ModelTypeDetermineRequest& operator=(ModelTypeDetermineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class History : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const History& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(role, role_);
      };
      friend void from_json(const Darabonba::Json& j, History& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(role, role_);
      };
      History() = default ;
      History(const History &) = default ;
      History(History &&) = default ;
      History(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~History() = default ;
      History& operator=(const History &) = default ;
      History& operator=(History &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline History& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline History& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    protected:
      shared_ptr<string> content_ {};
      shared_ptr<string> role_ {};
    };

    virtual bool empty() const override { return this->history_ == nullptr
        && this->inputText_ == nullptr; };
    // history Field Functions 
    bool hasHistory() const { return this->history_ != nullptr;};
    void deleteHistory() { this->history_ = nullptr;};
    inline const vector<ModelTypeDetermineRequest::History> & getHistory() const { DARABONBA_PTR_GET_CONST(history_, vector<ModelTypeDetermineRequest::History>) };
    inline vector<ModelTypeDetermineRequest::History> getHistory() { DARABONBA_PTR_GET(history_, vector<ModelTypeDetermineRequest::History>) };
    inline ModelTypeDetermineRequest& setHistory(const vector<ModelTypeDetermineRequest::History> & history) { DARABONBA_PTR_SET_VALUE(history_, history) };
    inline ModelTypeDetermineRequest& setHistory(vector<ModelTypeDetermineRequest::History> && history) { DARABONBA_PTR_SET_RVALUE(history_, history) };


    // inputText Field Functions 
    bool hasInputText() const { return this->inputText_ != nullptr;};
    void deleteInputText() { this->inputText_ = nullptr;};
    inline string getInputText() const { DARABONBA_PTR_GET_DEFAULT(inputText_, "") };
    inline ModelTypeDetermineRequest& setInputText(string inputText) { DARABONBA_PTR_SET_VALUE(inputText_, inputText) };


  protected:
    shared_ptr<vector<ModelTypeDetermineRequest::History>> history_ {};
    // This parameter is required.
    shared_ptr<string> inputText_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianModelOnChip20240816
#endif
