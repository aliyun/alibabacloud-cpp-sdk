// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXTRAPODSPEC_HPP_
#define ALIBABACLOUD_MODELS_EXTRAPODSPEC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ContainerSpec.hpp>
#include <alibabacloud/models/Lifecycle.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class ExtraPodSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExtraPodSpec& obj) { 
      DARABONBA_PTR_TO_JSON(InitContainers, initContainers_);
      DARABONBA_PTR_TO_JSON(Lifecycle, lifecycle_);
      DARABONBA_PTR_TO_JSON(PodAnnotations, podAnnotations_);
      DARABONBA_PTR_TO_JSON(PodLabels, podLabels_);
      DARABONBA_PTR_TO_JSON(SharedVolumeMountPaths, sharedVolumeMountPaths_);
      DARABONBA_PTR_TO_JSON(SideCarContainers, sideCarContainers_);
    };
    friend void from_json(const Darabonba::Json& j, ExtraPodSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(InitContainers, initContainers_);
      DARABONBA_PTR_FROM_JSON(Lifecycle, lifecycle_);
      DARABONBA_PTR_FROM_JSON(PodAnnotations, podAnnotations_);
      DARABONBA_PTR_FROM_JSON(PodLabels, podLabels_);
      DARABONBA_PTR_FROM_JSON(SharedVolumeMountPaths, sharedVolumeMountPaths_);
      DARABONBA_PTR_FROM_JSON(SideCarContainers, sideCarContainers_);
    };
    ExtraPodSpec() = default ;
    ExtraPodSpec(const ExtraPodSpec &) = default ;
    ExtraPodSpec(ExtraPodSpec &&) = default ;
    ExtraPodSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExtraPodSpec() = default ;
    ExtraPodSpec& operator=(const ExtraPodSpec &) = default ;
    ExtraPodSpec& operator=(ExtraPodSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->initContainers_ != nullptr
        && this->lifecycle_ != nullptr && this->podAnnotations_ != nullptr && this->podLabels_ != nullptr && this->sharedVolumeMountPaths_ != nullptr && this->sideCarContainers_ != nullptr; };
    // initContainers Field Functions 
    bool hasInitContainers() const { return this->initContainers_ != nullptr;};
    void deleteInitContainers() { this->initContainers_ = nullptr;};
    inline const vector<ContainerSpec> & initContainers() const { DARABONBA_PTR_GET_CONST(initContainers_, vector<ContainerSpec>) };
    inline vector<ContainerSpec> initContainers() { DARABONBA_PTR_GET(initContainers_, vector<ContainerSpec>) };
    inline ExtraPodSpec& setInitContainers(const vector<ContainerSpec> & initContainers) { DARABONBA_PTR_SET_VALUE(initContainers_, initContainers) };
    inline ExtraPodSpec& setInitContainers(vector<ContainerSpec> && initContainers) { DARABONBA_PTR_SET_RVALUE(initContainers_, initContainers) };


    // lifecycle Field Functions 
    bool hasLifecycle() const { return this->lifecycle_ != nullptr;};
    void deleteLifecycle() { this->lifecycle_ = nullptr;};
    inline const Lifecycle & lifecycle() const { DARABONBA_PTR_GET_CONST(lifecycle_, Lifecycle) };
    inline Lifecycle lifecycle() { DARABONBA_PTR_GET(lifecycle_, Lifecycle) };
    inline ExtraPodSpec& setLifecycle(const Lifecycle & lifecycle) { DARABONBA_PTR_SET_VALUE(lifecycle_, lifecycle) };
    inline ExtraPodSpec& setLifecycle(Lifecycle && lifecycle) { DARABONBA_PTR_SET_RVALUE(lifecycle_, lifecycle) };


    // podAnnotations Field Functions 
    bool hasPodAnnotations() const { return this->podAnnotations_ != nullptr;};
    void deletePodAnnotations() { this->podAnnotations_ = nullptr;};
    inline const map<string, string> & podAnnotations() const { DARABONBA_PTR_GET_CONST(podAnnotations_, map<string, string>) };
    inline map<string, string> podAnnotations() { DARABONBA_PTR_GET(podAnnotations_, map<string, string>) };
    inline ExtraPodSpec& setPodAnnotations(const map<string, string> & podAnnotations) { DARABONBA_PTR_SET_VALUE(podAnnotations_, podAnnotations) };
    inline ExtraPodSpec& setPodAnnotations(map<string, string> && podAnnotations) { DARABONBA_PTR_SET_RVALUE(podAnnotations_, podAnnotations) };


    // podLabels Field Functions 
    bool hasPodLabels() const { return this->podLabels_ != nullptr;};
    void deletePodLabels() { this->podLabels_ = nullptr;};
    inline const map<string, string> & podLabels() const { DARABONBA_PTR_GET_CONST(podLabels_, map<string, string>) };
    inline map<string, string> podLabels() { DARABONBA_PTR_GET(podLabels_, map<string, string>) };
    inline ExtraPodSpec& setPodLabels(const map<string, string> & podLabels) { DARABONBA_PTR_SET_VALUE(podLabels_, podLabels) };
    inline ExtraPodSpec& setPodLabels(map<string, string> && podLabels) { DARABONBA_PTR_SET_RVALUE(podLabels_, podLabels) };


    // sharedVolumeMountPaths Field Functions 
    bool hasSharedVolumeMountPaths() const { return this->sharedVolumeMountPaths_ != nullptr;};
    void deleteSharedVolumeMountPaths() { this->sharedVolumeMountPaths_ = nullptr;};
    inline const vector<string> & sharedVolumeMountPaths() const { DARABONBA_PTR_GET_CONST(sharedVolumeMountPaths_, vector<string>) };
    inline vector<string> sharedVolumeMountPaths() { DARABONBA_PTR_GET(sharedVolumeMountPaths_, vector<string>) };
    inline ExtraPodSpec& setSharedVolumeMountPaths(const vector<string> & sharedVolumeMountPaths) { DARABONBA_PTR_SET_VALUE(sharedVolumeMountPaths_, sharedVolumeMountPaths) };
    inline ExtraPodSpec& setSharedVolumeMountPaths(vector<string> && sharedVolumeMountPaths) { DARABONBA_PTR_SET_RVALUE(sharedVolumeMountPaths_, sharedVolumeMountPaths) };


    // sideCarContainers Field Functions 
    bool hasSideCarContainers() const { return this->sideCarContainers_ != nullptr;};
    void deleteSideCarContainers() { this->sideCarContainers_ = nullptr;};
    inline const vector<ContainerSpec> & sideCarContainers() const { DARABONBA_PTR_GET_CONST(sideCarContainers_, vector<ContainerSpec>) };
    inline vector<ContainerSpec> sideCarContainers() { DARABONBA_PTR_GET(sideCarContainers_, vector<ContainerSpec>) };
    inline ExtraPodSpec& setSideCarContainers(const vector<ContainerSpec> & sideCarContainers) { DARABONBA_PTR_SET_VALUE(sideCarContainers_, sideCarContainers) };
    inline ExtraPodSpec& setSideCarContainers(vector<ContainerSpec> && sideCarContainers) { DARABONBA_PTR_SET_RVALUE(sideCarContainers_, sideCarContainers) };


  protected:
    std::shared_ptr<vector<ContainerSpec>> initContainers_ = nullptr;
    std::shared_ptr<Lifecycle> lifecycle_ = nullptr;
    std::shared_ptr<map<string, string>> podAnnotations_ = nullptr;
    std::shared_ptr<map<string, string>> podLabels_ = nullptr;
    std::shared_ptr<vector<string>> sharedVolumeMountPaths_ = nullptr;
    std::shared_ptr<vector<ContainerSpec>> sideCarContainers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
