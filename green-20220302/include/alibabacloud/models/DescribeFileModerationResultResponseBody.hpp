// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILEMODERATIONRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILEMODERATIONRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeFileModerationResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileModerationResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileModerationResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFileModerationResultResponseBody() = default ;
    DescribeFileModerationResultResponseBody(const DescribeFileModerationResultResponseBody &) = default ;
    DescribeFileModerationResultResponseBody(DescribeFileModerationResultResponseBody &&) = default ;
    DescribeFileModerationResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileModerationResultResponseBody() = default ;
    DescribeFileModerationResultResponseBody& operator=(const DescribeFileModerationResultResponseBody &) = default ;
    DescribeFileModerationResultResponseBody& operator=(DescribeFileModerationResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(DataId, dataId_);
        DARABONBA_PTR_TO_JSON(DocType, docType_);
        DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
        DARABONBA_PTR_TO_JSON(PageSummary, pageSummary_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(DataId, dataId_);
        DARABONBA_PTR_FROM_JSON(DocType, docType_);
        DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
        DARABONBA_PTR_FROM_JSON(PageSummary, pageSummary_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
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
      class PageSummary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageSummary& obj) { 
          DARABONBA_PTR_TO_JSON(ImageSummary, imageSummary_);
          DARABONBA_PTR_TO_JSON(PageSum, pageSum_);
          DARABONBA_PTR_TO_JSON(TextSummary, textSummary_);
        };
        friend void from_json(const Darabonba::Json& j, PageSummary& obj) { 
          DARABONBA_PTR_FROM_JSON(ImageSummary, imageSummary_);
          DARABONBA_PTR_FROM_JSON(PageSum, pageSum_);
          DARABONBA_PTR_FROM_JSON(TextSummary, textSummary_);
        };
        PageSummary() = default ;
        PageSummary(const PageSummary &) = default ;
        PageSummary(PageSummary &&) = default ;
        PageSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PageSummary() = default ;
        PageSummary& operator=(const PageSummary &) = default ;
        PageSummary& operator=(PageSummary &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TextSummary : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TextSummary& obj) { 
            DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
            DARABONBA_PTR_TO_JSON(TextLabels, textLabels_);
          };
          friend void from_json(const Darabonba::Json& j, TextSummary& obj) { 
            DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
            DARABONBA_PTR_FROM_JSON(TextLabels, textLabels_);
          };
          TextSummary() = default ;
          TextSummary(const TextSummary &) = default ;
          TextSummary(TextSummary &&) = default ;
          TextSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TextSummary() = default ;
          TextSummary& operator=(const TextSummary &) = default ;
          TextSummary& operator=(TextSummary &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TextLabels : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TextLabels& obj) { 
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(Label, label_);
              DARABONBA_PTR_TO_JSON(LabelSum, labelSum_);
            };
            friend void from_json(const Darabonba::Json& j, TextLabels& obj) { 
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(Label, label_);
              DARABONBA_PTR_FROM_JSON(LabelSum, labelSum_);
            };
            TextLabels() = default ;
            TextLabels(const TextLabels &) = default ;
            TextLabels(TextLabels &&) = default ;
            TextLabels(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TextLabels() = default ;
            TextLabels& operator=(const TextLabels &) = default ;
            TextLabels& operator=(TextLabels &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->description_ == nullptr
        && this->label_ == nullptr && this->labelSum_ == nullptr; };
            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline TextLabels& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // label Field Functions 
            bool hasLabel() const { return this->label_ != nullptr;};
            void deleteLabel() { this->label_ = nullptr;};
            inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
            inline TextLabels& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


            // labelSum Field Functions 
            bool hasLabelSum() const { return this->labelSum_ != nullptr;};
            void deleteLabelSum() { this->labelSum_ = nullptr;};
            inline int32_t getLabelSum() const { DARABONBA_PTR_GET_DEFAULT(labelSum_, 0) };
            inline TextLabels& setLabelSum(int32_t labelSum) { DARABONBA_PTR_SET_VALUE(labelSum_, labelSum) };


          protected:
            // The description of the labels.
            shared_ptr<string> description_ {};
            // The details of the labels.
            shared_ptr<string> label_ {};
            // The number of times that the label is matched.
            shared_ptr<int32_t> labelSum_ {};
          };

          virtual bool empty() const override { return this->riskLevel_ == nullptr
        && this->textLabels_ == nullptr; };
          // riskLevel Field Functions 
          bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
          void deleteRiskLevel() { this->riskLevel_ = nullptr;};
          inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
          inline TextSummary& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


          // textLabels Field Functions 
          bool hasTextLabels() const { return this->textLabels_ != nullptr;};
          void deleteTextLabels() { this->textLabels_ = nullptr;};
          inline const vector<TextSummary::TextLabels> & getTextLabels() const { DARABONBA_PTR_GET_CONST(textLabels_, vector<TextSummary::TextLabels>) };
          inline vector<TextSummary::TextLabels> getTextLabels() { DARABONBA_PTR_GET(textLabels_, vector<TextSummary::TextLabels>) };
          inline TextSummary& setTextLabels(const vector<TextSummary::TextLabels> & textLabels) { DARABONBA_PTR_SET_VALUE(textLabels_, textLabels) };
          inline TextSummary& setTextLabels(vector<TextSummary::TextLabels> && textLabels) { DARABONBA_PTR_SET_RVALUE(textLabels_, textLabels) };


        protected:
          // Risk Level
          shared_ptr<string> riskLevel_ {};
          // Text Label
          shared_ptr<vector<TextSummary::TextLabels>> textLabels_ {};
        };

        class ImageSummary : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ImageSummary& obj) { 
            DARABONBA_PTR_TO_JSON(ImageLabels, imageLabels_);
            DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
          };
          friend void from_json(const Darabonba::Json& j, ImageSummary& obj) { 
            DARABONBA_PTR_FROM_JSON(ImageLabels, imageLabels_);
            DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
          };
          ImageSummary() = default ;
          ImageSummary(const ImageSummary &) = default ;
          ImageSummary(ImageSummary &&) = default ;
          ImageSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ImageSummary() = default ;
          ImageSummary& operator=(const ImageSummary &) = default ;
          ImageSummary& operator=(ImageSummary &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ImageLabels : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ImageLabels& obj) { 
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(Label, label_);
              DARABONBA_PTR_TO_JSON(LabelSum, labelSum_);
            };
            friend void from_json(const Darabonba::Json& j, ImageLabels& obj) { 
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(Label, label_);
              DARABONBA_PTR_FROM_JSON(LabelSum, labelSum_);
            };
            ImageLabels() = default ;
            ImageLabels(const ImageLabels &) = default ;
            ImageLabels(ImageLabels &&) = default ;
            ImageLabels(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ImageLabels() = default ;
            ImageLabels& operator=(const ImageLabels &) = default ;
            ImageLabels& operator=(ImageLabels &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->description_ == nullptr
        && this->label_ == nullptr && this->labelSum_ == nullptr; };
            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline ImageLabels& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // label Field Functions 
            bool hasLabel() const { return this->label_ != nullptr;};
            void deleteLabel() { this->label_ = nullptr;};
            inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
            inline ImageLabels& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


            // labelSum Field Functions 
            bool hasLabelSum() const { return this->labelSum_ != nullptr;};
            void deleteLabelSum() { this->labelSum_ = nullptr;};
            inline int32_t getLabelSum() const { DARABONBA_PTR_GET_DEFAULT(labelSum_, 0) };
            inline ImageLabels& setLabelSum(int32_t labelSum) { DARABONBA_PTR_SET_VALUE(labelSum_, labelSum) };


          protected:
            // The description.
            shared_ptr<string> description_ {};
            // The details of the labels.
            shared_ptr<string> label_ {};
            // The number of times that the label is matched.
            shared_ptr<int32_t> labelSum_ {};
          };

          virtual bool empty() const override { return this->imageLabels_ == nullptr
        && this->riskLevel_ == nullptr; };
          // imageLabels Field Functions 
          bool hasImageLabels() const { return this->imageLabels_ != nullptr;};
          void deleteImageLabels() { this->imageLabels_ = nullptr;};
          inline const vector<ImageSummary::ImageLabels> & getImageLabels() const { DARABONBA_PTR_GET_CONST(imageLabels_, vector<ImageSummary::ImageLabels>) };
          inline vector<ImageSummary::ImageLabels> getImageLabels() { DARABONBA_PTR_GET(imageLabels_, vector<ImageSummary::ImageLabels>) };
          inline ImageSummary& setImageLabels(const vector<ImageSummary::ImageLabels> & imageLabels) { DARABONBA_PTR_SET_VALUE(imageLabels_, imageLabels) };
          inline ImageSummary& setImageLabels(vector<ImageSummary::ImageLabels> && imageLabels) { DARABONBA_PTR_SET_RVALUE(imageLabels_, imageLabels) };


          // riskLevel Field Functions 
          bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
          void deleteRiskLevel() { this->riskLevel_ = nullptr;};
          inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
          inline ImageSummary& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


        protected:
          // Image Label
          shared_ptr<vector<ImageSummary::ImageLabels>> imageLabels_ {};
          // Risk Level
          shared_ptr<string> riskLevel_ {};
        };

        virtual bool empty() const override { return this->imageSummary_ == nullptr
        && this->pageSum_ == nullptr && this->textSummary_ == nullptr; };
        // imageSummary Field Functions 
        bool hasImageSummary() const { return this->imageSummary_ != nullptr;};
        void deleteImageSummary() { this->imageSummary_ = nullptr;};
        inline const PageSummary::ImageSummary & getImageSummary() const { DARABONBA_PTR_GET_CONST(imageSummary_, PageSummary::ImageSummary) };
        inline PageSummary::ImageSummary getImageSummary() { DARABONBA_PTR_GET(imageSummary_, PageSummary::ImageSummary) };
        inline PageSummary& setImageSummary(const PageSummary::ImageSummary & imageSummary) { DARABONBA_PTR_SET_VALUE(imageSummary_, imageSummary) };
        inline PageSummary& setImageSummary(PageSummary::ImageSummary && imageSummary) { DARABONBA_PTR_SET_RVALUE(imageSummary_, imageSummary) };


        // pageSum Field Functions 
        bool hasPageSum() const { return this->pageSum_ != nullptr;};
        void deletePageSum() { this->pageSum_ = nullptr;};
        inline int32_t getPageSum() const { DARABONBA_PTR_GET_DEFAULT(pageSum_, 0) };
        inline PageSummary& setPageSum(int32_t pageSum) { DARABONBA_PTR_SET_VALUE(pageSum_, pageSum) };


        // textSummary Field Functions 
        bool hasTextSummary() const { return this->textSummary_ != nullptr;};
        void deleteTextSummary() { this->textSummary_ = nullptr;};
        inline const PageSummary::TextSummary & getTextSummary() const { DARABONBA_PTR_GET_CONST(textSummary_, PageSummary::TextSummary) };
        inline PageSummary::TextSummary getTextSummary() { DARABONBA_PTR_GET(textSummary_, PageSummary::TextSummary) };
        inline PageSummary& setTextSummary(const PageSummary::TextSummary & textSummary) { DARABONBA_PTR_SET_VALUE(textSummary_, textSummary) };
        inline PageSummary& setTextSummary(PageSummary::TextSummary && textSummary) { DARABONBA_PTR_SET_RVALUE(textSummary_, textSummary) };


      protected:
        // Image Results Summary
        shared_ptr<PageSummary::ImageSummary> imageSummary_ {};
        // Number of pages
        shared_ptr<int32_t> pageSum_ {};
        // Text Results Summary
        shared_ptr<PageSummary::TextSummary> textSummary_ {};
      };

      class PageResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
          DARABONBA_PTR_TO_JSON(ImageResult, imageResult_);
          DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
          DARABONBA_PTR_TO_JSON(TextResult, textResult_);
          DARABONBA_PTR_TO_JSON(TextUrl, textUrl_);
        };
        friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
          DARABONBA_PTR_FROM_JSON(ImageResult, imageResult_);
          DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
          DARABONBA_PTR_FROM_JSON(TextResult, textResult_);
          DARABONBA_PTR_FROM_JSON(TextUrl, textUrl_);
        };
        PageResult() = default ;
        PageResult(const PageResult &) = default ;
        PageResult(PageResult &&) = default ;
        PageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PageResult() = default ;
        PageResult& operator=(const PageResult &) = default ;
        PageResult& operator=(PageResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TextResult : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TextResult& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Descriptions, descriptions_);
            DARABONBA_PTR_TO_JSON(Labels, labels_);
            DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
            DARABONBA_PTR_TO_JSON(RiskTips, riskTips_);
            DARABONBA_PTR_TO_JSON(RiskWords, riskWords_);
            DARABONBA_PTR_TO_JSON(Service, service_);
            DARABONBA_PTR_TO_JSON(Text, text_);
            DARABONBA_PTR_TO_JSON(TextSegment, textSegment_);
          };
          friend void from_json(const Darabonba::Json& j, TextResult& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Descriptions, descriptions_);
            DARABONBA_PTR_FROM_JSON(Labels, labels_);
            DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
            DARABONBA_PTR_FROM_JSON(RiskTips, riskTips_);
            DARABONBA_PTR_FROM_JSON(RiskWords, riskWords_);
            DARABONBA_PTR_FROM_JSON(Service, service_);
            DARABONBA_PTR_FROM_JSON(Text, text_);
            DARABONBA_PTR_FROM_JSON(TextSegment, textSegment_);
          };
          TextResult() = default ;
          TextResult(const TextResult &) = default ;
          TextResult(TextResult &&) = default ;
          TextResult(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TextResult() = default ;
          TextResult& operator=(const TextResult &) = default ;
          TextResult& operator=(TextResult &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->descriptions_ == nullptr && this->labels_ == nullptr && this->riskLevel_ == nullptr && this->riskTips_ == nullptr && this->riskWords_ == nullptr
        && this->service_ == nullptr && this->text_ == nullptr && this->textSegment_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline TextResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // descriptions Field Functions 
          bool hasDescriptions() const { return this->descriptions_ != nullptr;};
          void deleteDescriptions() { this->descriptions_ = nullptr;};
          inline string getDescriptions() const { DARABONBA_PTR_GET_DEFAULT(descriptions_, "") };
          inline TextResult& setDescriptions(string descriptions) { DARABONBA_PTR_SET_VALUE(descriptions_, descriptions) };


          // labels Field Functions 
          bool hasLabels() const { return this->labels_ != nullptr;};
          void deleteLabels() { this->labels_ = nullptr;};
          inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
          inline TextResult& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


          // riskLevel Field Functions 
          bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
          void deleteRiskLevel() { this->riskLevel_ = nullptr;};
          inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
          inline TextResult& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


          // riskTips Field Functions 
          bool hasRiskTips() const { return this->riskTips_ != nullptr;};
          void deleteRiskTips() { this->riskTips_ = nullptr;};
          inline string getRiskTips() const { DARABONBA_PTR_GET_DEFAULT(riskTips_, "") };
          inline TextResult& setRiskTips(string riskTips) { DARABONBA_PTR_SET_VALUE(riskTips_, riskTips) };


          // riskWords Field Functions 
          bool hasRiskWords() const { return this->riskWords_ != nullptr;};
          void deleteRiskWords() { this->riskWords_ = nullptr;};
          inline string getRiskWords() const { DARABONBA_PTR_GET_DEFAULT(riskWords_, "") };
          inline TextResult& setRiskWords(string riskWords) { DARABONBA_PTR_SET_VALUE(riskWords_, riskWords) };


          // service Field Functions 
          bool hasService() const { return this->service_ != nullptr;};
          void deleteService() { this->service_ = nullptr;};
          inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
          inline TextResult& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline TextResult& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


          // textSegment Field Functions 
          bool hasTextSegment() const { return this->textSegment_ != nullptr;};
          void deleteTextSegment() { this->textSegment_ = nullptr;};
          inline string getTextSegment() const { DARABONBA_PTR_GET_DEFAULT(textSegment_, "") };
          inline TextResult& setTextSegment(string textSegment) { DARABONBA_PTR_SET_VALUE(textSegment_, textSegment) };


        protected:
          // The description.
          shared_ptr<string> description_ {};
          // The description of the labels.
          shared_ptr<string> descriptions_ {};
          // The details of the labels.
          shared_ptr<string> labels_ {};
          // Risk Level
          shared_ptr<string> riskLevel_ {};
          // The risk details that are hit.
          shared_ptr<string> riskTips_ {};
          // The risk words that are hit.
          shared_ptr<string> riskWords_ {};
          // The moderation service.
          shared_ptr<string> service_ {};
          // The text content.
          shared_ptr<string> text_ {};
          // The text segmentation information.
          shared_ptr<string> textSegment_ {};
        };

        class ImageResult : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ImageResult& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(LabelResult, labelResult_);
            DARABONBA_PTR_TO_JSON(Location, location_);
            DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
            DARABONBA_PTR_TO_JSON(Service, service_);
          };
          friend void from_json(const Darabonba::Json& j, ImageResult& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(LabelResult, labelResult_);
            DARABONBA_PTR_FROM_JSON(Location, location_);
            DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
            DARABONBA_PTR_FROM_JSON(Service, service_);
          };
          ImageResult() = default ;
          ImageResult(const ImageResult &) = default ;
          ImageResult(ImageResult &&) = default ;
          ImageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ImageResult() = default ;
          ImageResult& operator=(const ImageResult &) = default ;
          ImageResult& operator=(ImageResult &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Location : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Location& obj) { 
              DARABONBA_PTR_TO_JSON(H, h_);
              DARABONBA_PTR_TO_JSON(W, w_);
              DARABONBA_PTR_TO_JSON(X, x_);
              DARABONBA_PTR_TO_JSON(Y, y_);
            };
            friend void from_json(const Darabonba::Json& j, Location& obj) { 
              DARABONBA_PTR_FROM_JSON(H, h_);
              DARABONBA_PTR_FROM_JSON(W, w_);
              DARABONBA_PTR_FROM_JSON(X, x_);
              DARABONBA_PTR_FROM_JSON(Y, y_);
            };
            Location() = default ;
            Location(const Location &) = default ;
            Location(Location &&) = default ;
            Location(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Location() = default ;
            Location& operator=(const Location &) = default ;
            Location& operator=(Location &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->h_ == nullptr
        && this->w_ == nullptr && this->x_ == nullptr && this->y_ == nullptr; };
            // h Field Functions 
            bool hasH() const { return this->h_ != nullptr;};
            void deleteH() { this->h_ = nullptr;};
            inline int32_t getH() const { DARABONBA_PTR_GET_DEFAULT(h_, 0) };
            inline Location& setH(int32_t h) { DARABONBA_PTR_SET_VALUE(h_, h) };


            // w Field Functions 
            bool hasW() const { return this->w_ != nullptr;};
            void deleteW() { this->w_ = nullptr;};
            inline int32_t getW() const { DARABONBA_PTR_GET_DEFAULT(w_, 0) };
            inline Location& setW(int32_t w) { DARABONBA_PTR_SET_VALUE(w_, w) };


            // x Field Functions 
            bool hasX() const { return this->x_ != nullptr;};
            void deleteX() { this->x_ = nullptr;};
            inline int32_t getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0) };
            inline Location& setX(int32_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


            // y Field Functions 
            bool hasY() const { return this->y_ != nullptr;};
            void deleteY() { this->y_ = nullptr;};
            inline int32_t getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0) };
            inline Location& setY(int32_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


          protected:
            // The H value of the coordinate point.
            shared_ptr<int32_t> h_ {};
            // The W value of the coordinate point.
            shared_ptr<int32_t> w_ {};
            // The X value of the coordinate point.
            shared_ptr<int32_t> x_ {};
            // The Y value of the coordinate point.
            shared_ptr<int32_t> y_ {};
          };

          class LabelResult : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const LabelResult& obj) { 
              DARABONBA_PTR_TO_JSON(Confidence, confidence_);
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(Label, label_);
            };
            friend void from_json(const Darabonba::Json& j, LabelResult& obj) { 
              DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(Label, label_);
            };
            LabelResult() = default ;
            LabelResult(const LabelResult &) = default ;
            LabelResult(LabelResult &&) = default ;
            LabelResult(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~LabelResult() = default ;
            LabelResult& operator=(const LabelResult &) = default ;
            LabelResult& operator=(LabelResult &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->confidence_ == nullptr
        && this->description_ == nullptr && this->label_ == nullptr; };
            // confidence Field Functions 
            bool hasConfidence() const { return this->confidence_ != nullptr;};
            void deleteConfidence() { this->confidence_ = nullptr;};
            inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
            inline LabelResult& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline LabelResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // label Field Functions 
            bool hasLabel() const { return this->label_ != nullptr;};
            void deleteLabel() { this->label_ = nullptr;};
            inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
            inline LabelResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          protected:
            // The score of the confidence level. Valid values: 0 to 100. The value is accurate to two decimal places.
            shared_ptr<float> confidence_ {};
            // The description.
            shared_ptr<string> description_ {};
            // The details of the labels.
            shared_ptr<string> label_ {};
          };

          virtual bool empty() const override { return this->description_ == nullptr
        && this->labelResult_ == nullptr && this->location_ == nullptr && this->riskLevel_ == nullptr && this->service_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline ImageResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // labelResult Field Functions 
          bool hasLabelResult() const { return this->labelResult_ != nullptr;};
          void deleteLabelResult() { this->labelResult_ = nullptr;};
          inline const vector<ImageResult::LabelResult> & getLabelResult() const { DARABONBA_PTR_GET_CONST(labelResult_, vector<ImageResult::LabelResult>) };
          inline vector<ImageResult::LabelResult> getLabelResult() { DARABONBA_PTR_GET(labelResult_, vector<ImageResult::LabelResult>) };
          inline ImageResult& setLabelResult(const vector<ImageResult::LabelResult> & labelResult) { DARABONBA_PTR_SET_VALUE(labelResult_, labelResult) };
          inline ImageResult& setLabelResult(vector<ImageResult::LabelResult> && labelResult) { DARABONBA_PTR_SET_RVALUE(labelResult_, labelResult) };


          // location Field Functions 
          bool hasLocation() const { return this->location_ != nullptr;};
          void deleteLocation() { this->location_ = nullptr;};
          inline const ImageResult::Location & getLocation() const { DARABONBA_PTR_GET_CONST(location_, ImageResult::Location) };
          inline ImageResult::Location getLocation() { DARABONBA_PTR_GET(location_, ImageResult::Location) };
          inline ImageResult& setLocation(const ImageResult::Location & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
          inline ImageResult& setLocation(ImageResult::Location && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


          // riskLevel Field Functions 
          bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
          void deleteRiskLevel() { this->riskLevel_ = nullptr;};
          inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
          inline ImageResult& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


          // service Field Functions 
          bool hasService() const { return this->service_ != nullptr;};
          void deleteService() { this->service_ = nullptr;};
          inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
          inline ImageResult& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


        protected:
          // The description.
          shared_ptr<string> description_ {};
          // The label information.
          shared_ptr<vector<ImageResult::LabelResult>> labelResult_ {};
          // The location information
          shared_ptr<ImageResult::Location> location_ {};
          // Risk Level
          shared_ptr<string> riskLevel_ {};
          // The moderation service.
          shared_ptr<string> service_ {};
        };

        virtual bool empty() const override { return this->imageResult_ == nullptr
        && this->imageUrl_ == nullptr && this->pageNum_ == nullptr && this->textResult_ == nullptr && this->textUrl_ == nullptr; };
        // imageResult Field Functions 
        bool hasImageResult() const { return this->imageResult_ != nullptr;};
        void deleteImageResult() { this->imageResult_ = nullptr;};
        inline const vector<PageResult::ImageResult> & getImageResult() const { DARABONBA_PTR_GET_CONST(imageResult_, vector<PageResult::ImageResult>) };
        inline vector<PageResult::ImageResult> getImageResult() { DARABONBA_PTR_GET(imageResult_, vector<PageResult::ImageResult>) };
        inline PageResult& setImageResult(const vector<PageResult::ImageResult> & imageResult) { DARABONBA_PTR_SET_VALUE(imageResult_, imageResult) };
        inline PageResult& setImageResult(vector<PageResult::ImageResult> && imageResult) { DARABONBA_PTR_SET_RVALUE(imageResult_, imageResult) };


        // imageUrl Field Functions 
        bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
        void deleteImageUrl() { this->imageUrl_ = nullptr;};
        inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
        inline PageResult& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


        // pageNum Field Functions 
        bool hasPageNum() const { return this->pageNum_ != nullptr;};
        void deletePageNum() { this->pageNum_ = nullptr;};
        inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
        inline PageResult& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


        // textResult Field Functions 
        bool hasTextResult() const { return this->textResult_ != nullptr;};
        void deleteTextResult() { this->textResult_ = nullptr;};
        inline const vector<PageResult::TextResult> & getTextResult() const { DARABONBA_PTR_GET_CONST(textResult_, vector<PageResult::TextResult>) };
        inline vector<PageResult::TextResult> getTextResult() { DARABONBA_PTR_GET(textResult_, vector<PageResult::TextResult>) };
        inline PageResult& setTextResult(const vector<PageResult::TextResult> & textResult) { DARABONBA_PTR_SET_VALUE(textResult_, textResult) };
        inline PageResult& setTextResult(vector<PageResult::TextResult> && textResult) { DARABONBA_PTR_SET_RVALUE(textResult_, textResult) };


        // textUrl Field Functions 
        bool hasTextUrl() const { return this->textUrl_ != nullptr;};
        void deleteTextUrl() { this->textUrl_ = nullptr;};
        inline string getTextUrl() const { DARABONBA_PTR_GET_DEFAULT(textUrl_, "") };
        inline PageResult& setTextUrl(string textUrl) { DARABONBA_PTR_SET_VALUE(textUrl_, textUrl) };


      protected:
        // The image moderation results.
        shared_ptr<vector<PageResult::ImageResult>> imageResult_ {};
        // The image URL.
        shared_ptr<string> imageUrl_ {};
        // The page number.
        shared_ptr<int32_t> pageNum_ {};
        // The text moderation results.
        shared_ptr<vector<PageResult::TextResult>> textResult_ {};
        // The text URL.
        shared_ptr<string> textUrl_ {};
      };

      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->dataId_ == nullptr && this->docType_ == nullptr && this->pageResult_ == nullptr && this->pageSummary_ == nullptr && this->riskLevel_ == nullptr
        && this->url_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Data& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
      inline Data& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


      // docType Field Functions 
      bool hasDocType() const { return this->docType_ != nullptr;};
      void deleteDocType() { this->docType_ = nullptr;};
      inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
      inline Data& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


      // pageResult Field Functions 
      bool hasPageResult() const { return this->pageResult_ != nullptr;};
      void deletePageResult() { this->pageResult_ = nullptr;};
      inline const vector<Data::PageResult> & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, vector<Data::PageResult>) };
      inline vector<Data::PageResult> getPageResult() { DARABONBA_PTR_GET(pageResult_, vector<Data::PageResult>) };
      inline Data& setPageResult(const vector<Data::PageResult> & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
      inline Data& setPageResult(vector<Data::PageResult> && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


      // pageSummary Field Functions 
      bool hasPageSummary() const { return this->pageSummary_ != nullptr;};
      void deletePageSummary() { this->pageSummary_ = nullptr;};
      inline const Data::PageSummary & getPageSummary() const { DARABONBA_PTR_GET_CONST(pageSummary_, Data::PageSummary) };
      inline Data::PageSummary getPageSummary() { DARABONBA_PTR_GET(pageSummary_, Data::PageSummary) };
      inline Data& setPageSummary(const Data::PageSummary & pageSummary) { DARABONBA_PTR_SET_VALUE(pageSummary_, pageSummary) };
      inline Data& setPageSummary(Data::PageSummary && pageSummary) { DARABONBA_PTR_SET_RVALUE(pageSummary_, pageSummary) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline Data& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Data& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> accountId_ {};
      // The ID of the moderated object.
      shared_ptr<string> dataId_ {};
      // Optional. The document type.
      shared_ptr<string> docType_ {};
      // An array that consists of the moderation results.
      shared_ptr<vector<Data::PageResult>> pageResult_ {};
      // Summary of results
      shared_ptr<Data::PageSummary> pageSummary_ {};
      // Risk Level
      shared_ptr<string> riskLevel_ {};
      // The URL of the moderated object.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeFileModerationResultResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeFileModerationResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeFileModerationResultResponseBody::Data) };
    inline DescribeFileModerationResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeFileModerationResultResponseBody::Data) };
    inline DescribeFileModerationResultResponseBody& setData(const DescribeFileModerationResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeFileModerationResultResponseBody& setData(DescribeFileModerationResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeFileModerationResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFileModerationResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned HTTP status code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<DescribeFileModerationResultResponseBody::Data> data_ {};
    // The message that is returned in response to the request.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
