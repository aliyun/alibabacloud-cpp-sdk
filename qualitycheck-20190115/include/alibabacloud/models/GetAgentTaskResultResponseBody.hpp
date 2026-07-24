// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTTASKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTTASKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetAgentTaskResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentTaskResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentTaskResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAgentTaskResultResponseBody() = default ;
    GetAgentTaskResultResponseBody(const GetAgentTaskResultResponseBody &) = default ;
    GetAgentTaskResultResponseBody(GetAgentTaskResultResponseBody &&) = default ;
    GetAgentTaskResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentTaskResultResponseBody() = default ;
    GetAgentTaskResultResponseBody& operator=(const GetAgentTaskResultResponseBody &) = default ;
    GetAgentTaskResultResponseBody& operator=(GetAgentTaskResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Dialogues, dialogues_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(InputTokens, inputTokens_);
        DARABONBA_PTR_TO_JSON(LlmRequestId, llmRequestId_);
        DARABONBA_PTR_TO_JSON(OutputTokens, outputTokens_);
        DARABONBA_PTR_TO_JSON(Response, response_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
        DARABONBA_PTR_TO_JSON(TyxmPlusCount, tyxmPlusCount_);
        DARABONBA_PTR_TO_JSON(TyxmTurboCount, tyxmTurboCount_);
        DARABONBA_PTR_TO_JSON(Vid, vid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Dialogues, dialogues_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(InputTokens, inputTokens_);
        DARABONBA_PTR_FROM_JSON(LlmRequestId, llmRequestId_);
        DARABONBA_PTR_FROM_JSON(OutputTokens, outputTokens_);
        DARABONBA_PTR_FROM_JSON(Response, response_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
        DARABONBA_PTR_FROM_JSON(TyxmPlusCount, tyxmPlusCount_);
        DARABONBA_PTR_FROM_JSON(TyxmTurboCount, tyxmTurboCount_);
        DARABONBA_PTR_FROM_JSON(Vid, vid_);
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
      class Response : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Response& obj) { 
          DARABONBA_PTR_TO_JSON(CustomerPromptResponse, customerPromptResponse_);
          DARABONBA_PTR_TO_JSON(FieldResponse, fieldResponse_);
          DARABONBA_PTR_TO_JSON(ServiceInspectionResponse, serviceInspectionResponse_);
          DARABONBA_PTR_TO_JSON(TagCategoryResponse, tagCategoryResponse_);
        };
        friend void from_json(const Darabonba::Json& j, Response& obj) { 
          DARABONBA_PTR_FROM_JSON(CustomerPromptResponse, customerPromptResponse_);
          DARABONBA_PTR_FROM_JSON(FieldResponse, fieldResponse_);
          DARABONBA_PTR_FROM_JSON(ServiceInspectionResponse, serviceInspectionResponse_);
          DARABONBA_PTR_FROM_JSON(TagCategoryResponse, tagCategoryResponse_);
        };
        Response() = default ;
        Response(const Response &) = default ;
        Response(Response &&) = default ;
        Response(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Response() = default ;
        Response& operator=(const Response &) = default ;
        Response& operator=(Response &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TagCategoryResponse : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TagCategoryResponse& obj) { 
            DARABONBA_PTR_TO_JSON(TagCategoryVoList, tagCategoryVoList_);
          };
          friend void from_json(const Darabonba::Json& j, TagCategoryResponse& obj) { 
            DARABONBA_PTR_FROM_JSON(TagCategoryVoList, tagCategoryVoList_);
          };
          TagCategoryResponse() = default ;
          TagCategoryResponse(const TagCategoryResponse &) = default ;
          TagCategoryResponse(TagCategoryResponse &&) = default ;
          TagCategoryResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TagCategoryResponse() = default ;
          TagCategoryResponse& operator=(const TagCategoryResponse &) = default ;
          TagCategoryResponse& operator=(TagCategoryResponse &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TagCategoryVoList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TagCategoryVoList& obj) { 
              DARABONBA_PTR_TO_JSON(Dimension, dimension_);
              DARABONBA_PTR_TO_JSON(IsMatch, isMatch_);
              DARABONBA_PTR_TO_JSON(OriginalUtterances, originalUtterances_);
              DARABONBA_PTR_TO_JSON(Remarks, remarks_);
              DARABONBA_PTR_TO_JSON(ResultLabels, resultLabels_);
            };
            friend void from_json(const Darabonba::Json& j, TagCategoryVoList& obj) { 
              DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
              DARABONBA_PTR_FROM_JSON(IsMatch, isMatch_);
              DARABONBA_PTR_FROM_JSON(OriginalUtterances, originalUtterances_);
              DARABONBA_PTR_FROM_JSON(Remarks, remarks_);
              DARABONBA_PTR_FROM_JSON(ResultLabels, resultLabels_);
            };
            TagCategoryVoList() = default ;
            TagCategoryVoList(const TagCategoryVoList &) = default ;
            TagCategoryVoList(TagCategoryVoList &&) = default ;
            TagCategoryVoList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TagCategoryVoList() = default ;
            TagCategoryVoList& operator=(const TagCategoryVoList &) = default ;
            TagCategoryVoList& operator=(TagCategoryVoList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->dimension_ == nullptr
        && this->isMatch_ == nullptr && this->originalUtterances_ == nullptr && this->remarks_ == nullptr && this->resultLabels_ == nullptr; };
            // dimension Field Functions 
            bool hasDimension() const { return this->dimension_ != nullptr;};
            void deleteDimension() { this->dimension_ = nullptr;};
            inline string getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
            inline TagCategoryVoList& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


            // isMatch Field Functions 
            bool hasIsMatch() const { return this->isMatch_ != nullptr;};
            void deleteIsMatch() { this->isMatch_ = nullptr;};
            inline bool getIsMatch() const { DARABONBA_PTR_GET_DEFAULT(isMatch_, false) };
            inline TagCategoryVoList& setIsMatch(bool isMatch) { DARABONBA_PTR_SET_VALUE(isMatch_, isMatch) };


            // originalUtterances Field Functions 
            bool hasOriginalUtterances() const { return this->originalUtterances_ != nullptr;};
            void deleteOriginalUtterances() { this->originalUtterances_ = nullptr;};
            inline const vector<string> & getOriginalUtterances() const { DARABONBA_PTR_GET_CONST(originalUtterances_, vector<string>) };
            inline vector<string> getOriginalUtterances() { DARABONBA_PTR_GET(originalUtterances_, vector<string>) };
            inline TagCategoryVoList& setOriginalUtterances(const vector<string> & originalUtterances) { DARABONBA_PTR_SET_VALUE(originalUtterances_, originalUtterances) };
            inline TagCategoryVoList& setOriginalUtterances(vector<string> && originalUtterances) { DARABONBA_PTR_SET_RVALUE(originalUtterances_, originalUtterances) };


            // remarks Field Functions 
            bool hasRemarks() const { return this->remarks_ != nullptr;};
            void deleteRemarks() { this->remarks_ = nullptr;};
            inline string getRemarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
            inline TagCategoryVoList& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


            // resultLabels Field Functions 
            bool hasResultLabels() const { return this->resultLabels_ != nullptr;};
            void deleteResultLabels() { this->resultLabels_ = nullptr;};
            inline const vector<string> & getResultLabels() const { DARABONBA_PTR_GET_CONST(resultLabels_, vector<string>) };
            inline vector<string> getResultLabels() { DARABONBA_PTR_GET(resultLabels_, vector<string>) };
            inline TagCategoryVoList& setResultLabels(const vector<string> & resultLabels) { DARABONBA_PTR_SET_VALUE(resultLabels_, resultLabels) };
            inline TagCategoryVoList& setResultLabels(vector<string> && resultLabels) { DARABONBA_PTR_SET_RVALUE(resultLabels_, resultLabels) };


          protected:
            // The tag dimension.
            shared_ptr<string> dimension_ {};
            // Indicates whether the tag is matched.
            shared_ptr<bool> isMatch_ {};
            // The sentences referenced in the reasoning.
            shared_ptr<vector<string>> originalUtterances_ {};
            // The reasoning for the judgment.
            shared_ptr<string> remarks_ {};
            // The list of matched labels.
            shared_ptr<vector<string>> resultLabels_ {};
          };

          virtual bool empty() const override { return this->tagCategoryVoList_ == nullptr; };
          // tagCategoryVoList Field Functions 
          bool hasTagCategoryVoList() const { return this->tagCategoryVoList_ != nullptr;};
          void deleteTagCategoryVoList() { this->tagCategoryVoList_ = nullptr;};
          inline const vector<TagCategoryResponse::TagCategoryVoList> & getTagCategoryVoList() const { DARABONBA_PTR_GET_CONST(tagCategoryVoList_, vector<TagCategoryResponse::TagCategoryVoList>) };
          inline vector<TagCategoryResponse::TagCategoryVoList> getTagCategoryVoList() { DARABONBA_PTR_GET(tagCategoryVoList_, vector<TagCategoryResponse::TagCategoryVoList>) };
          inline TagCategoryResponse& setTagCategoryVoList(const vector<TagCategoryResponse::TagCategoryVoList> & tagCategoryVoList) { DARABONBA_PTR_SET_VALUE(tagCategoryVoList_, tagCategoryVoList) };
          inline TagCategoryResponse& setTagCategoryVoList(vector<TagCategoryResponse::TagCategoryVoList> && tagCategoryVoList) { DARABONBA_PTR_SET_RVALUE(tagCategoryVoList_, tagCategoryVoList) };


        protected:
          // The list of tags.
          shared_ptr<vector<TagCategoryResponse::TagCategoryVoList>> tagCategoryVoList_ {};
        };

        class ServiceInspectionResponse : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ServiceInspectionResponse& obj) { 
            DARABONBA_PTR_TO_JSON(ServiceInspectionVoList, serviceInspectionVoList_);
          };
          friend void from_json(const Darabonba::Json& j, ServiceInspectionResponse& obj) { 
            DARABONBA_PTR_FROM_JSON(ServiceInspectionVoList, serviceInspectionVoList_);
          };
          ServiceInspectionResponse() = default ;
          ServiceInspectionResponse(const ServiceInspectionResponse &) = default ;
          ServiceInspectionResponse(ServiceInspectionResponse &&) = default ;
          ServiceInspectionResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ServiceInspectionResponse() = default ;
          ServiceInspectionResponse& operator=(const ServiceInspectionResponse &) = default ;
          ServiceInspectionResponse& operator=(ServiceInspectionResponse &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ServiceInspectionVoList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ServiceInspectionVoList& obj) { 
              DARABONBA_PTR_TO_JSON(Dimension, dimension_);
              DARABONBA_PTR_TO_JSON(IsMatch, isMatch_);
              DARABONBA_PTR_TO_JSON(OriginalUtterances, originalUtterances_);
              DARABONBA_PTR_TO_JSON(Remarks, remarks_);
            };
            friend void from_json(const Darabonba::Json& j, ServiceInspectionVoList& obj) { 
              DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
              DARABONBA_PTR_FROM_JSON(IsMatch, isMatch_);
              DARABONBA_PTR_FROM_JSON(OriginalUtterances, originalUtterances_);
              DARABONBA_PTR_FROM_JSON(Remarks, remarks_);
            };
            ServiceInspectionVoList() = default ;
            ServiceInspectionVoList(const ServiceInspectionVoList &) = default ;
            ServiceInspectionVoList(ServiceInspectionVoList &&) = default ;
            ServiceInspectionVoList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ServiceInspectionVoList() = default ;
            ServiceInspectionVoList& operator=(const ServiceInspectionVoList &) = default ;
            ServiceInspectionVoList& operator=(ServiceInspectionVoList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->dimension_ == nullptr
        && this->isMatch_ == nullptr && this->originalUtterances_ == nullptr && this->remarks_ == nullptr; };
            // dimension Field Functions 
            bool hasDimension() const { return this->dimension_ != nullptr;};
            void deleteDimension() { this->dimension_ = nullptr;};
            inline string getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
            inline ServiceInspectionVoList& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


            // isMatch Field Functions 
            bool hasIsMatch() const { return this->isMatch_ != nullptr;};
            void deleteIsMatch() { this->isMatch_ = nullptr;};
            inline bool getIsMatch() const { DARABONBA_PTR_GET_DEFAULT(isMatch_, false) };
            inline ServiceInspectionVoList& setIsMatch(bool isMatch) { DARABONBA_PTR_SET_VALUE(isMatch_, isMatch) };


            // originalUtterances Field Functions 
            bool hasOriginalUtterances() const { return this->originalUtterances_ != nullptr;};
            void deleteOriginalUtterances() { this->originalUtterances_ = nullptr;};
            inline const vector<string> & getOriginalUtterances() const { DARABONBA_PTR_GET_CONST(originalUtterances_, vector<string>) };
            inline vector<string> getOriginalUtterances() { DARABONBA_PTR_GET(originalUtterances_, vector<string>) };
            inline ServiceInspectionVoList& setOriginalUtterances(const vector<string> & originalUtterances) { DARABONBA_PTR_SET_VALUE(originalUtterances_, originalUtterances) };
            inline ServiceInspectionVoList& setOriginalUtterances(vector<string> && originalUtterances) { DARABONBA_PTR_SET_RVALUE(originalUtterances_, originalUtterances) };


            // remarks Field Functions 
            bool hasRemarks() const { return this->remarks_ != nullptr;};
            void deleteRemarks() { this->remarks_ = nullptr;};
            inline string getRemarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
            inline ServiceInspectionVoList& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


          protected:
            // The inspection dimension.
            shared_ptr<string> dimension_ {};
            // Indicates whether the tag is matched.
            shared_ptr<bool> isMatch_ {};
            // The sentences referenced in the reasoning.
            shared_ptr<vector<string>> originalUtterances_ {};
            // The reasoning for the judgment.
            shared_ptr<string> remarks_ {};
          };

          virtual bool empty() const override { return this->serviceInspectionVoList_ == nullptr; };
          // serviceInspectionVoList Field Functions 
          bool hasServiceInspectionVoList() const { return this->serviceInspectionVoList_ != nullptr;};
          void deleteServiceInspectionVoList() { this->serviceInspectionVoList_ = nullptr;};
          inline const vector<ServiceInspectionResponse::ServiceInspectionVoList> & getServiceInspectionVoList() const { DARABONBA_PTR_GET_CONST(serviceInspectionVoList_, vector<ServiceInspectionResponse::ServiceInspectionVoList>) };
          inline vector<ServiceInspectionResponse::ServiceInspectionVoList> getServiceInspectionVoList() { DARABONBA_PTR_GET(serviceInspectionVoList_, vector<ServiceInspectionResponse::ServiceInspectionVoList>) };
          inline ServiceInspectionResponse& setServiceInspectionVoList(const vector<ServiceInspectionResponse::ServiceInspectionVoList> & serviceInspectionVoList) { DARABONBA_PTR_SET_VALUE(serviceInspectionVoList_, serviceInspectionVoList) };
          inline ServiceInspectionResponse& setServiceInspectionVoList(vector<ServiceInspectionResponse::ServiceInspectionVoList> && serviceInspectionVoList) { DARABONBA_PTR_SET_RVALUE(serviceInspectionVoList_, serviceInspectionVoList) };


        protected:
          // The list of inspection items.
          shared_ptr<vector<ServiceInspectionResponse::ServiceInspectionVoList>> serviceInspectionVoList_ {};
        };

        class FieldResponse : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FieldResponse& obj) { 
            DARABONBA_PTR_TO_JSON(FieldVoList, fieldVoList_);
          };
          friend void from_json(const Darabonba::Json& j, FieldResponse& obj) { 
            DARABONBA_PTR_FROM_JSON(FieldVoList, fieldVoList_);
          };
          FieldResponse() = default ;
          FieldResponse(const FieldResponse &) = default ;
          FieldResponse(FieldResponse &&) = default ;
          FieldResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FieldResponse() = default ;
          FieldResponse& operator=(const FieldResponse &) = default ;
          FieldResponse& operator=(FieldResponse &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class FieldVoList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FieldVoList& obj) { 
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(OriginalUtterances, originalUtterances_);
              DARABONBA_PTR_TO_JSON(Remarks, remarks_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, FieldVoList& obj) { 
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(OriginalUtterances, originalUtterances_);
              DARABONBA_PTR_FROM_JSON(Remarks, remarks_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            FieldVoList() = default ;
            FieldVoList(const FieldVoList &) = default ;
            FieldVoList(FieldVoList &&) = default ;
            FieldVoList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FieldVoList() = default ;
            FieldVoList& operator=(const FieldVoList &) = default ;
            FieldVoList& operator=(FieldVoList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->name_ == nullptr
        && this->originalUtterances_ == nullptr && this->remarks_ == nullptr && this->value_ == nullptr; };
            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline FieldVoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // originalUtterances Field Functions 
            bool hasOriginalUtterances() const { return this->originalUtterances_ != nullptr;};
            void deleteOriginalUtterances() { this->originalUtterances_ = nullptr;};
            inline const vector<int32_t> & getOriginalUtterances() const { DARABONBA_PTR_GET_CONST(originalUtterances_, vector<int32_t>) };
            inline vector<int32_t> getOriginalUtterances() { DARABONBA_PTR_GET(originalUtterances_, vector<int32_t>) };
            inline FieldVoList& setOriginalUtterances(const vector<int32_t> & originalUtterances) { DARABONBA_PTR_SET_VALUE(originalUtterances_, originalUtterances) };
            inline FieldVoList& setOriginalUtterances(vector<int32_t> && originalUtterances) { DARABONBA_PTR_SET_RVALUE(originalUtterances_, originalUtterances) };


            // remarks Field Functions 
            bool hasRemarks() const { return this->remarks_ != nullptr;};
            void deleteRemarks() { this->remarks_ = nullptr;};
            inline string getRemarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
            inline FieldVoList& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline FieldVoList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The field name.
            shared_ptr<string> name_ {};
            // The sentences referenced in the reasoning.
            shared_ptr<vector<int32_t>> originalUtterances_ {};
            // The reasoning for the judgment.
            shared_ptr<string> remarks_ {};
            // The field value.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->fieldVoList_ == nullptr; };
          // fieldVoList Field Functions 
          bool hasFieldVoList() const { return this->fieldVoList_ != nullptr;};
          void deleteFieldVoList() { this->fieldVoList_ = nullptr;};
          inline const vector<FieldResponse::FieldVoList> & getFieldVoList() const { DARABONBA_PTR_GET_CONST(fieldVoList_, vector<FieldResponse::FieldVoList>) };
          inline vector<FieldResponse::FieldVoList> getFieldVoList() { DARABONBA_PTR_GET(fieldVoList_, vector<FieldResponse::FieldVoList>) };
          inline FieldResponse& setFieldVoList(const vector<FieldResponse::FieldVoList> & fieldVoList) { DARABONBA_PTR_SET_VALUE(fieldVoList_, fieldVoList) };
          inline FieldResponse& setFieldVoList(vector<FieldResponse::FieldVoList> && fieldVoList) { DARABONBA_PTR_SET_RVALUE(fieldVoList_, fieldVoList) };


        protected:
          // The list of fields.
          shared_ptr<vector<FieldResponse::FieldVoList>> fieldVoList_ {};
        };

        class CustomerPromptResponse : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CustomerPromptResponse& obj) { 
            DARABONBA_PTR_TO_JSON(Text, text_);
          };
          friend void from_json(const Darabonba::Json& j, CustomerPromptResponse& obj) { 
            DARABONBA_PTR_FROM_JSON(Text, text_);
          };
          CustomerPromptResponse() = default ;
          CustomerPromptResponse(const CustomerPromptResponse &) = default ;
          CustomerPromptResponse(CustomerPromptResponse &&) = default ;
          CustomerPromptResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CustomerPromptResponse() = default ;
          CustomerPromptResponse& operator=(const CustomerPromptResponse &) = default ;
          CustomerPromptResponse& operator=(CustomerPromptResponse &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->text_ == nullptr; };
          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline CustomerPromptResponse& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        protected:
          // The result returned by the large language model.
          shared_ptr<string> text_ {};
        };

        virtual bool empty() const override { return this->customerPromptResponse_ == nullptr
        && this->fieldResponse_ == nullptr && this->serviceInspectionResponse_ == nullptr && this->tagCategoryResponse_ == nullptr; };
        // customerPromptResponse Field Functions 
        bool hasCustomerPromptResponse() const { return this->customerPromptResponse_ != nullptr;};
        void deleteCustomerPromptResponse() { this->customerPromptResponse_ = nullptr;};
        inline const Response::CustomerPromptResponse & getCustomerPromptResponse() const { DARABONBA_PTR_GET_CONST(customerPromptResponse_, Response::CustomerPromptResponse) };
        inline Response::CustomerPromptResponse getCustomerPromptResponse() { DARABONBA_PTR_GET(customerPromptResponse_, Response::CustomerPromptResponse) };
        inline Response& setCustomerPromptResponse(const Response::CustomerPromptResponse & customerPromptResponse) { DARABONBA_PTR_SET_VALUE(customerPromptResponse_, customerPromptResponse) };
        inline Response& setCustomerPromptResponse(Response::CustomerPromptResponse && customerPromptResponse) { DARABONBA_PTR_SET_RVALUE(customerPromptResponse_, customerPromptResponse) };


        // fieldResponse Field Functions 
        bool hasFieldResponse() const { return this->fieldResponse_ != nullptr;};
        void deleteFieldResponse() { this->fieldResponse_ = nullptr;};
        inline const Response::FieldResponse & getFieldResponse() const { DARABONBA_PTR_GET_CONST(fieldResponse_, Response::FieldResponse) };
        inline Response::FieldResponse getFieldResponse() { DARABONBA_PTR_GET(fieldResponse_, Response::FieldResponse) };
        inline Response& setFieldResponse(const Response::FieldResponse & fieldResponse) { DARABONBA_PTR_SET_VALUE(fieldResponse_, fieldResponse) };
        inline Response& setFieldResponse(Response::FieldResponse && fieldResponse) { DARABONBA_PTR_SET_RVALUE(fieldResponse_, fieldResponse) };


        // serviceInspectionResponse Field Functions 
        bool hasServiceInspectionResponse() const { return this->serviceInspectionResponse_ != nullptr;};
        void deleteServiceInspectionResponse() { this->serviceInspectionResponse_ = nullptr;};
        inline const Response::ServiceInspectionResponse & getServiceInspectionResponse() const { DARABONBA_PTR_GET_CONST(serviceInspectionResponse_, Response::ServiceInspectionResponse) };
        inline Response::ServiceInspectionResponse getServiceInspectionResponse() { DARABONBA_PTR_GET(serviceInspectionResponse_, Response::ServiceInspectionResponse) };
        inline Response& setServiceInspectionResponse(const Response::ServiceInspectionResponse & serviceInspectionResponse) { DARABONBA_PTR_SET_VALUE(serviceInspectionResponse_, serviceInspectionResponse) };
        inline Response& setServiceInspectionResponse(Response::ServiceInspectionResponse && serviceInspectionResponse) { DARABONBA_PTR_SET_RVALUE(serviceInspectionResponse_, serviceInspectionResponse) };


        // tagCategoryResponse Field Functions 
        bool hasTagCategoryResponse() const { return this->tagCategoryResponse_ != nullptr;};
        void deleteTagCategoryResponse() { this->tagCategoryResponse_ = nullptr;};
        inline const Response::TagCategoryResponse & getTagCategoryResponse() const { DARABONBA_PTR_GET_CONST(tagCategoryResponse_, Response::TagCategoryResponse) };
        inline Response::TagCategoryResponse getTagCategoryResponse() { DARABONBA_PTR_GET(tagCategoryResponse_, Response::TagCategoryResponse) };
        inline Response& setTagCategoryResponse(const Response::TagCategoryResponse & tagCategoryResponse) { DARABONBA_PTR_SET_VALUE(tagCategoryResponse_, tagCategoryResponse) };
        inline Response& setTagCategoryResponse(Response::TagCategoryResponse && tagCategoryResponse) { DARABONBA_PTR_SET_RVALUE(tagCategoryResponse_, tagCategoryResponse) };


      protected:
        // The result of the custom prompt.
        shared_ptr<Response::CustomerPromptResponse> customerPromptResponse_ {};
        // The field extraction result.
        shared_ptr<Response::FieldResponse> fieldResponse_ {};
        // The service quality inspection result.
        shared_ptr<Response::ServiceInspectionResponse> serviceInspectionResponse_ {};
        // The tag categorization result.
        shared_ptr<Response::TagCategoryResponse> tagCategoryResponse_ {};
      };

      class Dialogues : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dialogues& obj) { 
          DARABONBA_PTR_TO_JSON(Begin, begin_);
          DARABONBA_PTR_TO_JSON(EmotionValue, emotionValue_);
          DARABONBA_PTR_TO_JSON(End, end_);
          DARABONBA_PTR_TO_JSON(HourMinSec, hourMinSec_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
          DARABONBA_PTR_TO_JSON(Words, words_);
        };
        friend void from_json(const Darabonba::Json& j, Dialogues& obj) { 
          DARABONBA_PTR_FROM_JSON(Begin, begin_);
          DARABONBA_PTR_FROM_JSON(EmotionValue, emotionValue_);
          DARABONBA_PTR_FROM_JSON(End, end_);
          DARABONBA_PTR_FROM_JSON(HourMinSec, hourMinSec_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
          DARABONBA_PTR_FROM_JSON(Words, words_);
        };
        Dialogues() = default ;
        Dialogues(const Dialogues &) = default ;
        Dialogues(Dialogues &&) = default ;
        Dialogues(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Dialogues() = default ;
        Dialogues& operator=(const Dialogues &) = default ;
        Dialogues& operator=(Dialogues &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->begin_ == nullptr
        && this->emotionValue_ == nullptr && this->end_ == nullptr && this->hourMinSec_ == nullptr && this->role_ == nullptr && this->speechRate_ == nullptr
        && this->words_ == nullptr; };
        // begin Field Functions 
        bool hasBegin() const { return this->begin_ != nullptr;};
        void deleteBegin() { this->begin_ = nullptr;};
        inline int64_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0L) };
        inline Dialogues& setBegin(int64_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


        // emotionValue Field Functions 
        bool hasEmotionValue() const { return this->emotionValue_ != nullptr;};
        void deleteEmotionValue() { this->emotionValue_ = nullptr;};
        inline int32_t getEmotionValue() const { DARABONBA_PTR_GET_DEFAULT(emotionValue_, 0) };
        inline Dialogues& setEmotionValue(int32_t emotionValue) { DARABONBA_PTR_SET_VALUE(emotionValue_, emotionValue) };


        // end Field Functions 
        bool hasEnd() const { return this->end_ != nullptr;};
        void deleteEnd() { this->end_ = nullptr;};
        inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
        inline Dialogues& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


        // hourMinSec Field Functions 
        bool hasHourMinSec() const { return this->hourMinSec_ != nullptr;};
        void deleteHourMinSec() { this->hourMinSec_ = nullptr;};
        inline string getHourMinSec() const { DARABONBA_PTR_GET_DEFAULT(hourMinSec_, "") };
        inline Dialogues& setHourMinSec(string hourMinSec) { DARABONBA_PTR_SET_VALUE(hourMinSec_, hourMinSec) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline Dialogues& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // speechRate Field Functions 
        bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
        void deleteSpeechRate() { this->speechRate_ = nullptr;};
        inline int32_t getSpeechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0) };
        inline Dialogues& setSpeechRate(int32_t speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


        // words Field Functions 
        bool hasWords() const { return this->words_ != nullptr;};
        void deleteWords() { this->words_ = nullptr;};
        inline string getWords() const { DARABONBA_PTR_GET_DEFAULT(words_, "") };
        inline Dialogues& setWords(string words) { DARABONBA_PTR_SET_VALUE(words_, words) };


      protected:
        shared_ptr<int64_t> begin_ {};
        shared_ptr<int32_t> emotionValue_ {};
        shared_ptr<int64_t> end_ {};
        shared_ptr<string> hourMinSec_ {};
        shared_ptr<string> role_ {};
        shared_ptr<int32_t> speechRate_ {};
        shared_ptr<string> words_ {};
      };

      virtual bool empty() const override { return this->dialogues_ == nullptr
        && this->errorMessage_ == nullptr && this->inputTokens_ == nullptr && this->llmRequestId_ == nullptr && this->outputTokens_ == nullptr && this->response_ == nullptr
        && this->status_ == nullptr && this->taskId_ == nullptr && this->totalTokens_ == nullptr && this->tyxmPlusCount_ == nullptr && this->tyxmTurboCount_ == nullptr
        && this->vid_ == nullptr; };
      // dialogues Field Functions 
      bool hasDialogues() const { return this->dialogues_ != nullptr;};
      void deleteDialogues() { this->dialogues_ = nullptr;};
      inline const vector<Data::Dialogues> & getDialogues() const { DARABONBA_PTR_GET_CONST(dialogues_, vector<Data::Dialogues>) };
      inline vector<Data::Dialogues> getDialogues() { DARABONBA_PTR_GET(dialogues_, vector<Data::Dialogues>) };
      inline Data& setDialogues(const vector<Data::Dialogues> & dialogues) { DARABONBA_PTR_SET_VALUE(dialogues_, dialogues) };
      inline Data& setDialogues(vector<Data::Dialogues> && dialogues) { DARABONBA_PTR_SET_RVALUE(dialogues_, dialogues) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // inputTokens Field Functions 
      bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
      void deleteInputTokens() { this->inputTokens_ = nullptr;};
      inline string getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, "") };
      inline Data& setInputTokens(string inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


      // llmRequestId Field Functions 
      bool hasLlmRequestId() const { return this->llmRequestId_ != nullptr;};
      void deleteLlmRequestId() { this->llmRequestId_ = nullptr;};
      inline string getLlmRequestId() const { DARABONBA_PTR_GET_DEFAULT(llmRequestId_, "") };
      inline Data& setLlmRequestId(string llmRequestId) { DARABONBA_PTR_SET_VALUE(llmRequestId_, llmRequestId) };


      // outputTokens Field Functions 
      bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
      void deleteOutputTokens() { this->outputTokens_ = nullptr;};
      inline string getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, "") };
      inline Data& setOutputTokens(string outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


      // response Field Functions 
      bool hasResponse() const { return this->response_ != nullptr;};
      void deleteResponse() { this->response_ = nullptr;};
      inline const Data::Response & getResponse() const { DARABONBA_PTR_GET_CONST(response_, Data::Response) };
      inline Data::Response getResponse() { DARABONBA_PTR_GET(response_, Data::Response) };
      inline Data& setResponse(const Data::Response & response) { DARABONBA_PTR_SET_VALUE(response_, response) };
      inline Data& setResponse(Data::Response && response) { DARABONBA_PTR_SET_RVALUE(response_, response) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // totalTokens Field Functions 
      bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
      void deleteTotalTokens() { this->totalTokens_ = nullptr;};
      inline string getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, "") };
      inline Data& setTotalTokens(string totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


      // tyxmPlusCount Field Functions 
      bool hasTyxmPlusCount() const { return this->tyxmPlusCount_ != nullptr;};
      void deleteTyxmPlusCount() { this->tyxmPlusCount_ = nullptr;};
      inline string getTyxmPlusCount() const { DARABONBA_PTR_GET_DEFAULT(tyxmPlusCount_, "") };
      inline Data& setTyxmPlusCount(string tyxmPlusCount) { DARABONBA_PTR_SET_VALUE(tyxmPlusCount_, tyxmPlusCount) };


      // tyxmTurboCount Field Functions 
      bool hasTyxmTurboCount() const { return this->tyxmTurboCount_ != nullptr;};
      void deleteTyxmTurboCount() { this->tyxmTurboCount_ = nullptr;};
      inline string getTyxmTurboCount() const { DARABONBA_PTR_GET_DEFAULT(tyxmTurboCount_, "") };
      inline Data& setTyxmTurboCount(string tyxmTurboCount) { DARABONBA_PTR_SET_VALUE(tyxmTurboCount_, tyxmTurboCount) };


      // vid Field Functions 
      bool hasVid() const { return this->vid_ != nullptr;};
      void deleteVid() { this->vid_ = nullptr;};
      inline string getVid() const { DARABONBA_PTR_GET_DEFAULT(vid_, "") };
      inline Data& setVid(string vid) { DARABONBA_PTR_SET_VALUE(vid_, vid) };


    protected:
      shared_ptr<vector<Data::Dialogues>> dialogues_ {};
      shared_ptr<string> errorMessage_ {};
      // The number of input tokens.
      shared_ptr<string> inputTokens_ {};
      // The request ID returned by the large language model service.
      shared_ptr<string> llmRequestId_ {};
      // The number of output tokens.
      shared_ptr<string> outputTokens_ {};
      // The result of the computation task.
      shared_ptr<Data::Response> response_ {};
      // The task status. Valid values:
      // 
      // - 1: pending
      // - 2: running
      // - 3: succeeded
      // - 4: failed
      shared_ptr<string> status_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The total number of tokens.
      shared_ptr<string> totalTokens_ {};
      // The number of times the plus model is used.
      shared_ptr<string> tyxmPlusCount_ {};
      // The number of times the turbo model is used.
      shared_ptr<string> tyxmTurboCount_ {};
      // The session ID.
      shared_ptr<string> vid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAgentTaskResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAgentTaskResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAgentTaskResultResponseBody::Data) };
    inline GetAgentTaskResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAgentTaskResultResponseBody::Data) };
    inline GetAgentTaskResultResponseBody& setData(const GetAgentTaskResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAgentTaskResultResponseBody& setData(GetAgentTaskResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAgentTaskResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgentTaskResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetAgentTaskResultResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The returned result.
    shared_ptr<GetAgentTaskResultResponseBody::Data> data_ {};
    // The error message returned when an error occurs.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. You can use this field to determine whether the request succeeded:
    // 
    // - **true**: The request was successful.
    // - **false/null**: The request failed.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
