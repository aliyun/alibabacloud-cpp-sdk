// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTAINERINFO_HPP_
#define ALIBABACLOUD_MODELS_CONTAINERINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class ContainerInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContainerInfo& obj) { 
      DARABONBA_PTR_TO_JSON(MainContainer, mainContainer_);
      DARABONBA_PTR_TO_JSON(SidecarContainers, sidecarContainers_);
    };
    friend void from_json(const Darabonba::Json& j, ContainerInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(MainContainer, mainContainer_);
      DARABONBA_PTR_FROM_JSON(SidecarContainers, sidecarContainers_);
    };
    ContainerInfo() = default ;
    ContainerInfo(const ContainerInfo &) = default ;
    ContainerInfo(ContainerInfo &&) = default ;
    ContainerInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContainerInfo() = default ;
    ContainerInfo& operator=(const ContainerInfo &) = default ;
    ContainerInfo& operator=(ContainerInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mainContainer_ == nullptr
        && this->sidecarContainers_ == nullptr; };
    // mainContainer Field Functions 
    bool hasMainContainer() const { return this->mainContainer_ != nullptr;};
    void deleteMainContainer() { this->mainContainer_ = nullptr;};
    inline string getMainContainer() const { DARABONBA_PTR_GET_DEFAULT(mainContainer_, "") };
    inline ContainerInfo& setMainContainer(string mainContainer) { DARABONBA_PTR_SET_VALUE(mainContainer_, mainContainer) };


    // sidecarContainers Field Functions 
    bool hasSidecarContainers() const { return this->sidecarContainers_ != nullptr;};
    void deleteSidecarContainers() { this->sidecarContainers_ = nullptr;};
    inline const vector<string> & getSidecarContainers() const { DARABONBA_PTR_GET_CONST(sidecarContainers_, vector<string>) };
    inline vector<string> getSidecarContainers() { DARABONBA_PTR_GET(sidecarContainers_, vector<string>) };
    inline ContainerInfo& setSidecarContainers(const vector<string> & sidecarContainers) { DARABONBA_PTR_SET_VALUE(sidecarContainers_, sidecarContainers) };
    inline ContainerInfo& setSidecarContainers(vector<string> && sidecarContainers) { DARABONBA_PTR_SET_RVALUE(sidecarContainers_, sidecarContainers) };


  protected:
    // The name of the main container.
    shared_ptr<string> mainContainer_ {};
    // The list of sidecar container names.
    shared_ptr<vector<string>> sidecarContainers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
