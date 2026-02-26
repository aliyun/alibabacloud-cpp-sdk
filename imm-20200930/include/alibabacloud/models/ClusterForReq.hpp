// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLUSTERFORREQ_HPP_
#define ALIBABACLOUD_MODELS_CLUSTERFORREQ_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ClusterForReq : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClusterForReq& obj) { 
      DARABONBA_PTR_TO_JSON(Cover, cover_);
      DARABONBA_PTR_TO_JSON(CustomId, customId_);
      DARABONBA_ANY_TO_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
    };
    friend void from_json(const Darabonba::Json& j, ClusterForReq& obj) { 
      DARABONBA_PTR_FROM_JSON(Cover, cover_);
      DARABONBA_PTR_FROM_JSON(CustomId, customId_);
      DARABONBA_ANY_FROM_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
    };
    ClusterForReq() = default ;
    ClusterForReq(const ClusterForReq &) = default ;
    ClusterForReq(ClusterForReq &&) = default ;
    ClusterForReq(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClusterForReq() = default ;
    ClusterForReq& operator=(const ClusterForReq &) = default ;
    ClusterForReq& operator=(ClusterForReq &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Cover : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Cover& obj) { 
        DARABONBA_PTR_TO_JSON(Figures, figures_);
      };
      friend void from_json(const Darabonba::Json& j, Cover& obj) { 
        DARABONBA_PTR_FROM_JSON(Figures, figures_);
      };
      Cover() = default ;
      Cover(const Cover &) = default ;
      Cover(Cover &&) = default ;
      Cover(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Cover() = default ;
      Cover& operator=(const Cover &) = default ;
      Cover& operator=(Cover &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Figures : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Figures& obj) { 
          DARABONBA_PTR_TO_JSON(FigureId, figureId_);
        };
        friend void from_json(const Darabonba::Json& j, Figures& obj) { 
          DARABONBA_PTR_FROM_JSON(FigureId, figureId_);
        };
        Figures() = default ;
        Figures(const Figures &) = default ;
        Figures(Figures &&) = default ;
        Figures(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Figures() = default ;
        Figures& operator=(const Figures &) = default ;
        Figures& operator=(Figures &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->figureId_ == nullptr; };
        // figureId Field Functions 
        bool hasFigureId() const { return this->figureId_ != nullptr;};
        void deleteFigureId() { this->figureId_ = nullptr;};
        inline string getFigureId() const { DARABONBA_PTR_GET_DEFAULT(figureId_, "") };
        inline Figures& setFigureId(string figureId) { DARABONBA_PTR_SET_VALUE(figureId_, figureId) };


      protected:
        // The person ID.
        shared_ptr<string> figureId_ {};
      };

      virtual bool empty() const override { return this->figures_ == nullptr; };
      // figures Field Functions 
      bool hasFigures() const { return this->figures_ != nullptr;};
      void deleteFigures() { this->figures_ = nullptr;};
      inline const vector<Cover::Figures> & getFigures() const { DARABONBA_PTR_GET_CONST(figures_, vector<Cover::Figures>) };
      inline vector<Cover::Figures> getFigures() { DARABONBA_PTR_GET(figures_, vector<Cover::Figures>) };
      inline Cover& setFigures(const vector<Cover::Figures> & figures) { DARABONBA_PTR_SET_VALUE(figures_, figures) };
      inline Cover& setFigures(vector<Cover::Figures> && figures) { DARABONBA_PTR_SET_RVALUE(figures_, figures) };


    protected:
      // The persons.
      shared_ptr<vector<Cover::Figures>> figures_ {};
    };

    virtual bool empty() const override { return this->cover_ == nullptr
        && this->customId_ == nullptr && this->customLabels_ == nullptr && this->name_ == nullptr && this->objectId_ == nullptr; };
    // cover Field Functions 
    bool hasCover() const { return this->cover_ != nullptr;};
    void deleteCover() { this->cover_ = nullptr;};
    inline const ClusterForReq::Cover & getCover() const { DARABONBA_PTR_GET_CONST(cover_, ClusterForReq::Cover) };
    inline ClusterForReq::Cover getCover() { DARABONBA_PTR_GET(cover_, ClusterForReq::Cover) };
    inline ClusterForReq& setCover(const ClusterForReq::Cover & cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };
    inline ClusterForReq& setCover(ClusterForReq::Cover && cover) { DARABONBA_PTR_SET_RVALUE(cover_, cover) };


    // customId Field Functions 
    bool hasCustomId() const { return this->customId_ != nullptr;};
    void deleteCustomId() { this->customId_ = nullptr;};
    inline string getCustomId() const { DARABONBA_PTR_GET_DEFAULT(customId_, "") };
    inline ClusterForReq& setCustomId(string customId) { DARABONBA_PTR_SET_VALUE(customId_, customId) };


    // customLabels Field Functions 
    bool hasCustomLabels() const { return this->customLabels_ != nullptr;};
    void deleteCustomLabels() { this->customLabels_ = nullptr;};
    inline     const Darabonba::Json & getCustomLabels() const { DARABONBA_GET(customLabels_) };
    Darabonba::Json & getCustomLabels() { DARABONBA_GET(customLabels_) };
    inline ClusterForReq& setCustomLabels(const Darabonba::Json & customLabels) { DARABONBA_SET_VALUE(customLabels_, customLabels) };
    inline ClusterForReq& setCustomLabels(Darabonba::Json && customLabels) { DARABONBA_SET_RVALUE(customLabels_, customLabels) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ClusterForReq& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline ClusterForReq& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


  protected:
    // The cover.
    shared_ptr<ClusterForReq::Cover> cover_ {};
    // The custom ID.
    shared_ptr<string> customId_ {};
    // The custom labels.
    Darabonba::Json customLabels_ {};
    // The name of the cluster.
    shared_ptr<string> name_ {};
    // The ID of the cluster.
    shared_ptr<string> objectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
