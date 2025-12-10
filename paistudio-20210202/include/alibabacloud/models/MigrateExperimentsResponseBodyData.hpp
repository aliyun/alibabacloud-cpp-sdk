// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATEEXPERIMENTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MIGRATEEXPERIMENTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class MigrateExperimentsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrateExperimentsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AlreadyExists, alreadyExists_);
      DARABONBA_PTR_TO_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_TO_JSON(Updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, MigrateExperimentsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlreadyExists, alreadyExists_);
      DARABONBA_PTR_FROM_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_FROM_JSON(Updated, updated_);
    };
    MigrateExperimentsResponseBodyData() = default ;
    MigrateExperimentsResponseBodyData(const MigrateExperimentsResponseBodyData &) = default ;
    MigrateExperimentsResponseBodyData(MigrateExperimentsResponseBodyData &&) = default ;
    MigrateExperimentsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrateExperimentsResponseBodyData() = default ;
    MigrateExperimentsResponseBodyData& operator=(const MigrateExperimentsResponseBodyData &) = default ;
    MigrateExperimentsResponseBodyData& operator=(MigrateExperimentsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alreadyExists_ == nullptr
        && return this->experimentId_ == nullptr && return this->updated_ == nullptr; };
    // alreadyExists Field Functions 
    bool hasAlreadyExists() const { return this->alreadyExists_ != nullptr;};
    void deleteAlreadyExists() { this->alreadyExists_ = nullptr;};
    inline bool alreadyExists() const { DARABONBA_PTR_GET_DEFAULT(alreadyExists_, false) };
    inline MigrateExperimentsResponseBodyData& setAlreadyExists(bool alreadyExists) { DARABONBA_PTR_SET_VALUE(alreadyExists_, alreadyExists) };


    // experimentId Field Functions 
    bool hasExperimentId() const { return this->experimentId_ != nullptr;};
    void deleteExperimentId() { this->experimentId_ = nullptr;};
    inline string experimentId() const { DARABONBA_PTR_GET_DEFAULT(experimentId_, "") };
    inline MigrateExperimentsResponseBodyData& setExperimentId(string experimentId) { DARABONBA_PTR_SET_VALUE(experimentId_, experimentId) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline bool updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, false) };
    inline MigrateExperimentsResponseBodyData& setUpdated(bool updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    std::shared_ptr<bool> alreadyExists_ = nullptr;
    std::shared_ptr<string> experimentId_ = nullptr;
    std::shared_ptr<bool> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
