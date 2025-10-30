// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDREGISTERLINEAGEREQUESTADDREGISTERLINEAGECOMMANDDETAILEDLINEAGES_HPP_
#define ALIBABACLOUD_MODELS_ADDREGISTERLINEAGEREQUESTADDREGISTERLINEAGECOMMANDDETAILEDLINEAGES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineagesSource.hpp>
#include <alibabacloud/models/AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineagesTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages& obj) { 
      DARABONBA_PTR_TO_JSON(IsDirect, isDirect_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages& obj) { 
      DARABONBA_PTR_FROM_JSON(IsDirect, isDirect_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages() = default ;
    AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages(const AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages &) = default ;
    AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages(AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages &&) = default ;
    AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages() = default ;
    AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages& operator=(const AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages &) = default ;
    AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages& operator=(AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isDirect_ == nullptr
        && return this->source_ == nullptr && return this->target_ == nullptr; };
    // isDirect Field Functions 
    bool hasIsDirect() const { return this->isDirect_ != nullptr;};
    void deleteIsDirect() { this->isDirect_ = nullptr;};
    inline bool isDirect() const { DARABONBA_PTR_GET_DEFAULT(isDirect_, false) };
    inline AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages& setIsDirect(bool isDirect) { DARABONBA_PTR_SET_VALUE(isDirect_, isDirect) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const Models::AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineagesSource & source() const { DARABONBA_PTR_GET_CONST(source_, Models::AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineagesSource) };
    inline Models::AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineagesSource source() { DARABONBA_PTR_GET(source_, Models::AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineagesSource) };
    inline AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages& setSource(const Models::AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineagesSource & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages& setSource(Models::AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineagesSource && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const Models::AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineagesTarget & target() const { DARABONBA_PTR_GET_CONST(target_, Models::AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineagesTarget) };
    inline Models::AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineagesTarget target() { DARABONBA_PTR_GET(target_, Models::AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineagesTarget) };
    inline AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages& setTarget(const Models::AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineagesTarget & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineages& setTarget(Models::AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineagesTarget && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


  protected:
    std::shared_ptr<bool> isDirect_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineagesSource> source_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::AddRegisterLineageRequestAddRegisterLineageCommandDetailedLineagesTarget> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
