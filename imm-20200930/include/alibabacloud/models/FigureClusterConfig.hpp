// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIGURECLUSTERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_FIGURECLUSTERCONFIG_HPP_
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
  class FigureClusterConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FigureClusterConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AutoClustering, autoClustering_);
      DARABONBA_PTR_TO_JSON(AutoGenerate, autoGenerate_);
      DARABONBA_PTR_TO_JSON(EnabledFeatures, enabledFeatures_);
      DARABONBA_PTR_TO_JSON(MinEntityCount, minEntityCount_);
    };
    friend void from_json(const Darabonba::Json& j, FigureClusterConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoClustering, autoClustering_);
      DARABONBA_PTR_FROM_JSON(AutoGenerate, autoGenerate_);
      DARABONBA_PTR_FROM_JSON(EnabledFeatures, enabledFeatures_);
      DARABONBA_PTR_FROM_JSON(MinEntityCount, minEntityCount_);
    };
    FigureClusterConfig() = default ;
    FigureClusterConfig(const FigureClusterConfig &) = default ;
    FigureClusterConfig(FigureClusterConfig &&) = default ;
    FigureClusterConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FigureClusterConfig() = default ;
    FigureClusterConfig& operator=(const FigureClusterConfig &) = default ;
    FigureClusterConfig& operator=(FigureClusterConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoClustering_ == nullptr
        && this->autoGenerate_ == nullptr && this->enabledFeatures_ == nullptr && this->minEntityCount_ == nullptr; };
    // autoClustering Field Functions 
    bool hasAutoClustering() const { return this->autoClustering_ != nullptr;};
    void deleteAutoClustering() { this->autoClustering_ = nullptr;};
    inline bool getAutoClustering() const { DARABONBA_PTR_GET_DEFAULT(autoClustering_, false) };
    inline FigureClusterConfig& setAutoClustering(bool autoClustering) { DARABONBA_PTR_SET_VALUE(autoClustering_, autoClustering) };


    // autoGenerate Field Functions 
    bool hasAutoGenerate() const { return this->autoGenerate_ != nullptr;};
    void deleteAutoGenerate() { this->autoGenerate_ = nullptr;};
    inline bool getAutoGenerate() const { DARABONBA_PTR_GET_DEFAULT(autoGenerate_, false) };
    inline FigureClusterConfig& setAutoGenerate(bool autoGenerate) { DARABONBA_PTR_SET_VALUE(autoGenerate_, autoGenerate) };


    // enabledFeatures Field Functions 
    bool hasEnabledFeatures() const { return this->enabledFeatures_ != nullptr;};
    void deleteEnabledFeatures() { this->enabledFeatures_ = nullptr;};
    inline const vector<string> & getEnabledFeatures() const { DARABONBA_PTR_GET_CONST(enabledFeatures_, vector<string>) };
    inline vector<string> getEnabledFeatures() { DARABONBA_PTR_GET(enabledFeatures_, vector<string>) };
    inline FigureClusterConfig& setEnabledFeatures(const vector<string> & enabledFeatures) { DARABONBA_PTR_SET_VALUE(enabledFeatures_, enabledFeatures) };
    inline FigureClusterConfig& setEnabledFeatures(vector<string> && enabledFeatures) { DARABONBA_PTR_SET_RVALUE(enabledFeatures_, enabledFeatures) };


    // minEntityCount Field Functions 
    bool hasMinEntityCount() const { return this->minEntityCount_ != nullptr;};
    void deleteMinEntityCount() { this->minEntityCount_ = nullptr;};
    inline int64_t getMinEntityCount() const { DARABONBA_PTR_GET_DEFAULT(minEntityCount_, 0L) };
    inline FigureClusterConfig& setMinEntityCount(int64_t minEntityCount) { DARABONBA_PTR_SET_VALUE(minEntityCount_, minEntityCount) };


  protected:
    // Whether to automatically group similar figures into clusters.
    shared_ptr<bool> autoClustering_ {};
    // Whether to automatically generate metadata for each cluster, such as a representative cover image.
    shared_ptr<bool> autoGenerate_ {};
    // An array of strings specifying the clustering strategies to use.
    shared_ptr<vector<string>> enabledFeatures_ {};
    // The minimum number of figures required to form a cluster.
    shared_ptr<int64_t> minEntityCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
