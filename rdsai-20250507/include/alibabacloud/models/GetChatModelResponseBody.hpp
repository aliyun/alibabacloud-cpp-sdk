// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATMODELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHATMODELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class GetChatModelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatModelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetChatModelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetChatModelResponseBody() = default ;
    GetChatModelResponseBody(const GetChatModelResponseBody &) = default ;
    GetChatModelResponseBody(GetChatModelResponseBody &&) = default ;
    GetChatModelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatModelResponseBody() = default ;
    GetChatModelResponseBody& operator=(const GetChatModelResponseBody &) = default ;
    GetChatModelResponseBody& operator=(GetChatModelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ContextWindow, contextWindow_);
        DARABONBA_PTR_TO_JSON(Default, default_);
        DARABONBA_PTR_TO_JSON(Features, features_);
        DARABONBA_PTR_TO_JSON(ModelId, modelId_);
        DARABONBA_PTR_TO_JSON(ThinkingLevels, thinkingLevels_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ContextWindow, contextWindow_);
        DARABONBA_PTR_FROM_JSON(Default, default_);
        DARABONBA_PTR_FROM_JSON(Features, features_);
        DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
        DARABONBA_PTR_FROM_JSON(ThinkingLevels, thinkingLevels_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contextWindow_ == nullptr
        && this->default_ == nullptr && this->features_ == nullptr && this->modelId_ == nullptr && this->thinkingLevels_ == nullptr; };
      // contextWindow Field Functions 
      bool hasContextWindow() const { return this->contextWindow_ != nullptr;};
      void deleteContextWindow() { this->contextWindow_ = nullptr;};
      inline int64_t getContextWindow() const { DARABONBA_PTR_GET_DEFAULT(contextWindow_, 0L) };
      inline Data& setContextWindow(int64_t contextWindow) { DARABONBA_PTR_SET_VALUE(contextWindow_, contextWindow) };


      // default Field Functions 
      bool hasDefault() const { return this->default_ != nullptr;};
      void deleteDefault() { this->default_ = nullptr;};
      inline bool getDefault() const { DARABONBA_PTR_GET_DEFAULT(default_, false) };
      inline Data& setDefault(bool _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


      // features Field Functions 
      bool hasFeatures() const { return this->features_ != nullptr;};
      void deleteFeatures() { this->features_ = nullptr;};
      inline const vector<string> & getFeatures() const { DARABONBA_PTR_GET_CONST(features_, vector<string>) };
      inline vector<string> getFeatures() { DARABONBA_PTR_GET(features_, vector<string>) };
      inline Data& setFeatures(const vector<string> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
      inline Data& setFeatures(vector<string> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


      // modelId Field Functions 
      bool hasModelId() const { return this->modelId_ != nullptr;};
      void deleteModelId() { this->modelId_ = nullptr;};
      inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
      inline Data& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


      // thinkingLevels Field Functions 
      bool hasThinkingLevels() const { return this->thinkingLevels_ != nullptr;};
      void deleteThinkingLevels() { this->thinkingLevels_ = nullptr;};
      inline const vector<string> & getThinkingLevels() const { DARABONBA_PTR_GET_CONST(thinkingLevels_, vector<string>) };
      inline vector<string> getThinkingLevels() { DARABONBA_PTR_GET(thinkingLevels_, vector<string>) };
      inline Data& setThinkingLevels(const vector<string> & thinkingLevels) { DARABONBA_PTR_SET_VALUE(thinkingLevels_, thinkingLevels) };
      inline Data& setThinkingLevels(vector<string> && thinkingLevels) { DARABONBA_PTR_SET_RVALUE(thinkingLevels_, thinkingLevels) };


    protected:
      shared_ptr<int64_t> contextWindow_ {};
      shared_ptr<bool> default_ {};
      shared_ptr<vector<string>> features_ {};
      shared_ptr<string> modelId_ {};
      shared_ptr<vector<string>> thinkingLevels_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetChatModelResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetChatModelResponseBody::Data>) };
    inline vector<GetChatModelResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetChatModelResponseBody::Data>) };
    inline GetChatModelResponseBody& setData(const vector<GetChatModelResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetChatModelResponseBody& setData(vector<GetChatModelResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetChatModelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<GetChatModelResponseBody::Data>> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
