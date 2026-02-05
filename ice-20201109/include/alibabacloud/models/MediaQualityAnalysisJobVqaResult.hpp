// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIAQUALITYANALYSISJOBVQARESULT_HPP_
#define ALIBABACLOUD_MODELS_MEDIAQUALITYANALYSISJOBVQARESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MediaQualityAnalysisJobVqaScoreDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaQualityAnalysisJobVqaResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaQualityAnalysisJobVqaResult& obj) { 
      DARABONBA_PTR_TO_JSON(Block, block_);
      DARABONBA_PTR_TO_JSON(Color, color_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(Noise, noise_);
      DARABONBA_PTR_TO_JSON(ScoreResult, scoreResult_);
      DARABONBA_PTR_TO_JSON(Sharp, sharp_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, MediaQualityAnalysisJobVqaResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Block, block_);
      DARABONBA_PTR_FROM_JSON(Color, color_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(Noise, noise_);
      DARABONBA_PTR_FROM_JSON(ScoreResult, scoreResult_);
      DARABONBA_PTR_FROM_JSON(Sharp, sharp_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    MediaQualityAnalysisJobVqaResult() = default ;
    MediaQualityAnalysisJobVqaResult(const MediaQualityAnalysisJobVqaResult &) = default ;
    MediaQualityAnalysisJobVqaResult(MediaQualityAnalysisJobVqaResult &&) = default ;
    MediaQualityAnalysisJobVqaResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaQualityAnalysisJobVqaResult() = default ;
    MediaQualityAnalysisJobVqaResult& operator=(const MediaQualityAnalysisJobVqaResult &) = default ;
    MediaQualityAnalysisJobVqaResult& operator=(MediaQualityAnalysisJobVqaResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScoreResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScoreResult& obj) { 
        DARABONBA_PTR_TO_JSON(Block, block_);
        DARABONBA_PTR_TO_JSON(Color, color_);
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(Noise, noise_);
        DARABONBA_PTR_TO_JSON(Score, score_);
        DARABONBA_PTR_TO_JSON(Sharp, sharp_);
      };
      friend void from_json(const Darabonba::Json& j, ScoreResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Block, block_);
        DARABONBA_PTR_FROM_JSON(Color, color_);
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(Noise, noise_);
        DARABONBA_PTR_FROM_JSON(Score, score_);
        DARABONBA_PTR_FROM_JSON(Sharp, sharp_);
      };
      ScoreResult() = default ;
      ScoreResult(const ScoreResult &) = default ;
      ScoreResult(ScoreResult &&) = default ;
      ScoreResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScoreResult() = default ;
      ScoreResult& operator=(const ScoreResult &) = default ;
      ScoreResult& operator=(ScoreResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Sharp : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Sharp& obj) { 
          DARABONBA_PTR_TO_JSON(IntensityValue, intensityValue_);
          DARABONBA_PTR_TO_JSON(PerceptualScore, perceptualScore_);
        };
        friend void from_json(const Darabonba::Json& j, Sharp& obj) { 
          DARABONBA_PTR_FROM_JSON(IntensityValue, intensityValue_);
          DARABONBA_PTR_FROM_JSON(PerceptualScore, perceptualScore_);
        };
        Sharp() = default ;
        Sharp(const Sharp &) = default ;
        Sharp(Sharp &&) = default ;
        Sharp(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Sharp() = default ;
        Sharp& operator=(const Sharp &) = default ;
        Sharp& operator=(Sharp &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->intensityValue_ == nullptr
        && this->perceptualScore_ == nullptr; };
        // intensityValue Field Functions 
        bool hasIntensityValue() const { return this->intensityValue_ != nullptr;};
        void deleteIntensityValue() { this->intensityValue_ = nullptr;};
        inline double getIntensityValue() const { DARABONBA_PTR_GET_DEFAULT(intensityValue_, 0.0) };
        inline Sharp& setIntensityValue(double intensityValue) { DARABONBA_PTR_SET_VALUE(intensityValue_, intensityValue) };


        // perceptualScore Field Functions 
        bool hasPerceptualScore() const { return this->perceptualScore_ != nullptr;};
        void deletePerceptualScore() { this->perceptualScore_ = nullptr;};
        inline double getPerceptualScore() const { DARABONBA_PTR_GET_DEFAULT(perceptualScore_, 0.0) };
        inline Sharp& setPerceptualScore(double perceptualScore) { DARABONBA_PTR_SET_VALUE(perceptualScore_, perceptualScore) };


      protected:
        shared_ptr<double> intensityValue_ {};
        shared_ptr<double> perceptualScore_ {};
      };

      class Noise : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Noise& obj) { 
          DARABONBA_PTR_TO_JSON(IntensityValue, intensityValue_);
          DARABONBA_PTR_TO_JSON(PerceptualScore, perceptualScore_);
        };
        friend void from_json(const Darabonba::Json& j, Noise& obj) { 
          DARABONBA_PTR_FROM_JSON(IntensityValue, intensityValue_);
          DARABONBA_PTR_FROM_JSON(PerceptualScore, perceptualScore_);
        };
        Noise() = default ;
        Noise(const Noise &) = default ;
        Noise(Noise &&) = default ;
        Noise(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Noise() = default ;
        Noise& operator=(const Noise &) = default ;
        Noise& operator=(Noise &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->intensityValue_ == nullptr
        && this->perceptualScore_ == nullptr; };
        // intensityValue Field Functions 
        bool hasIntensityValue() const { return this->intensityValue_ != nullptr;};
        void deleteIntensityValue() { this->intensityValue_ = nullptr;};
        inline double getIntensityValue() const { DARABONBA_PTR_GET_DEFAULT(intensityValue_, 0.0) };
        inline Noise& setIntensityValue(double intensityValue) { DARABONBA_PTR_SET_VALUE(intensityValue_, intensityValue) };


        // perceptualScore Field Functions 
        bool hasPerceptualScore() const { return this->perceptualScore_ != nullptr;};
        void deletePerceptualScore() { this->perceptualScore_ = nullptr;};
        inline double getPerceptualScore() const { DARABONBA_PTR_GET_DEFAULT(perceptualScore_, 0.0) };
        inline Noise& setPerceptualScore(double perceptualScore) { DARABONBA_PTR_SET_VALUE(perceptualScore_, perceptualScore) };


      protected:
        shared_ptr<double> intensityValue_ {};
        shared_ptr<double> perceptualScore_ {};
      };

      class Detail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Detail& obj) { 
          DARABONBA_PTR_TO_JSON(IntensityValue, intensityValue_);
          DARABONBA_PTR_TO_JSON(PerceptualScore, perceptualScore_);
        };
        friend void from_json(const Darabonba::Json& j, Detail& obj) { 
          DARABONBA_PTR_FROM_JSON(IntensityValue, intensityValue_);
          DARABONBA_PTR_FROM_JSON(PerceptualScore, perceptualScore_);
        };
        Detail() = default ;
        Detail(const Detail &) = default ;
        Detail(Detail &&) = default ;
        Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Detail() = default ;
        Detail& operator=(const Detail &) = default ;
        Detail& operator=(Detail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->intensityValue_ == nullptr
        && this->perceptualScore_ == nullptr; };
        // intensityValue Field Functions 
        bool hasIntensityValue() const { return this->intensityValue_ != nullptr;};
        void deleteIntensityValue() { this->intensityValue_ = nullptr;};
        inline double getIntensityValue() const { DARABONBA_PTR_GET_DEFAULT(intensityValue_, 0.0) };
        inline Detail& setIntensityValue(double intensityValue) { DARABONBA_PTR_SET_VALUE(intensityValue_, intensityValue) };


        // perceptualScore Field Functions 
        bool hasPerceptualScore() const { return this->perceptualScore_ != nullptr;};
        void deletePerceptualScore() { this->perceptualScore_ = nullptr;};
        inline double getPerceptualScore() const { DARABONBA_PTR_GET_DEFAULT(perceptualScore_, 0.0) };
        inline Detail& setPerceptualScore(double perceptualScore) { DARABONBA_PTR_SET_VALUE(perceptualScore_, perceptualScore) };


      protected:
        shared_ptr<double> intensityValue_ {};
        shared_ptr<double> perceptualScore_ {};
      };

      class Color : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Color& obj) { 
          DARABONBA_PTR_TO_JSON(IntensityValue, intensityValue_);
          DARABONBA_PTR_TO_JSON(PerceptualScore, perceptualScore_);
        };
        friend void from_json(const Darabonba::Json& j, Color& obj) { 
          DARABONBA_PTR_FROM_JSON(IntensityValue, intensityValue_);
          DARABONBA_PTR_FROM_JSON(PerceptualScore, perceptualScore_);
        };
        Color() = default ;
        Color(const Color &) = default ;
        Color(Color &&) = default ;
        Color(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Color() = default ;
        Color& operator=(const Color &) = default ;
        Color& operator=(Color &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->intensityValue_ == nullptr
        && this->perceptualScore_ == nullptr; };
        // intensityValue Field Functions 
        bool hasIntensityValue() const { return this->intensityValue_ != nullptr;};
        void deleteIntensityValue() { this->intensityValue_ = nullptr;};
        inline double getIntensityValue() const { DARABONBA_PTR_GET_DEFAULT(intensityValue_, 0.0) };
        inline Color& setIntensityValue(double intensityValue) { DARABONBA_PTR_SET_VALUE(intensityValue_, intensityValue) };


        // perceptualScore Field Functions 
        bool hasPerceptualScore() const { return this->perceptualScore_ != nullptr;};
        void deletePerceptualScore() { this->perceptualScore_ = nullptr;};
        inline double getPerceptualScore() const { DARABONBA_PTR_GET_DEFAULT(perceptualScore_, 0.0) };
        inline Color& setPerceptualScore(double perceptualScore) { DARABONBA_PTR_SET_VALUE(perceptualScore_, perceptualScore) };


      protected:
        shared_ptr<double> intensityValue_ {};
        shared_ptr<double> perceptualScore_ {};
      };

      class Block : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Block& obj) { 
          DARABONBA_PTR_TO_JSON(IntensityValue, intensityValue_);
          DARABONBA_PTR_TO_JSON(PerceptualScore, perceptualScore_);
        };
        friend void from_json(const Darabonba::Json& j, Block& obj) { 
          DARABONBA_PTR_FROM_JSON(IntensityValue, intensityValue_);
          DARABONBA_PTR_FROM_JSON(PerceptualScore, perceptualScore_);
        };
        Block() = default ;
        Block(const Block &) = default ;
        Block(Block &&) = default ;
        Block(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Block() = default ;
        Block& operator=(const Block &) = default ;
        Block& operator=(Block &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->intensityValue_ == nullptr
        && this->perceptualScore_ == nullptr; };
        // intensityValue Field Functions 
        bool hasIntensityValue() const { return this->intensityValue_ != nullptr;};
        void deleteIntensityValue() { this->intensityValue_ = nullptr;};
        inline double getIntensityValue() const { DARABONBA_PTR_GET_DEFAULT(intensityValue_, 0.0) };
        inline Block& setIntensityValue(double intensityValue) { DARABONBA_PTR_SET_VALUE(intensityValue_, intensityValue) };


        // perceptualScore Field Functions 
        bool hasPerceptualScore() const { return this->perceptualScore_ != nullptr;};
        void deletePerceptualScore() { this->perceptualScore_ = nullptr;};
        inline double getPerceptualScore() const { DARABONBA_PTR_GET_DEFAULT(perceptualScore_, 0.0) };
        inline Block& setPerceptualScore(double perceptualScore) { DARABONBA_PTR_SET_VALUE(perceptualScore_, perceptualScore) };


      protected:
        shared_ptr<double> intensityValue_ {};
        shared_ptr<double> perceptualScore_ {};
      };

      virtual bool empty() const override { return this->block_ == nullptr
        && this->color_ == nullptr && this->detail_ == nullptr && this->noise_ == nullptr && this->score_ == nullptr && this->sharp_ == nullptr; };
      // block Field Functions 
      bool hasBlock() const { return this->block_ != nullptr;};
      void deleteBlock() { this->block_ = nullptr;};
      inline const ScoreResult::Block & getBlock() const { DARABONBA_PTR_GET_CONST(block_, ScoreResult::Block) };
      inline ScoreResult::Block getBlock() { DARABONBA_PTR_GET(block_, ScoreResult::Block) };
      inline ScoreResult& setBlock(const ScoreResult::Block & block) { DARABONBA_PTR_SET_VALUE(block_, block) };
      inline ScoreResult& setBlock(ScoreResult::Block && block) { DARABONBA_PTR_SET_RVALUE(block_, block) };


      // color Field Functions 
      bool hasColor() const { return this->color_ != nullptr;};
      void deleteColor() { this->color_ = nullptr;};
      inline const ScoreResult::Color & getColor() const { DARABONBA_PTR_GET_CONST(color_, ScoreResult::Color) };
      inline ScoreResult::Color getColor() { DARABONBA_PTR_GET(color_, ScoreResult::Color) };
      inline ScoreResult& setColor(const ScoreResult::Color & color) { DARABONBA_PTR_SET_VALUE(color_, color) };
      inline ScoreResult& setColor(ScoreResult::Color && color) { DARABONBA_PTR_SET_RVALUE(color_, color) };


      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline const ScoreResult::Detail & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, ScoreResult::Detail) };
      inline ScoreResult::Detail getDetail() { DARABONBA_PTR_GET(detail_, ScoreResult::Detail) };
      inline ScoreResult& setDetail(const ScoreResult::Detail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
      inline ScoreResult& setDetail(ScoreResult::Detail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


      // noise Field Functions 
      bool hasNoise() const { return this->noise_ != nullptr;};
      void deleteNoise() { this->noise_ = nullptr;};
      inline const ScoreResult::Noise & getNoise() const { DARABONBA_PTR_GET_CONST(noise_, ScoreResult::Noise) };
      inline ScoreResult::Noise getNoise() { DARABONBA_PTR_GET(noise_, ScoreResult::Noise) };
      inline ScoreResult& setNoise(const ScoreResult::Noise & noise) { DARABONBA_PTR_SET_VALUE(noise_, noise) };
      inline ScoreResult& setNoise(ScoreResult::Noise && noise) { DARABONBA_PTR_SET_RVALUE(noise_, noise) };


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
      inline ScoreResult& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      // sharp Field Functions 
      bool hasSharp() const { return this->sharp_ != nullptr;};
      void deleteSharp() { this->sharp_ = nullptr;};
      inline const ScoreResult::Sharp & getSharp() const { DARABONBA_PTR_GET_CONST(sharp_, ScoreResult::Sharp) };
      inline ScoreResult::Sharp getSharp() { DARABONBA_PTR_GET(sharp_, ScoreResult::Sharp) };
      inline ScoreResult& setSharp(const ScoreResult::Sharp & sharp) { DARABONBA_PTR_SET_VALUE(sharp_, sharp) };
      inline ScoreResult& setSharp(ScoreResult::Sharp && sharp) { DARABONBA_PTR_SET_RVALUE(sharp_, sharp) };


    protected:
      shared_ptr<ScoreResult::Block> block_ {};
      shared_ptr<ScoreResult::Color> color_ {};
      shared_ptr<ScoreResult::Detail> detail_ {};
      shared_ptr<ScoreResult::Noise> noise_ {};
      shared_ptr<double> score_ {};
      shared_ptr<ScoreResult::Sharp> sharp_ {};
    };

    virtual bool empty() const override { return this->block_ == nullptr
        && this->color_ == nullptr && this->detail_ == nullptr && this->noise_ == nullptr && this->scoreResult_ == nullptr && this->sharp_ == nullptr
        && this->state_ == nullptr; };
    // block Field Functions 
    bool hasBlock() const { return this->block_ != nullptr;};
    void deleteBlock() { this->block_ = nullptr;};
    inline const MediaQualityAnalysisJobVqaScoreDetail & getBlock() const { DARABONBA_PTR_GET_CONST(block_, MediaQualityAnalysisJobVqaScoreDetail) };
    inline MediaQualityAnalysisJobVqaScoreDetail getBlock() { DARABONBA_PTR_GET(block_, MediaQualityAnalysisJobVqaScoreDetail) };
    inline MediaQualityAnalysisJobVqaResult& setBlock(const MediaQualityAnalysisJobVqaScoreDetail & block) { DARABONBA_PTR_SET_VALUE(block_, block) };
    inline MediaQualityAnalysisJobVqaResult& setBlock(MediaQualityAnalysisJobVqaScoreDetail && block) { DARABONBA_PTR_SET_RVALUE(block_, block) };


    // color Field Functions 
    bool hasColor() const { return this->color_ != nullptr;};
    void deleteColor() { this->color_ = nullptr;};
    inline const MediaQualityAnalysisJobVqaScoreDetail & getColor() const { DARABONBA_PTR_GET_CONST(color_, MediaQualityAnalysisJobVqaScoreDetail) };
    inline MediaQualityAnalysisJobVqaScoreDetail getColor() { DARABONBA_PTR_GET(color_, MediaQualityAnalysisJobVqaScoreDetail) };
    inline MediaQualityAnalysisJobVqaResult& setColor(const MediaQualityAnalysisJobVqaScoreDetail & color) { DARABONBA_PTR_SET_VALUE(color_, color) };
    inline MediaQualityAnalysisJobVqaResult& setColor(MediaQualityAnalysisJobVqaScoreDetail && color) { DARABONBA_PTR_SET_RVALUE(color_, color) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const MediaQualityAnalysisJobVqaScoreDetail & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, MediaQualityAnalysisJobVqaScoreDetail) };
    inline MediaQualityAnalysisJobVqaScoreDetail getDetail() { DARABONBA_PTR_GET(detail_, MediaQualityAnalysisJobVqaScoreDetail) };
    inline MediaQualityAnalysisJobVqaResult& setDetail(const MediaQualityAnalysisJobVqaScoreDetail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline MediaQualityAnalysisJobVqaResult& setDetail(MediaQualityAnalysisJobVqaScoreDetail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // noise Field Functions 
    bool hasNoise() const { return this->noise_ != nullptr;};
    void deleteNoise() { this->noise_ = nullptr;};
    inline const MediaQualityAnalysisJobVqaScoreDetail & getNoise() const { DARABONBA_PTR_GET_CONST(noise_, MediaQualityAnalysisJobVqaScoreDetail) };
    inline MediaQualityAnalysisJobVqaScoreDetail getNoise() { DARABONBA_PTR_GET(noise_, MediaQualityAnalysisJobVqaScoreDetail) };
    inline MediaQualityAnalysisJobVqaResult& setNoise(const MediaQualityAnalysisJobVqaScoreDetail & noise) { DARABONBA_PTR_SET_VALUE(noise_, noise) };
    inline MediaQualityAnalysisJobVqaResult& setNoise(MediaQualityAnalysisJobVqaScoreDetail && noise) { DARABONBA_PTR_SET_RVALUE(noise_, noise) };


    // scoreResult Field Functions 
    bool hasScoreResult() const { return this->scoreResult_ != nullptr;};
    void deleteScoreResult() { this->scoreResult_ = nullptr;};
    inline const MediaQualityAnalysisJobVqaResult::ScoreResult & getScoreResult() const { DARABONBA_PTR_GET_CONST(scoreResult_, MediaQualityAnalysisJobVqaResult::ScoreResult) };
    inline MediaQualityAnalysisJobVqaResult::ScoreResult getScoreResult() { DARABONBA_PTR_GET(scoreResult_, MediaQualityAnalysisJobVqaResult::ScoreResult) };
    inline MediaQualityAnalysisJobVqaResult& setScoreResult(const MediaQualityAnalysisJobVqaResult::ScoreResult & scoreResult) { DARABONBA_PTR_SET_VALUE(scoreResult_, scoreResult) };
    inline MediaQualityAnalysisJobVqaResult& setScoreResult(MediaQualityAnalysisJobVqaResult::ScoreResult && scoreResult) { DARABONBA_PTR_SET_RVALUE(scoreResult_, scoreResult) };


    // sharp Field Functions 
    bool hasSharp() const { return this->sharp_ != nullptr;};
    void deleteSharp() { this->sharp_ = nullptr;};
    inline const MediaQualityAnalysisJobVqaScoreDetail & getSharp() const { DARABONBA_PTR_GET_CONST(sharp_, MediaQualityAnalysisJobVqaScoreDetail) };
    inline MediaQualityAnalysisJobVqaScoreDetail getSharp() { DARABONBA_PTR_GET(sharp_, MediaQualityAnalysisJobVqaScoreDetail) };
    inline MediaQualityAnalysisJobVqaResult& setSharp(const MediaQualityAnalysisJobVqaScoreDetail & sharp) { DARABONBA_PTR_SET_VALUE(sharp_, sharp) };
    inline MediaQualityAnalysisJobVqaResult& setSharp(MediaQualityAnalysisJobVqaScoreDetail && sharp) { DARABONBA_PTR_SET_RVALUE(sharp_, sharp) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline MediaQualityAnalysisJobVqaResult& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    shared_ptr<MediaQualityAnalysisJobVqaScoreDetail> block_ {};
    shared_ptr<MediaQualityAnalysisJobVqaScoreDetail> color_ {};
    shared_ptr<MediaQualityAnalysisJobVqaScoreDetail> detail_ {};
    shared_ptr<MediaQualityAnalysisJobVqaScoreDetail> noise_ {};
    shared_ptr<MediaQualityAnalysisJobVqaResult::ScoreResult> scoreResult_ {};
    shared_ptr<MediaQualityAnalysisJobVqaScoreDetail> sharp_ {};
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
