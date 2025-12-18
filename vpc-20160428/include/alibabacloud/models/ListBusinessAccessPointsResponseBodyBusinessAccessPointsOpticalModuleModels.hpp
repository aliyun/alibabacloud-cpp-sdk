// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBUSINESSACCESSPOINTSRESPONSEBODYBUSINESSACCESSPOINTSOPTICALMODULEMODELS_HPP_
#define ALIBABACLOUD_MODELS_LISTBUSINESSACCESSPOINTSRESPONSEBODYBUSINESSACCESSPOINTSOPTICALMODULEMODELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListBusinessAccessPointsResponseBodyBusinessAccessPointsOpticalModuleModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBusinessAccessPointsResponseBodyBusinessAccessPointsOpticalModuleModels& obj) { 
      DARABONBA_PTR_TO_JSON(OpticalModuleModel, opticalModuleModel_);
      DARABONBA_PTR_TO_JSON(PortType, portType_);
    };
    friend void from_json(const Darabonba::Json& j, ListBusinessAccessPointsResponseBodyBusinessAccessPointsOpticalModuleModels& obj) { 
      DARABONBA_PTR_FROM_JSON(OpticalModuleModel, opticalModuleModel_);
      DARABONBA_PTR_FROM_JSON(PortType, portType_);
    };
    ListBusinessAccessPointsResponseBodyBusinessAccessPointsOpticalModuleModels() = default ;
    ListBusinessAccessPointsResponseBodyBusinessAccessPointsOpticalModuleModels(const ListBusinessAccessPointsResponseBodyBusinessAccessPointsOpticalModuleModels &) = default ;
    ListBusinessAccessPointsResponseBodyBusinessAccessPointsOpticalModuleModels(ListBusinessAccessPointsResponseBodyBusinessAccessPointsOpticalModuleModels &&) = default ;
    ListBusinessAccessPointsResponseBodyBusinessAccessPointsOpticalModuleModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBusinessAccessPointsResponseBodyBusinessAccessPointsOpticalModuleModels() = default ;
    ListBusinessAccessPointsResponseBodyBusinessAccessPointsOpticalModuleModels& operator=(const ListBusinessAccessPointsResponseBodyBusinessAccessPointsOpticalModuleModels &) = default ;
    ListBusinessAccessPointsResponseBodyBusinessAccessPointsOpticalModuleModels& operator=(ListBusinessAccessPointsResponseBodyBusinessAccessPointsOpticalModuleModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opticalModuleModel_ == nullptr
        && return this->portType_ == nullptr; };
    // opticalModuleModel Field Functions 
    bool hasOpticalModuleModel() const { return this->opticalModuleModel_ != nullptr;};
    void deleteOpticalModuleModel() { this->opticalModuleModel_ = nullptr;};
    inline string opticalModuleModel() const { DARABONBA_PTR_GET_DEFAULT(opticalModuleModel_, "") };
    inline ListBusinessAccessPointsResponseBodyBusinessAccessPointsOpticalModuleModels& setOpticalModuleModel(string opticalModuleModel) { DARABONBA_PTR_SET_VALUE(opticalModuleModel_, opticalModuleModel) };


    // portType Field Functions 
    bool hasPortType() const { return this->portType_ != nullptr;};
    void deletePortType() { this->portType_ = nullptr;};
    inline string portType() const { DARABONBA_PTR_GET_DEFAULT(portType_, "") };
    inline ListBusinessAccessPointsResponseBodyBusinessAccessPointsOpticalModuleModels& setPortType(string portType) { DARABONBA_PTR_SET_VALUE(portType_, portType) };


  protected:
    std::shared_ptr<string> opticalModuleModel_ = nullptr;
    std::shared_ptr<string> portType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
