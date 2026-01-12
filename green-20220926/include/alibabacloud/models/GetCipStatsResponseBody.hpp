// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCIPSTATSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCIPSTATSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetCipStatsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCipStatsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCipStatsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCipStatsResponseBody() = default ;
    GetCipStatsResponseBody(const GetCipStatsResponseBody &) = default ;
    GetCipStatsResponseBody(GetCipStatsResponseBody &&) = default ;
    GetCipStatsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCipStatsResponseBody() = default ;
    GetCipStatsResponseBody& operator=(const GetCipStatsResponseBody &) = default ;
    GetCipStatsResponseBody& operator=(GetCipStatsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(LabelStatChart, labelStatChart_);
        DARABONBA_PTR_TO_JSON(TotalStat, totalStat_);
        DARABONBA_PTR_TO_JSON(Uids, uids_);
        DARABONBA_PTR_TO_JSON(X, x_);
        DARABONBA_PTR_TO_JSON(Y, y_);
        DARABONBA_PTR_TO_JSON(Z, z_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(LabelStatChart, labelStatChart_);
        DARABONBA_PTR_FROM_JSON(TotalStat, totalStat_);
        DARABONBA_PTR_FROM_JSON(Uids, uids_);
        DARABONBA_PTR_FROM_JSON(X, x_);
        DARABONBA_PTR_FROM_JSON(Y, y_);
        DARABONBA_PTR_FROM_JSON(Z, z_);
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
      class Z : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Z& obj) { 
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Z& obj) { 
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Z() = default ;
        Z(const Z &) = default ;
        Z(Z &&) = default ;
        Z(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Z() = default ;
        Z& operator=(const Z &) = default ;
        Z& operator=(Z &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->data_ == nullptr
        && this->name_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const vector<int64_t> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<int64_t>) };
        inline vector<int64_t> getData() { DARABONBA_PTR_GET(data_, vector<int64_t>) };
        inline Z& setData(const vector<int64_t> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline Z& setData(vector<int64_t> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Z& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<vector<int64_t>> data_ {};
        shared_ptr<string> name_ {};
      };

      class Y : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Y& obj) { 
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Y& obj) { 
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Y() = default ;
        Y(const Y &) = default ;
        Y(Y &&) = default ;
        Y(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Y() = default ;
        Y& operator=(const Y &) = default ;
        Y& operator=(Y &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->data_ == nullptr
        && this->name_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const vector<int64_t> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<int64_t>) };
        inline vector<int64_t> getData() { DARABONBA_PTR_GET(data_, vector<int64_t>) };
        inline Y& setData(const vector<int64_t> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline Y& setData(vector<int64_t> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Y& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<vector<int64_t>> data_ {};
        shared_ptr<string> name_ {};
      };

      class LabelStatChart : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LabelStatChart& obj) { 
          DARABONBA_PTR_TO_JSON(ImageTreeChar, imageTreeChar_);
          DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
          DARABONBA_PTR_TO_JSON(TextTreeChart, textTreeChart_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
          DARABONBA_PTR_TO_JSON(TreeChart, treeChart_);
          DARABONBA_PTR_TO_JSON(VoiceTreeChart, voiceTreeChart_);
          DARABONBA_PTR_TO_JSON(X, x_);
          DARABONBA_PTR_TO_JSON(Y, y_);
        };
        friend void from_json(const Darabonba::Json& j, LabelStatChart& obj) { 
          DARABONBA_PTR_FROM_JSON(ImageTreeChar, imageTreeChar_);
          DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
          DARABONBA_PTR_FROM_JSON(TextTreeChart, textTreeChart_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
          DARABONBA_PTR_FROM_JSON(TreeChart, treeChart_);
          DARABONBA_PTR_FROM_JSON(VoiceTreeChart, voiceTreeChart_);
          DARABONBA_PTR_FROM_JSON(X, x_);
          DARABONBA_PTR_FROM_JSON(Y, y_);
        };
        LabelStatChart() = default ;
        LabelStatChart(const LabelStatChart &) = default ;
        LabelStatChart(LabelStatChart &&) = default ;
        LabelStatChart(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LabelStatChart() = default ;
        LabelStatChart& operator=(const LabelStatChart &) = default ;
        LabelStatChart& operator=(LabelStatChart &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Y : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Y& obj) { 
            DARABONBA_PTR_TO_JSON(Data, data_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Y& obj) { 
            DARABONBA_PTR_FROM_JSON(Data, data_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          Y() = default ;
          Y(const Y &) = default ;
          Y(Y &&) = default ;
          Y(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Y() = default ;
          Y& operator=(const Y &) = default ;
          Y& operator=(Y &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->data_ == nullptr
        && this->name_ == nullptr; };
          // data Field Functions 
          bool hasData() const { return this->data_ != nullptr;};
          void deleteData() { this->data_ = nullptr;};
          inline const vector<int64_t> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<int64_t>) };
          inline vector<int64_t> getData() { DARABONBA_PTR_GET(data_, vector<int64_t>) };
          inline Y& setData(const vector<int64_t> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
          inline Y& setData(vector<int64_t> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Y& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<vector<int64_t>> data_ {};
          shared_ptr<string> name_ {};
        };

        class VoiceTreeChart : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VoiceTreeChart& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, VoiceTreeChart& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          VoiceTreeChart() = default ;
          VoiceTreeChart(const VoiceTreeChart &) = default ;
          VoiceTreeChart(VoiceTreeChart &&) = default ;
          VoiceTreeChart(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VoiceTreeChart() = default ;
          VoiceTreeChart& operator=(const VoiceTreeChart &) = default ;
          VoiceTreeChart& operator=(VoiceTreeChart &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline VoiceTreeChart& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline VoiceTreeChart& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline VoiceTreeChart& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> description_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> value_ {};
        };

        class TreeChart : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TreeChart& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TreeChart& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TreeChart() = default ;
          TreeChart(const TreeChart &) = default ;
          TreeChart(TreeChart &&) = default ;
          TreeChart(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TreeChart() = default ;
          TreeChart& operator=(const TreeChart &) = default ;
          TreeChart& operator=(TreeChart &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline TreeChart& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TreeChart& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline TreeChart& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> description_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> value_ {};
        };

        class TextTreeChart : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TextTreeChart& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TextTreeChart& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TextTreeChart() = default ;
          TextTreeChart(const TextTreeChart &) = default ;
          TextTreeChart(TextTreeChart &&) = default ;
          TextTreeChart(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TextTreeChart() = default ;
          TextTreeChart& operator=(const TextTreeChart &) = default ;
          TextTreeChart& operator=(TextTreeChart &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline TextTreeChart& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TextTreeChart& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline TextTreeChart& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> description_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> value_ {};
        };

        class ImageTreeChar : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ImageTreeChar& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ImageTreeChar& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          ImageTreeChar() = default ;
          ImageTreeChar(const ImageTreeChar &) = default ;
          ImageTreeChar(ImageTreeChar &&) = default ;
          ImageTreeChar(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ImageTreeChar() = default ;
          ImageTreeChar& operator=(const ImageTreeChar &) = default ;
          ImageTreeChar& operator=(ImageTreeChar &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline ImageTreeChar& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ImageTreeChar& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline ImageTreeChar& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> description_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->imageTreeChar_ == nullptr
        && this->serviceCode_ == nullptr && this->textTreeChart_ == nullptr && this->totalCount_ == nullptr && this->treeChart_ == nullptr && this->voiceTreeChart_ == nullptr
        && this->x_ == nullptr && this->y_ == nullptr; };
        // imageTreeChar Field Functions 
        bool hasImageTreeChar() const { return this->imageTreeChar_ != nullptr;};
        void deleteImageTreeChar() { this->imageTreeChar_ = nullptr;};
        inline const vector<LabelStatChart::ImageTreeChar> & getImageTreeChar() const { DARABONBA_PTR_GET_CONST(imageTreeChar_, vector<LabelStatChart::ImageTreeChar>) };
        inline vector<LabelStatChart::ImageTreeChar> getImageTreeChar() { DARABONBA_PTR_GET(imageTreeChar_, vector<LabelStatChart::ImageTreeChar>) };
        inline LabelStatChart& setImageTreeChar(const vector<LabelStatChart::ImageTreeChar> & imageTreeChar) { DARABONBA_PTR_SET_VALUE(imageTreeChar_, imageTreeChar) };
        inline LabelStatChart& setImageTreeChar(vector<LabelStatChart::ImageTreeChar> && imageTreeChar) { DARABONBA_PTR_SET_RVALUE(imageTreeChar_, imageTreeChar) };


        // serviceCode Field Functions 
        bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
        void deleteServiceCode() { this->serviceCode_ = nullptr;};
        inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
        inline LabelStatChart& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


        // textTreeChart Field Functions 
        bool hasTextTreeChart() const { return this->textTreeChart_ != nullptr;};
        void deleteTextTreeChart() { this->textTreeChart_ = nullptr;};
        inline const vector<LabelStatChart::TextTreeChart> & getTextTreeChart() const { DARABONBA_PTR_GET_CONST(textTreeChart_, vector<LabelStatChart::TextTreeChart>) };
        inline vector<LabelStatChart::TextTreeChart> getTextTreeChart() { DARABONBA_PTR_GET(textTreeChart_, vector<LabelStatChart::TextTreeChart>) };
        inline LabelStatChart& setTextTreeChart(const vector<LabelStatChart::TextTreeChart> & textTreeChart) { DARABONBA_PTR_SET_VALUE(textTreeChart_, textTreeChart) };
        inline LabelStatChart& setTextTreeChart(vector<LabelStatChart::TextTreeChart> && textTreeChart) { DARABONBA_PTR_SET_RVALUE(textTreeChart_, textTreeChart) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline LabelStatChart& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


        // treeChart Field Functions 
        bool hasTreeChart() const { return this->treeChart_ != nullptr;};
        void deleteTreeChart() { this->treeChart_ = nullptr;};
        inline const vector<LabelStatChart::TreeChart> & getTreeChart() const { DARABONBA_PTR_GET_CONST(treeChart_, vector<LabelStatChart::TreeChart>) };
        inline vector<LabelStatChart::TreeChart> getTreeChart() { DARABONBA_PTR_GET(treeChart_, vector<LabelStatChart::TreeChart>) };
        inline LabelStatChart& setTreeChart(const vector<LabelStatChart::TreeChart> & treeChart) { DARABONBA_PTR_SET_VALUE(treeChart_, treeChart) };
        inline LabelStatChart& setTreeChart(vector<LabelStatChart::TreeChart> && treeChart) { DARABONBA_PTR_SET_RVALUE(treeChart_, treeChart) };


        // voiceTreeChart Field Functions 
        bool hasVoiceTreeChart() const { return this->voiceTreeChart_ != nullptr;};
        void deleteVoiceTreeChart() { this->voiceTreeChart_ = nullptr;};
        inline const vector<LabelStatChart::VoiceTreeChart> & getVoiceTreeChart() const { DARABONBA_PTR_GET_CONST(voiceTreeChart_, vector<LabelStatChart::VoiceTreeChart>) };
        inline vector<LabelStatChart::VoiceTreeChart> getVoiceTreeChart() { DARABONBA_PTR_GET(voiceTreeChart_, vector<LabelStatChart::VoiceTreeChart>) };
        inline LabelStatChart& setVoiceTreeChart(const vector<LabelStatChart::VoiceTreeChart> & voiceTreeChart) { DARABONBA_PTR_SET_VALUE(voiceTreeChart_, voiceTreeChart) };
        inline LabelStatChart& setVoiceTreeChart(vector<LabelStatChart::VoiceTreeChart> && voiceTreeChart) { DARABONBA_PTR_SET_RVALUE(voiceTreeChart_, voiceTreeChart) };


        // x Field Functions 
        bool hasX() const { return this->x_ != nullptr;};
        void deleteX() { this->x_ = nullptr;};
        inline const vector<string> & getX() const { DARABONBA_PTR_GET_CONST(x_, vector<string>) };
        inline vector<string> getX() { DARABONBA_PTR_GET(x_, vector<string>) };
        inline LabelStatChart& setX(const vector<string> & x) { DARABONBA_PTR_SET_VALUE(x_, x) };
        inline LabelStatChart& setX(vector<string> && x) { DARABONBA_PTR_SET_RVALUE(x_, x) };


        // y Field Functions 
        bool hasY() const { return this->y_ != nullptr;};
        void deleteY() { this->y_ = nullptr;};
        inline const vector<LabelStatChart::Y> & getY() const { DARABONBA_PTR_GET_CONST(y_, vector<LabelStatChart::Y>) };
        inline vector<LabelStatChart::Y> getY() { DARABONBA_PTR_GET(y_, vector<LabelStatChart::Y>) };
        inline LabelStatChart& setY(const vector<LabelStatChart::Y> & y) { DARABONBA_PTR_SET_VALUE(y_, y) };
        inline LabelStatChart& setY(vector<LabelStatChart::Y> && y) { DARABONBA_PTR_SET_RVALUE(y_, y) };


      protected:
        shared_ptr<vector<LabelStatChart::ImageTreeChar>> imageTreeChar_ {};
        shared_ptr<string> serviceCode_ {};
        shared_ptr<vector<LabelStatChart::TextTreeChart>> textTreeChart_ {};
        shared_ptr<int64_t> totalCount_ {};
        shared_ptr<vector<LabelStatChart::TreeChart>> treeChart_ {};
        shared_ptr<vector<LabelStatChart::VoiceTreeChart>> voiceTreeChart_ {};
        shared_ptr<vector<string>> x_ {};
        shared_ptr<vector<LabelStatChart::Y>> y_ {};
      };

      virtual bool empty() const override { return this->labelStatChart_ == nullptr
        && this->totalStat_ == nullptr && this->uids_ == nullptr && this->x_ == nullptr && this->y_ == nullptr && this->z_ == nullptr; };
      // labelStatChart Field Functions 
      bool hasLabelStatChart() const { return this->labelStatChart_ != nullptr;};
      void deleteLabelStatChart() { this->labelStatChart_ = nullptr;};
      inline const vector<Data::LabelStatChart> & getLabelStatChart() const { DARABONBA_PTR_GET_CONST(labelStatChart_, vector<Data::LabelStatChart>) };
      inline vector<Data::LabelStatChart> getLabelStatChart() { DARABONBA_PTR_GET(labelStatChart_, vector<Data::LabelStatChart>) };
      inline Data& setLabelStatChart(const vector<Data::LabelStatChart> & labelStatChart) { DARABONBA_PTR_SET_VALUE(labelStatChart_, labelStatChart) };
      inline Data& setLabelStatChart(vector<Data::LabelStatChart> && labelStatChart) { DARABONBA_PTR_SET_RVALUE(labelStatChart_, labelStatChart) };


      // totalStat Field Functions 
      bool hasTotalStat() const { return this->totalStat_ != nullptr;};
      void deleteTotalStat() { this->totalStat_ = nullptr;};
      inline const map<string, Darabonba::Json> & getTotalStat() const { DARABONBA_PTR_GET_CONST(totalStat_, map<string, Darabonba::Json>) };
      inline map<string, Darabonba::Json> getTotalStat() { DARABONBA_PTR_GET(totalStat_, map<string, Darabonba::Json>) };
      inline Data& setTotalStat(const map<string, Darabonba::Json> & totalStat) { DARABONBA_PTR_SET_VALUE(totalStat_, totalStat) };
      inline Data& setTotalStat(map<string, Darabonba::Json> && totalStat) { DARABONBA_PTR_SET_RVALUE(totalStat_, totalStat) };


      // uids Field Functions 
      bool hasUids() const { return this->uids_ != nullptr;};
      void deleteUids() { this->uids_ = nullptr;};
      inline const vector<string> & getUids() const { DARABONBA_PTR_GET_CONST(uids_, vector<string>) };
      inline vector<string> getUids() { DARABONBA_PTR_GET(uids_, vector<string>) };
      inline Data& setUids(const vector<string> & uids) { DARABONBA_PTR_SET_VALUE(uids_, uids) };
      inline Data& setUids(vector<string> && uids) { DARABONBA_PTR_SET_RVALUE(uids_, uids) };


      // x Field Functions 
      bool hasX() const { return this->x_ != nullptr;};
      void deleteX() { this->x_ = nullptr;};
      inline const vector<string> & getX() const { DARABONBA_PTR_GET_CONST(x_, vector<string>) };
      inline vector<string> getX() { DARABONBA_PTR_GET(x_, vector<string>) };
      inline Data& setX(const vector<string> & x) { DARABONBA_PTR_SET_VALUE(x_, x) };
      inline Data& setX(vector<string> && x) { DARABONBA_PTR_SET_RVALUE(x_, x) };


      // y Field Functions 
      bool hasY() const { return this->y_ != nullptr;};
      void deleteY() { this->y_ = nullptr;};
      inline const vector<Data::Y> & getY() const { DARABONBA_PTR_GET_CONST(y_, vector<Data::Y>) };
      inline vector<Data::Y> getY() { DARABONBA_PTR_GET(y_, vector<Data::Y>) };
      inline Data& setY(const vector<Data::Y> & y) { DARABONBA_PTR_SET_VALUE(y_, y) };
      inline Data& setY(vector<Data::Y> && y) { DARABONBA_PTR_SET_RVALUE(y_, y) };


      // z Field Functions 
      bool hasZ() const { return this->z_ != nullptr;};
      void deleteZ() { this->z_ = nullptr;};
      inline const vector<Data::Z> & getZ() const { DARABONBA_PTR_GET_CONST(z_, vector<Data::Z>) };
      inline vector<Data::Z> getZ() { DARABONBA_PTR_GET(z_, vector<Data::Z>) };
      inline Data& setZ(const vector<Data::Z> & z) { DARABONBA_PTR_SET_VALUE(z_, z) };
      inline Data& setZ(vector<Data::Z> && z) { DARABONBA_PTR_SET_RVALUE(z_, z) };


    protected:
      shared_ptr<vector<Data::LabelStatChart>> labelStatChart_ {};
      shared_ptr<map<string, Darabonba::Json>> totalStat_ {};
      shared_ptr<vector<string>> uids_ {};
      shared_ptr<vector<string>> x_ {};
      shared_ptr<vector<Data::Y>> y_ {};
      shared_ptr<vector<Data::Z>> z_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetCipStatsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCipStatsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCipStatsResponseBody::Data) };
    inline GetCipStatsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCipStatsResponseBody::Data) };
    inline GetCipStatsResponseBody& setData(const GetCipStatsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCipStatsResponseBody& setData(GetCipStatsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetCipStatsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline GetCipStatsResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCipStatsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCipStatsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<GetCipStatsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> msg_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
